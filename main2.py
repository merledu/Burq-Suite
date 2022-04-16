import imp
from multiprocessing.spawn import import_main_path
import eel, os
from eel import init, start
from utils import getFileStructure, parseFileStructure, pleaseParseTheFilePath      # file structure utility
from icecream import ic
if __name__ == '__main__':



    f = open("web/pathfile","r")
    c = f.readlines()
    f.close()
    project_dir = c[0]  #"/home/mordok/mera_project"
    
    init('web')

    @eel.expose
    def getTheFileStrucuture():
        structure = getFileStructure(project_dir)
        parsedHTML = ""
        parsedHTML = parseFileStructure(structure[""])
        # print(parsedHTML)
        eel.pakrKayLaoFiles(parsedHTML)

    @eel.expose
    def parseFilePathReq(file):
        filePath = pleaseParseTheFilePath(file)
        actualFilePath = os.path.join(project_dir,filePath[1:])
        fileToRead = open(actualFilePath, "r")
        contentOfFile = fileToRead.read()
        fileToRead.close()
        eel.displayTheFile(contentOfFile,file,filePath[1:])

    @eel.expose
    def genrtlpy():
        file=open("web/pathfile","r")
        contents= file.readlines()
        file.close()
        ic(contents[0])

        
        os.chdir(f"{contents[0]}/SoC-Now-Generator")
        os.system("sbt 'runMain GeneratorDriver'")

    start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8007)


