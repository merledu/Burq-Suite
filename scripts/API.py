import json, os, \
    requests as req

from icecream import ic


routes = {
    'coreList': 'http://127.0.0.1:8000/core/all/',
    'rtl'     : 'http://127.0.0.1:8000/core/rtl/'
}


def getListOfCores(username):
    userDict = {'username': username}
    coreList = json.loads(
        req.get(routes['coreList'], data=userDict).text
    )

    return coreList


def getCoreRTL(coreID, projName, projDir):
    idDict = {'id': int(coreID)}
    rtlFile = json.loads(
        req.get(routes['rtl'], data=idDict).text
    )

    projPath = f'{projDir}/{projName}'
    os.makedirs(f'{projPath}/rtl')
    os.mkdir(f'{projPath}/logs')
    with open(f'{projDir}/{projName}/rtl/Top.v', 'w', encoding='UTF-8') as f:
        for line in rtlFile:
            f.write(line)


if __name__ == '__main__':
    getCoreRTL(2, 'rtlTest', '/home/cybergai/Temporary/')
