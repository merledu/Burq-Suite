import time, eel, os, glob, sys, \
    tkinter, json, socket, requests, re, \
    copy, subprocess as sp, tkinter.filedialog as filedialog

from icecream import ic
from distutils.dir_util import copy_tree
from contextlib import closing
from apiConfig import URL

BURQ_ROOT = os.getcwd()
BURQ_SCRIPTS = os.path.join(BURQ_ROOT, 'scripts')
DV_ROOT = os.path.join(BURQ_ROOT, 'dv')
DV_SCRIPTS = os.path.join(DV_ROOT, 'scripts')
sys.path.insert(0, BURQ_SCRIPTS)
sys.path.insert(0, DV_ROOT)
sys.path.insert(0, DV_SCRIPTS)

from run_tests import run_dv_test_on_spike, run_dv_test_on_core, run_c_test_on_spike
from instr_trace_compare import compare_trace_csv
from API import getListOfCores, getCoreRTL
from utils import getEmptyPort, killSpike
from replacer import replacer
from reverter import reverter
from comparison import call
from cleanlify import cleanELF
from socnow import SoCNowCores
from scripts.DV_Swerv_comparison import callSwerv
from scripts.removelines import remove


userSoCNowCores = SoCNowCores()


@eel.expose
def runTestsSoc(coreSelectedID, testType, testsList, projectName, projectDir):
    ic(sys._getframe().f_code.co_name)
    ic(coreSelectedID, testType, testsList, projectName, projectDir)
    currentProgress = 0
    progressTick(currentProgress, 'Fetching RTL', testsList[-1])
    testStatuses = []

    try:
        # Bring the RTL
        getCoreRTL(coreSelectedID, projectName, projectDir, currentProgress, progressTick, testsList[-1])
        
        # Process the RTL
        currentProgress += 10
        progressTick(currentProgress, 'Running test on ISS', testsList[-1])
        testStatuses = userSoCNowCores.run_dv_test(
            coreSelectedID, testType,  testsList,       projectName, projectDir,
            DV_ROOT,        BURQ_ROOT, currentProgress, progressTick
        )
        currentProgress += 10
        progressTick(currentProgress, 'Almost done', testsList[-1])
    except:
        testStatuses.append("[Incompatble with your Core Configuration]")
        currentProgress += 100
        progressTick(currentProgress, 'Oops something went wrong', testsList[-1])

    # Display result
    os.chdir(f'{projectDir}/{projectName}')
    report_str = ""
    report_str += f"Core,{projectName}\n"
    report_str += f"Iss,Spike\n"
    report_str += "\n"
    report_str += "Test, Test Status\n"

    for i, t in enumerate(testsList):
        report_str += f"{t},{testStatuses[i]}\n"
    with open("test_results.csv", "w+") as f:
        f.write(report_str)

    os.chdir(BURQ_ROOT)
    with open("web/pathfile", "w") as f:
        f.write(f"{projectDir}/{projectName}")
    with open("web/pathfilev", "w") as f:
        f.write("SoCNow")
    with open("records", "w+") as f:
        f.write(f"{projectDir}/{projectName},SoCNow\n")

    eel.goToMain()


@eel.expose
def closeRecentRecord(id, debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    with open("records") as f:
        records = f.read().split("\n")

    projectToClose = records[int(id)]

    # Delete this from records
    records.remove(projectToClose)

    with open("records", "w") as f:
        f.write("\n".join(records))


@eel.expose
def openRecentProject(id, debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    with open("records") as f:
        records = f.read().split("\n")

    projectToOpen = records[int(id)]

    proj, type = projectToOpen.split(",")

    with open("web/pathfile","w") as f:
        f.write(proj)

    with open("web/pathfilev","w") as f:
        f.write(type)

    eel.goToMain()


@eel.expose
def getRecords(debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    with open("records") as f:
        records = f.read()

    projects = []
    types = []

    for record in records.split("\n")[: -1]:
        proj, type = record.split(",")
        projects.append(proj.split("/")[-1])
        types.append(type)

    eel.displayRecords(projects,types)


@eel.expose
def runTests(core, iss, tests, projName, projPath, selectedtest, debug=True):
    if debug:
        ic(sys._get_frame().f_code.co_name)

    root_path = os.getcwd()
    ibex_test_path = "cores/ibex/"
    swerv_test__path = "cores/swerv/"
    tests_status = []
    perOccurProgress = (100 // len(tests)) // 2
    

    if core == "swerv":
        if debug:
            ic(core)
        
        if selectedtest == 'Swerv_Tests':
            

            if debug:
                ic(os.getcwd())

            for test in tests:
                currentProgress = 0
                os.chdir(f"{BURQ_ROOT}/{swerv_test__path}")
                # check if test directory exists
                if os.path.isdir(test) == False:
                    # create test direeel.ctory
                    os.mkdir(test)
                currentProgress += 10
                progressTickPre(currentProgress,"Creating test directory",test)
                try:

                    os.chdir(test)
                    os.system("export RISCV=/opt/riscv32")
                    os.system(f"export whisper={BURQ_ROOT}/iss/SweRV-ISS/build-Linux/./whisper")
                    os.system(f"export RV_ROOT={BURQ_ROOT}/cores/swerv")
                    os.system("export PATH=/opt/riscv32/bin:$PATH")
                    
                    currentProgress += 10
                    progressTickPre(currentProgress,"Running test on SweRV",test)
                    os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}")
                    currentProgress += 30
                    progressTickPre(currentProgress,"Running test on Whisper",test)
                    os.system(f"$whisper --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
                    currentProgress += 30
                    progressTickPre(currentProgress,"Comparing results",test)
                    # Check is test.log and exec.log exists
                    # if debug:
                    #     ic(os.getcwd())
                    #     ic(os.path.isfile(f"{test}.log"))
                    #     ic(os.path.isfile("exec.log"))
                    os.chdir(projPath)
                    if os.path.isdir(projName) == False:

                        os.mkdir(projName)
                    os.chdir(projName)
                    os.mkdir(f"{test}_logs")
                    
                    

                
                    os.system(f"cp  -r {BURQ_ROOT}/cores/swerv/{test}/{test}.log {projPath}/{projName}/{test}_logs")
                    os.system(f"cp  -r {BURQ_ROOT}/cores/swerv/{test}/exec.log {projPath}/{projName}/{test}_logs")
                    os.chdir(f"{BURQ_ROOT}/cores/swerv/{test}")
                    
                    currentProgress += 20
                    progressTickPre(currentProgress,"Comparing logs",test)
                    status = call(f"{test}.log", "exec.log")
                    
                    tests_status.append(status)
                except:
                    tests_status.append("Test Cannot run")
                
        
        if selectedtest=="RISCV_DV_Tests":
            

            os.chdir(swerv_test__path)
            ic(os.getcwd())
            for test in tests:
                currentProgress = 0
                os.chdir(f"{BURQ_ROOT}/{swerv_test__path}")
                print(test)
            
                # check is test directory exists
                if os.path.isdir(f"{test}_0") == False:
                    os.mkdir(f"{test}_0")
                currentProgress += 5
                progressTickPre(currentProgress,"Creating test directory",test)
                
                
                os.chdir(f"{BURQ_ROOT}/dv")
                if os.path.isdir("temporarydv") == False:

                    os.mkdir("temporarydv")
                currentProgress += 5
                progressTickPre(currentProgress,"Generating instruction from DV",test)
                os.system(f"python3 run.py --iss whisper --simulator pyflow --target rv32imc --iteration 1 --test={test} --output temporarydv/{test}")
                
                os.chdir(f"{BURQ_ROOT}/cores/swerv/testbench/tests")
                #os.mkdir(f"{test}_0")
                os.chdir(f"{BURQ_ROOT}/dv/temporarydv/{test}/asm_test")
                currentProgress += 5
                progressTickPre(currentProgress,"Extracting assembly file",test)
                os.rename(f"{test}_0.S", f"{test}_0.s")
                
                os.chdir(f"{BURQ_ROOT}/cores/swerv/testbench/tests")
                if os.path.isdir(f"{test}_0") == False:

                    os.mkdir(f"{test}_0")
               
                


                os.system(f"cp -r {BURQ_ROOT}/dv/temporarydv/{test}/asm_test/{test}_0.s {BURQ_ROOT}/cores/swerv/testbench/tests/{test}_0")
                

                    #enter in dv root
                    #run command
                    #go into test directory
                    #extract assembly
                    #go into swev directory
                    #place it in test bench
                    #create test directory
                    #run make  and whisper same as we previuosly do
                #dv command
                
               # os.system("export RISCV=/opt/riscv32")
                

                os.chdir(f"{test}_0")
                #{test}_0 file open and remove first line .include "user_define.h" only from file and save it
                with open(f"{test}_0.s", "r") as f:
                    lines = f.readlines()
                with open(f"{test}_0.s", "w") as f:
                    for line in lines:
                        if line.strip("\n") != '.include "user_define.h"' :
                            if line.strip("\n") !='                  .include "user_init.s"':
                                f.write(line)
                os.system(f"export whisper={BURQ_ROOT}/iss/SweRV-ISS/build-Linux/./whisper")

                os.system(f"export RV_ROOT={BURQ_ROOT}/cores/swerv")
                os.system("export PATH=/opt/riscv32/bin:$PATH")

            
                
            
                currentProgress += 10
                progressTickPre(currentProgress,"Running test on SWeRV",test)
                os.chdir(f"{BURQ_ROOT}/cores/swerv/{test}_0")
                os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}_0")
                currentProgress += 40
                progressTickPre(currentProgress,"Running test on Whisper",test)
                os.system(f"$whisper --logfile {test}_0.log {test}_0.exe --configfile ./snapshots/default/whisper.json")
                
                
                os.chdir(projPath)
                if os.path.isdir(f"{projName}") == False:
                    os.mkdir(projName)
                os.chdir(projName)
                os.mkdir(f"{test}_logs")
                
                

                os.system(f"cp  -r {BURQ_ROOT}/scripts/ERRORFILE.txt {projPath}/{projName}/{test}_logs")
                os.system(f"cp  -r {BURQ_ROOT}/cores/swerv/{test}_0/{test}_0.log {projPath}/{projName}/{test}_logs")
                os.system(f"cp  -r {BURQ_ROOT}/cores/swerv/{test}_0/exec.log {projPath}/{projName}/{test}_logs")
                os.chdir(f"{BURQ_ROOT}/cores/swerv/{test}_0")
                ic(os.getcwd())
                #check is test.log and exec.log exists
                ic(os.path.isfile(f"{test}_0.log"))
                ic(os.path.isfile("exec.log"))
                currentProgress += 20
                progressTickPre(currentProgress,"extracting logs",test)
                rem=remove(f"exec.log",f"{test}_0.log")
                currentProgress += 10
                progressTickPre(currentProgress,"Comparing logs",test)
                status = callSwerv(f"{test}_0.log", "exec.log")
                tests_status.append(status)
                currentProgress += 5
                progressTickPre(currentProgress,"Generating report",test)
                
                
                
                
           

        if selectedtest=="User_Defined_Tests":
            currentProgress = 0
            os.chdir(swerv_test__path)
            ic(swerv_test__path)
            
            ic(os.getcwd())
            for test in tests:
                try:
                    currentProgress = 0
                    currentProgress += 10
                    progressTickPre(currentProgress,"Creating files",test)
                    os.chdir(f"{BURQ_ROOT}/testcases/User_Defined_Tests/{test}")
                    os.system(f"cp -a {BURQ_ROOT}/testcases/User_Defined_Tests/crt0.s {BURQ_ROOT}/testcases/User_Defined_Tests/{test}")
                    mki_str="""OFILES = test.o crt0.o
    TEST_CFLAGS = -mabi=ilp32 -march=rv32imc -nostdlib -g"""

                    mkifile=open(f"{test}.mki","w+")
                    #write mki_str in file
                    mkifile.write(mki_str.replace("test", test))
                    mkifile.close()
                    os.system(f"cp -a {BURQ_ROOT}/testcases/User_Defined_Tests/{test} {BURQ_ROOT}/cores/swerv/testbench/tests/")
                    os.chdir(f"{BURQ_ROOT}/cores/swerv/")
                    # check is test directory exists
                    if os.path.isdir(test) == False:
                        # create test directory
                        os.mkdir(test)
                    os.chdir(test)
                    currentProgress += 10
                    progressTickPre(currentProgress,"Running test on SWeRV",test)
                    
                    os.system("export RISCV=/opt/riscv32")

                    os.system(f"export whisper={BURQ_ROOT}/iss/SweRV-ISS/build-Linux/./whisper")

                    os.system(f"export RV_ROOT={BURQ_ROOT}/cores/swerv")
                    os.system("export PATH=/opt/riscv32/bin:$PATH")
                    os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}")
                    #srem=removezero("exec.log")
                    currentProgress += 50
                    progressTickPre(currentProgress,"Running test on whisper",test)
                    os.system(f"$whisper --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
                # wrem=removew(f"{test}.log")
                    currentProgress += 30
                    progressTickPre(currentProgress,"Comparing logs",test)
                    os.chdir(projPath)
                    os.mkdir(projName)
                    os.chdir(projName)
                    os.mkdir(f"{test}_logs")
                    os.system(f"cp  -r {BURQ_ROOT}/scripts/ERRORFILE.txt {projPath}/{projName}/{test}_logs")
                    

                
                    os.system(f"cp  -r {BURQ_ROOT}/cores/swerv/{test}/{test}.log {projPath}/{projName}/{test}_logs")
                    os.system(f"cp  -r {BURQ_ROOT}/cores/swerv/{test}/exec.log {projPath}/{projName}/{test}_logs")
                    os.chdir(f"{BURQ_ROOT}/cores/swerv/{test}")
                    ic(os.getcwd())
                    #check is test.log and exec.log exists
                    ic(os.path.isfile(f"{test}.log"))
                    ic(os.path.isfile("exec.log"))
                    status = call(f"{test}.log", "exec.log")
                    tests_status.append(status)
                except:
                    tests_status.append("Cannot Run")

    elif core == "ibex":
        currentProgress = 0
        print('ibex')
        os.chdir(f"{BURQ_ROOT}/{ibex_test_path}")
        perOccurProgress = (100 // len(tests)) // 2
        currentProgress = 0
        
        makefile_str = """PROGRAM = testname
                          PROGRAM_DIR := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))
                          # Any extra source files to include in the build. Use the upper case .S
                          # extension for assembly files
                          EXTRA_SRCS :=

                          include ${PROGRAM_DIR}/../common/common.mk"""

        testroot="testcases/User_Defined_Tests"
        for test in tests:
            ic(test)
            os.chdir(f"{BURQ_ROOT}/{ibex_test_path}")
            os.chdir("examples/sw/simple_system/")
            if os.path.isdir(test):
                # rm test directory
                os.system(f"rm -rf {test}")
            
                
            try:    
                os.mkdir(test)
                copy_tree(f"{BURQ_ROOT}/{testroot}/{test}", f"{test}")
                

                os.chdir(test)
                file = open("Makefile", "w+")
                file.write(makefile_str.replace("testname", test))
                file.close()
                os.system("make")
                # check test.elf exists
                ic(os.path.isfile(f"{test}.elf"))
                ic(os.system("ls"))
                os.chdir(f"{BURQ_ROOT}/{ibex_test_path}")
                os.system("fusesoc --cores-root=. run --target=sim --setup --build lowrisc:ibex:ibex_simple_system --RV32E=0 --RV32M=ibex_pkg::RV32MFast")
                os.system(f"./build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/Vibex_simple_system [-t] --meminit=ram,examples/sw/simple_system/{test}/{test}.elf")
                currentProgress += perOccurProgress
                progressTickPre(currentProgress,"",test)
                os.chdir(f"{BURQ_ROOT}/{ibex_test_path}/examples/sw/simple_system/{test}")
                os.system(f"spike --isa=rv32gc -m0x10000:0x30000,0x100000:0x100000 --log-commits -l {test}.elf 2> {test}.log")
                spike_ibex = None
                core_ibex  = None
                core_ibex.ibexLogExtract(f"{BURQ_ROOT}/{ibex_test_path}/trace_core_00000000.log")#ibex core path
                spike_ibex.spikeLogExtract(f"{test}.log")
                if spike_ibex.match(core_ibex):
                    tests_status.append("PASSED")
                else:
                    tests_status.append("FAILED")
                currentProgress += perOccurProgress
                progressTickPre(currentProgress,"",test)
            except:
                tests_status.append("COMPILATION ERROR")
                currentProgress += perOccurProgress
                progressTickPre(currentProgress,"",test)
                currentProgress += perOccurProgress
                progressTickPre(currentProgress,"",test)
        


            
                
            

        
            
    os.chdir(BURQ_ROOT)
    os.chdir(projPath)
    if os.path.isdir(f"{projName}") == False:
        os.mkdir(projName)
    os.chdir(projName)
    report_str = ""
    report_str += f"Core,{core}\n"
    report_str += f"Iss,{iss}\n"
    report_str += "\n"
    report_str += "Test, Test Status\n"
    for i,t in enumerate(tests):
        report_str += f"{t},{tests_status[i]}\n"
    file = open("test_results.csv", "w+")
    file.write(report_str)
    file.close()
    os.chdir(BURQ_ROOT)
    file = open("web/pathfile", "w")
    file.write(f"{projPath}/{projName}")
    file.close()
    file = open("web/pathfilev", "w")
    file.write("prebuilt_verification")
    file.close()
    file = open("records", "w+")
    file.write(f"{projPath}/{projName},prebuilt_verification\n")
    file.close()
        
    eel.goToMain()

       
            

        # for test in tests:
        #     copy_tree(f"{swerv_test__path}/{test}", "/tmp/testcases/")
        # os.chdir("web/swerv")
        # os.system(f"export RV_ROOT={os.getcwd()}")
        
        # os.system("make -f $RV_ROOT/tools/Makefile TEST_DIR=/tmp/testcases/")
        
        # #sp.Popen("make -f $RV_ROOT/tools/Makefile TEST_DIR=/tmp/testcases/".split())
        # #sp.Popen()

        
        # os.chdir(root_path)
        # eel.changeProgressBar(50)

    # if iss == "whisper":
    #     print("q")

    #     # os.chdir("web/whisper")
    #     print("r")
    #     # os.system(f"export whisper={os.getcwd()}/./whisper")
    #     print("w")
    #     os.chdir(root_path)

    #     for test in tests:
    #         ic(test)
    #         os.chdir(f"{swerv_test__path}/{test}")
    #         os.system(f"$whisper --logfile BubbleSort.log BubbleSort.exe --configfile ./snapshots/default/whisper.json")
    #         os.system(f"riscv32-unknown-elf-gcc -mabi=ilp32 -march=rv32imc -nostdlib -g -o {test} {test}.c")
    #         os.system(f"$whisper {test}")
    #         os.chdir(root_path)
    #     eel.changeProgressBar(100)

@eel.expose
def stop_everything(debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    # replacer() 
    os.system("./scripts/openMain.sh")
    # eel.start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8005)

@eel.expose                         # Expose this function to Javascript
def say_hello_py(x):
    print('Hello from %s' % x)

@eel.expose
def socdetail():
    ic(sys._getframe().f_code.co_name)

    yourproject = list1[-1]
    ic(list1, list2)
    b = list2[-1]

    with open("web/pathfile", "w") as f:
        f.write(f"{yourproject}/{b}")
   
    os.chdir(yourproject)
    
    os.system(f"mkdir {b}")
   
    os.chdir(b)
    
    os.system(f"touch {b}.c")
    # list the files in the directory
    os.system("ls")

    with open(f"{b}.c", "w") as f:
        f.write("// write your code here \n")

    os.chdir(BURQ_ROOT)
    
    with open("records", "w+") as f:
        f.write(f"{yourproject}/{b},custom_test\n")

    os.chdir(f"{BURQ_ROOT}")
    eel.goToMain()

@eel.expose
def pyverification():
    print('pyverification')
    yourproject=list1[-1]
    
    aa = os.system(f"cd {yourproject}")
    b = list2[-1]

    with open("web/pathfile", "w") as f:
        f.write(f"{yourproject}/{b}")

    os.system(f"cp -a web/verification {yourproject}/{b}")
    eel.goToMain()

@eel.expose
def selectFolder(projectnamee):
    ic(sys._getframe().f_code.co_name)

    root = tkinter.Tk()
    root.attributes("-topmost", True)
    root.withdraw()
    directory_path = filedialog.askdirectory()

    list1.clear()

    list1.append(directory_path)

    list2.append(projectnamee)

    eel.select_js(list1[-1])

@eel.expose
def selectFolder1(debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    root = tkinter.Tk()
    root.attributes("-topmost", True)
    root.withdraw()
    directory_path = filedialog.askdirectory()

    listuploadcore.clear()
    
    listuploadcore.append(directory_path)

    eel.select_js1(listuploadcore[-1])

@eel.expose
def selecttest():
    print("selecttest")
    root = tkinter.Tk()
    root.attributes("-topmost", True)
    root.withdraw()
    directory_path = filedialog.askdirectory()
    print(directory_path)
    testcasepath.clear()
    print(testcasepath)
    testcasepath.append(directory_path)
    ic(testcasepath)
   
    eel.select_jstestcase(testcasepath[-1])

@eel.expose
def selectlogfile():
    print("selectlogfile")
    root = tkinter.Tk()
    root.attributes("-topmost", True)
    root.withdraw()
    directory_path = filedialog.askdirectory()
    print(directory_path)
    logfilepath.clear()
    print(logfilepath)
    logfilepath.append(directory_path)
    ic(logfilepath)
   
    eel.select_jslog(logfilepath[-1])

  
    
    
#copy corefiles in ser seleted path
def copycorefiles():
    print('copycorefiles')
    
    yourproject=list1[-1]
    
    aa=os.system(f"cd {yourproject}")
    bb=listuploadcore[-1]
    b=list2[-1]
   
    os.system(f"cp bb  {yourproject}/{b}")
    

@eel.expose
def verCoreTest(listver):
    print('verCoreTest')
    i=listver[-1]
    if i=="SWERV-EH1":
        eel.testswerv()
        print(i)
    if i=="IBEX":
        eel.testibex()
        print(i)

@eel.expose
def getlistswerv():
    print('getlistswerv')
    namelist=[]
    root="cores/swerv/testbench/tests/"
    #root1="testcases/User_Defined_Tests/"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
    #for dirname in os.listdir(root1):    
    ## for path in filepaths:
    #    # a=path.split("/")
    #    ic(dirname)
    #    namelist.append(dirname)
        
    print(namelist)
    eel.showSwervTests(namelist)

@eel.expose
def getlistuser():
    print('getlistuser()')
    namelist=[]
        #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root="testcases/User_Defined_Tests"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
        
    print(namelist)
    eel.showIbexTests(namelist)


@eel.expose
def getlistdv():
    print('getlistdv()')
    tests = [
        "riscv_arithmetic_basic_test",
        "riscv_jump_stress_test",
        "riscv_rand_instr_test",
        "riscv_rand_jump_test",
        "riscv_mmu_stress_test",
        "riscv_unaligned_load_store_test"
        
    ]
    eel.showIbexTests(tests)


@eel.expose
def getlistibex():
    print('getlistibex')
    namelist=[]
    root="testcases/Riscv_tests"
    root1="testcases/Riscv_tests"
    root2="testcases/User_Defined_Tests"              
    filepaths = [os.path.join(root,i) for i in os.listdir(root)]
    filepaths1 = [os.path.join(root1,i) for i in os.listdir(root1)]
    filepaths2 = [os.path.join(root1,i) for i in os.listdir(root2)]
    for path in filepaths:
        ic(path)
        a=path.split("/")
        namelist.append(a[-1])
        
    print(namelist,"po")
    for path in filepaths1:
        a=path.split("/")
        namelist.append(a[-1])
    for path in filepaths2:
        a=path.split("/")
        namelist.append(a[-1])
        
    print(namelist,"po")
    eel.showIbexTests(namelist)


@eel.expose
def datasend(listt, debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    with open("web/pathfilev", "w") as f:
        f.write(listt[0])


@eel.expose
def genCore(isa,ext,bus):
    print('genCore')
    driverKey= f"corei{bus}"

    file = open("web/driver", "w")
    file.write(driverKey)
    file.close()


@eel.expose
def floatingpointtest(source):
    print('floatingpointtest')
    namelist=[]
    #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root="testcases/Floating_point_tests_for_azadi"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
        
    print(namelist)
    if source=="socnow":
        eel.showsocnowfloting(namelist)
    if source=="custom":
        eel.showfloatingTests(namelist)


@eel.expose
def merlvectortest(source):
    print('merlvectortest')
    namelist=[]
    #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root="testcases/MERL_vector_Tests"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
        
    print(namelist)
    if source=="socnow":
        eel.showsocnowmerlvector(namelist)
    if source=="custom":
        eel.showMerlTests(namelist)


@eel.expose
def riscvtest(source):
    print('riscvtest')
    namelist=[]
    #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root="testcases/Riscv_tests"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
        
    print(namelist)
    if source=="socnow":
        eel.showsocnowriscvtest(namelist)
    if source=="custom":
        eel.showriscvTests(namelist)


@eel.expose
def selfcheckingvectortest(source):
    print('selfcheckingvectortest')
    namelist=[]
        #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root="testcases/Self-Checking-vector-tests"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
        
    print(namelist)
    if source=="socnow":
        eel.showsocnowselfcheckingvect(namelist)
    if source=="custom":
        eel.showselfcheckingvectorTests(namelist)

@eel.expose
def usertest(source,debug=True):
    print('usertest()')
    namelist = []
    #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root = "./testcases/User_Defined_Tests"

    # Get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        if debug:
            ic(dirname)

        namelist.append(dirname)
        
    if debug:
        ic(namelist)
    if source=="socnow":
        eel.showsocnowusertest(namelist)
    if source=="custom":

        eel.usersTests(namelist)

@eel.expose
def swervtest(source):
    print('swervtest')
    namelist=[]
        #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root="testcases/Swerv_Tests"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
        
    print(namelist)
    if source=="socnow":
        eel.showsocnowswerv(namelist)
    if source=="custom":
        eel.showswervTests(namelist)

@eel.expose
def burqgeneratedtest(source):
    print('burqgeneratedtest')
    os.system(f"{BURQ_ROOT}")

    namelist=[]
   
        #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
    root="testcases/BURQ_Generated_Tests"
    # get list of directory names from root
    for dirname in os.listdir(root):    
    # for path in filepaths:
        # a=path.split("/")
        ic(dirname)
        namelist.append(dirname)
        
    print(namelist)
    if source=="socnow":
        eel.showsocnowburqgen(namelist)
    if source=="custom":
        eel.showburqTests(namelist)

@eel.expose
def dvtest(source,debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    tests = [
        "riscv_arithmetic_basic_test",
        "riscv_jump_stress_test",
        "riscv_rand_instr_test",
        "riscv_rand_jump_test",
        "riscv_mmu_stress_test",
        "riscv_unaligned_load_store_test"
    ]
    if source=="socnow":
        eel.showsocnowdvtest(tests)
    if source=="custom":

        eel.showdvTests(tests)


@eel.expose
def enduploadcore(config, tests, types):
    ic(sys._getframe().f_code.co_name)
    ic(config)
    ic(tests)
    ic(types)
    proj_dir = os.path.join(config['path'], config['name'])
    core_path = os.path.join(proj_dir, 'core')
    progress = 0
    progressTickCus(progress, 'Setting up test environment', tests[-1])

    with open("web/pathfile", "w") as f:
        f.write(proj_dir)

    with open("web/pathfilev", "w") as f:
        f.write("custom_verification")

    uploadedcore = listuploadcore[-1]

    os.makedirs(proj_dir)
    os.makedirs(core_path)
    copy_tree(uploadedcore, core_path)

    with open(f"{proj_dir}/config.json", "w+") as f:
        json.dump(config, f)

    testStatuses = []
    progress += 30
    progressTickCus(progress, 'Running test on ISS', tests[-1])

    if config["swerv"] == "": 
        ic("Custom core selected")

        extension_flags = "rv32" + "".join(config["extensions"])
        os.chdir(proj_dir)
        os.makedirs("logs")

        for i, test in enumerate(tests):
            # ISS Sim
            try:
                os.chdir(DV_ROOT)
                if types == "RISCV_DV_Tests":
                    run_dv_test_on_spike(
                        extension_flags, test, 1,
                        os.path.join(proj_dir, 'dv_out'),
                        os.path.join(proj_dir, 'dv_out/spike_sim', f'{test}.0.log'),
                        os.path.join(proj_dir, 'logs/spike_trace.csv')
                    )
                else:
                    ic(os.path.join(BURQ_ROOT, 'testcases', types, test, f'{test}.c'))
                    ic(os.path.join(proj_dir, 'dv_out'))
                    ic(os.path.join(proj_dir, 'dv_out/spike_sim', f'{test}.log'))
                    run_c_test_on_spike(
                        extension_flags,
                        os.path.join(BURQ_ROOT, 'testcases', types, test, f'{test}.c'),
                        os.path.join(proj_dir, 'dv_out'),
                        os.path.join(proj_dir, 'dv_out/spike_sim', f'{test}.log'),
                        os.path.join(proj_dir, 'logs/spike_trace.csv')
                    )
                progress += 20
                progressTickCus(progress, 'Running test on Core', tests[-1])

                # CORE Sim
                if config["testFormat"] == "asm":
                    if types != "RISCV_DV_Tests":
                        os.system(
                            f'riscv64-unknown-elf-objdump -d {proj_dir}/dv_out/directed_c_test/{test}.o'
                            f' > {core_path}/{config["hexDir"]}/test.s')
                        run_dv_test_on_core(
                            config['command'],
                            os.path.join(core_path, config['logFile']),
                            os.path.join(proj_dir, 'logs/core_trace.csv')
                        )
                    else:
                        os.chdir(core_path)
                        os.system(
                            f'riscv64-unknown-elf-objdump -d {proj_dir}/dv_out/asm_test/{test}_0.o'
                            f' > {core_path}/{config["hexDir"]}/test.s'
                        )
                        run_dv_test_on_core(
                            config['command'],
                            os.path.join(core_path, config['logFile']),
                            os.path.join(proj_dir, 'logs/core_trace.csv')
                        )
                    progress += 20
                    progressTickCus(progress, 'Comparing results', tests[-1])
                else:
                    print("coreepattt")
                    os.system(f"cp -r {config['path']}/{config['name']}/tmp/{test} {config['path']}/{config['name']}/core/{config['testDir']}")
                    os.chdir(f"{config['path']}/{config['name']}/core")
                    os.system(config["command"].replace("{testname}", test))
                progress += 20
                progressTickCus(progress, 'Almost done', tests[-1])

                os.chdir(f"{proj_dir}")
                ic(config["logFormat"])
                if config["logFormat"] == "csv": pass
                else:
                    compare_trace_csv(
                        f"{proj_dir}/logs/core_trace.csv",
                        f"{proj_dir}/logs/spike_trace.csv",
                        'core', 'spike', f'{config["path"]}/{config["name"]}/logs/compare_result.log',
                        mismatch_print_limit=50
                    )

                    with open(f"{config['path']}/{config['name']}/logs/compare_result.log", 'r', encoding='UTF-8') as f:
                        result = f.readlines()
                    testStatuses.append(result[-2][: -1])

                progress += 10
                progressTickCus(progress, 'Done', tests[-1])
            except:
                testStatuses.append("[Incompatble with your Core Configuration]")
                progress += 70
                progressTickCus(progress, 'Oops, something went wrong', tests[-1])
        
        os.chdir(f"{proj_dir}")
        if len(list(filter(lambda x:x=="[PASSED]" or x=="[Incompatble with your Core Configuration]", testStatuses))) == len(testStatuses):
            os.system("rm -rf failed_logs")
        
        report_str = ""
        report_str += f"Core,{config['name']}\n"
        report_str += f"Iss,Spike\n"
        report_str += "\n"
        report_str += "Test, Test Status\n"
        

    else: # if swerv based
        RV_ROOT = f"{config['path']}/{config['name']}/core/"
        WHISPER = f"{BURQ_ROOT}/iss/SweRV-ISS/build-Linux/./whisper"
        for test in tests:
            if os.path.exists(f"{config['path']}/{config['name']}/core/testbench/tests/{test}"):
                # del the folder
                os.system(f"rm -rf {config['path']}/{config['name']}/core/{test}")
            os.system(f"cp -r {BURQ_ROOT}/testcases/{types}/{test} {config['path']}/{config['name']}/core/testbench/tests/{test}")

            if os.path.exists(f"{config['path']}/{config['name']}/core/{test}"):
                # del the folder
                os.system(f"rm -rf {config['path']}/{config['name']}/core/{test}")
            os.mkdir(f"{config['path']}/{config['name']}/core/{test}")

            os.chdir(f"{config['path']}/{config['name']}/core/{test}")
            os.system(f"make -f {RV_ROOT}/tools/Makefile TEST={test}")
            progress += 10
            progressTick(progress)

            os.system(f"{WHISPER} --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
            progress +=70
            progressTick(progress)
            ic(os.path.isfile(f"{test}.log"))
            ic(os.path.isfile("exec.log"))
            status = call(f"{test}.log", "exec.log")
            testStatuses.append(status)
        report_str = ""
        report_str += f"Core,{config['name']}\n"
        report_str += f"Iss,Whisper\n"
        report_str += "\n"
        report_str += "Test, Test Status\n"
    
    ic(testStatuses)
    for i,t in enumerate(tests):
        report_str += f"{t},{testStatuses[i]}\n"
    with open(f"{config['path']}/{config['name']}/test_results.csv", "w+") as f:
        f.write(report_str)

    with open(f"{BURQ_ROOT}/records", "w+") as f:
        f.write(f"{config['path']}/{config['name']},custom_core_verification\n")
    
    os.chdir(BURQ_ROOT)
    eel.goToMain()


def progressTick(progress,text,testname):
    if progress < 20:
        eel.updateProgressBar(progress, "#f63a0f",text,testname)
    elif progress < 40:
        eel.updateProgressBar(progress, "#f27011",text,testname)
    elif progress < 60:
        eel.updateProgressBar(progress, "#f2b01e",text,testname)
    elif progress < 80:
        eel.updateProgressBar(progress, "#f2d31b",text,testname)
    elif progress < 100:
        eel.updateProgressBar(progress, "#86e01e",text,testname)
def progressTickCus(progress,text,testname):
    if progress < 20:
        eel.updateProgressBarCus(progress, "#f63a0f",text,testname)
    elif progress < 40:
        eel.updateProgressBarCus(progress, "#f27011",text,testname)
    elif progress < 60:
        eel.updateProgressBarCus(progress, "#f2b01e",text,testname)
    elif progress < 80:
        eel.updateProgressBarCus(progress, "#f2d31b",text,testname)
    elif progress < 100:
        eel.updateProgressBarCus(progress, "#86e01e",text,testname)

#progress
def progressTickPre(progress,text,testname):
    if progress < 20:
        eel.updateProgressBarPre(progress, "#f63a0f",text,testname)
    elif progress < 40:
        eel.updateProgressBarPre(progress, "#f27011",text,testname)
    elif progress < 60:
        eel.updateProgressBarPre(progress, "#f2b01e",text,testname)
    elif progress < 80:
        eel.updateProgressBarPre(progress, "#f2d31b",text,testname)
    elif progress < 100:
        eel.updateProgressBarPre(progress, "#86e01e",text,testname)
    


#dv test select
@eel.expose
def selectdvtest(dvtestlist):
    print('selectdvtest')
    print(dvtestlist)


def validateUserCredentials(username, password):
    return username.isalpha() and password != "" and len(password) >= 8 and len(username) >= 3


@eel.expose
def pleaseLogin(username, password, debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)
        if username == "shahzaibk23" and password == "admin":
            #write username and pass in any file open and wrte file
            with open("user.txt", "w+") as f:
                f.write(f"{username} {password}")

            
            eel.loginSuccess()
        else:
            eel.throwAlert("Username or Password is incorrect")
    else:
        if not validateUserCredentials(username, password):
            eel.throwAlert("Invalid username or password. Please try again.")
        else:
            try:
                r = requests.post(URL, data={"username": "shahzaibk23", "password": "helloMERL", "token": "cdbb7f168d0340fba46e601dc61e1de2"})
            except:
                eel.throwAlert("Connection Error!\nPlease check your internet connection and try again.")
            if r.json()["status"] == "success":
                eel.loginSuccess()
            else:
                eel.throwAlert("Username or Password is incorrect")

@eel.expose
def clearfile():
    with open("user.txt", "w") as f:
        f.write("")
@eel.expose
def getCoresFromSoCNow():
    user = "shahzaibk23"
    lst = getListOfCores(user) # dynamize the username
    userSoCNowCores.setCores(copy.deepcopy(lst))
    cleanList = [(item["id"], item["name"]) for item in lst]
    eel.showCoresFromSoCNow(cleanList)


@eel.expose
def enduploadcore__(getcommand,tests1,testcase,logfile,swerv,testtype):
    print('enduploadcore__')
    ic(swerv)
    tests_status=[]
    listcommands=[]
    ic(tests1)
    ic(getcommand)

    yourproject=list1[-1]
    b=list2[-1]
    file1=open("web/pathfile","w")
    file1.write(f"{yourproject}/{b}")
    file1.close()
    uploadedcore=listuploadcore[-1]
    ic(uploadedcore)
    #getpathcurrent=os.system("pwd")

   
    os.chdir(yourproject)
    
    
    os.system(f"mkdir {b}")

   

   
    os.chdir(b)
    os.system(f"cp -a {uploadedcore}  {yourproject}/{b}")
    os.chdir(f"{BURQ_ROOT}")
    
   # if iss=="spike":
    # os.system("export PATH=/opt/riscv/bin:$PATH")
    # os.system("export PATH=/opt/riscv/riscv64-unknown-elf/bin:$PATH")


    # for test in tests1:
    #     ic(test)
    #     yy=getcommand.replace("testname",test)
    #     listcommands.append(yy)
    #     ic(yy)
    #     basename=os.path.basename(f"{p}")
    
    #     p=listuploadcore[-1]
    #     os.system(f"cp -a web/testcases/Self-Checking-Tests/{test} {yourproject}/{b}/{testcase}")
    #     os.chdir(f"{yourproject}/{b}/{testcase}/{test}")
    #     os.system(f"riscv64-unknown-elf-gcc -o {test} {test}.c")
    #     os.system(f"spike pk {test} > exec.log")
    #     os.chdir(f"{getpathcurrent}")
    #     os.chdir(f"{p}")
    #     os.system(f"{yy}")
    #     status = call(f"{yourproject}/{b}/{logfile}/{test}.log", f"{yourproject}/{b}/{testcase}/{test}/exec.log")
    #     tests_status.append(status)


        
    #     #command skipe
        
        


    #     #command for whisper
        
        
    # 
    # =os.path.basename(f"{p}")
    # os.chdir(f"{yourproject}")
    # report_str = ""
    # report_str += f"Core:{basename}\n"
    # report_str += "Iss:Spike\n"
    # for i,t in enumerate(tests1):
    #     report_str += f"{t}:{tests_status[i]}\n"
    # file = open("test_results.report", "w+")
    # file.write(report_str[:-1])
    # file.close()
    # os.chdir(BURQ_ROOT)
    # file = open("web/pathfile", "w")
    # file.write(f"{yourproject}/{b}")
    # file.close()
    # file = open("web/pathfilev", "w")
    # file.write("uploadcore_verification")
    # file.close()
    # file = open("records", "w+")
    # file.write(f"{yourproject}/{b},upload_verification\n")
    # file.close()
    # eel.goToMain()


# if iss=="whisper":
    #os.system("export PATH=/opt/riscv/bin:$PATH")
    #os.system("export PATH=/opt/riscv/riscv64-unknown-elf/bin:$PATH")

#make -f $RV_ROOT/tools/Makefile TEST=BubbleSort
    if swerv=="swervbased":
        os.system("export RISCV=/opt/riscv64")

        os.system(f"export whisper='{BURQ_ROOT}/iss/SweRV-ISS/build-Linux/./whisper'")

        os.system(f"export RV_ROOT='{BURQ_ROOT}/cores/swerv'")
        os.system("export PATH=/opt/riscv64/bin:$PATH")
        for test in tests1:
            ic(test)
            #yy=getcommand.replace("testname",test)
            #listcommands.append(yy)
            #ic(yy)
            p=listuploadcore[-1]
            basename=os.path.basename(f"{p}")
            ic(basename)
            ic(yourproject)
            ic(b)
            os.system(f"cp -a testcases/User_Defined_Tests/{test} {yourproject}/{b}/{testcase}")
        
        
            os.system(f"cp -a testcases/Swerv_Tests/{test} {yourproject}/{b}/{testcase}")
            os.chdir(f"{yourproject}/{b}/{basename}")
            #command skipe
            os.system(f"mkdir {test}")
            os.chdir(f"{test}")
            os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}")

            os.system(f"$whisper --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
        

        
            status = call(f"{test}.log", "exec.log")
            tests_status.append(status)
        basename=os.path.basename(f"{p}")
        os.chdir(f"{yourproject}/{b}")
        report_str = ""
        report_str += f"Core:{basename}\n"
        report_str += "Iss:Whisper\n"
        for i,t in enumerate(tests1):
            report_str += f"{t}:{tests_status[i]}\n"
        file = open("test_results.report", "w+")
        file.write(report_str[:-1])
        file.close()
        os.chdir(BURQ_ROOT)
        file = open("web/pathfile", "w")
        file.write(f"{yourproject}/{b}")
        file.close()
        file = open("web/pathfilev", "w")
        file.write("uploadcore_verification")
        file.close()
        file = open("records", "w+")
        file.write(f"{yourproject}/{b},upload_verification\n")
        file.close()
        eel.goToMain()
    else:
        #os.system("export PATH=/opt/riscv/bin:$PATH")
        #os.system("export PATH=/opt/riscv/riscv64-unknown-elf/bin:$PATH")


        for test in tests1:
            ic(test)
            yy=getcommand.replace("testname",test)
            listcommands.append(yy)
            ic(yy)
            p=listuploadcore[-1]
            basename=os.path.basename(f"{p}")
            ic(testtype)
        
           
            os.system(f"cp -a testcases/{testtype}/{test} {yourproject}/{b}/{testcase}")
           
            
            os.system(f"riscv64-unknown-elf-gcc -o {test} {test}.c")
           # os.system(f"spike pk {test} > exec.log")
            os.chdir(f"{BURQ_ROOT}")
            os.chdir(f"{p}")
            os.system(f"{yy}")
            os.chdir(f"{yourproject}/{b}/{testcase}/{test}")
            
            for file in glob.glob("*.log"):
                ic(file)
            
            status = call(f"{yourproject}/{b}/{testcase}/{test}/{file}",f"{yourproject}/{b}/{basename}/exec.log" )
            tests_status.append(status)


            
            #command skipe
            
            


            #command for whisper
            
        basename=os.path.basename(f"{p}")
        os.chdir(f"{yourproject}/{b}")
        report_str = ""
        report_str += f"Core:{basename}\n"
        report_str += "Iss:Spike\n"
        for i,t in enumerate(tests1):
            report_str += f"{t}:{tests_status[i]}\n"
        file = open("test_results.report", "w+")
        file.write(report_str[:-1])
        file.close()
        os.chdir(BURQ_ROOT)
        file = open("web/pathfile", "w")
        file.write(f"{yourproject}/{b}")
        file.close()
        file = open("web/pathfilev", "w")
        file.write("uploadcore_verification")
        file.close()
        file = open("records", "w+")
        file.write(f"{yourproject}/{b},upload_verification\n")
        file.close()
        eel.goToMain()




        


    #place testcase in test case folder
    #make folder with testcase name
    #run command
    #got to log file path
    # run iss command 



if __name__ == '__main__':
    checked=0
    checklog=open(f"user.txt","r")
    checklog=checklog.read()
    print(checklog)
    if checklog == "" or checklog == " ":
        checked=0
    else:
        checked=1
    

        
    

        
    port = getEmptyPort()
    reverter(port,"index.js")
    eel.init('web')
    if checked==1:
        print("lll")
        eel.checklogin()

    list1 = ["a"]
    list2 = []
    listuploadcore = []

    testcasepath=[]
    logfilepath=[]
    
    
    time.sleep(2)


    eel.start('splash.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=port)
    #eel.start('splash.html', mode='chrome', cmdline_args=['node_modules/electron/dist/electron', '.'], port=port, size=(1200, 600))
    
    #here call java function
    
    #check login argument
