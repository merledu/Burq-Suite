import json, os, re, \
    requests as req

from icecream import ic


routes = {
    'cores': 'http://127.0.0.1:8000/core/all/',
    'rtl'     : 'http://127.0.0.1:8000/core/rtl/'
}


def getListOfCores(username):
    userDict = {'username': username}
    coreList = json.loads(
        req.get(routes['cores'], data=userDict).text
    )

    return coreList


def getCoreRTL(coreID, projName, projDir, currProg, progTick):
    idDict = {'id': int(coreID)}
    rtlFile = json.loads(
        req.get(routes['rtl'], data=idDict).text
    )
    currProg += 10
    progTick(currProg)

    projPath = f'{projDir}/{projName}'
    os.makedirs(f'{projPath}/rtl')
    os.mkdir(f'{projPath}/logs')
    with open(f'{projDir}/{projName}/rtl/Top.v', 'w', encoding='UTF-8') as f:
        for line in rtlFile:
            if re.search('\s+sram_top #\(.IFILE_IN\("/home/.*/assembly.hex"\)\).*', line):
                f.write(
                    re.sub(
                        '/home/.*/assembly.hex',
                        f'{projPath}/asm.hex',
                        line
                    )
                )
            else:
                f.write(line)
    currProg += 10
    progTick(currProg)


if __name__ == '__main__':
    getCoreRTL(2, 'rtlTest', '/home/cybergai/Temporary')
