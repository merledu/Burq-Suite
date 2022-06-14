# 1 "/home/hshabbir/Vector-Extension/verification_codes/vvaddint8.s"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/home/hshabbir/Vector-Extension/verification_codes/vvaddint8.s"
# 16 "/home/hshabbir/Vector-Extension/verification_codes/vvaddint8.s"
# 1 "snapshots/default/defines.h" 1
# 17 "/home/hshabbir/Vector-Extension/verification_codes/vvaddint8.s" 2




.section .text
.global _start
_start:


     li x1, 0x5f555555
     csrw 0x7c0, x1
     li x3, 4
     csrw 0x7f9, x3

     li x1, 0xd0580000
     la a1, vector_data
     la a2, hw_data
     la a3, hw_data
     li x2, 0xd0580080

loop:
     lb x5, 0(a1)
     lb x6, 0(a2)
     add x7, x5, x6
     sb x7, 0(x1)
     addi a1, a1, 4
     addi a2, a2, 4
     addi x1, x1, 4
     blt x1, x2, loop
# 57 "/home/hshabbir/Vector-Extension/verification_codes/vvaddint8.s"
     addi a0, x0, 0x20
     li x1, 0xd0580000
     la a1, vector_data
     la a2, hw_data
     la a3, hw_data
vvaddint8:
    vsetvli t0, a0, e8,m1,tu,mu
    vle8.v v1, (a1)
    sub a0, a0, t0
    slli t0, t0, 2
    add a1, a1, t0
    vle8.v v2, (a2)
    add a2, a2, t0
    vadd.vv v3, v1, v2
    vse8.v v3, (x1)
    add a3, a3, t0
    bnez a0, vvaddint8



_finish:
    li x3, 0xd0580000
    addi x5, x0, 0xff
    sb x5, 0(x3)
    beq x0, x0, _finish
.rept 100
    nop
.endr


.data
vector_data:
.ascii "00 01 02 03 04 05 06 07 08 09\n"
.ascii "10 11 12 13 14 15 16 17 18 19\n"
.ascii "20 21 22 23 24 25 26 27 28 29\n"

hw_data:
.ascii "30 31 32 33 34 35 36 37 38 39\n"
.ascii "40 41 42 43 44 45 46 47 48 49\n"
.ascii "50 51 52 53 54 55 56 57 58 59\n"
.ascii "40 41 42 43 44 45 46 47 48 49\n"
.ascii "50 51 52 53 54 55 56 57 58 59\n"
.byte 0
