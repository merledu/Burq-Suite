# import os

# for path, currentDirectory, files in os.walk("/home/mordok/mera_project"):

#     for file in files:
#         ic(os.path.join(path, file))



# import glob

# path = '/home/mordok/mera_project/'


# folders = [f for f in glob.glob(path + "**/", recursive=True)]

# for f in folders:
#     ic(f)

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


            # ic(allFolders)
            # for i,v in enumerate(allFolders):
            #     ic(i,v, lalala)
            #     ic(i+1,len(allFolders)-1)
            #     if i == len(allFolders)-1:
            #         break
                
            #     if  i+1 == len(allFolders)-1:
            #         print("if")
            #         lalala[v] = allFolders[i+1]
            #         break
            #     elif "." not in allFolders[i+1]:
            #         print("elif")
            #         keys = lalala.keys()
            #         if v not in keys:
            #             print("elif if")
            #             lalala[v] = {}
            #         lalala = lalala[v]
            #     else:
            #         print("else")
            #         lalala[v] = allFolders[i+1]
            #         break
                    
                    
        # ic(dict(allFolders))

# fullFile = ['caravan', 'src', 'test', 'scala', 'tilelink', 'HarnessTest.scala']
# lalala = strct
# for i,v in enumerate(fullFile):
#     if "." not in fullFile[i+1]:
#         lalala[v] = {}
#         lalala = lalala[v]
#     else:
#         lalala[v] = fullFile[i+1]
#         break
ic(strct)
file = open("structure.json", "w+")
import json
json.dump(strct, file, indent = 6)
file.close()



{
    "src":{
        "main":{
            "scala":"main.scala"
        },
        "test":{
            "scala":"test.scala"
        }
    }
}