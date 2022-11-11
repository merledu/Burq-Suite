import os, json, shutil, \
    requests as req

from icecream import ic
from run_tests import run_dv_test_on_spike
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
        self, coreID, testType, testsList, projName,
        projDir, dvDir, burqDir
    ):
        testsStatuses = []
        for core in self.cores:
            if int(coreID) == core['id']:
                selectedCore = core
                break

        extList = [
            k for k in selectedCore
                if selectedCore[k] is True
        ]
        ext = 'rv' + str(selectedCore['isa']) + ''.join(extList)
        projPath = f'{projDir}/{projName}'
        asmParser = AssemblyParser()
        os.chdir(dvDir)

        match testType:
            case 'RISCV_DV_Tests':
                for test in testsList:
                    run_dv_test_on_spike(
                        ext, test, 1, f'{projPath}/dv_out',
                        f'{projPath}/dv_out/spike_sim/{test}.0.log',
                        f'{projPath}/logs/spike_trace.csv'
                    )

                    os.system(
                        f'riscv64-unknown-elf-objdump -d {projPath}/dv_out/asm_test/{test}_0.o'
                        f' > {projPath}/dv_out/asm_test/test.s'
                    )
                    asmParser.readAsm(f'{projPath}/dv_out/asm_test/test.s')
                    asmParser.dumpHex(f'{projPath}/dv_out/asm_test/asm.hex')

                    self.run_dv_test_on_rtl(projPath, burqDir, f'{projPath}/dv_out/asm_test/test.s')
                    process_core_log(f'{burqDir}/simulate_rtl/Top.log', f'{projPath}/logs/Top_trace.csv')

                    compare_trace_csv(
                        f'{projPath}/logs/Top_trace.csv', f'{projPath}/logs/spike_trace.csv',
                        f'{projName}', 'Spike', f'{projPath}/logs/compare_result.log', mismatch_print_limit=50
                    )
                    with open(f'{projPath}/logs/compare_result.log', 'r', encoding='UTF-8') as f:
                        result = f.readlines()
                    testsStatuses.append(result[-2][: -1])

        return testsStatuses
