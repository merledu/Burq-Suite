import eel
from eel import init, start
from replacer import replacer
from reverter import reverter
import os
import sys
import subprocess as sp

import tkinter 
import tkinter.filedialog as filedialog
import json
from icecream import ic
from distutils.dir_util import copy_tree
from comparison import call



if __name__ == '__main__':

    
    init('web')
    list1 =["a"]
    list2=[]

    currentRootDir = os.getcwd()


    @eel.expose
    def closeRecentRecord(id):
        file = open("records")
        records = file.read().split("\n")
        file.close()
        projectToClose = records[int(id)]
        # delete this from records
        records.remove(projectToClose)
        file = open("records","w")
        file.write("\n".join(records))
        file.close()

    @eel.expose
    def openRecentProject(id):
        file = open("records")
        records = file.read().split("\n")
        file.close()
        projectToOpen = records[int(id)]
        proj,type = projectToOpen.split(",")
        file = open("web/pathfile","w")
        file.write(proj)
        file.close()
        file = open("web/pathfilev","w")
        file.write(type)
        file.close()
        eel.goToMain()

    @eel.expose
    def getRecords():
        file = open("records")
        records = file.read()
        file.close()
        projects = []
        types = []
        for record in records.split("\n")[:-1]:
            proj,type = record.split(",")
            projects.append(proj.split("/")[-1])
            types.append(type)
        eel.displayRecords(projects,types)
            

    @eel.expose
    def runTests(core, iss, tests, projName, projPath):
        ic(projName, projPath)
        ic(core, iss, tests)
        root_path = os.getcwd()
        ibex_test_path="web/testcases/Self-Checking-Tests/Riscv-tests"
        swerv_test__path="web/swerv/"
        tests_status = []
        perOccurProgress = (100//len(tests))//2
        currentProgress = 0
        if core == "swerv" and iss == "whisper":
            os.chdir(swerv_test__path)
            for test in tests:
               
                # check is test directory exists
                if os.path.isdir(test) == False:
                    # create test directory
                    os.mkdir(test)
                os.chdir(test)
                os.system(f"make -f $RV_ROOT/tools/Makefile TEST={test}")
                currentProgress += perOccurProgress
                eel.changeProgressBar(currentProgress)
                os.system(f"$whisper --logfile {test}.log {test}.exe --configfile ./snapshots/default/whisper.json")
                currentProgress += perOccurProgress
                eel.changeProgressBar(currentProgress)
                ic(os.getcwd())
                #check is test.log and exec.log exists
                ic(os.path.isfile(f"{test}.log"))
                ic(os.path.isfile("exec.log"))
                status = call(f"{test}.log", "exec.log")
                tests_status.append(status)
                
            os.chdir(currentRootDir)
            os.chdir(projPath)
            os.mkdir(projName)
            os.chdir(projName)
            report_str = ""
            report_str += f"Core:{core}\n"
            report_str += f"Iss:{iss}\n"
            for i,t in enumerate(tests):
                report_str += f"{t}:{tests_status[i]}\n"
            file = open("test_results.report", "w+")
            file.write(report_str[:-1])
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
    def stop_everything():
        replacer() 
        os.system("./openMain.sh")
        # start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8005)

#b
    @eel.expose                         # Expose this function to Javascript
    def say_hello_py(x):
        print('Hello from %s' % x)
    @eel.expose
    def socdetail():
       
        yourproject=list1[-1]
        b=list2[-1]
        file1=open("web/pathfile","w")
        file1.write(f"{yourproject}/{b}")
        file1.close()
        
       
        os.chdir(yourproject)
        
        
        os.system(f"mkdir {b}")
        
       
        os.chdir(b)
        

        
        os.system("touch main.c")
        # list the files in the directory
        os.system("ls")

        f = open("main.c", "w")
        f.write("// write your code here \n")
        f.close()

        os.chdir(currentRootDir)
        
        file = open("records", "w+")
        file.write(f"{yourproject}/{b},custom_test\n")
        file.close()
        eel.goToMain()
    
    @eel.expose
    def pyverification():
        
        
        yourproject=list1[-1]
        
        aa=os.system(f"cd {yourproject}")
        b=list2[-1]
        file1=open("web/pathfile","w")
        file1.write(f"{yourproject}/{b}")
        file1.close()
        os.system(f"cp -a web/verification {yourproject}/{b}")
        eel.goToMain()

    @eel.expose


    def selectFolder(projectnamee):
        print("Here")
        root = tkinter.Tk()
        root.attributes("-topmost", True)
        root.withdraw()
        directory_path = filedialog.askdirectory()
        print(directory_path)
        list1.clear()
        print(list1)
        list1.append(directory_path)
        print(list1)
        ic(projectnamee)
        list2.append(projectnamee)
       
        
        eel.select_js(list1[-1])
    @eel.expose
    def verCoreTest(listver):
        i=listver[-1]
        if i=="SWERV-EH1":
            eel.testswerv()
            print(i)
        if i=="IBEX":
            eel.testibex()
            print(i)
    @eel.expose
    def getlistswerv():

        namelist=[]
        root="web/swerv/testbench/tests/"
        # get list of directory names from root
        for dirname in os.listdir(root):    
        # for path in filepaths:
            # a=path.split("/")
            ic(dirname)
            namelist.append(dirname)
            
        print(namelist)
        eel.showSwervTests(namelist)
    @eel.expose
    def getlistibex():
        namelist=[]
        root="web/testcases/Self-Checking-Tests/Riscv-tests"
        root1="web/testcases/Self-Checking-Tests/Riscv-tests"               
        filepaths = [os.path.join(root,i) for i in os.listdir(root)]
        filepaths1 = [os.path.join(root1,i) for i in os.listdir(root1)]
        for path in filepaths:
            ic(path)
            a=path.split("/")
            namelist.append(a[-1])
            
        print(namelist,"po")
        for path in filepaths1:
            a=path.split("/")
            namelist.append(a[-1])
            
        print(namelist,"po")
        eel.showIbexTests(namelist)
    @eel.expose
    def datasend(listt):
        filev=open("web/pathfilev","w")
        filev.write(listt[0])
        filev.close()
        print(listt)

    @eel.expose
    def genCore(isa,ext,bus):
        driverKey= f"corei{bus}"
        file = open("web/driver", "w")
        file.write(driverKey)
        file.close()





    reverter()
    start('splash2.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8012)

