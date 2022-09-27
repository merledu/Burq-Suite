from re import sub, split

class LogComparator:
    # Types are distinguished by their parameters in the Spike log
    type1  = ('addi', 'andi', 'ori', 'xori', 'slli', 'srli', 'srai', 'slti', 'sltiu')
    type2  = ('j', 'jal')
    type3  = ('li', 'auipc', 'lui')
    type4  = ('sw', 'sbu', 'sb', 'sh', 'shu')
    type5  = ('lbu', 'lw', 'lb', 'lh', 'lhu')
    type6  = ('bge', 'bgeu', 'beq', 'bne', 'blt', 'bltu')
    type7  = ('add', 'sub', 'and', 'or', 'xor', 'sll', 'slt', 'sltu', 'srl', 'sra', 'mul', 'divu', 'remu')
    type8  = ('beqz', 'bnez', 'bltz', 'bgez')
    type9  = ('ret', 'jr', 'jalr')
    type0  = ('csrw', 'csrr', 'csrrw', 'csrrs')
    type10 = ('mv', 'not', 'seqz', 'snez')
    type11 = ('nop')

    typeList = (
        type0, type1, type2, type3, type4,
        type5, type6, type7, type8, type9,
        type10,type11
    )

    gpr = [
        'zero', 'ra', 'sp',  'gp',  'tp', 't0', 't1', 't2',
        's0',   's1', 'a0',  'a1',  'a2', 'a3', 'a4', 'a5',
        'a6',   'a7', 's2',  's3',  's4', 's5', 's6', 's7',
        's8',   's9', 's10', 's11', 't3', 't4', 't5', 't6'
    ]

    rvfiParams = ('insn', 'rs1_addr', 'rs2_addr', 'rd_addr', 'mem_addr', 'mem_rdata', 'mem_wdata')

    def __init__(self):
        self.rvfiDict = {
            'rs1_addr' : [],
            'rs2_addr' : [],
            #'rs1_rdata': [],  # rs1_rdata not shown in Spike log
            #'rs2_rdata': [],  # rs2_rdata not shown in Spike log
            'rd_addr'  : [],
            #'rd_wdata' : [],
            #'pc_rdata' : [],  # pc_rdata excluded due to mismatch from Spike log
            #'pc_wdata' : [],  # pc_wdata excluded due to mismatch from Spike log
            'insn'     : [],
            #'mode'     : [],
            'mem_addr' : [],
            'mem_rdata': [],
            'mem_wdata': []
        }
        self.noOfInst = 0
        self.logList = []
        self.skipped = []

    def spikeLogExtract(self, filename, debug=False, ibex=False):
        # Reading from file
        print('Reading Spike log...')

        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        if ibex:
            startIndex = 0

        else:
            startIndex = 11

        self.logList = [logList[i] for i in range(startIndex, len(logList))]
        self.logList = [
            sub(
                '\n', '',
                f'{self.logList[i][self.logList[i].find(":") + 2:]} {self.logList[i + 1][self.logList[i + 1].find(":") + 2:]}'
            ) for i in range(0, len(self.logList) - 1, 2)
        ]
        self.logList = [split('\s+', _) for _ in self.logList]
        self.logList = [_ for _ in self.logList if _[0] != 'exception']
        
        self.noOfInst = len(self.logList)

        # Extracting values
        print('Extracting Spike values...')

        for i in range(len(self.logList)):
            entry = self.logList[i]

            if entry[2] not in LogComparator.type0:
                self.rvfiDict['insn'].append(entry[1][3: -1])
            
            else:
                self.skipped.append(i)
            #self.rvfiDict['mode'].append('3')

            # type2
            if entry[2] in LogComparator.type2:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[0])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                if entry[2] == 'j':
                    self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])
                else:
                    self.rvfiDict['rd_addr'].append(LogComparator.gpr[1])
                #self.rvfiDict['rd_wdata'].append(hex(int(entry[0], 16) + 4)[2:0])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type3
            elif entry[2] in LogComparator.type3:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[0])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type1
            elif entry[2] in LogComparator.type1:
                self.rvfiDict['rs1_addr'].append(entry[4][: -1])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type4
            elif entry[2] in LogComparator.type4:
                self.rvfiDict['rs1_addr'].append(entry[4][entry[4].find('(') + 1: -1])
                self.rvfiDict['rs2_addr'].append(entry[3][: -1])

                if entry[2] in ('sb', 'sbu'):
                    width = 2
                
                elif entry[2] in ('sh', 'shu'):
                    width = 4

                else:
                    width = 8

                self.rvfiDict['mem_wdata'].append(entry[-1][2:].zfill(width))
                self.rvfiDict['mem_addr'].append(entry[-2][2:])
                self.rvfiDict['mem_rdata'].append('00000000')

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])
                #self.rvfiDict['rd_wdata'].append('00000000')

            # type5
            elif entry[2] in LogComparator.type5:
                self.rvfiDict['rs1_addr'].append(entry[4][entry[4].find('(') + 1: -1])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['mem_rdata'].append(entry[-3][2:].zfill(8))
                self.rvfiDict['mem_addr'].append(entry[-1][2:])
                self.rvfiDict['mem_wdata'].append('00000000')

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

            # type6
            elif entry[2] in LogComparator.type6:
                self.rvfiDict['rs1_addr'].append(entry[3][: -1])
                self.rvfiDict['rs2_addr'].append(entry[4][: -1])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])
                #self.rvfiDict['rd_wdata'].append('00000000')

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type7
            elif entry[2] in LogComparator.type7:
                if entry[2] == 'snez':
                    self.rvfiDict['rs1_addr'].append(LogComparator.gpr[0])
                    self.rvfiDict['rs2_addr'].append(entry[4][: -1])
                else:
                    self.rvfiDict['rs1_addr'].append(entry[4][: -1])
                    self.rvfiDict['rs2_addr'].append(entry[5])

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type8
            elif entry[2] in LogComparator.type8:
                self.rvfiDict['rs1_addr'].append(entry[3][: -1])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])
                #self.rvfiDict['rd_wdata'].append('00000000')

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type9
            elif entry[2] in LogComparator.type9:
                if entry[2] == 'ret':
                    self.rvfiDict['rs1_addr'].append(LogComparator.gpr[1])
                else:
                    self.rvfiDict['rs1_addr'].append(entry[3])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                if entry[2] == 'jalr':
                    self.rvfiDict['rd_addr'].append(LogComparator.gpr[1])
                else:
                    self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])
                #self.rvfiDict['rd_wdata'].append(hex(int(entry[0], 16) + 4)[2:0])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type 0
            elif entry[2] in LogComparator.type0:
                self.skipped.append(i)

            # type 10
            elif entry[2] in LogComparator.type10:

                if entry[2] == 'snez':
                    self.rvfiDict['rs1_addr'].append(LogComparator.gpr[0])
                    self.rvfiDict['rs2_addr'].append(entry[4])

                else:
                    self.rvfiDict['rs1_addr'].append(entry[4])
                    self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            elif entry[2] in LogComparator.type11:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[0])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            else:
                print(entry[2])

        if debug:
            self.getLog(interval=len(self.rvfiDict['insn']))
            self.getRVFI()

        return

    def coreLogExtract(self, filename):
        # Reading from file
        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        self.logList = [split(',', sub('\n', '', _)) for _ in logList]

        self.noOfInst = len(self.logList)
        #for _ in self.logList: print(_)

        # Extracting values
        print('Extracting core values...')
        for i in range(1, len(self.logList)):
            entry = self.logList[i]
        
            self.rvfiDict['insn'].append(entry[-5])
            #self.rvfiDict['mode'].append(entry[-4])

            self.rvfiDict['rs1_addr'].append(entry[2])
            self.rvfiDict['rs2_addr'].append(entry[4])

            self.rvfiDict['rd_addr'].append(entry[6])
            #self.rvfiDict['rd_wdata'].append(entry[7])

            self.rvfiDict['mem_addr'].append(entry[-3])
            self.rvfiDict['mem_rdata'].append(entry[-2])
            self.rvfiDict['mem_wdata'].append(entry[-1])

        return

    def ibexLogExtract(self, filename, debug=False):
        # Reading from file
        print('Reading Ibex log...')

        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        self.logList = [
            split(
                '\s+', sub('\n', '', logList[i])
            ) for i in range(1, len(logList))
        ]

        for i in range(len(self.logList)):
            self.logList[i][6] = self.logList[i][6].split(',')

        self.noOfInst = len(self.logList)

        # Extracting values
        print('Extracting Ibex values...')

        for i in range(len(self.logList)):
            entry = self.logList[i]

            if entry[5] not in LogComparator.type0:
                self.rvfiDict['insn'].append(entry[4])

            else:
                self.skipped.append(i)

            # type 1
            if entry[5] in LogComparator.type1:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][1][1:])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])
                #self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')
            
            # type 2
            elif entry[5] in LogComparator.type2:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[0])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type 3
            elif entry[5] in LogComparator.type3:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[0])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type 4
            elif entry[5] in LogComparator.type4:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][1][int(entry[6][1].find('(') + 2): -1])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append(entry[-3][entry[-3].find('0x') + 2:])
                self.rvfiDict['mem_rdata'].append('00000000')

                if entry[5] in ('sb', 'sbu'):
                    self.rvfiDict['mem_wdata'].append(entry[-2][entry[-2].find('0x') + 8:])

                elif entry[5] in ('sh, shu'):
                    self.rvfiDict['mem_wdata'].append(entry[-2][entry[-2].find('0x') + 6:])
                    
                else:
                    self.rvfiDict['mem_wdata'].append(entry[-2][entry[-2].find('0x') + 2:])

            # type 5
            elif entry[5] in LogComparator.type5:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][1][int(entry[6][1].find('(') + 2): -1])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append(entry[-2][entry[-2].find('0x') + 2:])
                self.rvfiDict['mem_wdata'].append('00000000')
                self.rvfiDict['mem_rdata'].append(entry[-3][entry[-3].find('0x') + 2:].zfill(8))

            # type 6
            elif entry[5] in LogComparator.type6:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[int(entry[6][1][1:])])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[0])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type 7
            elif entry[5] in LogComparator.type7:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][1][1:])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[int(entry[6][2][1:])])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type 8
            elif entry[5] in LogComparator.type8:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][1][entry[6][1].find('(') + 2: -1])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])
                
                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[-1][entry[-1].find('0x') + 2:])])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            elif entry[5] in LogComparator.type0:
                self.skipped.append(i)

            elif entry[5] in LogComparator.type9:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][1][entry[6][1].find('(') + 2: -1])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            else:
                print('{0}: {1}'.format(entry[5], entry))

        if debug:
            self.getLog(interval=len(self.rvfiDict['insn']))
            self.getRVFI()

        return

    def match(self, other, debug=False, quickMatch=False):
        # Check to see if the instruction length is the same
        if quickMatch == True:
            assert len(self.rvfiDict['insn']) == len(other.rvfiDict['insn']),\
                "Core output did not match"

        # Iterate through each RVFI parameter
        for _ in self.rvfiDict:

            for i in range(len(self.rvfiDict[_])):

                if self.rvfiDict[_][i] != other.rvfiDict[_][i]:

                    if debug == True:
                        print(f'Mismatch on line {i}.\n')

                        for k in self.rvfiDict:
                            print(
                                f'{k}\n'
                                f'In Spike: {self.rvfiDict[k][i]}\n'
                                f'In core log: {other.rvfiDict[k][i]}\n'
                            )

                    return False
        else:
            return True

    def debug(self, core):
        print('Dumping Spike test log...')
        # Dumping Spike test log
        with open('spikeTest.log', 'w', encoding='UTF-8') as f:
            f.write(f'Spike\n\n')

            for i in range(len(self.rvfiDict['insn'])):
                f.write(
                    'insn:{0}, rs1_addr:{1}, rs2_addr:{2}, rd_addr:{3}, mem_addr:{4}, mem_rdata:{5}, mem_wdata:{6}\n'.format(
                        self.rvfiDict['insn'][i],
                        self.rvfiDict['rs1_addr'][i],
                        self.rvfiDict['rs2_addr'][i],
                        self.rvfiDict['rd_addr'][i],
                        self.rvfiDict['mem_addr'][i],
                        self.rvfiDict['mem_rdata'][i],
                        self.rvfiDict['mem_wdata'][i]
                    )
                )

            f.write('\n')

        # Dumping core test log
        print('Dumping core test log...')
        with open('coreTest.log', 'w', encoding='UTF-8') as f:
            f.write(f'Core\n\n')

            for i in range(len(core.rvfiDict['insn'])):
                f.write(
                    'insn:{0}, rs1_addr:{1}, rs2_addr:{2}, rd_addr:{3}, mem_addr:{4}, mem_rdata:{5}, mem_wdata:{6}\n'.format(
                        core.rvfiDict['insn'][i],
                        core.rvfiDict['rs1_addr'][i],
                        core.rvfiDict['rs2_addr'][i],
                        core.rvfiDict['rd_addr'][i],
                        core.rvfiDict['mem_addr'][i],
                        core.rvfiDict['mem_rdata'][i],
                        core.rvfiDict['mem_wdata'][i]
                    )
                )

            f.write('\n')

        return

    def getRVFI(self):
        insn      = len(self.rvfiDict['insn'])
        rs1_addr  = len(self.rvfiDict['rs1_addr'])
        rs2_addr  = len(self.rvfiDict['rs2_addr'])
        rd_addr   = len(self.rvfiDict['rd_addr'])
        mem_addr  = len(self.rvfiDict['mem_addr'])
        mem_rdata = len(self.rvfiDict['mem_rdata'])
        mem_wdata = len(self.rvfiDict['mem_wdata'])

        print(
            'Some instructions are skipped\nNo. of instructions = {7}\ninsn = {0}\nrs1_addr = {1}\nrs2_addr = {2}\nrd_addr = {3}\nmem_addr = {4}\nmem_rdata = {5}\nmem_wdata = {6}\n'.format(
                insn,
                rs1_addr,
                rs2_addr,
                rd_addr,
                mem_addr,
                mem_rdata,
                mem_wdata,
                self.noOfInst
            )
        )

        return

    def getLog(self, interval=100):
        print('logList:')

        for i in range(interval):
            print(self.logList[i])

        return

    def locate(self, index):
        try:
            if index in self.skipped:
                print('This instruction was skipped')
                return

            else:
                return self.logList[index]

        except:
            print('No such parameter or index')

    def showSkipped(self):
        if self.skipped:
            [print(item) for item in self.skipped]

        else:
            print('None skipped')

        return


if __name__ == '__main__':
    spike = LogComparator()
    #core  = LogComparator()
    ibex  = LogComparator()

    #spike.spikeLogExtract('./fibonacci.log', ibex=True)
    #core.coreLogExtract('./trace.csv')
    spike.spikeLogExtract('./logs/simple_system_cosim.log', debug=False, ibex=True)
    ibex.ibexLogExtract('./logs/trace_core_00000000.log', debug=False)

    #spike.showSkipped()
    #print(spike.locate(423))
    #print(ibex.locate(423))

    if spike.match(ibex, debug=True):
         print('\nIbex output matched successfully')

    else:
         print('\nIbex output match failed')

    #spike.debug(ibex)
