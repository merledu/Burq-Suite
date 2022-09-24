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

    rvfiParams = ('insn', 'mode', 'rs1_addr', 'rs2_addr', 'rd_addr', 'rd_wdata', 'mem_addr', 'mem_rdata', 'mem_wdata')

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
            'mode'     : [],
            'mem_addr' : [],
            'mem_rdata': [],
            'mem_wdata': []
        }
        self.logList = []

    def spikeLogExtract(self, filename, debug=False):
        # File should be a .log file
        assert filename[-4:] == '.log',\
            "File is not a .log file"

        # Reading from file
        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Converting the two line instructions into a single element list
        logList = [logList[i] for i in range(11, len(logList))]
        logList = [
            sub('\n', '', f'{logList[i][logList[i].find(":") + 2:]} {logList[i + 1][logList[i + 1].find(":") + 2:]}') for i in range(0, len(logList) - 1, 2)
        ]
        self.logList = [split('\s+', _) for _ in logList]
        self.logList = [_ for _ in self.logList if _[0] != 'exception']

        #for _ in self.logList: print(_)

        # Extracting values
        for i in range(len(self.logList)):
            entry = self.logList[i]

            self.rvfiDict['insn'].append(entry[1][3: -1])
            self.rvfiDict['mode'].append('3')

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

        #print(self.rvfiDict)
        if debug == True:
            with open('./spikeTest.txt', 'w', encoding='UTF-8') as f:
                for k in self.rvfiDict:
                    for i in range(len(k)):
                        f.write(f'{k}:')
                        f.writelines(self.rvfiDict[k])
                        f.write('\n')

    def coreLogExtract(self, filename):
        # File should be a .csv file
        assert filename[-4:] == '.csv',\
            "File is not a .csv file"

        # Reading from file
        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        self.logList = [split(',', sub('\n', '', _)) for _ in logList]
        #for _ in self.logList:print(_)

        # Extracting values
        for i in range(1, len(self.logList)):
            entry = self.logList[i]
        
            self.rvfiDict['insn'].append(entry[-5])
            self.rvfiDict['mode'].append(entry[-4])

            self.rvfiDict['rs1_addr'].append(entry[2])
            self.rvfiDict['rs2_addr'].append(entry[4])

            self.rvfiDict['rd_addr'].append(entry[6])
            #self.rvfiDict['rd_wdata'].append(entry[7])

            self.rvfiDict['mem_addr'].append(entry[-3])
            self.rvfiDict['mem_rdata'].append(entry[-2])
            self.rvfiDict['mem_wdata'].append(entry[-1])

        #print(self.rvfiDict)

    def match(self, other, debug = False):
        # Check to see if the program length is the same
        assert len(self.rvfiDict['insn']) == len(other.rvfiDict['insn']),\
            "Core output did not match"

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

    def debug(self, other, enable = True):
        if enable != True:
            return

        print('Spike:')
        for i in range(len(self.rvfiDict['insn'])):
            print(f"line {i}: {self.rvfiDict['insn'][i]}")

        print('\nCore:')
        for i in range(len(other.rvfiDict['insn'])):
            print(f"line {i}: {self.rvfiDict['insn'][i]}")

    def __len__(self):
        for i in range(1, len(LogComparator.rvfiParams)):
            if len(self.rvfiDict[LogComparator.rvfiParams[0]]) != len(self.rvfiDict[LogComparator.rvfiParams[i]]):
                print('Values not extracted correctly')
                return None
        return len(self.rvfiDict['insn'])

    def debug2(self, other):
        limit = 0
        print(f'Spike\tCore\n')
        for k in self.rvfiDict:
            print(f'{k}\t {k}\n')
            for i in range(len(self.rvfiDict['insn'])):
                print(f'{self.rvfiDict[k][i]}\t{other.rvfiDict[k][i]}')
            else:
                print('\n')
            limit += 1
            if limit == 5: return

    #def tempDebug(self, other):
    #    print(self.rvfiDict['rd_wdata'][7])
    #    print(other.rvfiDict['rd_wdata'][7])

if __name__ == '__main__':
    spike = LogComparator()
    core  = LogComparator()

    spike.spikeLogExtract('./fibonacci.log')
    core.coreLogExtract('./trace.csv')

    #print(spike.rvfiDict['insn'])
    #print(core.rvfiDict['insn'])
    #spike.debug(core)

    #spike.debug2(core)

    if spike.match(core, debug = True):
         print('\nCore output matched successfully')
    else:
         print('\nCore output match failed')
