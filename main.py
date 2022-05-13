import eel
from eel import init, start
from replacer import replacer
from reverter import reverter
import os
import sys

import tkinter 
import tkinter.filedialog as filedialog
import json
from icecream import ic



if __name__ == '__main__':

    
    init('web')
    list1 =["a"]
    list2=[]

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
        
       
        aa=os.chdir(yourproject)
        ic(aa)
        
        ww=os.system(f"mkdir {b}")
        ic(ww)
       
        er=os.chdir(b)
        ic(er)
        
        os.system("touch main.c")
        os.chdir("../../")
        
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
        root="/home/mahnoor/Burq-Suite/web/testcases/Self-Checking-Tests/Swerv_Tests"               
        filepaths = [os.path.join(root,i) for i in os.listdir(root)]
        for path in filepaths:
            a=path.split("/")
            namelist.append(a[8])
            
        print(namelist)
        eel.javatestlistswerv(namelist)
    @eel.expose
    def getlistibex():
        namelist=[]
        root="/home/mahnoor/Burq-Suite/web/testcases/Self-Checking-Tests/Riscv-tests"
        root1="/home/mahnoor/Burq-Suite/web/testcases/Self-Checking-Tests/Riscv-tests"               
        filepaths = [os.path.join(root,i) for i in os.listdir(root)]
        filepaths1 = [os.path.join(root1,i) for i in os.listdir(root1)]
        for path in filepaths:
            a=path.split("/")
            namelist.append(a[8])
            
        print(namelist,"po")
        for path in filepaths1:
            a=path.split("/")
            namelist.append(a[8])
            
        print(namelist,"po")
        eel.javatestlistibex(namelist)
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
    start('splash.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8012)

