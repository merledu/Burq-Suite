addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li a5,3
sw a5,-28(s0)
li a5,1
sw a5,-20(s0)
li a5,1
sw a5,-20(s0)
j 10088 <main+0x34>
lw a4,-24(s0)
lw a5,-20(s0)
mul a5,a4,a5
sw a5,-24(s0)
lw a5,-20(s0)
addi a5,a5,1
sw a5,-20(s0)
lw a4,-20(s0)
li a5,10
bge a5,a4,1006e <main+0x1a>
li a5,0
mv a0,a5
lw s0,28(sp)
addi sp,sp,32
ret
