from operator import le
import re
import uuid
from icecream import ic


theDictOfFilePaths = {}
GeneratorFileID = []
ReportFileID = []

def getFileStructure(rootdir):
    import os
    
    strct = {}

    for subdir, dirs, files in os.walk(rootdir):
        for file in files:
            fullFile = os.path.join(subdir, file)
            print(fullFile)
            fullFile = fullFile.replace(rootdir, "")
            allFolders = fullFile.split("/")
            # ic(fullFile)
            id = str(uuid.uuid4())
            theDictOfFilePaths[id] = fullFile
            ic(fullFile)
            if "main.c" in fullFile:
                GeneratorFileID.append(id)
            if "test_results.csv" in fullFile:
                ReportFileID.append(id)
            if len(list(allFolders)) == 1:
                if "." not in strct.keys():
                    strct["."] = [(id,fullFile)]
                else:
                    strct["."].append((id,fullFile))
            else:
                
                lalala = strct
                
                for i in range(len(allFolders)):

                    if i+1 == len(allFolders)-1: 

                        if allFolders[i] in lalala.keys():
                            
                            lalala[allFolders[i]]["."].append((id,allFolders[i+1]))
                            break
                        else:
                            lalala[allFolders[i]] ={
                                ".":[(id,allFolders[i+1])]
                            } 
                            break
                    else:
                        if allFolders[i] in lalala.keys():
                            lalala = lalala[allFolders[i]]
                        else:
                            lalala[allFolders[i]] = {}
                            lalala = lalala[allFolders[i]]

    return strct


# paddCounter = 0
def parseFileStructure(strct, paddCounter=0):
    if type(strct) == list:
        stt = ""
        stt += """
                    <ul class="list-unstyled">
                """
        
        for i,v in enumerate(strct):
            stt += f"""<li ><button style="margin-left:{paddCounter+5}px" onclick=openTheFile("{v[0]}") class="btn file-btn"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-file-earmark-code-fill" viewBox="0 0 16 16">
                                <path d="M9.293 0H4a2 2 0 0 0-2 2v12a2 2 0 0 0 2 2h8a2 2 0 0 0 2-2V4.707A1 1 0 0 0 13.707 4L10 .293A1 1 0 0 0 9.293 0zM9.5 3.5v-2l3 3h-2a1 1 0 0 1-1-1zM6.646 7.646a.5.5 0 1 1 .708.708L5.707 10l1.647 1.646a.5.5 0 0 1-.708.708l-2-2a.5.5 0 0 1 0-.708l2-2zm2.708 0 2 2a.5.5 0 0 1 0 .708l-2 2a.5.5 0 0 1-.708-.708L10.293 10 8.646 8.354a.5.5 0 1 1 .708-.708z"/>
                              </svg>{v[1]}</button></li>
                    """

        stt += "</ul>"
        # ic(stt)
        

        return stt
    else:
        theKeys = strct.keys()
        stt = ""
        for i,v in strct.items():
            id = uuid.uuid4()
            if i != ".":
                stt += f"""
                            <div class="accordion-item">
                <p style="margin-left:{paddCounter}px" class="accordion-header" id="heading{id}">
                    <button class="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapse{id}" aria-expanded="false" aria-controls="collapse{id}">
                    <img src="assets/icons/folder.png" />  {i}
                    </button>
                </p>
                <div id="collapse{id}" class="accordion-collapse collapse" aria-labelledby="heading{id}" data-bs-parent="#accordionExample">
                        """

                stt += parseFileStructure(v, paddCounter+10)
                stt += "</div> </div>"
            else:
                stt += parseFileStructure(v, paddCounter+10)
            # paddCounter+=10
        
        return stt


def pleaseParseTheFilePath(file):
    return theDictOfFilePaths[file]

def pleaseGeneratorFileUthaKLayAao():
    ic(GeneratorFileID)
    return (theDictOfFilePaths[GeneratorFileID[0]],GeneratorFileID[0])
def pleaseReportFileUthaKLayAao():
    ic(ReportFileID)
    return (theDictOfFilePaths[ReportFileID[0]],ReportFileID[0])




DRIVERS = {
    "soc":"GeneratorDriver",
    "coreiwb":"nucleusrv.components.CoreDriverWB",
    "coreitl":"nucleusrv.components.CoreDriverTL",
    "gpiowb":"jigsaw.GpioDriverWB",
    "spiwb":"jigsaw.SpiDriverWB",
    "uartwb":"jigsaw.UARTHarnessDriver",
    "gpiotl":"jigsaw.GpioDriverTL",
    "spitl":"jigsaw.SpiDriverTL",
    "uarttl":"jigsaw.UARTHarnessDriverTL",
    "wb":"caravan.bus.wishbone.WishboneDriver",
    "tl":"caravan.bus.tilelink.TilelinkDriver"
}

RTL_FILES = {
    "soc":"Generator.v",
    "coreiwb":"Top.v",
    "coreitl":"TopTL.v",
    "gpiowb":"GpioWB.v",
    "spiwb":"SpiHarness.v",
    "uartwb":"uartHarness.v",
    "gpiotl":"GpioTL.v",
    "spitl":"SpiHarnessTL.v",
    "uarttl":"uartHarness_TL.v",
    "wb":"Harness.v",
    "tl":"TilelinkHarness.v"
}