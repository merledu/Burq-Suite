import eel, os, shutil
from eel import init, start
from utils import getFileStructure, parseFileStructure, pleaseParseTheFilePath,pleaseGeneratorFileUthaKLayAao, pleaseReportFileUthaKLayAao, DRIVERS, RTL_FILES     # file structure utility
from icecream import ic
import subprocess as sp
from reverter import reverter
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
    ic(project_dir) 
    print(vc,"uu")
    
    
    init('web')
    if vc[0]=="verification":
        eel.disablefunction()

    
    @eel.expose
    def stop_index():
        reverter() 
        os.system("./openMain2.sh")   

    @eel.expose
    def getTheFileStrucuture():
        structure = getFileStructure(project_dir)
        parsedHTML = ""
        ic(structure)
        parsedHTML = parseFileStructure(structure[""])
        # print(parsedHTML)
        eel.pakrKayLaoFiles(parsedHTML)
        if vc[0]=='custom_test':
            gen = pleaseGeneratorFileUthaKLayAao()
            filepath = gen[0]
            actualFilePath = os.path.join(project_dir,filepath[1:])
            fileToRead = open(actualFilePath,"r")
            contentOfFile = fileToRead.read()
            fileToRead.close()
            eel.displayTheFile(contentOfFile, gen[1], filepath[1:], filepath.split("/")[-1])
        elif vc[0]=='prebuilt_verification':
            gen = pleaseReportFileUthaKLayAao()
            filepath = gen[0]
            actualFilePath = os.path.join(project_dir,filepath[1:])
            fileToRead = open(actualFilePath,"r")
            contentOfFile = fileToRead.read()
            fileToRead.close()
            parseReport(contentOfFile, gen[1], filepath[1:], filepath.split("/")[-1])

    def parseReport(content, p1,p2,p3):
        content_list = content.split("\n")
        core = content_list[0].split(":")[1]
        iss = content_list[1].split(":")[1]
        tests = []
        status = []
        for i in range(2,len(content_list)):
            tests.append(content_list[i].split(":")[0])
            status.append(content_list[i].split(":")[1])
        eel.displayTheReport(core,iss,tests,status,p1,p2,p3)


        

    @eel.expose
    def parseFilePathReq(file):
        try:
            filePath = pleaseParseTheFilePath(file)
            actualFilePath = os.path.join(project_dir,filePath[1:])
            fileToRead = open(actualFilePath, "r")
            contentOfFile = fileToRead.read()
            fileToRead.close()
            if ".report" in actualFilePath:
                parseReport(contentOfFile,file,filePath[1:], filePath.split("/")[-1])
            else:
                eel.displayTheFile(contentOfFile,file,filePath[1:], filePath.split("/")[-1])
        except:
            eel.cantOpenTheFile()

    @eel.expose
    def genrtlpy():
        file=open("web/pathfile","r")
        contents= file.readlines()
        file.close()
        ic(contents[0])

        
        os.chdir(f"{contents[0]}")
        os.system("./peripheralScript.py")
        
        os.system("sbt 'runMain GeneratorDriver'")
    @eel.expose
    def getcode(code):
        #yahan path jahan user ne main.c save ki
        #wo open write then close
        #run riscv gcc test command 
        #show assebly file

        os.chdir(project_dir)
        file=open("main.c","w")
        file.write(code)
        file.close()

        proc = sp.Popen("riscv32-unknown-elf-gcc -mabi=ilp32 -march=rv32imc -nostdlib -g -o main main.c".split(), stdout=sp.PIPE, stderr=sp.PIPE)
        outs, errs = proc.communicate()
        ic(outs)
        ic(errs)
        if "error" in str(errs):
            eel.showAlert(f"Error: {errs}")
        else:
            os.system("riscv32-unknown-elf-objdump -d main >> main.elf")
            # read main.elf and separate machine code and assembly and save in separate files
            elfFile = open("main.elf","r")
            contents = elfFile.readlines()
            elfFile.close()
            machineCodeFile = open("main.mach","w+")
            assemblyFile = open("main.asm","w+")
            machineCode = []
            assembly = []
            for line in contents[1:]:
                splittedList = line.split("\t")
                if len(splittedList)>1:
                    machineCode.append(splittedList[1])
                    assembly.append(" ".join(splittedList[2:]))
            machineCodeFile.write("\n".join(machineCode))
            assemblyFile.write("".join(assembly))
            machineCodeFile.close()
            assemblyFile.close()  
            eel.cleanTheFileTree()
            getTheFileStrucuture()
            eel.showAlert("Code Compiled Successfully")
    


    


    start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8007)


