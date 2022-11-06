def cleanELF(elfFile):
    file = open(elfFile)
    content = file.readlines()
    file.close()

    mainELF = []

    for i,line in enumerate(content):
       
        if "<main>:" in line:
            mainELF = content[i+1:]
            break

    hex = []
    asm = []
   
    for elf in mainELF:
     
        state1=elf.split(" ")
        if len(state1) >1 and "<" in  state1[1]:
            break
        stat= elf.split(" ")[0].split("\t") + [" ".join(elf.split(" ")[1:])]
       
        if stat[0] == "\n":
            pass
        else:
            pc,instr_hex,instr_asm = elf.split(" ")[0].split("\t") + [" ".join(elf.split(" ")[1:])]
            asm.append(instr_asm)
            if len(instr_hex) < 8:
                rest = 8 - len(instr_hex)
                zeroes = "0"*rest
                newHex = zeroes + instr_hex
                hex.append(newHex)
            else:
                hex.append(instr_hex) 

    return (hex, asm)

    # hexFile = open("machine.hex", "w+")
    # hexFile.write("\n".join(hex))
    # hexFile.close()

    # asmFile = open("assembly.S", "w+")
    # asmFile.write("\n".join(asm))
    # asmFile.close()
#a=cleanELF("/home/mano/kkkkkkk/riscv_arithmetic_basic_test.elf")