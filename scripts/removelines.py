import re
import os
import sys
lst_swerv=[]
lst_whipser=[]
#open file for read
def remove(swerv,whisper):
    f = open(whisper, 'r')
    remove_ecall=re.compile(r'[#][0-9]+[\s]+[0]+[\s]+[a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_]+[\s]+[e][c][a][l][l][\s]+[+][\s]+')
    #count no of  lines of file
    readi=f.readlines()
    for r in readi:
        if remove_ecall.search(r):
            pass
        else:
            lst_whipser.append(r)
    count=len(lst_whipser)
    print(count)
        


    #open file for read
    f = open(swerv, 'r')
    reading=f.readlines()


    extract=re.compile(r'[\s]+[a-zA-Z0-9_]+[=][a-zA-Z0-9_]+[\s]+[;][\s]+[n][b][D]')
    for i in reading:
        if extract.search(i):
            
            pass
        else:
            lst_swerv.append(i)
    f=open(swerv,'w')
    v=0
    #write only count no of lines in file from list
    for i in range(count):
        f.write(lst_swerv[i])
        v+=1
    f.close()
    print(v)
#remove("/home/mahnoor/burqnew/cores/swerv/riscv_arithmetic_basic_test_0/exec.log","/home/mahnoor/burqnew/cores/swerv/riscv_arithmetic_basic_test_0/riscv_arithmetic_basic_test_0.log")





      


