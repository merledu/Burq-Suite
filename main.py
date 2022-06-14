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
    listuploadcore=[]

    currentRootDir = os.getcwd()
    ic(currentRootDir)
    testcasepath=[]
    logfilepath=[]


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
                os.system("export RISCV=/opt/riscv32")

                os.system(f"export whisper='{currentRootDir}/web/Verification/SweRV-ISS/build-Linux/./whisper'")

                os.system(f"export RV_ROOT='{currentRootDir}/web/swerv'")
                os.system("export PATH=/opt/riscv32/bin:$PATH")
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
        os.chdir(f"{currentRootDir}")
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
        ic(list1)
        ic(projectnamee)
        list2.append(projectnamee)
       
        
        eel.select_js(list1[-1])
    @eel.expose
    def selectFolder1():
        print("Here")
        root = tkinter.Tk()
        root.attributes("-topmost", True)
        root.withdraw()
        directory_path = filedialog.askdirectory()
        print(directory_path)
        listuploadcore.clear()
        print( listuploadcore)
        listuploadcore.append(directory_path)
        ic(listuploadcore)
       
        eel.select_js1(listuploadcore[-1])
    @eel.expose
    def selecttest():
        print("Here")
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
        print("Here")
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
        
        
        yourproject=list1[-1]
        
        aa=os.system(f"cd {yourproject}")
        bb=listuploadcore[-1]
        b=list2[-1]
       
        os.system(f"cp bb  {yourproject}/{b}")
        

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
    @eel.expose
    def floatingpointtest():
        

        namelist=[]
        #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
        root="web/testcases/Self-Checking-Tests/Floating_point_tests_for_azadi"
        # get list of directory names from root
        for dirname in os.listdir(root):    
        # for path in filepaths:
            # a=path.split("/")
            ic(dirname)
            namelist.append(dirname)
            
        print(namelist)
        eel.showfloatingTests(namelist)
    @eel.expose
    def merlvectortest():
        namelist=[]
        #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
        root="web/testcases/Self-Checking-Tests/MERL_vector_Tests"
        # get list of directory names from root
        for dirname in os.listdir(root):    
        # for path in filepaths:
            # a=path.split("/")
            ic(dirname)
            namelist.append(dirname)
            
        print(namelist)
        eel.showMerlTests(namelist)
    @eel.expose
    def riscvtest():
        namelist=[]
        #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
        root="web/testcases/Self-Checking-Tests/Riscv-tests"
        # get list of directory names from root
        for dirname in os.listdir(root):    
        # for path in filepaths:
            # a=path.split("/")
            ic(dirname)
            namelist.append(dirname)
            
        print(namelist)
        eel.showriscvTests(namelist)
    @eel.expose
    def selfcheckingvectortest():
        namelist=[]
            #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
        root="web/testcases/Self-Checking-Tests/Self-Checking-vector-tests"
        # get list of directory names from root
        for dirname in os.listdir(root):    
        # for path in filepaths:
            # a=path.split("/")
            ic(dirname)
            namelist.append(dirname)
            
        print(namelist)
        eel.showselfcheckingvectorTests(namelist)
    @eel.expose
    def swervtest():
        namelist=[]
            #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
        root="web/testcases/Self-Checking-Tests/Swerv_Tests"
        # get list of directory names from root
        for dirname in os.listdir(root):    
        # for path in filepaths:
            # a=path.split("/")
            ic(dirname)
            namelist.append(dirname)
            
        print(namelist)
        eel.showswervTests(namelist)
    @eel.expose
    def burqgeneratedtest():
        os.system(f"{currentRootDir}")

        namelist=[]
            #root="web/swerv/testbench/tests/Floating_point_tests_for_azadi"
        root="web/testcases/Self-Checking-Tests/BURQ_Generated_Tests"
        # get list of directory names from root
        for dirname in os.listdir(root):    
        # for path in filepaths:
            # a=path.split("/")
            ic(dirname)
            namelist.append(dirname)
            
        print(namelist)
        eel.showburqTests(namelist)



    @eel.expose
    def enduploadcore(getcommand,tests1,testcase,logfile,swerv):
         #if isswerv==swervbased;
        #iswerv=swerv[-1]
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
        os.system("export RISCV=/opt/riscv32")

        os.system(f"export whisper='{currentRootDir}/web/Verification/SweRV-ISS/build-Linux/./whisper'")

        os.system(f"export RV_ROOT='{currentRootDir}/web/swerv'")
        os.system("export PATH=/opt/riscv32/bin:$PATH")
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
            
            
        # basename=os.path.basename(f"{p}")
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
        
          
            os.system(f"cp -a web/testcases/Self-Checking-Tests/Swerv_Tests/{test} {yourproject}/{b}/{testcase}")
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

    

        

        
    




    reverter()
    start('splash2.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8012)

