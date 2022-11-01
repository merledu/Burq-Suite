from re import sub, split

class LogComparator:
    # Types are distinguished by their parameters in the Spike log
    type1  = (  # Parameters: rd_addr, rs1_addr, rd_wdata, [imm leaves a comma in rs1_addr]
        'addi', 'andi', 'ori',  'xori', 'slli',
        'srli', 'srai', 'slti', 'sltiu'
    )
    type2  = ('j', 'jal', 'c.jal', 'c.j')  # Parameters: rd_addr, rd_wdata=PC+4
    type3  = ('li', 'auipc', 'lui', 'c.li')  # Parameters: rd_addr, rd_wdata
    type4  = (  # Parameters: Store instructions
        'sw',     'sbu', 'sb', 'sh', 'shu',
        'c.swsp', 'c.sw'
    )
    type5  = (  # Parameters: Load instructions
        'lbu',    'lw', 'lb', 'lh', 'lhu',
        'c.lwsp', 'c.lw'
    )
    type6  = (  # Parameters: rs1_addr, rs2_addr
        'bge', 'bgeu', 'beq', 'bne', 'blt',
        'bltu'
    )
    type7  = (  # Parameters: rd_addr, rs1_addr, rs2_addr, rd_wdata
        'add', 'sub',  'and',  'or',  'xor',
        'sll', 'slt',  'sltu', 'srl', 'sra',
        'mul', 'divu', 'remu'
    )
    type8  = (  # Parameters: rs1_addr, [imm leaves a comma in rs1_addr]
        'beqz', 'bnez',   'bltz', 'bgez', 'blez',
        'bgtz', 'c.bnez', 'c.beqz'
    )
    type9  = ('ret', 'jr', 'jalr')  # Parameters: rd_addr=zero/ra, rs1_addr, rd_wdata
    type0  = ('csrw', 'csrr', 'csrrw', 'csrrs', 'csrs')  # TODO: Need to add CSR support
    type10 = (  # Parameters: rd_addr, rs1_addr, rd_wdata, [no imm]
        'mv',   'not',  'seqz', 'snez', 'neg',
        'sltz', 'sgtz'
    )
    type11 = ('nop')  # Parameters: None
    type12 = ('wfi', 'mret')  # Parameters: exception
    type13 = ('c.addi', 'c.slli', 'c.addi16sp')  # Parameters: rd/rs1 [one register is given, both are the same]
    type14 = ('c.jr')  # Parameters: rs1_addr, [no imm]
    type15 = (  # Parameters: rd_addr, rs2_addr, rd_wdata
        'c.mv', 'c.add', 'c.and', 'c.xor', 'c.or',
        'c.sub'
    )

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

    zeroHex = '00000000'
    zero_addr = gpr[0]
    ra_addr = gpr[1]
    sp_addr = gpr[2]

    def __init__(self):
        self.rvfiDict = {
            'rs1_addr' : [],
            'rs2_addr' : [],
            #'rs1_rdata': [],  # rs1_rdata not shown in Spike log
            #'rs2_rdata': [],  # rs2_rdata not shown in Spike log
            'rd_addr'  : [],
            'rd_wdata' : [],
            'pc_rdata' : [],
            #'pc_wdata' : [],  # pc_wdata not shown in Spike log
            'insn'     : [],
            #'mode'     : [],  # mode not present in Ibex log
            'mem_addr' : [],
            'mem_rdata': [],
            'mem_wdata': []
        }
        self.noOfInst = 0
        self.logList = []
        self.skipped = []

    def spikeLogExtract(self, filename, debug=False):
        # Reading from file
        print('Reading Spike log...')

        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        startIndex = 12

        self.logList = [
                logList[i] for i in range(startIndex, len(logList)) if '>>>>' not in logList[i]
        ]
        self.logList = [
            sub(
                '\n', '',
                f'{self.logList[i][self.logList[i].find(":") + 2:]} {self.logList[i + 1][self.logList[i + 1].find(":") + 2:]}'
            ) for i in range(0, len(self.logList) - 1, 2)
        ]
        self.logList = [
            inst for inst in self.logList if ('exception' not in inst)
        ]
        self.logList = [split('\s+', _) for _ in self.logList]
        
        self.noOfInst = len(self.logList)

        # Extracting values
        print('Extracting Spike values...')

        for i in range(self.noOfInst):
            entry = self.logList[i]

            if (entry[2] not in type(self).type0) and (entry[2] not in type(self).type12):
                pc = entry[0][2:]

                self.rvfiDict['insn'].append(entry[1][3: -1])
                self.rvfiDict['pc_rdata'].append(pc)

            else:
                self.skipped.append(i)

            # type 0
            if entry[2] in type(self).type0 or entry[2] in type(self).type12:
                self.skipped.append(i)

            # type1
            elif entry[2] in type(self).type1:
                self.rvfiDict['rs1_addr'].append(entry[4][: -1])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type2
            elif entry[2] in type(self).type2:
                self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                if (entry[2] == 'j') or (entry[2] == 'c.j'):
                    self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                    self.rvfiDict['rd_wdata'].append(hex(int(pc, 16) + 4)[2:].zfill(8))

                elif entry[2] == 'c.jal':
                    self.rvfiDict['rd_addr'].append(type(self).ra_addr)
                    self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                else:
                    self.rvfiDict['rd_addr'].append(type(self).ra_addr)
                    self.rvfiDict['rd_wdata'].append(hex(int(pc, 16) + 4)[2:].zfill(8))

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type3
            elif entry[2] in type(self).type3:
                self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type4
            elif entry[2] in type(self).type4:
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
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

            # type5
            elif entry[2] in type(self).type5:
                rd_wdata = entry[-3][2:]

                self.rvfiDict['rs1_addr'].append(entry[4][entry[4].find('(') + 1: -1])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['mem_rdata'].append(rd_wdata)
                self.rvfiDict['mem_addr'].append(entry[-1][2:])
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                self.rvfiDict['rd_wdata'].append(rd_wdata)

            # type6
            elif entry[2] in type(self).type6:
                self.rvfiDict['rs1_addr'].append(entry[3][: -1])
                self.rvfiDict['rs2_addr'].append(entry[4][: -1])

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type7
            elif entry[2] in type(self).type7:
                self.rvfiDict['rs1_addr'].append(entry[4][: -1])
                self.rvfiDict['rs2_addr'].append(entry[5])

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type8
            elif entry[2] in type(self).type8:
                self.rvfiDict['rs1_addr'].append(entry[3][: -1])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type9
            elif entry[2] in type(self).type9:

                if entry[2] == 'ret':
                    self.rvfiDict['rs1_addr'].append(type(self).ra_addr)

                else:
                    self.rvfiDict['rs1_addr'].append(entry[3])

                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                if entry[2] == 'jalr':
                    self.rvfiDict['rd_addr'].append(type(self).ra_addr)

                else:
                    self.rvfiDict['rd_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_wdata'].append(hex(int(pc, 16) + 4)[2:].zfill(8))

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 10
            elif entry[2] in type(self).type10:

                if entry[2] == 'snez':
                    self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                    self.rvfiDict['rs2_addr'].append(entry[4])

                else:
                    self.rvfiDict['rs1_addr'].append(entry[4])
                    self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(entry[3][: -1])
                self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 11
            elif entry[2] in type(self).type11:
                self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 13
            elif entry[2] in type(self).type13:
                rd_addr = entry[3][: -1]

                self.rvfiDict['rs1_addr'].append(rd_addr)
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(rd_addr)
                self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 14
            elif entry[2] in type(self).type14:
                self.rvfiDict['rs1_addr'].append(entry[3])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 15
            elif entry[2] in type(self).type15:
                rd_addr = entry[3][: -1]

                if entry[2] == 'c.mv':
                    self.rvfiDict['rs1_addr'].append(type(self).zero_addr)

                else:
                    self.rvfiDict['rs1_addr'].append(rd_addr)
                self.rvfiDict['rs2_addr'].append(entry[4])

                self.rvfiDict['rd_addr'].append(rd_addr)
                self.rvfiDict['rd_wdata'].append(entry[-1][2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 16
            #elif entry[2] in type16:
            #    self.rvfiDict['rs1_addr'].append(entry[4][entry[4].find('(') + 1: -1])
            #    self.rvfiDict['rs2_addr'].append(entry[3][: -1])

            #    self.rvfiDict['rd_addr'].append(type(self).zero_addr)
            #    self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

            #    self.rvfiDict['mem_addr'].append(type())

            else:
                print('Unsupported Instructions:')
                print('{0}: {1}'.format(entry[2], entry))

        if debug:
            #self.getLog(interval=len(self.rvfiDict['insn']))
            self.getRVFI()

        return

    def coreLogExtract(self, filename, debug=False):
        # Reading from file
        print('Reading from core log')

        with open(filename, 'r', encoding='UTF-8') as f:
            logList = f.readlines()

        # Refining the log
        self.logList = [
            split(
                ',', sub('\n', '', logList[i])
            ) for i in range(1, len(logList))
        ]

        self.noOfInst = len(self.logList)

        # Extracting values
        print('Extracting core values...')

        for i in range(len(self.logList)):
            entry = self.logList[i]
        
            self.rvfiDict['pc_rdata'].append(entry[0])

            self.rvfiDict['insn'].append(entry[-5])
            #self.rvfiDict['mode'].append(entry[-4])

            self.rvfiDict['rs1_addr'].append(entry[2])
            self.rvfiDict['rs2_addr'].append(entry[4])

            self.rvfiDict['rd_addr'].append(entry[6])
            self.rvfiDict['rd_wdata'].append(entry[7])

            self.rvfiDict['mem_addr'].append(entry[-3])
            self.rvfiDict['mem_rdata'].append(entry[-2])
            self.rvfiDict['mem_wdata'].append(entry[-1])

        if debug:
            #self.getLog()
            self.getRVFI()

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
            ) for i in range(1, len(logList)) if 'mret' not in logList[i]
        ]

        for i in range(len(self.logList)):
            self.logList[i][6] = self.logList[i][6].split(',')

        self.noOfInst = len(self.logList)

        # Extracting values
        print('Extracting Ibex values...')

        for i in range(self.noOfInst):
            entry = self.logList[i]

            if entry[5] not in type(self).type0:
                self.rvfiDict['insn'].append(entry[4].zfill(8))
                self.rvfiDict['pc_rdata'].append(entry[3])

            else:
                self.skipped.append(i)

            # type 1
            if entry[5] in type(self).type1:
                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][1][1:])])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)
            
            # type 2
            elif entry[5] in type(self).type2:
                self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                if entry[5] == 'c.jal':
                    self.rvfiDict['rd_addr'].append(type(self).ra_addr)

                elif entry[5] == 'c.j':
                    self.rvfiDict['rd_addr'].append(type(self).zero_addr)

                else:
                    self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])

                if entry[5] == 'c.j':
                    self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                else:
                    self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 3
            elif entry[5] in type(self).type3:
                self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 4
            elif entry[5] in type(self).type4:
                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][1][int(entry[6][1].find('(') + 2): -1])])
                self.rvfiDict['rs2_addr'].append(type(self).gpr[int(entry[6][0][1:])])

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(entry[-3][entry[-3].find('0x') + 2:])
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)

                if entry[5] in ('sb', 'sbu'):
                    self.rvfiDict['mem_wdata'].append(entry[-2][entry[-2].find('0x') + 8:])

                elif entry[5] in ('sh, shu'):
                    self.rvfiDict['mem_wdata'].append(entry[-2][entry[-2].find('0x') + 6:])
                    
                else:
                    self.rvfiDict['mem_wdata'].append(entry[-2][entry[-2].find('0x') + 2:])

            # type 5
            elif entry[5] in type(self).type5:
                mem_rdata = entry[-3][entry[-3].find('0x') + 2:].zfill(8)

                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][1][int(entry[6][1].find('(') + 2): -1])])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rd_wdata'].append(mem_rdata)

                self.rvfiDict['mem_addr'].append(entry[-2][entry[-2].find('0x') + 2:])
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(mem_rdata)

            # type 6
            elif entry[5] in type(self).type6:
                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rs2_addr'].append(type(self).gpr[int(entry[6][1][1:])])

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 7
            elif entry[5] in type(self).type7:
                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][1][1:])])
                self.rvfiDict['rs2_addr'].append(type(self).gpr[int(entry[6][2][1:])])

                self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 8
            elif entry[5] in type(self).type8:
                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)
                
                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            elif entry[5] in type(self).type0 or entry[5] in type(self).type12:
                self.skipped.append(i)

            # type 9
            elif entry[5] in type(self).type9:
                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][1][entry[6][1].find('(') + 2: -1])])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 10
            elif entry[5] in type(self).type10:
                self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                self.rvfiDict['rs2_addr'].append(type(self).gpr[int(entry[6][1][1:])])

                self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 13
            elif entry[5] in type(self).type13:
                rd_addr = type(self).gpr[int(entry[6][0][1:])]

                self.rvfiDict['rs1_addr'].append(rd_addr)
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(rd_addr)
                self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 14
            elif entry[5] in type(self).type14:
                self.rvfiDict['rs1_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rs2_addr'].append(type(self).zero_addr)

                self.rvfiDict['rd_addr'].append(type(self).zero_addr)
                self.rvfiDict['rd_wdata'].append(type(self).zeroHex)

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            # type 15
            elif  entry[5] in type(self).type15:
                self.rvfiDict['rs1_addr'].append(type(self).zero_addr)
                self.rvfiDict['rs2_addr'].append(type(self).gpr[int(entry[6][1][1:])])

                self.rvfiDict['rd_addr'].append(type(self).gpr[int(entry[6][0][1:])])
                self.rvfiDict['rd_wdata'].append(entry[-1][entry[-1].find('0x') + 2:])

                self.rvfiDict['mem_addr'].append(type(self).zeroHex)
                self.rvfiDict['mem_rdata'].append(type(self).zeroHex)
                self.rvfiDict['mem_wdata'].append(type(self).zeroHex)

            else:
                print('Unsupported instruction:')
                print('{0}: {1}'.format(entry[5], entry))

        if debug:
            #self.getLog(interval=len(self.rvfiDict['insn']))
            self.getRVFI()

        return

    def match(self, other, debug=False, quickMatch=False, dump=False):
        # Check to see if the instruction length is the same
        if quickMatch == True:
            assert len(self.rvfiDict['insn']) == len(other.rvfiDict['insn']),\
                "Core output did not match"

        # Iterate through each RVFI parameter
        for _ in self.rvfiDict:

            for i in range(len(self.rvfiDict[_])):

                if self.rvfiDict[_][i] != other.rvfiDict[_][i]:

                    if debug:
                        print(f'Mismatch on line {i + 1}.\n')

                        for k in self.rvfiDict:
                            print(
                                f'{k}\n'
                                f'In Spike: {self.rvfiDict[k][i]}\n'
                                f'In core log: {other.rvfiDict[k][i]}\n'
                            )

                    if dump:
                        with open('compareFail.log', 'w', encoding='UTF-8') as f:
                            f.write('Mismatch on line {0}\n'.format(i + 1))
                            for k in self.rvfiDict:
                                f.write(
                                    f'{k}\n'
                                    f'In Spike: {self.rvfiDict[k][i]}\n'
                                    f'In core log: {other.rvfiDict[k][i]}\n\n'
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
                        'insn:{0}, pc_rdata:{7}, rs1_addr:{1}, rs2_addr:{2}, rd_addr:{3}, rd_wdata:{8}, mem_addr:{4}, mem_rdata:{5}, mem_wdata:{6}\n'.format(
                        self.rvfiDict['insn'][i],
                        self.rvfiDict['rs1_addr'][i],
                        self.rvfiDict['rs2_addr'][i],
                        self.rvfiDict['rd_addr'][i],
                        self.rvfiDict['mem_addr'][i],
                        self.rvfiDict['mem_rdata'][i],
                        self.rvfiDict['mem_wdata'][i],
                        self.rvfiDict['pc_rdata'][i],
                        self.rvfiDict['rd_wdata'][i],
                    )
                )

            f.write('\n')

        # Dumping core test log
        print('Dumping core test log...')
        with open('coreTest.log', 'w', encoding='UTF-8') as f:
            f.write(f'Core\n\n')

            for i in range(len(core.rvfiDict['insn'])):
                f.write(
                    'insn:{0}, pc_rdata:{7}, rs1_addr:{1}, rs2_addr:{2}, rd_addr:{3}, rd_wdata:{8}, mem_addr:{4}, mem_rdata:{5}, mem_wdata:{6}\n'.format(
                        core.rvfiDict['insn'][i],
                        core.rvfiDict['rs1_addr'][i],
                        core.rvfiDict['rs2_addr'][i],
                        core.rvfiDict['rd_addr'][i],
                        core.rvfiDict['mem_addr'][i],
                        core.rvfiDict['mem_rdata'][i],
                        core.rvfiDict['mem_wdata'][i],
                        core.rvfiDict['pc_rdata'][i],
                        core.rvfiDict['rd_wdata'][i],
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
        pc_rdata  = len(self.rvfiDict['pc_rdata'])
        rd_wdata  = len(self.rvfiDict['rd_wdata'])

        print(
            'Some instructions are skipped\nNo. of instructions = {7}\ninsn = {0}\npc_rdata = {8}\nrs1_addr = {1}\nrs2_addr = {2}\nrd_addr = {3}\nrd_wdata = {9}\nmem_addr = {4}\nmem_rdata = {5}\nmem_wdata = {6}\n'.format(
                insn,
                rs1_addr,
                rs2_addr,
                rd_addr,
                mem_addr,
                mem_rdata,
                mem_wdata,
                self.noOfInst,
                pc_rdata,
                rd_wdata
            )
        )

        return

    def getLog(self, interval=10):
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

            for item in self.skipped:
                print(item)

        else:
            print('None skipped')

        return


if __name__ == '__main__':
    spike = LogComparator()
    #xodus = LogComparator()
    #ibex  = LogComparator()
    nucleusrv = LogComparator()

    core = nucleusrv

    spike.spikeLogExtract('./Test.log', debug=True)
    core.coreLogExtract('./trace.csv', debug=True)
    # spike.spikeLogExtract('./logs/cosimspike.log', debug=False)
    # core.ibexLogExtract('./logs/cosimibex.log', debug=False)
    # spike.spikeLogExtract('/home/mano/burq/cores/ibex/examples/sw/simple_system/towers/towers.log', debug=False)
    # core.ibexLogExtract('/home/mano/burq/cores/ibex/trace_core_00000000.log', debug=False)

    #spike.showSkipped()
    
    #print(spike.locate(7))
    #print(core.locate(368))

    if spike.match(core, debug=True, dump=False):
         print('\nCore output matched successfully')

    else:
         print('\nCore output match failed')

    #spike.debug(ibex)
