import time, eel, os, glob, sys, \
    tkinter, json, psutil, socket, requests, \
    re, subprocess as sp, tkinter.filedialog as filedialog

from scripts.replacer import replacer
from scripts.reverter import reverter
from icecream import ic
from distutils.dir_util import copy_tree
from scripts.comparison import call
from scripts.cleanlify import cleanELF
from contextlib import closing
from apiConfig import URL

from scripts.API import getListOfCores, getCoreRTL

from scripts.utils import getEmptyPort

BURQ_ROOT = os.getcwd()
BURQ_SCRIPTS = os.path.join(BURQ_ROOT, 'scripts')
DV_ROOT = os.path.join(BURQ_ROOT, 'dv')
PYGEN_PATH = os.path.join(DV_ROOT, 'pygen')
sys.path.insert(0, BURQ_SCRIPTS)
sys.path.insert(0, DV_ROOT)
sys.path.insert(0, PYGEN_PATH)

from scripts.run_tests import run_dv_test_on_spike, run_dv_test_on_core
from dv.scripts.instr_trace_compare import compare_trace_csv


def generate_core_log(cmd):
    os.system(cmd)

@eel.expose
def runTestsSoc(coreSelected):
    # bring the RTL
    getCoreRTL(coreSelected)
    
    # process the RTL
    pass
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
    # if debug:
    #     ic(sys._get_frame().f_code.co_name)

    root_path = os.getcwd()
    ibex_test_path = "cores/ibex/"
    swerv_test__path = "cores/swerv/"
    tests_status = []
    perOccurProgress = (100 // len(tests)) // 2
    currentProgress = 0

    if core == "swerv":
        if debug:
            ic(core)
        
        if selectedtest == 'Swerv_Tests':
            os.chdir(swerv_test__path)

            if debug:
                ic(os.getcwd())

            for test in tests:
                # check if test directory exists
                if os.path.isdir(test) == False:
                    # create test direeel.ctory
                    os.mkdir(test)
                currentProgress += 20
                progressTick(currentProgress)

                os.chdir(test)
                os.system("export RISCV=/opt/riscv32")
                os.system(f"export whisper={currentRootDir}/iss/SweRV-ISS/build-Linux/./whisper")
                os.system(f"export RV_ROOT={currentRootDir}/cores/swerv")
                os.system("export PATH=/opt/riscv32/bin:$PATH")
                os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}")
                currentProgress += 30
                progressTick(currentProgress)
                os.system(f"$whisper --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
                currentProgress += 30
                progressTick(currentProgress)
                # Check is test.log and exec.log exists
                if debug:
                    ic(os.getcwd())
                    ic(os.path.isfile(f"{test}.log"))
                    ic(os.path.isfile("exec.log"))
                currentProgress += 20
                progressTick(currentProgress)
                status = call(f"{test}.log", "exec.log")
                tests_status.append(status)
                
        
        if selectedtest=="RISCV_DV_Tests":

            os.chdir(swerv_test__path)
            ic(os.getcwd())
            for test in tests:
                print(test)
            
                # check is test directory exists
                if os.path.isdir(f"{test}_0") == False:
                    os.mkdir(f"{test}_0")
                currentProgress += 10
                progressTick(currentProgress)
                
                os.chdir(f"{currentRootDir}/dv")
                os.system(f"python3 run.py --iss whisper --simulator pyflow --target rv32imc --iteration 1 --test={test} --output {test}")
                currentProgress += 30
                progressTick(currentProgress)
                os.chdir(f"{currentRootDir}/cores/swerv/testbench/tests")
                #os.mkdir(f"{test}_0")
                os.chdir(f"{currentRootDir}/dv/{test}/asm_test")


                os.rename(f"{test}_0.S", f"{test}_0.s")
                currentProgress += 10
                progressTick(currentProgress)
                os.chdir(f"{currentRootDir}/cores/swerv/testbench/tests")
                if os.path.isdir(f"{test}_0") == False:

                    os.mkdir(f"{test}_0")
               
                


                os.system(f"cp -r {currentRootDir}/dv/{test}/asm_test/{test}_0.s {currentRootDir}/cores/swerv/testbench/tests/{test}_0")
                

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
                os.system(f"export whisper={currentRootDir}/iss/SweRV-ISS/build-Linux/./whisper")

                os.system(f"export RV_ROOT={currentRootDir}/cores/swerv")
                os.system("export PATH=/opt/riscv32/bin:$PATH")

            
                
            
               
                os.chdir(f"{currentRootDir}/cores/swerv/{test}_0")
                os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}_0")
                currentProgress += 20
                progressTick(currentProgress)
                os.system(f"$whisper --logfile {test}_0.log {test}_0.exe --configfile ./snapshots/default/whisper.json")
                currentProgress += 20
                progressTick(currentProgress)
                currentProgress += 10
                progressTick(currentProgress)
                ic(os.getcwd())
                #check is test.log and exec.log exists
                ic(os.path.isfile(f"{test}_0.log"))
                ic(os.path.isfile("exec.log"))
                status = call(f"{test}_0.log", "exec.log")
                tests_status.append(status)
                
                
                
                
           

        if selectedtest=="User_Defined_Tests":
            os.chdir(swerv_test__path)
            ic(swerv_test__path)
            
            ic(os.getcwd())
            for test in tests:
                os.chdir(f"{currentRootDir}/testcases/User_Defined_Tests/{test}")
                os.system(f"cp -a {currentRootDir}/testcases/User_Defined_Tests/crt0.s {currentRootDir}/testcases/User_Defined_Tests/{test}")
                mki_str="""OFILES = test.o crt0.o
TEST_CFLAGS = -mabi=ilp32 -march=rv32imc -nostdlib -g"""

                mkifile=open(f"{test}.mki","w+")
                #write mki_str in file
                mkifile.write(mki_str.replace("test", test))
                mkifile.close()
                os.system(f"cp -a {currentRootDir}/testcases/User_Defined_Tests/{test} {currentRootDir}/cores/swerv/testbench/tests/")
                os.chdir(f"{currentRootDir}/cores/swerv/")
                # check is test directory exists
                if os.path.isdir(test) == False:
                    # create test directory
                    os.mkdir(test)
                os.chdir(test)
                currentProgress += 10
                progressTick(currentProgress)
                
                os.system("export RISCV=/opt/riscv32")

                os.system(f"export whisper={currentRootDir}/iss/SweRV-ISS/build-Linux/./whisper")

                os.system(f"export RV_ROOT={currentRootDir}/cores/swerv")
                os.system("export PATH=/opt/riscv32/bin:$PATH")
                os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}")
                #srem=removezero("exec.log")
                currentProgress += 50
                progressTick(currentProgress)
                os.system(f"$whisper --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
               # wrem=removew(f"{test}.log")
                currentProgress += 30
                progressTick(currentProgress)
                os.chdir(projPath)
                os.mkdir(projName)
                os.chdir(projName)
                os.mkdir(f"{test}_logs")
                
                

            
                os.system(f"cp  -r {currentRootDir}/cores/swerv/{test}/{test}.log {projPath}/{projName}/{test}_logs")
                os.system(f"cp  -r {currentRootDir}/cores/swerv/{test}/exec.log {projPath}/{projName}/{test}_logs")
                os.chdir(f"{currentRootDir}/cores/swerv/{test}")
                ic(os.getcwd())
                #check is test.log and exec.log exists
                ic(os.path.isfile(f"{test}.log"))
                ic(os.path.isfile("exec.log"))
                status = call(f"{test}.log", "exec.log")
                tests_status.append(status)
                

    elif core == "ibex":
        print('ibex')
        os.chdir(f"{currentRootDir}/{ibex_test_path}")
        perOccurProgress = (100 // len(tests)) // 2
        currentProgress = 0
        
        makefile_str = """PROGRAM = testname
                          PROGRAM_DIR := $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))
                          # Any extra source files to include in the build. Use the upper case .S
                          # extension for assembly files
                          EXTRA_SRCS :=

                          include ${PROGRAM_DIR}/../common/common.mk"""

        testroot="testcases/Riscv_tests"
        for test in tests:
            ic(test)
            os.chdir(f"{currentRootDir}/{ibex_test_path}")
            os.chdir("examples/sw/simple_system/")
            if os.path.isdir(test):
                # rm test directory
                os.system(f"rm -rf {test}")
            
                
            try:    
                os.mkdir(test)
                copy_tree(f"{currentRootDir}/{testroot}/{test}", f"{test}")
                

                os.chdir(test)
                file = open("Makefile", "w+")
                file.write(makefile_str.replace("testname", test))
                file.close()
                os.system("make")
                # check test.elf exists
                ic(os.path.isfile(f"{test}.elf"))
                ic(os.system("ls"))
                os.chdir(f"{currentRootDir}/{ibex_test_path}")
                os.system("fusesoc --cores-root=. run --target=sim --setup --build lowrisc:ibex:ibex_simple_system --RV32E=0 --RV32M=ibex_pkg::RV32MFast")
                os.system(f"./build/lowrisc_ibex_ibex_simple_system_0/sim-verilator/Vibex_simple_system [-t] --meminit=ram,examples/sw/simple_system/{test}/{test}.elf")
                currentProgress += perOccurProgress
                progressTick(currentProgress)
                os.chdir(f"{currentRootDir}/{ibex_test_path}/examples/sw/simple_system/{test}")
                os.system(f"spike --isa=rv32gc -m0x10000:0x30000,0x100000:0x100000 --log-commits -l {test}.elf 2> {test}.log")
                spike_ibex = None
                core_ibex  = None
                core_ibex.ibexLogExtract(f"{currentRootDir}/{ibex_test_path}/trace_core_00000000.log")#ibex core path
                spike_ibex.spikeLogExtract(f"{test}.log")
                if spike_ibex.match(core_ibex):
                    tests_status.append("PASSED")
                else:
                    tests_status.append("FAILED")
                currentProgress += perOccurProgress
                progressTick(currentProgress)
            except:
                tests_status.append("COMPILATION ERROR")
                currentProgress += perOccurProgress
                progressTick(currentProgress)
                currentProgress += perOccurProgress
                progressTick(currentProgress)
        


            
                
            

        
            
    os.chdir(currentRootDir)
    os.chdir(projPath)
    
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
    os.chdir(currentRootDir)
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
def socdetail(debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)

    yourproject = list1[-1]
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

    os.chdir(currentRootDir)
    
    with open("records", "w+") as f:
        f.write(f"{yourproject}/{b},custom_test\n")

    os.chdir(f"{currentRootDir}")
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
def selectFolder(projectnamee, debug=True):
    if debug:
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
    tests = [
        "riscv_arithmetic_basic_test",
        "riscv_rand_instr_test",
        "riscv_jump_stress_test",
        "riscv_loop_test",
        "riscv_rand_jump_test",
        "riscv_mmu_stress_test",
        "riscv_no_fence_test",
        "riscv_illegal_instr_test",
        "riscv_ebreak_test",
        "riscv_ebreak_debug_mode_test",
        "riscv_full_interrupt_test",
        "riscv_csr_test",
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
    os.system(f"{currentRootDir}")

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
        "riscv_rand_instr_test",
        "riscv_jump_stress_test",
        "riscv_loop_test",
        "riscv_rand_jump_test",
        "riscv_mmu_stress_test",
        "riscv_no_fence_test",
        "riscv_illegal_instr_test",
        "riscv_ebreak_test",
        "riscv_ebreak_debug_mode_test",
        "riscv_full_interrupt_test",
        "riscv_csr_test",
        "riscv_unaligned_load_store_test"
    ]
    if source=="socnow":
        eel.showsocnowdvtest(tests)
    if source=="custom":

        eel.showdvTests(tests)

# @eel.expose
# def enduploadcore(config, tests, types):
#     time.sleep(5)
#     progressTick(11.11)
#     time.sleep(5)
#     progressTick(22.22)
#     time.sleep(5)
#     progressTick(33.33)
#     time.sleep(5)
#     progressTick(44.44)
#     time.sleep(5)
#     progressTick(55.55)
#     time.sleep(5)
#     progressTick(66.66)
#     time.sleep(5)
#     progressTick(77.77)
#     time.sleep(5)
#     progressTick(88.88)
#     time.sleep(5)
#     progressTick(99.99)


@eel.expose
def enduploadcore(config, tests, types, debug=True):
    if debug:
        ic(sys._getframe().f_code.co_name)
        ic(config, tests, types)
   
    with open("web/pathfile", "w") as f:
        f.write(f"{config['path']}/{config['name']}")

    with open("web/pathfilev", "w") as f:
        f.write("custom_verification")

    uploadedcore = listuploadcore[-1]

    if debug:
        ic(uploadedcore)

    os.makedirs(f"{config['path']}/{config['name']}")
    os.makedirs(f"{config['path']}/{config['name']}/core")
    copy_tree(uploadedcore, f"{config['path']}/{config['name']}/core/")

    with open(f"{config['path']}/{config['name']}/config.json", "w+") as f:
        json.dump(config, f)

    testStatuses = []
    progress_step = (len(tests) / 100) / 3
    progress = 0

    if config["swerv"] == "": 
        if debug:
            ic("Custom core selected")

        extension_flags = "rv32" + "".join(config["extensions"])
        os.makedirs(f"{config['path']}/{config['name']}/tmp")
        os.chdir(f"{config['path']}/{config['name']}")
        proj_dir = os.getcwd()

        if debug:
            ic(proj_dir)

        os.makedirs("logs")

        for i, test in enumerate(tests):
            # ISS Sim
            #try:
            if types == "RISCV_DV_Tests":
                ic(types)
                #os.chdir(f"{BURQ_ROOT}/dv")
                #os.system(f"python3 run.py --iss spike --simulator pyflow --target {extension_flags} -o {config['path']}/{config['name']}/tmp/{test}_out -i 1  --test {test}")
                #os.chdir(f"{config['path']}/{config['name']}")
                os.chdir(BURQ_ROOT + '/dv')
                run_dv_test_on_spike(
                    extension_flags, test, 1, f"{config['path']}/{config['name']}/tmp/{test}_out",
                    f"{config['path']}/{config['name']}/tmp/{test}_out/spike_sim/{test}.0.log",
                    f"{config['path']}/{config['name']}/logs/spike_trace.csv"
                )
            else:
                os.system(f"cp -r {currentRootDir}/testcases/{types}/{test} tmp/{test}")
                os.system(f"python3 {currentRootDir}/dv/run.py --iss spike --simulator pyflow --target {extension_flags} --output tmp/{test}_out --c_test tmp/{test}/{test}.c")
            processes = psutil.pids()
            anyStillRunningSpikeProcess = list(filter(lambda x:psutil.Process(x).name() == "spike", processes))

            if len(anyStillRunningSpikeProcess) != 0:
                for spikeProcessID in anyStillRunningSpikeProcess:
                    psutil.Process(spikeProcessID).kill()

            progress += progress_step
            progressTick(progress)

            # CORE Sim
            if config["testFormat"] == "asm":
                if types != "RISCV_DV_Tests":
                    os.system(f"riscv64-unknown-elf-objdump -d {config['path']}/{config['name']}/tmp/{test}_out/directed_c_test/{test}.o > {config['path']}/{config['name']}/core/{config['hexDir']}/test.elf")
                else:
                    ic(os.getcwd())
                    os.chdir(f"{config['path']}/{config['name']}/core")
                    os.system(f"riscv64-unknown-elf-objdump -d {config['path']}/{config['name']}/tmp/{test}_out/asm_test/{test}_0.o > {config['path']}/{config['name']}/core/{config['hexDir']}/test.s")
                    run_dv_test_on_core(
                        config['command'], f"{config['path']}/{config['name']}/core/{config['logFile']}",
                        f"{config['path']}/{config['name']}/logs/core_trace.csv"
                    )

                #print("cimpileeeeeeeeeee")
                #hexCode, asmCode =  cleanELF(f"{config['path']}/{config['name']}/{test}.elf")


                #hexFW = open(f"{config['path']}/{config['name']}/core/{config['hexDir']}", "w+")
                #hexFW.write("\n".join(hexCode))
                #hexFW.close()
                #if config["asmDir"] != "":
                #    asmFW = open(f"{config['path']}/{config['name']}/core/{config['asmDir']}", "w+")
                #    asmFW.write("".join(asmCode))
                #    asmFW.close()
                #os.system(f"rm {config['path']}/{config['name']}/{test}.elf")
                #print("comamdmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm")
                #os.system(config["command"])
            else:
                print("coreepattt")
                os.system(f"cp -r {config['path']}/{config['name']}/tmp/{test} {config['path']}/{config['name']}/core/{config['testDir']}")
                os.chdir(f"{config['path']}/{config['name']}/core")
                os.system(config["command"].replace("{testname}", test))
            progress += progress_step
            progressTick(progress)

            os.chdir(f"{proj_dir}")
            ic(config["logFormat"])
            if config["logFormat"] == "csv": pass
                # os.system(f"python3 {currentRootDir}/dv/scripts/instr_trace_compare.py --csv_file_1 {config['path']}/{config['name']}/tmp/{test}.csv --csv_file_2 {config['path']}/{config['name']}/core/{config['logFile']} --log {config['path']}/{config['name']}/{test}_compare_out.log")
                # logFW = open(f"{config['path']}/{config['name']}/{test}_compare_out.log")
                # logFWContent = logFW.readlines()
                # logFW.close()
                # os.system(f"rm {config['path']}/{config['name']}/{test}_compare_out.log")
                #spikeObj = LogComparator()
                #coreObj  = LogComparator()
                #if types!= "RISCV_DV_Tests":
                #    spikeObj.spikeLogExtract(f"{config['path']}/{config['name']}/tmp/{test}_out/spike_sim/{test}.log")
                #else:
                #    spikeObj.spikeLogExtract(f"{config['path']}/{config['name']}/tmp/{test}_out/spike_sim/test.0.log")
                #coreObj.coreLogExtract(f"{config['path']}/{config['name']}/core/{config['logFile']}")
                #if spikeObj.match(coreObj):
                #    testStatuses.append("[PASSED]")
                #else:
                #    testStatuses.append("[FAILED]")
                #os.system(f"mkdir {config['path']}/{config['name']}/logs/{test}")
                #os.system(f"cp {config['path']}/{config['name']}/tmp/{test}_out/spike_sim/{test}.log {config['path']}/{config['name']}/logs/{test}")
                #os.system(f"cp {config['path']}/{config['name']}/core/{config['logFile']} {config['path']}/{config['name']}/logs/{test}")
            else:
                compare_trace_csv(
                    f"{config['path']}/{config['name']}/logs/core_trace.csv",
                    f"{config['path']}/{config['name']}/logs/spike_trace.csv",
                    'core', 'spike', f'{config["path"]}/{config["name"]}/logs/compare_result.log',
                    mismatch_print_limit=50
                )

                with open(f"{config['path']}/{config['name']}/logs/compare_result.log", 'r', encoding='UTF-8') as f:
                    result = f.readlines()
                testStatuses.append(result[-2][: -1])

            progress += progress_step
            progressTick(progress)
            #except:
                #testStatuses.append("[Incompatble with your Core Configuration]")
                #progress += progress_step * 3
                #progressTick(progress)
            
            
        
        os.chdir(f"{proj_dir}")
        #os.system("rm -rf tmp")
        # if len(list(filter(lambda x:x=="[PASSED]" or x=="[Incompatble with your Core Configuration]", testStatuses))) == len(testStatuses):
        #     os.system("rm -rf failed_logs")
        
        report_str = ""
        report_str += f"Core,{config['name']}\n"
        report_str += f"Iss,Spike\n"
        report_str += "\n"
        report_str += "Test, Test Status\n"
        

    else: # if swerv based
        RV_ROOT = f"{config['path']}/{config['name']}/core/"
        WHISPER = f"{currentRootDir}/iss/SweRV-ISS/build-Linux/./whisper"
        for test in tests:
            if os.path.exists(f"{config['path']}/{config['name']}/core/testbench/tests/{test}"):
                # del the folder
                os.system(f"rm -rf {config['path']}/{config['name']}/core/{test}")
            os.system(f"cp -r {currentRootDir}/testcases/{types}/{test} {config['path']}/{config['name']}/core/testbench/tests/{test}")

            if os.path.exists(f"{config['path']}/{config['name']}/core/{test}"):
                # del the folder
                os.system(f"rm -rf {config['path']}/{config['name']}/core/{test}")
            os.mkdir(f"{config['path']}/{config['name']}/core/{test}")

            os.chdir(f"{config['path']}/{config['name']}/core/{test}")
            os.system(f"make -f {RV_ROOT}/tools/Makefile TEST={test}")
            progress += progress_step
            progressTick(progress)

            os.system(f"{WHISPER} --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
            progress += progress_step
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
    
    ic(tests)
    ic(testStatuses)
    for i,t in enumerate(tests):
        report_str += f"{t},{testStatuses[i]}\n"
    file = open(f"{config['path']}/{config['name']}/test_results.csv", "w+")
    file.write(report_str)
    file.close()

    file = open(f"{currentRootDir}/records", "w+")
    file.write(f"{config['path']}/{config['name']},custom_core_verification\n")
    file.close()
    
    os.chdir(currentRootDir)
    eel.goToMain()











def progressTick(progress):
    print('progressTick')
    if progress < 20:
        eel.updateProgressBar(progress, "#f63a0f")
    elif progress < 40:
        eel.updateProgressBar(progress, "#f27011")
    elif progress < 60:
        eel.updateProgressBar(progress, "#f2b01e")
    elif progress < 80:
        eel.updateProgressBar(progress, "#f2d31b")
    elif progress < 100:
        eel.updateProgressBar(progress, "#86e01e")


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
        if username == "admin" and password == "admin":
            eel.loginSuccess()
        else:
            eel.throwAlert("Username or Password is incorrect")
    else:
        if not validateUserCredentials(username, password):
            eel.throwAlert("Invalid username or password. Please try again.")
        else:
            try:
                r = requests.post(URL, json={"username": username.lower(), "password": password})
            except:
                eel.throwAlert("Connection Error!\nPlease check your internet connection and try again.")
            if r.json()["status"] == "success":
                eel.loginSuccess()
            else:
                eel.throwAlert("Username or Password is incorrect")

@eel.expose
def getCoresFromSoCNow():
    lst = getListOfCores("mahnoor") # dynamize the username
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
    os.chdir(f"{currentRootDir}")
    
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
    # os.chdir(currentRootDir)
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

        os.system(f"export whisper='{currentRootDir}/iss/SweRV-ISS/build-Linux/./whisper'")

        os.system(f"export RV_ROOT='{currentRootDir}/cores/swerv'")
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
        os.chdir(currentRootDir)
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
            os.chdir(f"{currentRootDir}")
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
        os.chdir(currentRootDir)
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
    port = getEmptyPort()
    reverter(port)
    eel.init('web')

    list1 = ["a"]
    list2 = []
    listuploadcore = []

    currentRootDir = os.getcwd()
    testcasepath=[]
    logfilepath=[]

    eel.start('splash.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=port)
