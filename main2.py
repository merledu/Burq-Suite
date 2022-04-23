import imp
from multiprocessing.spawn import import_main_path
from operator import ge
import eel, os
from eel import init, start
from utils import getFileStructure, parseFileStructure, pleaseParseTheFilePath,pleaseGeneratorFileUthaKLayAao      # file structure utility
from icecream import ic
if __name__ == '__main__':

#type of project select

    f = open("web/pathfile","r")
    c = f.readlines()
    ic(c)
    f.close()
    vf = open("web/pathfilev","r")
    vc = vf.readlines()
    vf.close()
    project_dir = c[-1]
    ic(project_dir)  #"/home/mordok/mera_project"
    
    init('web')

    @eel.expose
    def getTheFileStrucuture():
        structure = getFileStructure(project_dir)
        parsedHTML = ""
        parsedHTML = parseFileStructure(structure[""])
        # print(parsedHTML)
        eel.pakrKayLaoFiles(parsedHTML)
        if vc=="soc":
        #soc specific sab kuch
            gen = pleaseGeneratorFileUthaKLayAao()
            filepath = gen[0]
            actualFilePath = os.path.join(project_dir,filepath[1:])
            fileToRead = open(actualFilePath,"r")
            contentOfFile = fileToRead.read()
            fileToRead.close()
            eel.displayTheFile(contentOfFile, gen[1], filepath[1:], filepath.split("/")[-1])


    @eel.expose
    def parseFilePathReq(file):
        filePath = pleaseParseTheFilePath(file)
        actualFilePath = os.path.join(project_dir,filePath[1:])
        fileToRead = open(actualFilePath, "r")
        contentOfFile = fileToRead.read()
        fileToRead.close()
        eel.displayTheFile(contentOfFile,file,filePath[1:], filePath.split("/")[-1])

    @eel.expose
    def genrtlpy():
        file=open("web/pathfile","r")
        contents= file.readlines()
        file.close()
        ic(contents[0])

        
        os.chdir(f"{contents[0]}/SoC-Now-Generator")
        os.system("sbt 'runMain GeneratorDriver'")

    start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8007)


