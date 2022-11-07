# 0 "/home/mahnoor/burqnew/cores/swerv/testbench/tests/riscv_arithmetic_basic_test_0/riscv_arithmetic_basic_test_0.s"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/mahnoor/burqnew/cores/swerv/testbench/tests/riscv_arithmetic_basic_test_0/riscv_arithmetic_basic_test_0.s"
.include "user_define.h"
.globl _start
.section .text
_start:
                  .include "user_init.s"
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x31, h0_start
jalr x0, x31, 0
h0_start:
                  li x29, 0x40001104
                  csrw 0x301, x29
kernel_sp:
                  la x30, kernel_stack_end

trap_vec_init:
                  la x29, mtvec_handler
                  ori x29, x29, 0
                  csrw 0x305, x29 # MTVEC

mepc_setup:
                  la x29, init
                  csrw 0x341, x29

init_machine_mode:
                  li x29, 0x1800
                  csrw 0x300, x29 # MSTATUS
                  li x29, 0x0
                  csrw 0x304, x29 # MIE
                  mret
init:
                  li x0, 0xf
                  li x1, 0xd0734260
                  li x2, 0x0
                  li x3, 0x80000000
                  li x4, 0x80000000
                  li x5, 0xf
                  li x6, 0x29c09052
                  li x7, 0x80000000
                  li x8, 0xd
                  li x9, 0xad9ae355
                  li x10, 0x0
                  li x11, 0x0
                  li x12, 0xe6209261
                  li x13, 0x80000000
                  li x14, 0xfeff9f61
                  li x15, 0x80000000
                  li x16, 0xc
                  li x17, 0xbe6574f8
                  li x18, 0xe4a49e54
                  li x19, 0x3
                  li x20, 0x3
                  li x21, 0x80000000
                  li x22, 0x8880bc0f
                  li x23, 0xf1878f19
                  li x24, 0x80000000
                  li x25, 0x7
                  li x27, 0xf7e05637
                  li x28, 0x3
                  li x29, 0xf
                  li x31, 0x80000000
                  la x26, user_stack_end
main: li s5, 0x1 #start riscv_int_numeric_corner_stream_1
                  li t4, 0x1
                  li t3, 0x18ccff4b
                  li s9, 0x522678ec
                  li s11, 0x0
                  li a2, 0x0
                  li tp, 0x3d8713e4
                  li s8, 0x1
                  li a6, 0x1
                  li s4, 0x0
                  mulh t3, s2, a1
                  mulh a0, t6, t6
                  add s1, a3, a1
                  mulhu s0, a4, a2
                  div t4, a2, s11
                  c.addi16sp sp, 160
                  c.addi4spn a3, sp, 576
                  c.addi a0, 20
                  c.add s5, t6
                  rem a2, s10, a6
                  c.nop
                  c.mv s0, s1
                  c.mv s5, t4
                  add t3, s10, s7
                  add tp, a7, a0 #end riscv_int_numeric_corner_stream_1
                  li t4, 0x0 #start riscv_int_numeric_corner_stream_9
                  li t3, 0x1
                  li s9, 0x38e29fbd
                  li a3, 0x0
                  li a2, 0x7b7814e3
                  li a1, 0x0
                  li sp, 0x0
                  li s8, 0x432db64e
                  li a6, 0x0
                  li s11, 0x0
                  c.addi16sp sp, -16
                  c.nop
                  c.addi sp, 31
                  c.lui t1, 31
                  c.add s4, s9
                  auipc s7, 285685
                  lui zero, 533592
                  c.sub a2, a3
                  addi s5, tp, -261
                  add s7, a6, a2
                  c.li ra, 2
                  nop
                  div t3, s0, t1
                  lui s3, 21338
                  auipc s9, 675822
                  addi a7, a3, -795
                  sub ra, t4, gp
                  mulhsu s4, t2, s10
                  mul ra, tp, s7
                  c.addi4spn a3, sp, 832
                  li t4, 0x0 #start riscv_int_numeric_corner_stream_10
                  li a4, 0x0
                  li t3, 0x0
                  li s11, 0x0
                  li a1, 0x0
                  li t2, 0x45a77481
                  li s3, 0x0
                  li s9, 0x0
                  li s7, 0x1
                  li t1, 0x299770e3
                  c.nop
                  mulhsu s11, s5, s10
                  c.addi16sp sp, 336
                  div t4, zero, s11
                  addi s8, s0, 1448
                  c.addi s9, 23
                  c.mv s2, s1
                  lui t0, 345167
                  nop
                  c.nop
                  c.sub a3, a3
                  c.add gp, s6
                  div ra, s2, t4
                  div s1, s11, s9
                  nop
                  c.addi a0, 9
                  mulhsu t3, a7, a4
                  divu a4, t2, a1
                  c.nop
                  c.li t0, 7
                  slti a4, a7, -32
                  andi a4, sp, -1884
                  srl a1, ra, a1
                  c.or a3, a3
                  nop
                  rem s9, t2, s0
                  mulhu tp, a7, s2
                  sra s3, s8, tp
                  c.andi a1, -1
                  xori tp, gp, 9
                  srli sp, t4, 31
                  slli a1, zero, 9
                  c.addi4spn a3, sp, 896
                  div s7, a3, t2
                  c.xor a0, a3
                  slt t3, s8, a7
                  slt t0, a4, t4
                  andi s3, a0, -1980
                  xori s11, s6, 789
                  c.addi16sp sp, 208
                  slli s4, s7, 27
                  divu s11, t6, s9
                  lui a7, 46611
                  c.or a3, a3
                  sub a2, s4, tp
                  mul sp, t5, t0
                  mulh s3, t3, s4
                  lui gp, 717184
                  c.xor a2, a3
                  srai ra, a1, 20
                  divu zero, t3, s5
                  ori t0, s9, -1922
                  slli t2, a3, 7
                  mul a7, s11, zero
                  srl a3, a5, a5
                  c.addi16sp sp, -16
                  c.lui a6, 23
                  div zero, s8, t5
                  srl s1, s4, s4
                  sltu a1, t6, t6
                  mul t0, s7, s2
                  c.lui s0, 29
                  nop
                  slli s11, a7, 22
                  ori a3, s6, -28
                  mulhsu s11, t0, t3
                  srl s5, sp, s8
                  add s11, t2, gp
                  srai t2, s8, 23
                  c.or a3, a3
                  c.srai a3, 28
                  sltiu gp, a4, -1523
                  xori zero, gp, -1602
                  c.sub a3, a0
                  mulhu s9, s10, a4
                  c.addi16sp sp, 240
                  c.sub a3, a0
                  c.and a0, a0
                  ori t0, tp, -1920
                  sll a7, t4, a7
                  add a5, t2, t1
                  andi s1, a2, -1003
                  mulhu s3, a1, s6
                  xori zero, s7, -1761
                  sll a0, ra, a0
                  c.or a2, a3
                  sltiu t4, a4, -1142
                  c.and a3, a3
                  c.and a3, a3
                  srli s5, sp, 7
                  c.xor a3, a2
                  c.xor s0, a3
                  lui s5, 51344
                  mul s4, t1, sp
                  divu s5, t1, a7
                  xori t1, t0, 451
                  c.li t2, 18
                  nop
                  c.addi4spn a3, sp, 992
                  srai sp, a6, 11
                  c.mv s8, s11
                  rem s5, s11, zero
                  mul a5, tp, sp
                  rem s3, a7, t0
                  c.add ra, t2
                  andi gp, t1, -110
                  lui tp, 554906
                  c.lui a6, 18
                  or gp, t6, t6
                  mul s1, gp, s8
                  divu a2, s1, a2
                  divu zero, gp, tp
                  sub zero, a6, s4
                  c.mv a3, s6
                  nop
                  mulhsu gp, s0, a5
                  and t1, s0, s2
                  c.nop
                  c.li s8, -1
                  mulh t1, a2, s8
                  srli a3, t0, 13
                  sra s1, a5, a6
                  c.add s6, s3
                  c.and a3, a3
                  c.lui s1, 25
                  c.add s3, s5
                  and s5, s9, s3
                  or zero, a3, s10
                  c.lui s0, 22
                  c.add s4, gp
                  c.or a3, a3
                  andi s7, a1, -1675
                  srai s8, a3, 11
                  lui s4, 417973
                  slt s7, s8, t0
                  slt a5, s4, a5
                  c.slli a6, 9
                  c.xor a3, a3
                  c.sub a5, s0
                  div ra, a0, t3
                  c.lui s0, 24
                  srai gp, t1, 19
                  xor zero, s1, t0
                  addi s3, t4, 1637
                  c.nop
                  srli a1, s9, 4
                  c.andi a5, -1
                  c.addi4spn a3, sp, 704
                  sub s4, a6, a5
                  sltu zero, a6, s6
                  addi zero, a6, 1078
                  xor zero, gp, a5
                  c.srai a3, 29
                  sltu a1, s2, s11
                  ori zero, tp, -489
                  c.nop
                  or a6, s2, s6
                  c.add s0, t5
                  c.andi a4, 28
                  ori t0, s8, -1589
                  andi s4, s1, 1068
                  lui s5, 55632
                  xor tp, ra, a5
                  c.or a4, a3
                  divu zero, t6, tp
                  sltu s11, t3, s0
                  c.and a3, a4
                  c.lui gp, 4
                  slt s4, zero, s11
                  sltu gp, t0, a7
                  mul s7, a1, s7
                  xori a3, zero, 1933
                  mul sp, a6, t6
                  mul t3, s11, zero
                  sra s7, a6, ra
                  c.nop
                  c.srli a3, 18
                  sub a5, t0, s0
                  srl a1, s11, s6
                  andi s11, s5, 1249
                  c.or a3, a3
                  c.sub a3, a3
                  sltu s5, s6, s11
                  xor s11, s11, ra
                  c.slli gp, 27
                  sltu ra, a3, a1
                  mulh s8, s0, s0
                  c.mv a1, s7
                  or s11, s4, s11
                  c.addi4spn a3, sp, 960
                  and s11, a0, a6
                  addi t4, a2, -80
                  rem a0, t0, a4
                  sub t1, zero, s0
                  c.srai a3, 5
                  ori t0, t1, -693
                  addi s0, tp, 65
                  divu gp, s10, s1
                  c.and a3, a3
                  slli s6, a1, 11
                  srl s7, a2, s10
                  c.slli t1, 6
                  c.and a3, s1
                  xori t3, s7, -403
                  rem t2, zero, t4
                  srl zero, tp, t6
                  c.xor a3, s1
                  sra zero, a4, s4
                  c.addi16sp sp, 128
                  sltiu zero, s5, -1973
                  addi zero, a3, -436
                  c.lui tp, 10
                  c.addi s5, -1
                  c.and s0, a3
                  mul s1, s6, tp
                  and s5, t3, ra
                  sub s7, s10, t2
                  mulhsu s11, zero, s5
                  ori s4, t5, 1666
                  c.srai a3, 11
                  c.andi a3, -1
                  add t3, s4, s7
                  divu ra, t1, t5
                  mul tp, sp, s9
                  mul a0, t1, a0
                  mulh s0, a3, s8
                  and a4, s10, s1
                  c.li a3, 29
                  srl a0, s2, t6
                  c.srai a3, 27
                  c.nop
                  and a1, s9, a0
                  mulh ra, t6, t3
                  c.slli a7, 1
                  lui t1, 984442
                  c.srai a3, 1
                  div s9, ra, tp
                  slt s6, t4, s10
                  rem s2, a7, t2
                  xor t4, s3, sp
                  andi t0, a5, -1912
                  mulh a5, t0, s3
                  c.addi s5, -1
                  mul a5, a6, t3
                  div s1, zero, t4
                  srli s11, a0, 9
                  sll zero, s0, zero
                  sub t1, s10, s3
                  c.srai a3, 25
                  xor sp, t5, tp
                  c.slli gp, 26
                  andi s1, s0, 455
                  c.lui ra, 3
                  c.andi a3, -1
                  c.addi4spn a3, sp, 192
                  slti zero, s8, -1126
                  addi gp, s0, 653
                  nop
                  sra zero, s2, s0
                  c.addi a5, 1
                  c.nop
                  c.lui t0, 16
                  mulhu sp, s6, s10
                  ori s11, t4, -1007
                  slt a2, a0, s5
                  sra t2, gp, a1
                  c.srli s0, 10
                  c.lui a2, 28
                  srai a6, t3, 3
                  mulhsu a0, s3, a2
                  xori zero, a7, 496
                  and a6, t0, s1
                  mulhu a7, t4, s4
                  c.slli s1, 2
                  c.or a3, a3
                  c.xor a3, a3
                  c.sub a3, s0
                  c.addi t4, -1
                  add s2, gp, s11
                  mulhu a2, s7, s8
                  xori tp, a7, -14
                  srl a4, a7, a0
                  c.slli t2, 4
                  slt a2, a2, a4
                  div ra, t4, s6
                  srli t2, t2, 15
                  sltu s7, a2, s11
                  mul t0, tp, a7
                  rem a4, s10, s0
                  lui zero, 437972
                  slt a0, gp, s3
                  c.xor s0, a4
                  andi s7, ra, 1191
                  lui gp, 421207
                  ori t3, a7, -540
                  xor t4, s4, s2
                  sra zero, a5, t1
                  auipc t3, 83297
                  c.slli s1, 22
                  c.srli a3, 20
                  sltu t0, s9, tp
                  c.slli t4, 2
                  addi gp, s9, -669
                  c.addi16sp sp, 160
                  mulhu gp, a5, s10
                  div zero, ra, s4
                  divu s11, a7, s5
                  srli zero, a2, 3
                  c.or a3, a3
                  c.xor a3, a3
                  c.addi16sp sp, 32
                  auipc t1, 701707
                  sltiu a3, t4, 1782
                  sub ra, s5, s4
                  c.and a3, a3
                  c.slli s9, 3
                  c.and a3, s0
                  mulhu a0, s4, t1
                  xori gp, s5, 843
                  sltu t1, tp, ra
                  c.or a3, a3
                  c.add a6, s5
                  slli s0, s5, 25
                  c.srai a0, 7
                  sll zero, s10, s8
                  c.li s1, -1
                  c.lui s2, 21
                  c.li gp, -1
                  slt t0, a4, s3
                  sltiu a1, a2, -749
                  sltiu s2, s5, -2006
                  c.li a1, 0
                  c.mv s2, s2
                  c.and s0, a3
                  sub s1, s5, s2
                  sll s1, s3, zero
                  or t4, a4, a2
                  c.slli a3, 24
                  srai a0, ra, 26
                  c.lui gp, 14
                  slti s6, t6, -1533
                  nop
                  c.and a3, a4
                  c.or s0, a3
                  c.sub s0, a3
                  c.add ra, s9
                  sub t3, s0, a3
                  c.lui a5, 30
                  srai a1, gp, 0
                  mulh s7, s7, s5
                  addi zero, t0, -832
                  c.addi4spn a3, sp, 144
                  andi a6, a6, 651
                  slli s11, s0, 31
                  auipc t3, 235968
                  auipc s6, 910855
                  c.addi s8, -1
                  c.li t2, 18
                  srli s1, t1, 26
                  nop
                  c.sub a3, a3
                  sub s7, s5, ra
                  c.srai a3, 13
                  c.addi sp, -1
                  ori tp, gp, 1339
                  xori a5, s5, -1093
                  srl a1, t3, s10
                  sltiu t2, a0, 823
                  add s8, a7, s10
                  c.add s7, tp
                  rem s6, t3, s2
                  srl a4, a4, s3
                  div sp, s9, t2
                  c.or a3, s1
                  addi sp, s0, 1595
                  c.srli a4, 8
                  c.addi4spn a3, sp, 832
                  xor s3, ra, ra
                  srai t4, a7, 16
                  c.xor a3, a3
                  mulhu a0, a1, s7
                  rem a3, s9, a6
                  div t0, s6, t2
                  c.slli gp, 28
                  xor a2, t5, tp
                  slt t4, s3, a7
                  srli t2, s11, 14
                  divu s5, sp, s6
                  c.li s2, -1
                  c.slli s9, 31
                  slt sp, a4, s6
                  c.mv s8, a6
                  c.and a3, a3
                  c.nop
                  slt zero, s2, a5
                  c.addi16sp sp, -16
                  sltiu s9, a4, 921
                  sll s9, t3, s5
                  c.addi s3, 1
                  srli ra, zero, 21
                  srl a6, s3, s5
                  and gp, s10, t0
                  c.slli a3, 23
                  add s9, s11, t4
                  mulhu s4, s1, t5
                  c.lui a7, 15
                  sltiu s6, t5, -216
                  slt a2, t2, s8
                  ori s4, a6, 1360
                  sltiu a5, gp, -836
                  sltiu tp, s4, 361
                  mulhu ra, a0, t6
                  c.addi4spn a3, sp, 896
                  and a2, a6, a4
                  rem zero, s8, a7
                  sub s7, s5, t1
                  xori a2, s0, -1281
                  mul a6, s6, s0
                  c.srai a3, 16
                  sll zero, t3, gp
                  sltu zero, zero, gp
                  divu t2, zero, s5
                  c.lui t1, 21
                  add t3, a3, t4
                  slli s3, s7, 14
                  rem zero, gp, t2
                  slti zero, t0, 1244
                  sltu t4, s2, s10
                  lui a1, 278562
                  auipc zero, 992644
                  mulh s7, t4, t0
                  c.li t2, -1
                  and sp, a1, a3
                  sltiu a5, t4, -1887
                  c.addi4spn a2, sp, 64
                  slt s9, a4, s0
                  c.li a3, 1
                  srli s8, a7, 29
                  c.srai a3, 30
                  slti a0, s6, 985
                  mulhsu zero, a1, s9
                  c.or a4, a3
                  c.andi a3, -1
                  auipc s2, 717314
                  srai a4, s6, 17
                  xor zero, s8, s8
                  xori a6, s2, -358
                  sra t3, gp, s7
                  c.sub a3, a3
                  divu s3, t6, zero
                  mul a0, tp, a2
                  sra s9, a4, s0
                  c.srai a3, 21
                  c.xor a3, a3
                  slti s8, a6, -1688
                  c.addi ra, -1
                  divu s4, a7, sp
                  andi s0, a6, -1340
                  nop
                  c.xor a3, a3
                  c.sub s1, a3
                  mul ra, s2, s2
                  auipc ra, 779422
                  add zero, s0, ra
                  c.slli t4, 23
                  or s9, s9, a6
                  or a1, s7, s6
                  andi a3, s9, 6
                  addi gp, t3, -1018
                  slt gp, a1, s1
                  or t4, t2, sp
                  mul a7, a4, s11
                  lui a5, 64906
                  mulhsu a5, a0, t2
                  srli s1, s7, 22
                  mulh sp, s11, t0
                  c.or a3, a3
                  c.srai a3, 10
                  c.or a3, a3
                  ori a3, s8, 2015
                  sltu t4, s4, a0
                  c.addi4spn a0, sp, 64
                  xori a4, s11, -220
                  c.addi gp, 30
                  and s8, gp, t2
                  c.addi4spn s0, sp, 656
                  srl a3, s2, gp
                  rem s1, s4, s11
                  sltu s6, s8, s0
                  c.mv s2, a4
                  slt t4, s8, t4
                  c.addi16sp sp, -16
                  c.mv ra, gp
                  divu a5, ra, s1
                  mulhu s9, t0, t0
                  auipc s9, 914981
                  c.or a5, a3
                  ori s4, tp, -430
                  mulhu a4, t6, s4
                  c.li a7, 19
                  sub t3, s4, zero
                  c.addi16sp sp, -16
                  ori a4, t3, 1199
                  c.andi a3, 27
                  mul zero, t6, sp
                  auipc t1, 542894
                  andi s5, t1, 1398
                  c.addi a6, -1
                  mul a1, s11, s6
                  mulh a2, a5, zero
                  srl a5, s11, a4
                  and t0, t1, t2
                  auipc t0, 740054
                  mulh t4, s11, s7
                  c.mv a5, a4
                  rem t4, s9, ra
                  and gp, a2, s6
                  lui a0, 34590
                  c.srli a3, 1
                  slt s11, s11, a1
                  mulh gp, a2, s5
                  c.addi16sp sp, -16
                  c.lui s0, 29
                  srli t1, a7, 6
                  c.add a6, a4
                  sltiu a6, tp, -1742
                  c.lui t0, 5
                  rem sp, a3, s2
                  srl a3, a3, a0
                  c.nop
                  c.srli a3, 23
                  c.add s11, s11
                  c.add t3, s3
                  mulhsu zero, a6, sp
                  sra s4, a7, a6
                  slli t4, s7, 16
                  slli t3, sp, 1
                  srl s2, a1, s0
                  srli t2, a6, 22
                  sltu a0, t4, t6
                  sub s4, s4, s3
                  slti tp, gp, 1082
                  auipc sp, 659505
                  mul s7, t6, zero
                  c.nop
                  c.addi t2, 2
                  ori zero, s5, -1618
                  c.and a3, a3
                  ori a3, s11, 762
                  c.srli a3, 6
                  or a4, gp, a7
                  sra sp, t1, sp
                  c.srai a2, 24
                  c.li s6, 11
                  c.sub a3, a1
                  sltiu s0, s11, 736
                  c.or a3, s0
                  c.nop
                  rem zero, tp, s0
                  c.mv t2, s11
                  mul a4, t2, t4
                  srl ra, a7, s5
                  c.srai a3, 9
                  c.add a7, tp
                  c.nop
                  ori a3, s8, -874
                  c.lui s5, 10
                  addi s3, s4, -1753
                  c.add s6, s4
                  slti a5, a3, -1289
                  xor s1, t0, s10
                  mulhu s3, s11, t0
                  c.srli a3, 27
                  c.nop
                  sub a5, a6, s0
                  ori t2, s5, 2002
                  sltu s5, s4, sp
                  srl zero, s0, s8
                  c.xor a3, s0
                  andi a5, t5, -1778
                  c.add a1, a7
                  lui gp, 399379
                  xor s5, a5, s10
                  sltiu gp, t2, -373
                  slti t2, tp, -952
                  c.add s11, s8
                  sltu s2, gp, a7
                  c.andi a3, 28
                  add s11, a4, gp
                  c.add s7, s7
                  andi a4, s8, -493
                  srl t0, a2, s0
                  lui s3, 344621
                  c.srli s1, 7
                  c.nop
                  srai s5, tp, 7
                  xori s6, s5, 2004
                  c.add t0, gp
                  c.lui ra, 24
                  sll t2, a4, t1
                  c.li a2, 8
                  sltiu gp, a3, -1697
                  c.andi a0, -1
                  c.nop
                  div tp, s8, s4
                  slli gp, t2, 3
                  divu a6, s6, zero
                  c.srai a3, 27
                  slt s5, a0, s10
                  srli a1, t4, 11
                  c.or a3, a3
                  sltu a7, t2, zero
                  div s7, a4, t3
                  div s4, s10, t5
                  c.addi4spn a3, sp, 432
                  c.addi s5, 29
                  sll zero, t3, t2
                  c.mv ra, s1
                  c.and a3, a3
                  divu s0, gp, t6
                  divu t1, s9, a0
                  auipc t2, 583316
                  andi ra, a4, -689
                  andi a7, t6, 1812
                  sltu t4, gp, t5
                  srai s5, t5, 1
                  sltiu s1, a6, 957
                  mulhsu zero, sp, a2
                  mulhsu t1, s10, s7
                  c.sub a3, a4
                  srl a6, s3, sp
                  c.sub a3, s0
                  c.nop
                  sll s0, a7, t3
                  and a5, s8, s7
                  c.li a4, 17
                  addi a0, s10, -2038
                  srai a3, a0, 29
                  c.lui s3, 7
                  sub t2, a0, s6
                  nop
                  div s9, s1, ra
                  c.mv ra, s1
                  c.addi a2, -1
                  c.andi a3, 9
                  nop
                  c.mv a2, a0
                  mulhu s4, t5, t5
                  mulhsu t4, t5, a1
                  div s1, sp, ra
                  andi zero, a1, 602
                  xor ra, tp, t5
                  xor s3, t3, s9
                  c.nop
                  sltu t2, t3, s4
                  srli gp, a2, 20
                  nop
                  slli s6, t5, 23
                  mulhu tp, a7, s10
                  srli s9, zero, 13
                  lui t1, 562597
                  c.addi a3, 14
                  srl zero, s2, s7
                  c.srli a0, 22
                  mulh gp, a6, s7
                  c.lui a3, 25
                  or s7, s3, t4
                  and zero, t4, s0
                  sltu a6, s5, s9
                  mulhsu s5, t3, a3
                  mulhu a4, s7, gp
                  c.sub a3, a3
                  and t2, s11, zero
                  sltu zero, a6, t5
                  add a7, ra, t4
                  xor t1, a7, s1
                  sltu zero, t4, a0
                  mulhu s2, ra, t1
                  srl a7, s2, s1
                  c.addi4spn a3, sp, 704
                  slt s8, s1, s0
                  slti s4, tp, 1531
                  sub s9, s4, t1
                  c.nop
                  xori t1, s8, 1460
                  sll ra, s9, s0
                  and s8, s2, s11
                  c.or a3, a3
                  c.mv s1, ra
                  slt s0, s7, s5
                  c.slli gp, 23
                  sltiu a4, s5, -100
                  mulhsu a0, s4, a2
                  c.add t3, a0
                  and t4, s7, s9
                  addi s11, t3, 1617
                  c.or a3, a3
                  mulhsu gp, s0, a7
                  c.nop
                  c.mv s7, a6
                  and a6, a1, s9
                  c.mv t3, a6
                  andi a4, s11, -286
                  c.and a2, a3
                  srli zero, sp, 1
                  c.andi a3, -1
                  mulhsu a7, t2, t3
                  slt zero, s8, a0
                  sll zero, sp, t6
                  c.add a7, a2
                  nop
                  c.addi4spn a3, sp, 16
                  mulh s9, s5, s7
                  c.addi4spn a2, sp, 896
                  c.srai a3, 14
                  and a3, a6, s9
                  c.xor a3, a3
                  add t1, t4, s10
                  xori a1, t5, 1129
                  c.addi16sp sp, -16
                  c.slli a5, 29
                  c.addi16sp sp, -16
                  c.slli a5, 14
                  addi t1, t4, 264
                  c.and a3, a3
                  c.srai a3, 27
                  c.sub a3, a3
                  c.xor a0, a1
                  xori a0, s0, -546
                  sltu s4, sp, s8
                  lui a6, 818136
                  c.sub a3, a3
                  andi a3, s7, -1278
                  divu a2, a5, s0
                  or a7, s0, a5
                  mulh s0, t2, s11
                  addi t3, t3, -540
                  c.or a3, a3
                  sltiu a1, s2, 629
                  mul zero, a4, t4
                  c.sub a3, a3
                  addi t4, s1, -958
                  sll a7, a6, s10
                  c.nop
                  xori s5, t1, 43
                  nop
                  add s8, t4, s4
                  sra a4, sp, s0
                  c.addi4spn a3, sp, 960
                  c.andi s1, 23
                  slti s6, a3, 384
                  c.slli s0, 27
                  slli s7, s8, 13
                  c.slli tp, 1
                  mulhu a3, s7, s10
                  c.addi4spn a3, sp, 384
                  c.srli a3, 11
                  c.or a3, a3
                  sll zero, a6, s10
                  srl t3, s9, t4
                  c.nop
                  xor a5, a4, s9
                  c.srli a3, 3
                  slt zero, s7, tp
                  addi gp, ra, 879
                  or s0, t1, s11
                  sltu a6, t3, t0
                  ori zero, a4, -1681
                  divu zero, s10, s1
                  divu gp, s11, gp
                  sub s7, a0, t6
                  sltu zero, s3, t0
                  c.and a3, a3
                  xori ra, sp, -1571
                  c.and s1, a3
                  xori a6, a5, 1892
                  mulhu a6, sp, s1
                  xor s6, s7, s11
                  sltu s3, s10, ra
                  ori t4, t2, -470
                  and s6, tp, sp
                  c.mv a4, s9
                  lui zero, 57813
                  mulhsu t0, s2, s0
                  sra s3, a6, s7
                  auipc gp, 847730
                  or zero, a1, a4
                  auipc a4, 766365
                  nop
                  mulh a2, tp, s1
                  c.add a7, s7
                  sltiu zero, t3, 100
                  slli s4, ra, 15
                  c.sub a3, a3
                  mul t3, s9, s4
                  srli s0, s0, 3
                  c.mv ra, t5
                  and a1, a5, a2
                  lui s1, 311387
                  c.addi4spn a3, sp, 192
                  divu s11, a0, a1
                  slti t1, t5, -734
                  c.addi16sp sp, -16
                  c.xor a3, a3
                  sltiu s1, a7, -1721
                  and zero, a4, s5
                  add zero, a5, s3
                  c.li s9, 11
                  c.li ra, 20
                  divu s1, a3, s7
                  c.li s0, 10
                  c.addi s5, -1
                  slti a2, t4, 722
                  sub a2, a1, a3
                  rem a5, zero, a3
                  and tp, a3, s8
                  or a4, a5, a7
                  div a0, gp, t4
                  c.li s9, 13
                  xor tp, tp, zero
                  sra a1, a1, a1
                  sll t4, s2, a0
                  slti t4, zero, -1683
                  c.li t2, 5
                  mulhu s0, zero, tp
                  srai s0, gp, 4
                  mulhu a6, sp, s11
                  ori s4, s1, -1757
                  xori s2, a1, -974
                  mul s3, a2, a5
                  c.srli a3, 7
                  auipc t3, 685617
                  or tp, ra, s4
                  slt a0, sp, s5
                  c.nop
                  and zero, s9, t3
                  c.nop
                  c.li s11, -1
                  srl t0, tp, a4
                  srli tp, gp, 6
                  nop
                  addi t0, gp, 1212
                  c.andi a3, -1
                  c.srli a3, 30
                  sll zero, a6, a3
                  sll s11, t0, zero
                  srai gp, s11, 14
                  c.add s9, t0
                  c.addi t0, 10
                  srai s9, t3, 10
                  c.li t3, 6
                  divu a2, t3, s2
                  c.and a1, a3
                  addi s4, t1, -792
                  sll t1, t1, a0
                  c.add ra, s1
                  sll s4, t1, a6
                  mulh s9, s5, s2
                  c.addi s0, 23
                  slli t3, s0, 26
                  mulh a1, s7, a0
                  c.add ra, a3
                  sll tp, t2, s8
                  c.and a3, a3
                  sltu s8, s3, a7
                  c.andi a3, -1
                  and a7, s3, a6
                  sltiu s1, t4, -1635
                  sltiu t2, t2, -386
                  c.or a2, a1
                  c.or a3, a3
                  slt a6, a4, t4
                  mulhu s1, s10, s2
                  sub gp, a0, a1
                  slli t2, s2, 23
                  c.andi a3, -1
                  divu t1, s9, s10
                  rem t3, a7, a4
                  slli s5, s8, 12
                  nop
                  srai tp, s2, 14
                  c.addi a6, -1
                  slt gp, a3, s6
                  sltu a5, t4, a3
                  or zero, t2, t5
                  sll s3, gp, a0
                  xori s11, ra, -1640
                  sltiu s9, a4, 1481
                  xor a0, t2, s10
                  auipc t1, 266556
                  sltu a4, t4, s5
                  c.addi a2, 25
                  sltiu ra, a0, 1619
                  nop
                  divu s0, sp, s6
                  c.srai s1, 24
                  mul a1, s0, gp
                  c.lui t2, 24
                  addi a1, s9, 1617
                  c.li ra, 19
                  mulh a6, s1, s4
                  c.or a3, a3
                  mulh gp, a2, tp
                  xori t1, s2, 264
                  c.add gp, s5
                  c.addi t4, 28
                  div t1, a4, t5
                  c.addi4spn a0, sp, 128
                  ori zero, zero, -477
                  c.or s0, a3
                  c.mv s0, t2
                  mul a4, s6, a3
                  and zero, sp, t2
                  c.or a3, a3
                  sltu s2, a7, s3
                  c.lui s1, 11
                  c.andi a3, 19
                  c.sub a3, s1
                  c.and a3, a4
                  c.sub a3, a3
                  c.li ra, 9
                  and a4, s2, s5
                  c.and a3, a3
                  c.srli a0, 2
                  c.sub a3, a3
                  mul a1, a7, t4
                  or zero, s1, s5
                  c.lui tp, 2
                  rem t1, t3, t0
                  sltiu t0, a2, -1460
                  rem zero, s3, a7
                  c.srli a3, 13
                  c.srai a3, 3
                  mulhu a4, zero, t4
                  mulhsu a0, s2, s6
                  sra a1, a5, s9
                  c.xor a3, a3
                  slti t1, t5, -541
                  mulh s9, s5, a3
                  xori zero, t5, -1819
                  addi s9, t5, -274
                  c.slli ra, 12
                  mul tp, s10, a6
                  slli s2, a0, 8
                  andi zero, s8, -790
                  mul a7, t1, s2
                  slli sp, a4, 19
                  or s3, s3, t2
                  mulhu t0, a5, gp
                  sltiu t2, zero, 750
                  c.mv a4, s10
                  c.addi a1, 1
                  ori a5, a7, 866
                  andi s9, tp, 470
                  c.mv s1, s7
                  c.srai s0, 25
                  c.or a3, a3
                  xori a1, t6, -546
                  c.addi16sp sp, 160
                  mulhu zero, t5, s10
                  sltu s7, a4, s2
                  sll sp, t1, s2
                  andi a1, a5, 604
                  c.li a6, 24
                  c.li s8, 23
                  c.addi16sp sp, -16
                  srl ra, s6, s11
                  c.or s0, a3
                  c.lui t1, 28
                  srai s5, s11, 14
                  c.addi4spn a3, sp, 608
                  add s6, t1, a0
                  xor a2, s7, s3
                  divu t1, a5, s0
                  srli s7, s8, 10
                  divu t2, a4, s1
                  ori tp, a6, 1928
                  srai gp, a4, 26
                  c.addi16sp sp, 256
                  lui s6, 917635
                  add sp, t3, t2
                  auipc zero, 742417
                  c.add a2, s8
                  sra s7, t1, t3
                  c.slli s9, 16
                  c.li a4, 8
                  c.add s3, t6
                  c.srai a3, 28
                  xor s3, a3, t5
                  c.li s8, -1
                  sra zero, a2, s6
                  c.srli a3, 6
                  c.addi16sp sp, -16
                  lui t2, 453133
                  c.andi a3, 4
                  sltiu a2, a2, 577
                  c.or a3, a3
                  c.add ra, t0
                  xor zero, t6, a5
                  slti s5, t4, 1572
                  ori gp, s6, 945
                  rem s4, s11, t2
                  and s4, s4, t4
                  nop
                  c.sub a3, a3
                  lui sp, 465751
                  sltiu s9, sp, -455
                  c.li s9, -1
                  xori t2, gp, -350
                  divu a4, s2, a5
                  rem ra, a7, ra
                  mulhsu s2, s9, s7
                  sltiu ra, a4, -1059
                  slli a7, s8, 8
                  rem t3, s1, t5
                  xor zero, t3, a2
                  rem a3, a2, a1
                  mul s9, s8, t2
                  c.slli a3, 4
                  slt t2, s7, t1
                  mulhsu s2, zero, a7
                  slli s6, t1, 11
                  c.srai a3, 5
                  c.srai a3, 2
                  srai s11, a0, 26
                  srai t4, t1, 3
                  c.andi a3, 7
                  c.slli s1, 17
                  nop
                  ori s8, a2, 1213
                  mulhu s11, t6, s11
                  div sp, a3, t3
                  sltiu t3, tp, -390
                  auipc s8, 641407
                  c.srli a3, 13
                  xor zero, s7, s1
                  divu zero, ra, t3
                  slt tp, s9, tp
                  slt zero, tp, s9
                  mul zero, s10, t2
                  c.andi a3, -1
                  slt t2, a4, a7
                  c.slli ra, 22
                  addi t2, t2, 698
                  c.srai s1, 8
                  sltu s3, gp, s10
                  c.or a3, a3
                  nop
                  xori s9, a7, 1997
                  c.andi a3, 9
                  c.add s0, a0
                  c.xor a3, a3
                  rem s7, s6, tp
                  c.mv t1, t6
                  auipc a5, 395293
                  c.lui s9, 7
                  c.or a4, a0
                  slti t1, a1, -427
                  c.nop
                  c.srai a3, 29
                  slti gp, s10, 1520
                  auipc zero, 441527
                  xor a4, s0, a1
                  sra t3, t5, a3
                  c.li t2, 13
                  xori a3, a0, 763
                  slli a3, gp, 11
                  rem t3, tp, s3
                  div sp, s4, a3
                  sra zero, s7, a3
                  srli sp, s6, 5
                  xori zero, s9, -1530
                  or t2, t5, s8
                  add s7, a7, t1
                  c.andi s1, -1
                  srli sp, s11, 19
                  div t1, s1, a0
                  sub ra, a0, s11
                  addi zero, a6, 232
                  c.xor a0, a3
                  c.addi a3, -1
                  mulh t4, s4, a6
                  lui t2, 729776
                  li t4, 0x1 #start riscv_int_numeric_corner_stream_4
                  li t3, 0x1
                  li s11, 0x0
                  li s7, 0x0
                  li s9, 0x0
                  li a1, 0x1
                  li s1, 0x1
                  li a3, 0x0
                  li tp, 0x0
                  li a7, 0xa69bc53
                  c.mv ra, t2
                  add t0, t4, t6
                  c.add a5, a1
                  c.addi a2, 27
                  c.nop
                  lui ra, 525385
                  mulhsu a3, s0, a0
                  mulhsu a6, t4, a4
                  nop
                  auipc sp, 834995
                  mul t1, zero, a3
                  c.lui s3, 17
                  div s2, zero, sp
                  c.lui t1, 16
                  c.add s6, t2
                  addi zero, ra, 260
                  c.addi a4, -1
                  mulh s9, t6, t2
                  add s8, s10, a2
                  c.li t2, -1
                  rem s1, s5, t5
                  div s3, s11, s3
                  c.li gp, 2
                  div a0, a2, s10
                  sub s2, tp, a4
                  c.addi4spn a3, sp, 960
                  nop
                  c.mv t1, gp
                  c.addi ra, 12
                  add a2, s2, t1
                  c.addi tp, 19
                  c.srli a0, 2
                  c.li a1, -1
                  srai t1, t4, 1
                  c.lui ra, 13
                  c.or a3, a3
                  xori a0, zero, 651
                  and zero, s11, a1
                  srli s6, zero, 19
                  lui ra, 150821
                  c.srai a3, 22
                  c.mv a6, s1
                  sltu a5, zero, s8
                  srli s0, a2, 21
                  add zero, a5, s1
                  c.srai a3, 29
                  c.slli s9, 28
                  mulhsu zero, a5, t6
                  xor zero, a4, s0
                  div t4, t2, ra
                  c.add a3, s4
                  c.slli a3, 4
                  srl gp, t3, a6
                  c.andi a3, 5
                  c.addi16sp sp, -16
                  c.mv a7, a1
                  sll ra, s8, s5
                  slli s11, s11, 10
                  c.sub a5, a3
                  c.and a3, a3
                  slti a0, a1, -1807
                  mulhsu s4, ra, t1
                  mulhsu a2, a4, s11
                  c.xor a0, a3
                  div s8, t1, s3
                  xori sp, t1, 286
                  c.addi16sp sp, 304
                  c.add s8, a7
                  xori s1, s11, 1105
                  c.srli a3, 26
                  sll zero, sp, a0
                  auipc ra, 595364
                  c.or a3, a3
                  c.addi4spn s1, sp, 448
                  divu s5, a2, sp
                  c.addi gp, -1
                  slli s1, s4, 7
                  ori s7, a1, -1132
                  nop
                  andi s4, t1, -1979
                  mulh ra, s5, t6
                  mulhsu a0, t1, s9
                  c.sub a3, a3
                  c.lui ra, 13
                  c.addi4spn s1, sp, 96
                  rem a2, a4, a7
                  sub s6, s7, t6
                  slli s9, s9, 22
                  slti t3, s5, -1806
                  mulhu s5, t4, a5
                  mulh a2, s1, a7
                  c.sub a3, a3
                  mulhsu s4, s0, s4
                  and t1, s8, sp
                  c.mv t2, t4
                  slli s9, a0, 1
                  mulh sp, s7, sp
                  nop
                  add s7, t0, t1
                  c.mv ra, t5
                  xor s8, a1, a5
                  mul s11, s11, t0
                  srli a7, a0, 1
                  c.or s0, a3
                  c.addi s11, -1
                  c.nop
                  mulhu gp, t1, s1
                  c.nop
                  c.andi a3, 10
                  nop
                  c.srli a3, 11
                  c.addi4spn a3, sp, 64
                  srl s7, a1, s6
                  lui t3, 606667
                  c.andi a3, -1
                  c.lui s0, 31
                  c.sub a3, a3
                  c.mv t0, t4
                  c.or a3, a5
                  slti sp, s4, 392
                  srli s4, t4, 25
                  sub gp, t4, zero
                  slt a4, t0, a2
                  xor t3, ra, a4
                  andi a5, a2, -111
                  addi gp, s2, -1427
                  sltiu a5, s5, 1072
                  add gp, a2, s9
                  c.addi4spn a3, sp, 864
                  slti s1, a1, -656
                  mulhsu a3, a0, a1
                  c.mv sp, a7
                  sll s1, a2, a2
                  div t2, a1, t4
                  c.li t3, -1
                  slli tp, s8, 19
                  auipc a3, 317403
                  div a1, s3, s2
                  xor a2, tp, s9
                  add a5, s1, a7
                  c.addi s8, 17
                  c.andi a3, 13
                  c.srli a5, 6
                  c.nop
                  or sp, s4, s5
                  c.li ra, -1
                  srli a3, a1, 19
                  slti s0, gp, -1246
                  c.and a3, a4
                  srli s6, a5, 0
                  xor s8, s4, s11
                  slti t4, t6, -1245
                  addi a5, s8, -1072
                  slti zero, s10, 355
                  srai gp, s4, 31
                  andi s2, t4, 1440
                  nop
                  lui t4, 803725
                  or ra, a4, s8
                  andi s3, a4, -833
                  c.slli s8, 12
                  and a7, s0, a1
                  c.nop
                  c.mv s2, s4
                  lui s11, 499022
                  rem gp, s11, t3
                  c.srli a4, 26
                  sra t1, s8, t5
                  c.srli a4, 31
                  c.xor a3, a3
                  div s1, sp, a1
                  auipc s5, 266299
                  slt t1, zero, zero
                  srli tp, s1, 14
                  c.addi sp, 22
                  divu a2, ra, a4
                  c.lui a0, 15
                  c.xor a3, a3
                  and s7, a0, gp
                  c.add ra, t3
                  mulhu a3, t4, s6
                  c.and a3, a0
                  nop
                  c.andi a3, -1
                  and a5, a1, a5
                  xori a0, t1, 149
                  c.or a3, s1
                  lui s1, 415441
                  xor a4, t4, a7
                  mulhsu zero, a4, t6
                  c.lui s1, 1
                  sll a3, gp, t1
                  auipc s5, 442794
                  c.slli ra, 1
                  c.srli a3, 7
                  mul s0, a0, t0
                  addi zero, s2, -1599
                  c.sub a3, a3
                  c.li a4, 10
                  c.srli s0, 22
                  add t0, gp, s11
                  add zero, t4, a0
                  c.xor a4, a3
                  c.addi s6, -1
                  lui zero, 781804
                  c.nop
                  c.and a5, a3
                  c.slli ra, 10
                  c.add a2, t0
                  xor s6, s4, s3
                  c.srli a3, 9
                  c.lui s4, 27
                  andi zero, t1, 1676
                  or a5, tp, t1
                  c.lui s0, 13
                  sltiu a1, a1, -1345
                  and a3, s0, a3
                  ori t0, a4, 36
                  sra s3, s11, s0
                  ori zero, t5, 1116
                  mulhsu t4, a1, t3
                  c.srli a3, 8
                  c.srai a3, 19
                  sltiu a1, sp, 1041
                  srli t3, s8, 12
                  c.sub a3, a3
                  c.xor s0, a5
                  slti zero, s7, 335
                  div a4, s5, s7
                  sra s8, s4, s7
                  c.or a3, a3
                  div a0, s3, s4
                  c.addi4spn a3, sp, 832
                  c.mv s6, t6
                  mulhsu s1, s8, a2
                  c.or a4, a3
                  div tp, s0, tp
                  c.andi a3, -1
                  ori s7, t4, 631
                  nop
                  c.and a3, a3
                  c.xor a3, a3
                  ori a4, s7, -1148
                  ori t0, t2, 538
                  c.xor a3, a3
                  c.li s7, -1
                  slti t0, a5, 2024
                  c.nop
                  slt gp, t2, a7
                  c.sub a3, a3
                  c.nop
                  sltu s8, t0, tp
                  sra a7, a5, s8
                  xor zero, s8, t3
                  mulhsu t0, zero, t4
                  mulh s9, s6, s4
                  xori sp, t5, 805
                  lui tp, 911883
                  and t0, s2, a2
                  div zero, ra, a6
                  sll a5, ra, s6
                  c.sub a3, a3
                  c.addi4spn a3, sp, 96
                  c.add s0, t0
                  sra s7, a1, s1
                  srai gp, sp, 15
                  c.srai a3, 2
                  c.andi a1, -1
                  slli ra, s10, 12
                  andi s9, tp, -1647
                  div a0, t1, s10
                  c.slli t2, 23
                  xori s11, s3, 1891
                  xori gp, t3, 1727
                  mulh a4, s2, a2
                  c.mv a5, s2
                  c.or a3, a0
                  sub a3, gp, a5
                  c.sub a3, a3
                  divu zero, a4, t3
                  c.addi4spn a2, sp, 64
                  c.slli t1, 2
                  c.srli a3, 29
                  mulhu s4, a3, t2
                  ori s11, t3, 1305
                  auipc s11, 190765
                  c.add a5, sp
                  add a0, a0, a0
                  mul zero, gp, s8
                  slt ra, t3, a5
                  c.li a4, 0
                  auipc t0, 566580
                  mul zero, t3, sp
                  c.nop
                  auipc t4, 318264
                  rem a4, t2, t0
                  srai a1, s4, 5
                  xori a0, a6, 671
                  addi ra, s2, -1029
                  nop
                  c.mv gp, ra
                  c.sub s0, a3
                  c.and a3, a3
                  addi s1, a3, 937
                  srli a5, a4, 9
                  c.li s11, 23
                  srai s6, gp, 11
                  slt s9, a2, a4
                  div a1, tp, t2
                  lui t0, 725304
                  c.and a5, a3
                  add s0, a1, t4
                  lui a4, 918688
                  c.lui gp, 11
                  c.addi16sp sp, 288
                  c.lui s1, 1
                  auipc t2, 944481
                  or s6, t4, a1
                  c.mv t2, a5
                  c.xor s1, a3
                  sra s4, a2, s11
                  c.srli a3, 29
                  mulhsu s1, tp, s0
                  ori t3, s0, -27
                  mulhu s11, a4, s10
                  add a1, s1, tp
                  slli zero, s6, 26
                  c.addi tp, -1
                  sll a1, a5, s1
                  xori s9, a7, 1673
                  addi sp, t5, 1270
                  c.or a3, a3
                  li t4, 0x0 #start riscv_int_numeric_corner_stream_7
                  li t3, 0x0
                  li s3, 0x1
                  li s11, 0x5cb18987
                  li s8, 0x1
                  li a1, 0x1
                  li s9, 0x1
                  li s1, 0x467f5eef
                  li t1, 0x0
                  li s0, 0x1
                  c.add a6, a7
                  c.addi16sp sp, 224
                  c.addi4spn a3, sp, 640
                  mulh s6, s9, s11
                  lui a3, 64409
                  rem a1, s9, s8
                  addi sp, s3, -1637
                  c.nop
                  mulh zero, s5, t4
                  auipc a7, 92763
                  mul a5, sp, a2
                  c.addi4spn a3, sp, 576
                  mul a6, s5, s2
                  c.nop
                  c.lui gp, 31
                  add s8, s4, s5
                  lui t3, 842636
                  c.li a1, 4
                  mul zero, t4, s9
                  c.addi16sp sp, 224
                  nop
                  c.nop
                  c.lui ra, 28
                  c.nop
                  c.add tp, s9
                  c.add sp, t6
                  div a3, a2, s7
                  mulhsu t2, t1, s1
                  mulh a3, a5, a7
                  c.lui tp, 11
                  srli gp, tp, 4
                  xori a0, s7, 998
                  c.or a3, a3
                  c.or a3, a3
                  slt s9, s8, s10
                  c.xor a3, a3
                  c.or a3, a3
                  c.lui a3, 18
                  mulhsu s4, a1, s11
                  mulhsu s1, s9, t3
                  c.andi a4, -1
                  slli s8, a6, 28
                  xori s0, s5, 605
                  slli s1, a4, 7
                  sll sp, s10, a0
                  mulhsu a7, t5, s1
                  sub s7, t4, gp
                  xor s4, gp, zero
                  srai a0, a5, 9
                  slt t1, s9, t0
                  nop
                  sltiu a4, s10, 925
                  sll a3, a7, s4
                  sll ra, a3, s8
                  andi s11, s7, -969
                  c.or a3, a3
                  c.addi4spn a3, sp, 144
                  add s8, a0, t4
                  ori t3, s8, 1121
                  rem t4, a7, gp
                  sltiu zero, a1, -188
                  c.li t1, 17
                  nop
                  andi a5, s11, -1116
                  xor s8, tp, s0
                  c.lui t1, 1
                  sra s5, s5, t4
                  slt zero, s10, ra
                  c.addi16sp sp, 32
                  mul a1, t0, a1
                  xori ra, a1, -1945
                  nop
                  slti s1, a5, -123
                  c.andi a3, 10
                  sra zero, t1, a4
                  sra t2, t3, a5
                  slt ra, s7, t5
                  mulhu s7, a7, s11
                  c.addi16sp sp, -16
                  mulhu zero, s11, tp
                  ori a1, s4, -6
                  c.lui s3, 12
                  srai a0, s4, 13
                  c.and a5, a3
                  sra a4, ra, a2
                  srli s7, gp, 28
                  nop
                  sll zero, ra, s5
                  sub s2, t2, s5
                  rem tp, t6, gp
                  andi a0, t0, -1158
                  c.addi16sp sp, 352
                  c.li a0, 16
                  c.srai s0, 25
                  ori a4, a7, -596
                  nop
                  xor a5, a7, s5
                  c.and a3, a1
                  sltu s3, s11, tp
                  srli gp, s11, 17
                  addi a5, a7, -898
                  c.and a3, a3
                  c.addi16sp sp, -16
                  c.or a3, a3
                  addi a2, s4, -1597
                  sltiu a2, s8, 1426
                  xor s7, s10, sp
                  rem a0, s0, tp
                  xor a1, s8, tp
                  srli s1, s7, 8
                  c.or a3, s1
                  auipc zero, 921014
                  slli s8, s3, 9
                  c.srai a3, 12
                  sltu s0, a0, a1
                  mulhsu t4, a3, a6
                  sltu a7, s3, a0
                  c.lui ra, 14
                  c.addi4spn a3, sp, 896
                  c.andi a3, -1
                  c.xor a3, a3
                  c.srli a2, 31
                  c.andi a5, -1
                  slti sp, s3, -1376
                  xor t0, t1, s1
                  c.addi4spn a0, sp, 864
                  or a1, t2, a5
                  c.li s4, 13
                  add t2, gp, s8
                  nop
                  c.addi16sp sp, 272
                  c.lui a2, 15
                  c.addi16sp sp, 144
                  xori t2, s1, 1228
                  srai zero, a6, 26
                  c.nop
                  mulh zero, t1, s10
                  c.and a3, a3
                  add zero, t3, a5
                  auipc t4, 661800
                  c.or a3, a3
                  c.srli a3, 7
                  c.addi4spn a3, sp, 128
                  srli zero, a1, 20
                  c.lui s7, 15
                  c.li a5, 24
                  c.mv a2, a7
                  divu s5, s9, t6
                  xori a3, a0, 1781
                  srai s9, t5, 15
                  c.addi4spn a3, sp, 96
                  srai s7, t1, 15
                  auipc a5, 173645
                  srl a4, s4, a6
                  ori s9, tp, -1628
                  slli zero, s3, 10
                  auipc s4, 749741
                  addi s8, t5, 1012
                  c.slli s7, 22
                  c.sub a1, a3
                  c.andi s1, -1
                  divu s0, a4, s10
                  c.mv s6, a4
                  xor a0, t0, s6
                  srli a0, t1, 30
                  mulhu a5, s3, a3
                  c.nop
                  mul t0, tp, s8
                  srli a2, s0, 0
                  and a5, a3, sp
                  c.addi4spn a3, sp, 640
                  slli a1, s6, 27
                  c.srli a3, 12
                  mulh s11, s2, s9
                  srai zero, t6, 8
                  rem ra, a7, a3
                  sub s9, s2, gp
                  xor a7, s8, s11
                  addi zero, s4, 807
                  mul a1, t4, a1
                  c.srai a3, 21
                  ori zero, a5, 1761
                  c.and a3, a3
                  mulhsu s0, t1, a4
                  sltu gp, s4, tp
                  sra a5, s7, a0
                  c.lui s6, 29
                  c.and a3, a0
                  mulhu t4, a6, s11
                  c.add s9, s0
                  slli zero, sp, 27
                  c.srai a3, 3
                  rem s7, ra, s7
                  c.lui a3, 16
                  c.addi16sp sp, 208
                  mulhu t2, tp, t4
                  c.slli a5, 29
                  c.addi16sp sp, -16
                  c.nop
                  slli t2, ra, 7
                  sltiu a4, gp, 1278
                  c.lui a0, 8
                  c.or a3, a1
                  nop
                  mulh zero, gp, t3
                  sltiu ra, ra, -1252
                  ori s11, s9, 1867
                  mulh t2, s7, t3
                  slti t1, gp, -1210
                  c.lui a7, 20
                  c.srai s1, 12
                  sll a6, s9, tp
                  c.lui a3, 5
                  slti a2, t4, 1553
                  c.addi16sp sp, 464
                  c.addi4spn a3, sp, 48
                  nop
                  divu s5, a7, s0
                  slli a1, t2, 17
                  sltu s6, a6, s4
                  c.li ra, -1
                  mul s4, t5, t1
                  srai s0, a7, 21
                  c.srai a1, 17
                  mulhu sp, a5, s11
                  c.andi a3, 8
                  ori t2, a5, -252
                  lui t2, 744946
                  and s8, t1, a4
                  and t2, s3, t0
                  srai a7, s7, 15
                  and t3, t5, ra
                  mul a6, s10, s11
                  srai s3, t1, 27
                  rem zero, a7, a3
                  srli t2, sp, 4
                  nop
                  srai s8, a4, 28
                  nop
                  sltiu zero, tp, 861
                  sltu zero, a2, ra
                  xori a7, t1, 994
                  c.srli a3, 30
                  div t4, a3, a4
                  xori zero, s3, -1931
                  c.srai a3, 20
                  li t0, 0x285e7c70 #start riscv_int_numeric_corner_stream_5
                  li t4, 0x42b1b262
                  li t3, 0x0
                  li s9, 0x16e1e8a
                  li a2, 0x0
                  li a3, 0x0
                  li s8, 0x0
                  li s0, 0x1
                  li a7, 0x1
                  li s11, 0x0
                  addi ra, t1, -1920
                  auipc t3, 346194
                  auipc a3, 52561
                  c.addi s6, 16
                  divu zero, s4, s1
                  lui sp, 913716
                  nop
                  mulh a4, a6, s11
                  nop
                  lui s11, 348292
                  mulh a7, a3, a7
                  mulhsu s5, t1, s1
                  div t2, s0, s8
                  div gp, t2, s0
                  nop
                  mul ra, a6, s11
                  div t2, gp, s10 #end riscv_int_numeric_corner_stream_5
                  c.srai a2, 19
                  lui a7, 219913
                  mulhsu ra, s4, s2
                  lui a7, 227877
                  auipc zero, 82975
                  c.addi t1, -1
                  rem sp, t2, s1
                  rem a7, s10, s0
                  lui ra, 249654
                  mulhsu zero, a6, s8
                  add s11, s1, a7
                  c.nop
                  c.mv s1, t4
                  add zero, t5, s1
                  or t2, a7, t3
                  c.mv a1, t6
                  slti sp, zero, 1870
                  c.lui t3, 7
                  c.addi t0, 14
                  nop
                  ori t2, s5, -1617
                  mulh s9, ra, s11
                  c.slli s2, 19
                  c.sub a1, s0
                  c.sub a3, a3
                  mulh s3, s7, s10
                  andi s6, a0, 1196
                  c.sub a3, a3
                  c.mv t2, t6
                  auipc t2, 553551
                  or s2, s6, a5
                  c.nop
                  sltiu tp, s11, 589
                  andi sp, t3, 1694
                  srai s6, s4, 28
                  srai s4, s5, 16
                  mulhu s3, ra, gp
                  sltu a1, t2, a0
                  c.addi s3, 24
                  c.nop
                  c.addi4spn a3, sp, 608
                  srli zero, t4, 25
                  c.addi4spn a3, sp, 64
                  c.slli tp, 4
                  c.nop
                  mulh s8, t2, t6
                  c.add t2, s8
                  c.srli a3, 23
                  div ra, t6, s1
                  rem zero, a5, a6
                  c.nop
                  sltu s8, a4, a5
                  and sp, tp, s7
                  c.add s5, t1
                  slti s5, ra, -856
                  srai a6, t6, 30
                  sll s11, a1, s0
                  c.or a3, a3
                  c.and a3, a3
                  c.or s0, a3
                  slt s9, zero, s11
                  c.srli a3, 3
                  c.li gp, 12
                  srai a0, a2, 13
                  divu s1, t2, t0
                  c.add gp, a5
                  mulh gp, a3, a2
                  srl s1, a3, a3
                  c.addi4spn a3, sp, 320
                  c.sub a3, a5
                  c.li a5, -1
                  sltiu zero, s6, 2016
                  c.add a4, a6
                  c.or s0, a3
                  add a1, s10, a5
                  addi s7, a6, -1435
                  c.add a2, t1
                  sra s2, a4, s8
                  c.lui t3, 25
                  c.nop
                  c.xor a1, a3
                  slt s5, s10, ra
                  c.srli a3, 4
                  sltiu zero, a1, 1934
                  divu s11, s0, s7
                  ori s5, t5, 339
                  srl gp, a2, ra
                  slli a4, a7, 24
                  c.or a3, a3
                  and s2, s9, s0
                  add s11, gp, t2
                  sub t2, a6, t0
                  c.addi sp, 11
                  or a1, s6, s2
                  div a1, s6, a2
                  c.lui s4, 20
                  mulh a4, a1, t6
                  c.srli a3, 18
                  c.or a3, a3
                  mul a6, s11, s2
                  nop
                  auipc s4, 816503
                  nop
                  or s7, s9, a7
                  ori s3, a0, 266
                  sltu t4, t2, tp
                  c.sub a0, a3
                  add t3, t0, zero
                  sltu s6, t4, t1
                  rem zero, t1, s2
                  andi sp, s1, 433
                  c.or s1, a3
                  sra t1, a1, a2
                  and s9, t2, t1
                  sub s6, zero, s11
                  c.sub a3, a3
                  c.srai a3, 20
                  mulh t2, t1, t0
                  c.addi s11, -1
                  srl a4, s11, s10
                  div a0, s8, s6
                  andi zero, a1, -1803
                  rem s8, tp, t6
                  mulh s11, a1, a4
                  c.addi a0, -1
                  mul a1, t2, tp
                  andi a3, t2, -182
                  div s7, s1, a2
                  c.add a6, t4
                  c.sub a3, a3
                  auipc gp, 317680
                  sltu s7, t0, t5
                  c.li s0, -1
                  rem a3, s6, s9
                  slli t0, ra, 8
                  slt s4, s7, a3
                  c.mv s4, ra
                  andi gp, t1, 508
                  c.add a7, s7
                  divu t2, t1, a3
                  div sp, s3, s1
                  srl s1, t5, t2
                  c.srli a3, 31
                  c.add a1, ra
                  mul zero, a3, tp
                  sltu zero, s1, sp
                  c.or a3, a1
                  sll zero, t1, t1
                  mulh t1, t3, s6
                  xor a0, sp, a7
                  c.li s1, 17
                  c.addi a5, -1
                  c.xor a3, a3
                  sra s4, a5, s3
                  andi s0, s3, 1947
                  and t0, sp, s10
                  sub s2, a3, t5
                  c.addi16sp sp, -16
                  xor zero, a1, gp
                  lui t1, 777724
                  xori s1, a3, 1364
                  slti s7, a7, 788
                  sltu a6, s4, a7
                  c.addi tp, -1
                  auipc a3, 299680
                  c.or a3, s0
                  c.addi4spn a3, sp, 640
                  andi s9, tp, -62
                  or t1, ra, a3
                  c.addi16sp sp, -16
                  li t4, 0x1 #start riscv_int_numeric_corner_stream_3
                  li a2, 0x27f630bf
                  li t3, 0xf650a6d
                  li s5, 0x74570b6c
                  li a4, 0x70e20176
                  li s11, 0x0
                  li s8, 0x0
                  li s9, 0x1
                  li s7, 0x63c4f1fc
                  li a1, 0x0
                  rem t2, a5, gp
                  mulhsu s11, t0, s8
                  mul s3, s0, a6
                  nop
                  addi ra, a2, -854
                  c.add ra, t0
                  c.add t4, s2
                  c.add a5, t2
                  c.lui s7, 17
                  c.li t3, -1
                  rem a6, a5, s9
                  add s8, a3, s11
                  c.li s4, -1
                  add s9, s9, t6
                  c.nop
                  c.or a3, a3
                  ori ra, s0, 1322
                  divu t4, s7, t2
                  auipc s11, 112475
                  mulhsu a3, s6, t2
                  slli t4, s6, 27
                  slt zero, tp, t6
                  mul t3, a5, sp
                  c.nop
                  lui gp, 266636
                  srl a2, sp, gp
                  mul s4, s5, a5
                  sll t3, s7, a1
                  srl t0, s7, s6
                  c.lui a7, 4
                  sltiu s5, a2, -1811
                  sra s4, s6, a2
                  mulhsu zero, s4, s3
                  c.andi a3, -1
                  c.lui s8, 23
                  ori t0, t5, 288
                  c.slli a1, 3
                  slli a6, s1, 10
                  xori a6, zero, 389
                  c.and a0, a3
                  sll gp, zero, s1
                  c.addi4spn a3, sp, 576
                  div t0, s4, a6
                  c.addi ra, -1
                  div sp, a4, gp
                  c.addi16sp sp, 304
                  c.addi4spn a3, sp, 640
                  srl zero, s6, t5
                  lui s3, 633611
                  add s6, s6, a3
                  c.srai a3, 29
                  sub t3, s9, ra
                  c.mv s11, s0
                  divu gp, s7, ra
                  xor a6, t2, a6
                  c.add s5, a3
                  c.and a3, a1
                  xori t0, sp, -1616
                  rem a4, s8, s8
                  c.li a2, -1
                  or a6, s5, s5
                  mulh ra, t6, a2
                  mulhu a6, t0, t1
                  xori gp, a6, -273
                  c.xor s1, a3
                  divu s0, s7, a0
                  addi zero, a2, -821
                  mulhu zero, t3, s2
                  c.or a5, a3
                  mul s0, s0, t4
                  sltu a5, s10, a1
                  c.andi a3, 0
                  ori t2, a7, 1222
                  mulhsu a4, a0, a6
                  srai a1, s7, 31
                  slli gp, a6, 27
                  lui t4, 199709
                  lui zero, 108458
                  mulhsu gp, s10, t0
                  srl a2, a0, a2
                  auipc a1, 925416
                  srl s3, s9, tp
                  srai a5, s5, 18
                  sra t1, s5, s6
                  rem a7, tp, tp
                  rem s5, a4, t4
                  c.nop
                  add t4, t0, t6
                  c.and a3, a4
                  ori a4, zero, 625
                  srli a2, t2, 4
                  mul ra, t0, t0
                  xori a5, a6, 1428
                  mul a7, sp, s0
                  srli t1, s5, 14
                  c.srai a3, 3
                  divu a4, s10, t2
                  addi s4, a4, 595
                  c.slli a2, 24
                  c.li ra, -1
                  c.addi4spn a3, sp, 784
                  srl ra, t1, s4
                  addi zero, t1, -1148
                  c.addi gp, -1
                  c.addi4spn a5, sp, 704
                  c.or a0, a3
                  xori zero, tp, 751
                  c.addi16sp sp, 448
                  ori s6, gp, -68
                  xori zero, t1, -714
                  c.mv a6, a1
                  xor zero, s8, s1
                  ori s4, s3, 1454
                  sub s1, a2, a3
                  slti t2, s5, -1297
                  mulh a2, a0, a4
                  andi s3, t3, 522
                  xor t1, s11, t5
                  sra s8, s3, s8
                  li t0, 0x7753d252 #start riscv_int_numeric_corner_stream_6
                  li t3, 0x1
                  li s11, 0x285532ea
                  li t4, 0x0
                  li a1, 0x0
                  li gp, 0x22b6d871
                  li s9, 0x0
                  li s8, 0x1
                  li s1, 0x0
                  li a0, 0x0
                  lui t4, 438094
                  mulh ra, s0, s3
                  c.add s1, s3
                  c.addi16sp sp, -16
                  mulhsu s0, a6, sp
                  auipc s2, 825764
                  sub a1, s4, s1
                  c.addi ra, -1
                  lui s5, 811579
                  divu a3, gp, s2
                  c.addi16sp sp, -16
                  mulh a2, s5, a1
                  nop
                  mulh s11, t4, tp
                  c.add s6, s1
                  c.addi t4, -1
                  c.sub a3, a3
                  c.addi s9, 15
                  c.andi a3, 24
                  slt a5, t6, s3
                  divu t3, a5, s11
                  c.srli a3, 22
                  mulhu ra, s3, s6
                  sltu a7, t4, a1
                  andi s6, t4, -1884
                  addi a4, a7, -5
                  c.add t1, a0
                  c.and a3, a3
                  c.lui s7, 19
                  c.addi16sp sp, -16
                  sub a1, t1, s3
                  mulh t2, s9, tp
                  c.or s1, a3
                  mulhsu s11, zero, t0
                  sltu zero, a5, a3
                  mulh a3, a5, t4
                  c.sub s1, a3
                  c.lui a3, 20
                  sll a3, s0, a1
                  sub zero, s11, a7
                  sltu a2, ra, a0
                  slli zero, zero, 6
                  sltiu zero, gp, 30
                  slt ra, t0, s10
                  mulh t4, s11, a6
                  rem a0, t0, a0
                  sltiu a1, s4, -1923
                  c.li t0, 7
                  slt s11, t6, zero
                  srli a1, s5, 29
                  c.srli a3, 10
                  rem s3, t3, tp
                  addi s6, s8, 984
                  c.addi s3, 17
                  srai gp, s11, 18
                  c.li s3, -1
                  slli s0, s10, 19
                  mulhsu sp, a4, a0
                  sub a2, a7, t1
                  and a2, a4, s7
                  rem a5, zero, t5
                  and zero, s10, sp
                  lui t0, 327926
                  c.lui a6, 13
                  c.addi16sp sp, 464
                  and s2, ra, s10
                  sub zero, s9, s0
                  srl s4, t6, ra
                  c.addi4spn a4, sp, 576
                  mulhu s4, s8, tp
                  c.slli s11, 6
                  sll zero, t2, a5
                  xori a0, tp, 447
                  divu s9, s3, s9
                  mulhu gp, s3, s4
                  slli s0, s9, 14
                  andi a4, a5, -468
                  div a3, t1, s3
                  addi s4, s6, 1172
                  srl gp, a2, sp
                  nop
                  sll a2, a4, s3
                  andi s4, ra, 1880
                  c.srli a3, 13
                  and s8, a4, ra
                  auipc t0, 974588
                  sltu a3, t1, s11
                  c.addi16sp sp, -16
                  sra t3, t5, t3
                  c.sub a3, a3
                  c.mv s8, s2
                  xor s1, a5, s10
                  c.or a0, a3
                  c.li s9, -1
                  slti zero, s11, -272
                  add s7, t4, t3
                  c.or a5, a3
                  add t2, s10, a2
                  c.addi16sp sp, -16
                  xori t3, a3, -448
                  lui zero, 372282
                  sub sp, gp, t4
                  and t3, s11, t2
                  sub zero, t5, s6
                  xor zero, a5, zero
                  c.srai a3, 20
                  c.add tp, s8
                  ori a4, tp, -720
                  c.nop
                  divu s7, t5, s7
                  c.slli ra, 1
                  mulhsu zero, s4, a2
                  xor a1, tp, s10
                  addi a1, tp, -295
                  sltiu a3, a4, 887
                  add a3, s4, a2
                  rem t0, a0, gp
                  mul t0, t2, t2
                  c.lui s9, 21
                  c.slli tp, 16
                  srai gp, sp, 21
                  mulhsu s6, a1, a5
                  c.addi16sp sp, 320
                  c.srai a3, 31
                  sltiu a6, s11, 943
                  c.lui ra, 29
                  c.li s2, -1
                  c.srli a3, 7
                  ori s0, s10, -1827
                  c.srli a3, 13
                  xor a6, t4, t0
                  andi a7, a4, -461
                  xori t2, a4, -1390
                  andi t4, a3, -1101
                  auipc s3, 368186
                  xor t3, t6, zero
                  c.and a3, a3
                  add s5, a0, t4
                  addi tp, s7, 178
                  xori a1, s3, 590
                  c.slli a2, 19
                  slli a6, a1, 27
                  c.or s1, a3
                  c.addi16sp sp, -16
                  srli s3, t0, 24
                  c.srai a3, 31
                  sltu s4, t3, sp
                  c.addi s7, -1
                  c.and a0, a3
                  div a0, t6, a1
                  c.slli t0, 26
                  sll gp, s9, a7
                  srli t0, a0, 20
                  lui s5, 207201
                  mulhu a0, a3, s8
                  sltiu a7, a3, -1479
                  or s0, zero, a3
                  xori zero, a2, -344
                  slli s5, s0, 2
                  srai s4, a6, 17
                  sub a7, s8, t2
                  sub a1, t2, a3
                  li t4, 0x1 #start riscv_int_numeric_corner_stream_0
                  li t3, 0x4cc117d7
                  li s2, 0x0
                  li s5, 0x1
                  li a3, 0x3c893130
                  li s4, 0x1
                  li a2, 0x7bf270ff
                  li s9, 0x1
                  li s8, 0x1
                  li s11, 0x0
                  c.add a3, a4
                  c.lui s4, 19
                  c.nop
                  mulhu s1, gp, t5
                  c.li s3, 5
                  add s5, gp, s4
                  c.addi16sp sp, -16
                  auipc sp, 210629
                  c.sub a2, a3
                  c.addi a2, -1
                  c.nop
                  lui s2, 885811
                  c.mv s3, t2
                  lui t4, 464071
                  mulhsu ra, s4, s6
                  mulh ra, s9, tp
                  c.lui a4, 12
                  c.addi4spn a0, sp, 640
                  nop
                  mul a3, a3, s6
                  c.lui ra, 29
                  c.nop
                  c.addi a4, -1
                  c.nop
                  lui sp, 419525 #end riscv_int_numeric_corner_stream_0
                  mulhu s8, s8, a6
                  slt s5, s8, sp
                  c.sub a3, a3
                  add t3, t0, t2
                  c.add a7, t2
                  c.xor a1, a3
                  divu zero, tp, t2
                  slli a2, t1, 6
                  sltiu s3, s6, 310
                  c.addi s5, -1
                  ori a6, s5, 1810
                  andi t4, t0, -322
                  c.addi a1, -1
                  c.srai a3, 9
                  slti s8, s10, 881
                  srli tp, s9, 17
                  srai s7, s11, 17
                  c.addi16sp sp, -16
                  c.srai a3, 28
                  divu tp, t0, s11
                  ori t4, s1, 460
                  c.li t3, 28
                  sub a3, t1, t6
                  add gp, t4, t4
                  srli s8, tp, 13
                  srl s1, s5, t2
                  mul a3, tp, tp
                  c.addi4spn a3, sp, 608
                  c.or a3, a3
                  xor a0, a5, s7
                  c.addi16sp sp, 368
                  auipc a4, 623119
                  c.and a4, a3
                  lui gp, 646152
                  c.li s3, -1
                  slti zero, ra, 1500
                  c.and a3, a0
                  and t4, sp, a6
                  and a4, ra, ra
                  div s7, s1, gp
                  sub a1, zero, t1
                  xor s2, t3, tp
                  lui s8, 307060
                  c.mv s4, s4
                  ori t0, s3, -1475
                  auipc s5, 320568
                  c.addi4spn a1, sp, 64
                  slti sp, s5, -375
                  mulh a1, a5, a1
                  or s2, s4, s0
                  c.xor a3, a1
                  sra tp, s3, s9
                  c.addi ra, 27
                  and zero, t0, s3
                  c.andi a3, -1
                  sub s11, s6, t0
                  c.or a3, a3
                  mulhsu s7, a0, a3
                  c.mv gp, a6
                  sra a4, zero, a0
                  srai s11, zero, 9
                  nop
                  sra s0, t1, s11
                  auipc a5, 969427
                  c.srli a3, 24
                  rem a6, zero, t4
                  c.lui s7, 14
                  addi s3, s9, 1577
                  c.srai a3, 16
                  srl s2, s7, t5
                  lui zero, 176445
                  add ra, a4, s1
                  lui zero, 876022
                  c.andi a4, 11
                  srli t3, s1, 29
                  addi a1, a2, 1167
                  ori s11, t3, 1767
                  c.addi16sp sp, 128
                  c.andi a3, -1
                  c.addi4spn a3, sp, 320
                  c.nop
                  c.xor a3, a3
                  c.lui gp, 1
                  rem t3, s7, t3
                  mulhsu t4, s6, tp
                  sub tp, a4, s11
                  divu gp, gp, gp
                  div gp, s10, a3
                  add s9, a4, t4
                  c.nop
                  c.srli a3, 9
                  xori a4, s0, -1113
                  ori t1, t3, 588
                  mulh t3, s3, sp
                  c.li s3, -1
                  c.xor a3, a3
                  sub s0, t5, a4
                  and a3, t2, t4
                  auipc t0, 745890
                  lui a1, 975478
                  xori a7, s3, -1116
                  c.lui t1, 18
                  c.add t4, ra
                  sll a3, ra, s0
                  divu t4, t6, s4
                  xori t0, t2, 702
                  sub t2, t6, ra
                  divu s7, a0, s10
                  c.nop
                  c.nop
                  mulhsu ra, t2, s9
                  c.li a2, 5
                  c.addi16sp sp, -16
                  c.andi a3, -1
                  addi a0, s3, 1756
                  div ra, a5, a5
                  c.and a3, a3
                  addi zero, s6, 1631
                  and gp, a7, t2
                  c.add ra, a5
                  c.mv gp, a5
                  sltu zero, s4, t3
                  rem t3, s5, a6
                  c.nop
                  srl zero, s9, s11
                  srli s4, a4, 26
                  sll zero, ra, s9
                  mulhsu s3, s8, a7
                  c.add s3, s6
                  c.lui s7, 22
                  c.slli s9, 17
                  c.li a4, 31
                  mulhu ra, s10, zero
                  divu tp, t4, s8
                  mulhsu s5, t1, t4
                  mul zero, s8, a1
                  c.lui s6, 17
                  srli t1, a2, 27
                  sltu zero, s7, a1
                  c.addi t4, 9
                  add t4, t1, s7
                  or s8, gp, t2
                  sltu zero, s9, a1
                  c.lui ra, 13
                  c.sub a3, s1
                  mulhsu a6, t5, s1
                  li t4, 0x0 #start riscv_int_numeric_corner_stream_11
                  li s1, 0x2db8551d
                  li t3, 0x1d6e95cf
                  li s0, 0x0
                  li s7, 0x0
                  li a0, 0x0
                  li a4, 0x0
                  li s8, 0x0
                  li s9, 0x0
                  li s11, 0x0
                  mulhu zero, tp, ra
                  c.mv s9, t1
                  nop
                  rem s6, s1, t6
                  c.mv s2, a3
                  mulhsu t4, t4, t3
                  add s6, s8, a2
                  c.addi16sp sp, 464
                  c.li tp, 28
                  c.addi s9, 19
                  c.add ra, t1
                  c.sub a3, a3
                  c.sub a3, a3
                  addi a2, a5, 970
                  c.addi16sp sp, 400
                  mulhsu gp, s9, a4 #end riscv_int_numeric_corner_stream_11
                  lui t2, 547087
                  xori a4, t6, 52
                  c.addi a4, -1
                  c.xor a3, a3
                  addi s8, t2, -1447
                  slli s6, t1, 13
                  slt t0, s4, s4
                  rem t0, a3, s7
                  srl s11, t4, s5
                  mulh a3, a7, s6
                  srli zero, t6, 12
                  rem s3, s5, t3
                  mulhsu t4, tp, t1
                  c.nop
                  c.sub a3, a3
                  div t0, a0, ra
                  c.srai a3, 23
                  srl s1, s2, a3
                  c.andi a3, 15
                  nop
                  c.add s2, s11
                  mulh t4, s9, s6
                  sltiu s3, s10, 1362
                  sltiu a2, s1, 1519
                  c.xor a3, a5
                  c.nop
                  andi zero, t0, -1806
                  addi s1, t6, -1253
                  c.sub a3, a3
                  srai t3, t5, 7
                  lui s7, 99613
                  c.srli a1, 8
                  sra a7, s2, t6
                  sll zero, s2, s7
                  c.lui a5, 15
                  c.or a3, a5
                  slti t1, s9, 229
                  srl s6, a1, t5
                  mul zero, s4, s7
                  auipc zero, 958821
                  c.add ra, t1
                  add a5, s10, t0
                  c.srli a3, 14
                  sll s4, s1, s6
                  and a0, s1, t0
                  c.addi t1, -1
                  sll zero, s11, ra
                  c.add a4, tp
                  mulhu s4, s3, s2
                  andi zero, t3, -1642
                  andi s7, a1, -306
                  c.srli a3, 8
                  c.sub a3, a2
                  srli a4, s0, 11
                  or s11, t0, a5
                  c.srai a3, 30
                  srli a5, t1, 12
                  srli zero, t1, 11
                  c.nop
                  c.addi tp, -1
                  add t0, a0, a3
                  c.li s7, -1
                  sltu s4, s9, t4
                  addi zero, s7, -622
                  mul t4, s7, s7
                  c.li t2, 31
                  sll a5, t0, t6
                  slti t4, s7, -600
                  sub a5, t1, a0
                  c.slli a4, 30
                  c.mv ra, a2
                  sub zero, zero, gp
                  slli a0, t3, 19
                  srli zero, s9, 9
                  c.sub a3, a3
                  mulhu t2, s3, tp
                  c.mv ra, ra
                  rem a6, zero, s10
                  nop
                  c.andi a3, -1
                  mul s0, s7, t4
                  mul a0, gp, s9
                  sll t0, a3, s9
                  c.and a3, a3
                  andi tp, s3, -537
                  andi zero, a6, -1028
                  divu a5, gp, s3
                  sra t1, t2, gp
                  sra tp, s7, s1
                  nop
                  sltu t2, s6, s8
                  c.lui a2, 7
                  slt s4, a6, s8
                  addi zero, s1, -1779
                  c.srai a3, 29
                  c.slli a5, 11
                  slt a2, t1, s8
                  c.sub a3, a5
                  lui s1, 995161
                  c.srli s0, 31
                  c.nop
                  sra s6, s0, gp
                  xori a2, s2, -1160
                  c.srai a3, 5
                  srli a0, a1, 31
                  sll s6, t2, a7
                  andi a7, ra, -1428
                  c.addi16sp sp, 128
                  srai s8, s3, 28
                  c.or a3, a4
                  xori s0, s1, -569
                  c.addi4spn a3, sp, 352
                  nop
                  c.xor a3, a5
                  srai t0, s1, 18
                  c.addi16sp sp, -16
                  c.and s0, s0
                  c.slli s3, 1
                  slli a5, t2, 18
                  ori s9, s9, 155
                  c.add ra, ra
                  c.srai a1, 15
                  xori a2, s5, 5
                  c.addi4spn a3, sp, 576
                  c.srli a3, 27
                  add s0, a1, zero
                  c.srli a3, 21
                  sll a5, a0, t0
                  mulhu s11, ra, t0
                  sltu s2, s10, a5
                  c.nop
                  rem tp, a1, t2
                  add ra, a6, s4
                  or s7, gp, t6
                  c.addi4spn a3, sp, 608
                  slti t1, s1, -1985
                  srl a7, a7, a7
                  divu s11, a5, sp
                  srli t4, a5, 31
                  and a1, s7, s2
                  c.xor a3, a3
                  slt ra, tp, t0
                  slti s4, a1, 845
                  mulh a5, a6, a2
                  mulh a7, s3, a2
                  divu a6, s7, zero
                  c.nop
                  addi s2, s4, -884
                  sra a7, t5, a7
                  div a6, s7, s11
                  sltu s8, t6, ra
                  sra tp, a5, s3
                  c.mv s8, s1
                  slli a1, a6, 22
                  c.lui ra, 26
                  nop
                  srai s6, a3, 29
                  and s0, s2, s9
                  xor s11, s4, s0
                  div s11, s3, s4
                  sltiu t3, zero, -1668
                  c.sub a3, a3
                  andi a3, s4, 554
                  add s9, s7, t0
                  mulh a3, t1, zero
                  mulhsu t1, ra, a3
                  lui s7, 855497
                  sltiu a2, a3, -1162
                  srl s9, a1, a0
                  mulh t4, zero, t2
                  sltiu sp, s1, 708
                  slli a4, s9, 15
                  xori ra, tp, -506
                  auipc a0, 51177
                  c.addi t4, 26
                  mulhu s7, t3, s3
                  c.addi16sp sp, -16
                  c.srai a3, 3
                  add t3, a6, s7
                  c.or a3, a3
                  c.nop
                  slt zero, a3, t4
                  sltiu t3, a1, -1424
                  c.xor a3, a3
                  slti t0, a5, -671
                  add s2, s11, t2
                  sra tp, a6, s2
                  sra a1, s7, t0
                  c.or a3, a2
                  c.and a1, a3
                  slli s8, s9, 20
                  mulhsu s9, t0, sp
                  c.xor a3, a4
                  sltiu t1, gp, -560
                  and s7, s1, a7
                  c.addi4spn a5, sp, 80
                  andi a1, a4, 1277
                  c.srli a3, 1
                  sub a6, t5, tp
                  c.sub a3, a3
                  mulh t0, s11, a2
                  c.addi ra, 14
                  c.addi16sp sp, -16
                  mulhsu t3, a1, a7
                  c.srai a3, 2
                  and a4, t1, s8
                  c.sub a3, a3
                  c.addi4spn a3, sp, 800
                  c.srai a3, 13
                  and a4, a3, s6
                  c.or a3, a3
                  srai ra, s2, 28
                  c.slli a7, 9
                  div t3, a0, a4
                  c.srai a4, 17
                  c.addi t3, -1
                  auipc s8, 350607
                  nop
                  srl a6, a2, a1
                  mulh s9, s6, t5
                  mulhu s4, t6, s10
                  mul zero, sp, s11
                  c.lui s7, 30
                  srli tp, t6, 30
                  c.xor a3, a3
                  slt s9, zero, s3
                  andi s6, a0, -487
                  auipc t2, 1013800
                  c.addi ra, 19
                  c.andi a5, 20
                  srai a2, sp, 19
                  div zero, s8, t3
                  c.sub a3, a3
                  c.sub a3, a3
                  c.slli t3, 1
                  mul t3, t3, s9
                  slt sp, s2, s1
                  c.nop
                  andi a0, s9, 119
                  sll zero, a2, t1
                  c.nop
                  c.or a3, a3
                  srli s3, s5, 23
                  c.and a3, a3
                  rem s2, t5, t5
                  c.lui a6, 8
                  sra s9, a4, a2
                  lui zero, 664831
                  srai a4, a4, 13
                  slti a2, s7, 1746
                  slti t0, tp, -651
                  xor t3, t6, s11
                  c.and a3, a0
                  divu t0, sp, s1
                  c.mv s5, a4
                  add s7, s7, a3
                  sra s3, tp, s5
                  sra s1, s4, t6
                  srli a5, ra, 15
                  andi t1, zero, -775
                  slti zero, s1, -164
                  c.addi s4, 8
                  ori zero, t4, 297
                  slli s1, s5, 21
                  c.lui s8, 25
                  slt ra, t2, a1
                  c.addi t3, -1
                  sll sp, t3, a6
                  srli zero, tp, 5
                  sub t1, t4, t5
                  c.sub a1, a3
                  andi zero, gp, 849
                  sll a2, a4, a7
                  c.lui s1, 19
                  c.nop
                  c.lui s7, 19
                  div s2, s1, sp
                  div a5, t3, a6
                  rem s11, s0, s9
                  and t2, a6, t4
                  srli a0, a1, 31
                  nop
                  c.sub a3, a3
                  mulh s9, tp, zero
                  divu s5, sp, sp
                  c.addi s2, -1
                  srai t0, a1, 8
                  auipc s11, 60843
                  slti s2, s2, -319
                  srai s11, s3, 30
                  xori a4, a0, -828
                  mulh s1, a6, s9
                  mul t4, s2, a2
                  mulh t2, s1, a0
                  slti s3, s0, -1818
                  c.andi a3, 1
                  c.addi16sp sp, 448
                  rem a2, t4, s10
                  c.sub a5, a3
                  sltu tp, t4, t4
                  or ra, s8, t0
                  slt s9, tp, tp
                  sltu sp, t6, s2
                  c.sub a3, a3
                  c.slli gp, 18
                  mulhu tp, s6, s4
                  c.srli a3, 11
                  c.srli a3, 23
                  c.or a3, a3
                  sltiu a0, gp, 846
                  auipc t1, 474870
                  mulhsu s7, a0, s4
                  mulhu gp, t0, s10
                  lui s2, 86756
                  c.or a1, a3
                  divu ra, s8, gp
                  nop
                  nop
                  div t3, s4, sp
                  c.xor a3, a3
                  lui zero, 36559
                  ori zero, s8, -1229
                  xor t1, a5, s0
                  sra s11, s11, tp
                  ori a5, s3, 930
                  c.addi4spn a3, sp, 864
                  rem s3, s0, s10
                  xor s6, a7, zero
                  c.srli a4, 8
                  c.xor a3, a3
                  c.andi a3, 27
                  andi s6, s5, -1367
                  mulh s5, tp, s8
                  c.and a3, s0
                  c.addi s5, -1
                  c.srli a3, 5
                  sltiu s8, t2, -1226
                  c.li s4, 8
                  lui a7, 889367
                  sltu t4, s8, t4
                  c.addi16sp sp, -16
                  c.xor a3, a3
                  addi s11, t1, 1240
                  divu a7, gp, s5
                  mulh s4, t3, a4
                  c.or a1, a3
                  addi a7, a6, -61
                  c.andi s1, -1
                  auipc t2, 986932
                  slt gp, tp, a0
                  sra a2, gp, sp
                  rem gp, a1, t5
                  c.lui gp, 1
                  sltu t3, s10, a7
                  c.mv s1, t3
                  c.srai a4, 13
                  c.mv s4, ra
                  divu a2, s6, ra
                  addi s5, s1, 20
                  xori ra, s3, -1696
                  addi s0, s4, 1225
                  c.or a3, a5
                  c.addi4spn a0, sp, 96
                  divu a3, s8, a0
                  addi s11, s3, -1255
                  c.or a3, a5
                  xor s2, a2, a1
                  xori a7, t1, 1274
                  c.srai a3, 25
                  div zero, t1, gp
                  auipc s4, 1003354
                  c.srai a3, 28
                  nop
                  srli a0, a7, 10
                  and zero, a3, a7
                  c.mv s5, t2
                  mulh a3, t2, a6
                  c.addi4spn a2, sp, 384
                  c.addi16sp sp, -16
                  srl s3, a1, s9
                  c.lui s1, 18
                  c.and a3, a3
                  c.slli s5, 9
                  xori s1, a7, -971
                  sra a2, gp, a0
                  xor t4, a6, tp
                  c.and a3, a3
                  divu gp, zero, a6
                  c.srai a3, 11
                  slt zero, s7, a7
                  div a0, s7, a5
                  sll s8, t4, a5
                  srai t4, s8, 7
                  c.slli a4, 25
                  mulhsu t4, a6, s8
                  srai a3, a3, 1
                  c.addi16sp sp, -16
                  mulhu t4, s11, a1
                  c.and a0, a3
                  c.srai a3, 11
                  c.mv t1, t5
                  c.add ra, s4
                  sltu s6, s10, s2
                  c.mv a3, s4
                  c.add a2, a5
                  lui zero, 508497
                  div t2, a4, a1
                  divu zero, t2, t2
                  xor a0, gp, s2
                  slt zero, t0, s2
                  andi t0, t6, 59
                  nop
                  add t2, a4, s2
                  slt s6, s8, a5
                  srl s0, s11, t4
                  slti s0, s9, 233
                  andi a6, t5, 0
                  sltu t0, t6, s5
                  c.andi a3, 3
                  xori s3, zero, -557
                  c.mv s3, t6
                  sltiu s5, a2, 939
                  and t1, s9, a3
                  c.addi16sp sp, -16
                  c.or a3, s0
                  mulhu a2, s9, s8
                  ori t2, t3, -1567
                  xor s1, a4, s5
                  mulhu ra, t2, s6
                  ori s0, gp, -894
                  c.mv a5, s3
                  andi s8, s2, 559
                  slli s7, s0, 18
                  c.add a6, a1
                  c.srai a3, 16
                  mulhu t3, s8, a7
                  c.and a3, a1
                  lui t2, 207756
                  lui t1, 503243
                  slli s7, a1, 27
                  mulhsu zero, t5, t2
                  lui s3, 103983
                  c.li tp, -1
                  srli s2, a2, 10
                  auipc a6, 8227
                  srl tp, s7, s6
                  c.or s0, a3
                  c.li t3, -1
                  slt s7, a3, s1
                  c.srli a3, 26
                  srai s5, t1, 8
                  and zero, s11, t2
                  mulh s1, tp, s5
                  add a4, s5, gp
                  c.xor s0, a4
                  ori a4, s6, -254
                  div zero, a4, tp
                  sltu a2, s8, a2
                  or a6, a0, a6
                  c.addi16sp sp, 416
                  sll zero, s9, t6
                  addi a6, t5, 578
                  c.and a3, s0
                  c.addi16sp sp, -16
                  lui s7, 240688
                  add t4, tp, s10
                  c.addi sp, -1
                  mulh a4, tp, a2
                  mul a0, a2, s9
                  rem s1, t4, a1
                  rem s7, s6, a5
                  mulhsu a3, t3, s2
                  sltiu s1, a4, -1861
                  c.addi s6, 25
                  rem s1, s7, t1
                  mulh zero, t5, s0
                  c.srli a3, 15
                  c.sub a3, s1
                  nop
                  slt a1, zero, t3
                  c.add a7, t2
                  c.and a4, a3
                  c.nop
                  slt s8, s9, s5
                  srli s2, s1, 16
                  c.slli t4, 25
                  mul s8, s2, s4
                  addi tp, tp, -22
                  mul s0, a2, a4
                  or s3, a1, s6
                  sltu tp, s10, t0
                  c.srai a3, 24
                  c.sub a3, a3
                  c.nop
                  rem a5, t3, a7
                  c.sub a3, a3
                  lui t4, 123907
                  or s2, s6, a7
                  c.add t2, t2
                  srli gp, a1, 7
                  lui s7, 147098
                  mulhu s2, s11, s2
                  lui tp, 838882
                  ori tp, s5, 1748
                  slli t3, s11, 12
                  c.mv t1, t3
                  c.or a3, a3
                  c.or a3, a3
                  nop
                  c.srli a3, 18
                  add zero, t5, s6
                  mulhu s1, zero, s7
                  c.slli t2, 16
                  lui s1, 949858
                  c.addi s0, 8
                  or a0, t3, s5
                  c.xor a3, a3
                  div s3, t2, s2
                  lui a0, 723927
                  slli t1, s2, 4
                  sra t2, s8, s8
                  mul s2, s2, a0
                  mul s11, s3, a0
                  mulhsu zero, t3, tp
                  c.addi4spn a3, sp, 128
                  c.mv ra, t3
                  slti s9, t5, 1439
                  rem a3, a0, a7
                  sltu a0, a7, t5
                  slt a6, a2, s11
                  ori ra, a5, -360
                  c.add s9, s2
                  c.xor a2, a3
                  sub ra, s6, t5
                  slli t3, s8, 3
                  sll a3, t2, a3
                  c.sub a3, a3
                  div a4, t4, a3
                  andi s0, s4, -329
                  mul s6, s3, gp
                  slli t2, s10, 28
                  srai sp, s2, 5
                  lui a0, 428076
                  c.nop
                  addi s8, s4, -1019
                  c.sub s0, a3
                  addi s11, a2, -1018
                  xori zero, gp, -993
                  c.mv s3, s11
                  c.add s0, a2
                  c.or a3, a3
                  srli tp, s0, 20
                  mul zero, s11, gp
                  c.andi s0, 1
                  sub zero, sp, sp
                  div s9, t1, tp
                  divu a2, tp, t2
                  divu zero, s6, a2
                  mulh zero, a5, t2
                  srl s11, s1, a3
                  addi t3, s10, -734
                  c.add ra, s11
                  sll a0, a7, s4
                  and zero, s5, s11
                  c.xor a3, a3
                  sra s7, a4, s7
                  c.addi ra, 31
                  srai a7, s10, 16
                  sra a0, gp, s5
                  srli zero, a5, 0
                  c.nop
                  c.slli a4, 3
                  c.xor a3, a3
                  mulh s0, t2, a1
                  nop
                  xor s3, a1, a7
                  and s4, a1, s5
                  mul t0, s5, a5
                  or s3, t0, t0
                  auipc sp, 338303
                  li t4, 0x1 #start riscv_int_numeric_corner_stream_8
                  li s11, 0x1
                  li t3, 0x69c27d5
                  li s9, 0x0
                  li a3, 0x1
                  li t0, 0x0
                  li s1, 0x1
                  li s7, 0x0
                  li a1, 0x0
                  li s8, 0x1
                  auipc s5, 117473
                  c.mv a5, ra
                  c.sub a3, a3
                  mulhu ra, t1, s7
                  nop
                  lui t4, 411465
                  lui zero, 710890
                  c.addi4spn a3, sp, 64
                  div t0, s1, s9
                  nop
                  c.nop
                  c.sub a3, a3
                  c.nop
                  mul s4, s3, ra
                  mul s6, a7, a6
                  rem a7, s10, zero
                  c.addi4spn a3, sp, 704
                  add tp, s7, s8
                  sltu s7, tp, t6
                  mulh t4, s1, gp
                  mul s9, a7, s5
                  li s4, 0x0 #start riscv_int_numeric_corner_stream_2
                  li t4, 0x69d35d4
                  li t3, 0x0
                  li s11, 0x0
                  li a1, 0x0
                  li ra, 0x0
                  li a0, 0x0
                  li s8, 0x1
                  li s3, 0x0
                  li tp, 0x0
                  mulhsu gp, s7, t0
                  c.add s5, sp
                  divu zero, t5, s11
                  mulhsu t4, a3, t1
                  c.li a6, -1
                  auipc a6, 370540
                  mulhsu gp, t6, a1
                  lui a1, 569559
                  mulh ra, sp, s6
                  mulhu s7, s7, t2
                  c.nop
                  mulhu t4, t1, a4
                  mul zero, s11, t2
                  addi a2, a3, 1417
                  c.lui a6, 19
                  c.mv a1, s9
                  divu t1, t5, s8
                  c.nop
                  c.addi4spn a3, sp, 640
                  divu s7, t6, a3
                  c.addi t0, 2
                  c.lui a1, 1
                  rem s0, t1, s1
                  mul t2, a2, t1
                  addi zero, a6, 1165
                  divu tp, a7, ra
                  mulhsu gp, ra, tp
                  add s9, s1, t2 #end riscv_int_numeric_corner_stream_2
                  slli a4, t2, 1
                  slt tp, s9, t0
                  xori sp, t0, 1274
                  ori s2, a7, 1575
                  div t4, s6, a6
                  lui s8, 875987
                  c.addi s9, 29
                  c.or a3, a3
                  c.or a3, a1
                  c.srli a3, 5
                  mul t0, s9, s2
                  divu a1, s3, ra
                  divu s3, s8, t0
                  sll zero, sp, sp
                  slti tp, s0, -1919
                  slti a4, s5, -868
                  c.xor a3, a3
                  sll sp, gp, s9
                  sra a4, t3, s9
                  c.li s9, -1
                  mulh t4, ra, t4
                  auipc a7, 80019
                  c.and a4, a3
                  mul zero, sp, t1
                  c.mv s11, t0
                  c.srli a0, 12
                  or s2, s2, t1
                  sltiu s2, t1, 813
                  sll t4, s6, s0
                  c.li a7, 11
                  mulhsu gp, a4, s2
                  c.add a5, s11
                  addi a3, s11, 1785
                  ori s1, sp, 1306
                  xor a1, a1, t6
                  mulhu a0, gp, t6
                  ori sp, a6, -570
                  c.and a3, a3
                  c.add tp, s9
                  nop
                  srl a4, s6, a0
                  xori a4, s2, -1030
                  c.mv ra, t1
                  rem s7, s4, a5
                  ori s6, sp, -298
                  slli s3, s6, 20
                  c.add s4, s2
                  c.lui a2, 3
                  c.addi4spn a3, sp, 112
                  sltiu a4, s1, -1258
                  c.addi16sp sp, -16
                  slti a4, s2, -158
                  mul a6, s4, s2
                  c.addi sp, 15
                  andi a6, s1, -135
                  rem s4, sp, ra
                  c.mv ra, t0
                  xori a0, a0, -1959
                  xori s1, s9, 660
                  sltu s5, s8, gp
                  add a0, a6, s5
                  c.andi a3, 9
                  c.li gp, -1
                  sltu s11, a2, s10
                  mulhu gp, t5, t4
                  c.srai a2, 18
                  c.addi16sp sp, -16
                  c.mv a3, t0
                  c.mv a3, a4
                  or zero, s9, ra
                  nop
                  mulhsu s11, s4, s1
                  c.srai a3, 25
                  c.andi a3, -1
                  mul s8, s6, s5
                  c.addi16sp sp, -16
                  sll zero, t6, s0
                  sltiu s7, t6, 459
                  c.add s4, s7
                  c.and a3, a0
                  sub sp, s10, s2
                  c.lui ra, 22
                  slti a0, a0, 1981
                  and s6, a2, s8
                  rem gp, a4, a1
                  c.sub a3, a3
                  andi sp, gp, -498
                  c.andi a3, -1
                  mulhsu s8, s10, t0
                  c.andi a3, 9
                  srli s6, s11, 31
                  c.srli a3, 27
                  c.or a4, a1
                  c.add ra, a0
                  slti sp, t3, -480
                  c.add a6, a5
                  mulh t4, s0, a5
                  c.nop
                  mul zero, t5, zero
                  nop
                  c.nop
                  c.addi s7, 18
                  c.lui ra, 19
                  sub zero, t0, sp
                  c.srai a3, 22
                  andi s2, zero, -159
                  add s2, a6, s6
                  c.slli s2, 5
                  c.nop
                  c.mv t1, sp
                  sll s3, a3, t5
                  slli t1, t1, 18
                  srl s4, s11, t1
                  rem s7, sp, a1
                  ori a3, s11, -243
                  rem s11, sp, a6
                  auipc t4, 288836
                  mul zero, gp, t5
                  sltiu s6, s3, -1566
                  ori t2, t4, 908
                  slti s4, t4, -1757
                  lui zero, 295229
                  slt s8, s4, t0
                  xor t1, a6, a2
                  c.li tp, -1
                  or t4, s5, a0
                  and zero, t4, a5
                  lui zero, 447716
                  c.andi a1, 31
                  c.addi16sp sp, -16
                  c.srli a3, 19
                  sll zero, s3, s3
                  div s11, s2, t2
                  ori s7, s3, 1184
                  sltiu a6, t1, 1275
                  srli s2, s2, 3
                  lui t4, 825092
                  mulh t1, s5, a5
                  c.addi4spn a3, sp, 128
                  srl gp, a5, gp
                  c.addi4spn a1, sp, 576
                  auipc t2, 507723
                  rem a3, t0, a5
                  sltu ra, a4, t3
                  c.xor a3, a3
                  c.addi s5, 1
                  slt t0, t4, tp
                  andi s2, s7, -1925
                  c.srli a3, 11
                  srli t3, a7, 23
                  or sp, a0, t5
                  c.lui s9, 31
                  sub s11, t1, a2
                  c.srli a3, 17
                  sltiu t4, s2, 1778
                  c.mv s6, s6
                  c.addi tp, -1
                  add a6, s0, a2
                  div s5, s0, s4
                  srl zero, s4, a7
                  xori sp, t2, -1082
                  c.addi16sp sp, 176
                  c.addi t3, 31
                  c.mv s9, t4
                  c.xor a3, a3
                  c.and a3, a3
                  srli a7, t2, 7
                  sra s0, s4, s1
                  srai t2, a6, 24
                  rem gp, a4, s7
                  slti s4, a6, -567
                  c.srai a3, 16
                  c.nop
                  mulh zero, t6, s11
                  xor s9, a1, a4
                  lui gp, 55368
                  c.srai a3, 6
                  c.andi a3, 17
                  xor zero, s2, t0
                  c.or a3, a3
                  c.and a3, a3
                  slli s1, t4, 31
                  or t0, a1, s2
                  div ra, s6, ra
                  sra a2, tp, s10
                  slt s3, s5, t0
                  nop
                  div zero, a0, a7
                  srli a3, a6, 1
                  c.addi a0, -1
                  c.andi a3, -1
                  c.lui gp, 1
                  mulhu a1, tp, a4
                  c.srli a2, 9
                  c.and a3, a3
                  sra zero, s5, s6
                  nop
                  andi sp, t3, 1934
                  divu sp, t5, s3
                  c.add a2, a6
                  mul ra, a2, t2
                  divu tp, gp, a3
                  slli s1, a5, 13
                  auipc zero, 726997
                  c.xor a3, a3
                  div s8, s11, s4
                  sltu s9, s6, zero
                  mulh s0, s8, s1
                  mulhu s5, t5, sp
                  mulhu t1, s9, s1
                  mul s0, s6, s8
                  and s1, s10, a0
                  srli s3, a7, 4
                  c.add s1, t2
                  div s4, a7, s5
                  xor a1, t6, s2
                  c.addi t1, -1
                  c.addi s6, -1
                  mulhsu zero, a0, a5
                  c.or a3, a3
                  mulh a4, s4, sp
                  c.addi4spn a3, sp, 864
                  mul s3, s5, a5
                  c.addi4spn a3, sp, 384
                  and s11, t3, s10
                  srai s6, t6, 3
                  mul s0, s9, a0
                  xor t3, s5, sp
                  sltiu sp, t3, -72
                  addi a6, a0, -469
                  c.addi16sp sp, 368
                  c.xor a3, a5
                  andi ra, s0, 1925
                  div a4, s10, a4
                  xori a6, sp, -393
                  c.lui t2, 19
                  c.li s6, 8
                  slti gp, s8, -261
                  sltiu t4, a0, 1009
                  rem s11, s2, t1
                  slt a5, t3, t3
                  sll s5, a7, ra
                  c.add a3, s3
                  c.or a3, a3
                  sltu s8, a7, tp
                  xor a7, a1, s9
                  c.add s8, s3
                  and s3, s6, s3
                  c.nop
                  c.li a7, 11
                  nop
                  slti s1, t5, 82
                  c.li s1, 8
                  addi s1, t0, 2018
                  mulhu a3, s10, a3
                  slt ra, s5, s1
                  c.addi a0, -1
                  xor zero, a0, a0
                  mul t4, s2, t1
                  c.andi a3, 16
                  c.xor a3, a3
                  c.slli a4, 14
                  c.li a7, 10
                  sltiu s7, s1, -1932
                  addi s1, ra, -1051
                  srli t0, s4, 1
                  mulh s6, sp, s9
                  c.xor a3, a3
                  mul ra, s8, a1
                  c.addi16sp sp, -16
                  mul zero, ra, s7
                  sra s0, t5, s11
                  and t0, s4, s2
                  andi s9, s9, 536
                  sll ra, t3, s6
                  ori a4, a0, -916
                  add s3, gp, s0
                  mul s6, a6, a4
                  xori s7, s6, -785
                  c.slli a0, 25
                  c.nop
                  div tp, a3, ra
                  la x31, test_done
                  jalr x0, x31, 0
test_done:
                  li gp, 1
                  ecall
write_tohost:
                  sw gp, tohost, t5

_exit:
                  j write_tohost

instr_end:
                  nop

.section .data
.align 6; .global tohost; tohost: .dword 0;
.align 6; .global fromhost; fromhost: .dword 0;
.section .user_stack,"aw",@progbits;
.align 2
user_stack_start:
.rept 4999
.4byte 0x0
.endr
user_stack_end:
.4byte 0x0
.align 2
kernel_instr_start:
.text
.align 2
mtvec_handler:
                  csrrw x26, 0x340, x26
                  add x26, x30, zero
                  1: addi x26, x26, -124
                  sw x1, 4(x26)
                  sw x2, 8(x26)
                  sw x3, 12(x26)
                  sw x4, 16(x26)
                  sw x5, 20(x26)
                  sw x6, 24(x26)
                  sw x7, 28(x26)
                  sw x8, 32(x26)
                  sw x9, 36(x26)
                  sw x10, 40(x26)
                  sw x11, 44(x26)
                  sw x12, 48(x26)
                  sw x13, 52(x26)
                  sw x14, 56(x26)
                  sw x15, 60(x26)
                  sw x16, 64(x26)
                  sw x17, 68(x26)
                  sw x18, 72(x26)
                  sw x19, 76(x26)
                  sw x20, 80(x26)
                  sw x21, 84(x26)
                  sw x22, 88(x26)
                  sw x23, 92(x26)
                  sw x24, 96(x26)
                  sw x25, 100(x26)
                  sw x26, 104(x26)
                  sw x27, 108(x26)
                  sw x28, 112(x26)
                  sw x29, 116(x26)
                  sw x30, 120(x26)
                  sw x31, 124(x26)
                  csrr x29, 0x300 # MSTATUS
                  csrr x29, 0x342 # MCAUSE
                  srli x29, x29, 31
                  bne x29, x0, mmode_intr_handler

mmode_exception_handler:
                  csrr x29, 0x341 # MEPC
                  csrr x29, 0x342 # MCAUSE
                  li x22, 0xb # ECALL_MMODE
                  beq x29, x22, ecall_handler
                  li x22, 0x2 # ILLEGAL_INSTRUCTION
                  beq x29, x22, illegal_instr_handler
                  csrr x22, 0x343 # MTVAL
                  1: la x31, test_done
                  jalr x1, x31, 0

ecall_handler:
                  la x29, _start
                  sw x0, 0(x29)
                  sw x1, 4(x29)
                  sw x2, 8(x29)
                  sw x3, 12(x29)
                  sw x4, 16(x29)
                  sw x5, 20(x29)
                  sw x6, 24(x29)
                  sw x7, 28(x29)
                  sw x8, 32(x29)
                  sw x9, 36(x29)
                  sw x10, 40(x29)
                  sw x11, 44(x29)
                  sw x12, 48(x29)
                  sw x13, 52(x29)
                  sw x14, 56(x29)
                  sw x15, 60(x29)
                  sw x16, 64(x29)
                  sw x17, 68(x29)
                  sw x18, 72(x29)
                  sw x19, 76(x29)
                  sw x20, 80(x29)
                  sw x21, 84(x29)
                  sw x22, 88(x29)
                  sw x23, 92(x29)
                  sw x24, 96(x29)
                  sw x25, 100(x29)
                  sw x26, 104(x29)
                  sw x27, 108(x29)
                  sw x28, 112(x29)
                  sw x29, 116(x29)
                  sw x30, 120(x29)
                  sw x31, 124(x29)
                  la x31, write_tohost
                  jalr x0, x31, 0

illegal_instr_handler:
                  csrr x29, 0x341
                  addi x29, x29, 4
                  csrw 0x341, x29
                  lw x1, 4(x26)
                  lw x2, 8(x26)
                  lw x3, 12(x26)
                  lw x4, 16(x26)
                  lw x5, 20(x26)
                  lw x6, 24(x26)
                  lw x7, 28(x26)
                  lw x8, 32(x26)
                  lw x9, 36(x26)
                  lw x10, 40(x26)
                  lw x11, 44(x26)
                  lw x12, 48(x26)
                  lw x13, 52(x26)
                  lw x14, 56(x26)
                  lw x15, 60(x26)
                  lw x16, 64(x26)
                  lw x17, 68(x26)
                  lw x18, 72(x26)
                  lw x19, 76(x26)
                  lw x20, 80(x26)
                  lw x21, 84(x26)
                  lw x22, 88(x26)
                  lw x23, 92(x26)
                  lw x24, 96(x26)
                  lw x25, 100(x26)
                  lw x26, 104(x26)
                  lw x27, 108(x26)
                  lw x28, 112(x26)
                  lw x29, 116(x26)
                  lw x30, 120(x26)
                  lw x31, 124(x26)
                  addi x26, x26, 124
                  add x30, x26, zero
                  csrrw x26, 0x340, x26
                  mret

pt_fault_handler:

.align 2
mmode_intr_handler:
                  csrr x29, 0x300 # MSTATUS;
                  csrr x29, 0x304 # MIE;
                  csrr x29, 0x344 # MIP;
                  csrrc x29, 0x344, x29 # MIP;
                  lw x1, 4(x26)
                  lw x2, 8(x26)
                  lw x3, 12(x26)
                  lw x4, 16(x26)
                  lw x5, 20(x26)
                  lw x6, 24(x26)
                  lw x7, 28(x26)
                  lw x8, 32(x26)
                  lw x9, 36(x26)
                  lw x10, 40(x26)
                  lw x11, 44(x26)
                  lw x12, 48(x26)
                  lw x13, 52(x26)
                  lw x14, 56(x26)
                  lw x15, 60(x26)
                  lw x16, 64(x26)
                  lw x17, 68(x26)
                  lw x18, 72(x26)
                  lw x19, 76(x26)
                  lw x20, 80(x26)
                  lw x21, 84(x26)
                  lw x22, 88(x26)
                  lw x23, 92(x26)
                  lw x24, 96(x26)
                  lw x25, 100(x26)
                  lw x26, 104(x26)
                  lw x27, 108(x26)
                  lw x28, 112(x26)
                  lw x29, 116(x26)
                  lw x30, 120(x26)
                  lw x31, 124(x26)
                  addi x26, x26, 124
                  add x30, x26, zero
                  csrrw x26, 0x340, x26
                  mret;

kernel_instr_end: nop
.align 2
kernel_data_start:
.section .kernel_stack,"aw",@progbits;
.align 2
kernel_stack_start:
.rept 4999
.4byte 0x0
.endr
kernel_stack_end:
.4byte 0x0
