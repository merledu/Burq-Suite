addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li a5,6
sw a5,-20(s0)
li a5,2
sw a5,-24(s0)
lw a4,-20(s0)
lw a5,-24(s0)
add a5,a5,a4
sw a5,-28(s0)
nop
lw s0,28(sp)
addi sp,sp,32
ret
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li a5,6
sw a5,-20(s0)
li a5,2
sw a5,-24(s0)
lw a4,-20(s0)
lw a5,-24(s0)
add a5,a5,a4
sw a5,-28(s0)
nop
lw s0,28(sp)
addi sp,sp,32
ret
