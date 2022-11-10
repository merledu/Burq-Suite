import json, \
    requests as req

from icecream import ic


def getListOfCores(username):
    coreListRoute = 'http://127.0.0.1:8000/core/all/'
    userDict = {'username': username}

    coreList = json.loads(req.get(coreListRoute, data=userDict).text)

    return coreList


def getCoreRTL(coreID, testType, testList, projName, projDir):
    rtlRoute = 'http://127.0.0.1:8000/core/rtl/'
    idDict = {'id': int(coreID)}
    ic(testType, testList, projName, projDir)

    #rtlFile = json.loads(req.get(rtlRoute, data=idDict).text)
    #with open(f'{filePath}/rtl/{coreName}.v', 'w', encoding='UTF-8') as f:
    #    for line in rtlFile:
    #        f.write(line)
