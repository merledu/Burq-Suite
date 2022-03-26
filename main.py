import eel,os
from eel import init, start
from replacer import replacer
from reverter import reverter
import os ,random 
import tkinter 
import tkinter.filedialog as filedialog
import shutil


if __name__ == '__main__':

    
    init('web')
    list1 =[]  

    @eel.expose
    def stop_everything():
        replacer()
        os.system("./openMain.sh")
        # start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8005)


    @eel.expose                         # Expose this function to Javascript
    def say_hello_py(x):
        print('Hello from %s' % x)
    @eel.expose
    def socdetail(listsoc):
        dictsoc={"i": 0, "m": 0, "f": 0, "c": 0, "gpio": 0, "spi": 0, "uart": 0, "timer": 0, "spi_flash": 0, "i2c": 0, "wb": 0, "tl": 0}
        
        for val in listsoc:
            for key in dictsoc:
                
                if key==val:
                    dictsoc[key]=1
        print(dictsoc)
        file=open("web/SoC-Now-Generator/src/main/scala/config.json","w")
        file.write(str(dictsoc))
        file.close()
        yourproject=list1[0]
        os.system("cp -a web/SoC-Now-Generator yourproject")
        #shutil.copytree("web/SoC-Now-Generator/src/main/scala", yourproject)
        eel.goToMain()
    

    @eel.expose

    def selectFolder():
        print("Here")
        root = tkinter.Tk()
        root.attributes("-topmost", True)
        root.withdraw()
        directory_path = filedialog.askdirectory()
        print(directory_path)
        list1.append(directory_path)
        print(list1[-1],'o')
        eel.select_js(list1[0])

    reverter()
    start('splash.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8012)

