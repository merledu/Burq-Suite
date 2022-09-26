from re import sub, split

class LogComparator:
    # Types are distinguished by their parameters in the Spike log
    type1  = ('addi', 'andi', 'ori', 'xori', 'slli', 'srli', 'srai', 'slti', 'sltiu', 'not', 'seqz')
    type2  = ('j', 'jal')
    type3  = ('li', 'auipc', 'lui')
    type4  = ('sw', 'sbu', 'sb', 'sh', 'shu')
    type5  = ('lbu', 'lw', 'lb', 'lh', 'lhu')
    type6  = ('bge', 'bgeu', 'beq', 'bne', 'blt', 'bltu')
    type7  = ('add', 'sub', 'and', 'or', 'xor', 'sll', 'slt', 'sltu', 'srl', 'sra', 'mul', 'divu', 'snez', 'remu')
    type8  = ('beqz', 'bnez', 'bltz', 'bgez')
    type9  = ('ret', 'jr', 'jalr')
    type0  = ('csrw', 'csrr')
    type10 = ('mv')
    type11 = ('nop')

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
        self.logList = []

    def spikeLogExtract(self, filename, debug=False):
        # Reading from file
        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        logList = [logList[i] for i in range(11, len(logList))]
        logList = [
            sub(
                '\n', '',
                f'{logList[i][logList[i].find(":") + 2:]} {logList[i + 1][logList[i + 1].find(":") + 2:]}'
            ) for i in range(0, len(logList) - 1, 2)
        ]
        self.logList = [split('\s+', _) for _ in logList]
        self.logList = [_ for _ in self.logList if _[0] != 'exception']

        # Extracting values
        for i in range(len(self.logList)):
            entry = self.logList[i]

            self.rvfiDict['insn'].append(entry[1][3: -1])
            #self.rvfiDict['mode'].append('3')

            # type2
            if entry[2] in LogComparator.type2:
                self.rvfiDict['rs1_addr'].append('zero')
                self.rvfiDict['rs2_addr'].append('zero')

                if entry[2] == 'j':
                    self.rvfiDict['rd_addr'].append('zero')
                else:
                    self.rvfiDict['rd_addr'].append('ra')
                #self.rvfiDict['rd_wdata'].append(hex(int(entry[0], 16) + 4)[2:0])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type3
            elif entry[2] in LogComparator.type3:
                self.rvfiDict['rs1_addr'].append('zero')

                self.rvfiDict['rs2_addr'].append('zero')

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type1
            elif entry[2] in LogComparator.type1:
                self.rvfiDict['rs1_addr'].append(entry[4][: -1])
                self.rvfiDict['rs2_addr'].append('zero')

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type4
            elif entry[2] in LogComparator.type4:
                self.rvfiDict['rs1_addr'].append(entry[4][entry[4].find('(') + 1: -1])
                self.rvfiDict['rs2_addr'].append(entry[3][: -1])

                self.rvfiDict['mem_wdata'].append(entry[-1][2:])
                self.rvfiDict['mem_addr'].append(entry[-2][2:])
                self.rvfiDict['mem_rdata'].append('00000000')

                self.rvfiDict['rd_addr'].append('zero')
                #self.rvfiDict['rd_wdata'].append('00000000')

            # type5
            elif entry[2] in LogComparator.type5:
                self.rvfiDict['rs1_addr'].append(entry[4][entry[4].find('(') + 1: -1])
                self.rvfiDict['rs2_addr'].append('zero')

                self.rvfiDict['mem_rdata'].append(entry[-3][2:])
                self.rvfiDict['mem_addr'].append(entry[-1][2:])
                self.rvfiDict['mem_wdata'].append('00000000')

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

            # type6
            elif entry[2] in LogComparator.type6:
                self.rvfiDict['rs1_addr'].append(entry[3][: -1])
                self.rvfiDict['rs2_addr'].append(entry[4][: -1])

                self.rvfiDict['rd_addr'].append('zero')
                #self.rvfiDict['rd_wdata'].append('00000000')

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type7
            elif entry[2] in LogComparator.type7:
                if entry[2] == 'snez':
                    self.rvfiDict['rs1_addr'].append('zero')
                    self.rvfiDict['rs2_addr'].append(entry[4][: -1])
                else:
                    self.rvfiDict['rs1_addr'].append(entry[4][: -1])
                    self.rvfiDict['rs2_addr'].append(entry[5])

                self.rvfiDict['rd_addr'].append(entry[3][:-1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type8
            elif entry[2] in LogComparator.type8:
                self.rvfiDict['rs1_addr'].append(entry[3][: -1])
                self.rvfiDict['rs2_addr'].append('zero')

                self.rvfiDict['rd_addr'].append('zero')
                #self.rvfiDict['rd_wdata'].append('00000000')

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type9
            elif entry[2] in LogComparator.type9:
                if entry[2] == 'ret':
                    self.rvfiDict['rs1_addr'].append('ra')
                else:
                    self.rvfiDict['rs1_addr'].append(entry[3])
                self.rvfiDict['rs2_addr'].append('zero')

                if entry[2] == 'jalr':
                    self.rvfiDict['rd_addr'].append('ra')
                else:
                    self.rvfiDict['rd_addr'].append('zero')
                #self.rvfiDict['rd_wdata'].append(hex(int(entry[0], 16) + 4)[2:0])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            # type0
            elif entry[2] in LogComparator.type0:
                continue

            elif entry[2] in LogComparator.type10:
                self.rvfiDict['rs1_addr'].append(entry[4])
                self.rvfiDict['rs2_addr'].append('zero')

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                #self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

            elif entry[2] in LogComparator.type11:
                self.rvfiDict['rs1_addr'].append('zero')
                self.rvfiDict['rs2_addr'].append('zero')

                self.rvfiDict['rd_addr'].append('zero')

                self.rvfiDict['mem_addr'].append('00000000')
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append('00000000')

        return

    def coreLogExtract(self, filename):
        # Reading from file
        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        self.logList = [split(',', sub('\n', '', _)) for _ in logList]
        #for _ in self.logList: print(_)

        # Extracting values
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

    def ibexLogExtract(self, filename):
        # Reading from file
        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        self.logList = [split('\s+', sub('\n', '', _)) for _ in logList]
        for i in range(1, len(self.logList)):
            self.logList[i][6] = self.logList[i][6].split(',')

        # Extracting values
        for i in range(1, len(self.logList)):
            entry = self.logList[i]

            self.rvfiDict['insn'].append(entry[4])

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
                self.rvfiDict['mem_wdata'].append(entry[-2][entry[-2].find('0x') + 2:])

            # type 5
            elif entry[5] in LogComparator.type5:
                self.rvfiDict['rs1_addr'].append(LogComparator.gpr[int(entry[6][1][int(entry[6][1].find('(') + 2): -1])])
                self.rvfiDict['rs2_addr'].append(LogComparator.gpr[0])

                self.rvfiDict['rd_addr'].append(LogComparator.gpr[int(entry[6][0][1:])])
                #self.rvfiDict['rd_wdata'].append()

                self.rvfiDict['mem_addr'].append(entry[-2][entry[-2].find('0x') + 2:])
                self.rvfiDict['mem_rdata'].append('00000000')
                self.rvfiDict['mem_wdata'].append(entry[-3][entry[-3].find('0x') + 2:])

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

        return

    def match(self, other, debug=False, quickMatch=False):
        # Check to see if the program length is the same
        if quickMatch == True:
            assert len(self.rvfiDict['insn']) == len(other.rvfiDict['insn']),\
                "Core output did not match"

        #if debug == True:
        #    with open('compare.log', 'w', encoding='UTF-8') as f:
        #        f.write(f'{0:15}{1}\n\n'.format('Spike', 'Core'))

        #        for k in LogComparator.rvfiParams:
        #            f.write('{0}\n'.format(k))
        #            print(len(self.rvfiDict[k]))
        #            print(len(other.rvfiDict[k]))

        #            if len(self.rvfiDict[k]) >= len(other.rvfiDict[k]):
        #                maxInstLen = len(self.rvfiDict[k])
        #                minInstLen = len(other.rvfiDict[k])

        #            else:
        #                maxInstLen = len(other.rvfiDict[k])
        #                minInstLen = len(self.rvfiDict[k])

        #            for i in range(minInstLen):
        #                f.write('{0:15}{1}\n'.format(k[i], other.rvfiDict[k][i]))

        #            for i in range(minInstLen, minInstLen + (maxInstLen - minInstLen)):
        #                if len(self.rvfiDict[k]) >= len(other.rvfiDict[k]):
        #                    f.write(f'{0:15}\n'.format(k[i]))

        #                else:
        #                    f.write(f'{" " * 15}{0}\n'.format(other.rvfiDict[k][i]))
        #            
        #            f.write('\n')

        # Iterate through each RVFI parameter
        for _ in self.rvfiDict:
            #print(f'\n{_}\n')
            for i in range(len(self.rvfiDict[_])):
                #print(self.rvfiDict[_][i], other.rvfiDict[_][i])
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
        # Dumping Spike test log
        with open('spikeTest.log', 'w', encoding='UTF-8') as f:
            f.write(f'Spike\n\n')

            for k in LogComparator.rvfiParams:
                f.write('{0}\n'.format(k))

                for i in range(len(self.rvfiDict[k])):
                    f.write('{0}: {1}\n'.format(i + 1, self.rvfiDict[k][i]))

                f.write('\n')

        # Dumping core test log
        with open('coreTest.log', 'w', encoding='UTF-8') as f:
            f.write(f'Core\n\n')

            for k in LogComparator.rvfiParams:
                f.write('{0}\n'.format(k))

                for i in range(len(core.rvfiDict[k])):
                    f.write('{0}: {1}\n'.format(i + 1, core.rvfiDict[k][i]))

                f.write('\n')

        return

if __name__ == '__main__':
    spike = LogComparator()
    core  = LogComparator()
    #ibex  = LogComparator()

    #spike.spikeLogExtract('./logs/simple_system_cosim.log')
    spike.spikeLogExtract('./fibonacci.log')
    core.coreLogExtract('./trace.csv')
    #ibex.ibexLogExtract('./logs/trace_core_00000000.log')
    #ibex.ibexLogExtract('../6/ibex.log')

    if spike.match(core, debug=True):
         print('\nCore output matched successfully')
    else:
         print('\nCore output match failed')

    #spike.debug(ibex)
