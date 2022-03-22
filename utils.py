def getFileStructure(rootdir):
    import os
    # rootdir = '/home/mordok/mera_project/'

    strct = {}

    for subdir, dirs, files in os.walk(rootdir):
        for file in files:
            fullFile = os.path.join(subdir, file)
            fullFile = fullFile.replace(rootdir, "")
            allFolders = fullFile.split("/")
            if len(list(allFolders)) == 1:
                if "." not in strct.keys():
                    strct["."] = [fullFile]
                else:
                    strct["."].append(fullFile)
            else:
                
                lalala = strct
                
                for i in range(len(allFolders)):
                    if i+1 == len(allFolders)-1:
                        if allFolders[i] in lalala.keys():
                            
                            lalala[allFolders[i]]["."].append(allFolders[i+1])
                            break
                        else:
                            lalala[allFolders[i]] ={
                                ".":[allFolders[i+1]]
                            } 
                            break
                    else:
                        if allFolders[i] in lalala.keys():
                            lalala = lalala[allFolders[i]]
                        else:
                            lalala[allFolders[i]] = {}
                            lalala = lalala[allFolders[i]]

    return strct
