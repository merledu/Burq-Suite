import os, json, shutil, \
    requests as req

from icecream import ic
from run_tests import run_dv_test_on_spike, run_c_test_on_spike
from API import routes
from core_log_to_trace_csv import process_core_log
from assemblyParser import AssemblyParser
from sbtToLog import sbtToLog
from instr_trace_compare import compare_trace_csv


class SoCNowCores:
    def __init__(self):
        self.cores = None

        return


    def setCores(self, coreList):
        self.cores = coreList

        return


    def run_dv_test_on_rtl(self, projPath, burqDir, objDump):
        os.chdir(f'{burqDir}/simulate_rtl')
        os.system(f'./simulate.sh {projPath}/rtl/Top.v')

        sbtToLog('./raw.log', objDump, './Top.log')

        os.remove('./waveform.vcd')
        os.remove('./raw.log')
        shutil.rmtree('./obj_dir')

        return


    def run_dv_test(
        self,    coreID, testType, testsList, projName,
        projDir, dvDir,  burqDir,  currProg,  progTick
    ):
        testsStatuses = []
        projPath = os.path.join(projDir, projName)
        dvTests = os.path.join(projPath, 'dv_out')
        userDefinedTestsPath = os.path.join(burqDir, 'testcases/User_Defined_Tests')

        for core in self.cores:
            if int(coreID) == core['id']:
                selectedCore = core
                break

        extList = [
            k for k in selectedCore
                if selectedCore[k] is True
        ]
        ext = 'rv' + str(selectedCore['isa']) + ''.join(extList)
        asmParser = AssemblyParser()
        os.chdir(dvDir)
        currProg += 10
        progTick(currProg)

        match testType:
            case 'RISCV_DV_Tests':
                run_dv_test_on_spike(
                    ext, testsList[0], 1, dvTests,
                    f'{dvTests}/spike_sim/{testsList[0]}.0.log',
                    f'{projPath}/logs/spike_trace.csv'
                )
                currProg += 20
                progTick(currProg)

                os.system(
                    f'riscv64-unknown-elf-objdump -d {dvTests}/asm_test/{testsList[0]}_0.o'
                    f' > {dvTests}/asm_test/test.s'
                )

                asmParser.readAsm(f'{dvTests}/asm_test/test.s')
                asmParser.dumpHex(f'{projPath}/asm.hex')

                self.run_dv_test_on_rtl(projPath, burqDir, f'{dvTests}/asm_test/test.s')
                currProg += 20
                progTick(currProg)
            case 'User_Defined_Tests':
                run_c_test_on_spike(
                    ext, f'{userDefinedTestsPath}/{testsList[0]}/{testsList[0]}.c', dvTests,
                    f'{dvTests}/spike_sim/{testsList[0]}.log',
                    f'{projPath}/logs/spike_trace.csv'
                )
                currProg += 20
                progTick(currProg)

                os.system(
                    f'riscv64-unknown-elf-objdump -d {dvTests}/directed_c_test/{testsList[0]}.o'
                    f' > {dvTests}/directed_c_test/test.s'
                )

                asmParser.readAsm(f'{dvTests}/directed_c_test/test.s')
                asmParser.dumpHex(f'{projPath}/asm.hex')

                self.run_dv_test_on_rtl(projPath, burqDir, f'{dvTests}/directed_c_test/test.s')
                currProg += 20
                progTick(currProg)

        process_core_log(f'{burqDir}/simulate_rtl/Top.log', f'{projPath}/logs/Top_trace.csv')

        compare_trace_csv(
            f'{projPath}/logs/Top_trace.csv', f'{projPath}/logs/spike_trace.csv',
            f'{projName}', 'Spike', f'{projPath}/logs/compare_result.log', mismatch_print_limit=50
        )
        with open(f'{projPath}/logs/compare_result.log', 'r', encoding='UTF-8') as f:
            result = f.readlines()
        testsStatuses.append(result[-2][: -1])
        currProg += 10
        progTick(currProg)

        return testsStatuses
