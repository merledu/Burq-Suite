# 0 "/home/mahnoor/burqnew/cores/swerv/testbench/tests/riscv_arithmetic_basic_test_0/riscv_arithmetic_basic_test_0.s"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/mahnoor/burqnew/cores/swerv/testbench/tests/riscv_arithmetic_basic_test_0/riscv_arithmetic_basic_test_0.s"
.globl _start
.section .text
_start:
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x7, h0_start
jalr x0, x7, 0
h0_start:
                  li x31, 0x40001104
                  csrw 0x301, x31
kernel_sp:
                  la x13, kernel_stack_end

trap_vec_init:
                  la x31, mtvec_handler
                  ori x31, x31, 1
                  csrw 0x305, x31 # MTVEC

mepc_setup:
                  la x31, init
                  csrw 0x341, x31

init_machine_mode:
                  li x31, 0x1c00
                  csrw 0x300, x31 # MSTATUS
                  li x31, 0x0
                  csrw 0x304, x31 # MIE
                  mret
init:
                  li x0, 0x13dfa651
                  li x1, 0x0
                  li x2, 0x2952b073
                  li x3, 0x80000000
                  li x4, 0x6
                  li x5, 0x567c762a
                  li x6, 0x9
                  li x7, 0xfe23b7c6
                  li x8, 0x0
                  li x9, 0x80000000
                  li x10, 0x80000000
                  li x11, 0xfc45ac26
                  li x12, 0x1a32fc68
                  li x14, 0xf
                  li x15, 0xe
                  li x16, 0x80000000
                  li x17, 0x23a43a18
                  li x18, 0xfa83b5bc
                  li x19, 0x9
                  li x20, 0xf5a1c8a6
                  li x21, 0x80000000
                  li x22, 0x0
                  li x23, 0x344521d6
                  li x24, 0x4
                  li x25, 0xc
                  li x26, 0x0
                  li x28, 0xf87747bf
                  li x29, 0x80000000
                  li x30, 0x2
                  li x31, 0x0
                  la x27, user_stack_end
main: li t3, 0x0 #start riscv_int_numeric_corner_stream_4
                  li t6, 0x0
                  li a6, 0x1
                  li t5, 0x1
                  li t4, 0xf83745c
                  li a5, 0x597a09b5
                  li t0, 0x1
                  li s5, 0x1
                  li a4, 0x0
                  li s7, 0x0
                  mulhu zero, s10, a5
                  lui t3, 789389
                  mulhsu s4, s0, a1
                  c.sub a0, a0
                  auipc s9, 87319
                  mulh a5, t4, t6
                  lui s4, 577363
                  c.nop
                  div t3, s9, t5
                  div ra, s7, t1
                  c.lui t3, 29
                  c.nop
                  mulhsu t0, t0, s10
                  rem s0, s8, t6
                  mulhu a2, t5, a2
                  c.addi4spn a0, sp, 400
                  auipc zero, 1045160
                  lui zero, 45681
                  c.li ra, -1
                  mul t4, s2, tp
                  auipc a4, 284010
                  c.mv s9, t6
                  lui t1, 909168
                  c.nop
                  divu s6, s9, a0 #end riscv_int_numeric_corner_stream_4
                  li s10, 0x0 #start riscv_int_numeric_corner_stream_2
                  li t5, 0x0
                  li t6, 0x1
                  li t4, 0x0
                  li t3, 0x0
                  li a4, 0xd5dfe66
                  li s5, 0x0
                  li a2, 0x0
                  li s9, 0x0
                  li a5, 0x0
                  c.addi4spn a0, sp, 672
                  c.li s3, -1
                  mul zero, s11, t3
                  c.mv t6, sp
                  c.nop
                  c.addi s3, 24
                  nop
                  mulhsu sp, s5, a3
                  c.addi16sp sp, 320
                  mulhu zero, sp, s8
                  c.lui t4, 24
                  c.add ra, tp
                  div a5, t6, a2
                  sub t0, sp, a5
                  rem a4, t1, sp
                  addi s9, sp, -1004
                  c.addi sp, -1
                  c.mv ra, gp
                  c.sub a0, a2
                  auipc sp, 860814
                  c.addi t1, 20
                  mulhu s4, s1, a4
                  mul s0, s9, zero
                  auipc a2, 1026578
                  divu s1, s0, t1
                  c.mv a0, a2
                  addi s5, s4, 1252
                  mul ra, t3, s4
                  c.sub a0, a2
                  li tp, 0x0 #start riscv_int_numeric_corner_stream_5
                  li t6, 0x0
                  li t5, 0x1
                  li t4, 0x1
                  li s1, 0x1
                  li s9, 0x1
                  li t3, 0x0
                  li a2, 0x1
                  li t0, 0x40d60feb
                  li s5, 0x0
                  auipc s5, 934087
                  c.nop
                  mulhu sp, a1, tp
                  add zero, tp, s4
                  mulhsu s8, s9, s9
                  div a4, a3, a1
                  divu s4, t6, a7
                  div a4, s7, t2
                  addi s0, s0, -1542
                  add a5, a2, a3
                  mulh s2, a3, a2
                  c.li s5, 15
                  c.addi16sp sp, -16
                  c.li tp, 25
                  c.addi s10, -1
                  auipc a5, 538007
                  mulhu s6, s10, t3
                  div s4, s11, a3
                  c.lui s2, 17
                  mul t0, s4, s11
                  c.mv s5, a0
                  mulhu s4, s3, a3
                  addi a7, sp, 1976
                  mulh a0, a0, s9
                  c.addi4spn a0, sp, 608
                  mul t4, s10, s7 #end riscv_int_numeric_corner_stream_5
                  li t5, 0x1 #start riscv_int_numeric_corner_stream_1
                  li s7, 0x0
                  li s6, 0x0
                  li a7, 0x69a74f90
                  li t4, 0x7ecf05fa
                  li gp, 0x1
                  li t3, 0x0
                  li s8, 0x0
                  li a2, 0x0
                  li t6, 0x156a19b1
                  addi s8, a7, 1286
                  mulhu a7, a0, a5
                  sub s2, t4, s5
                  rem s7, a7, zero
                  mulh a5, t1, sp
                  mulh a6, a6, t2
                  c.addi16sp sp, 288
                  auipc tp, 717793
                  divu a5, tp, t4
                  rem a4, s5, s8
                  mulh a6, s4, ra
                  c.li s10, 0
                  sub sp, gp, ra
                  divu tp, tp, sp
                  c.mv t6, s1
                  c.mv sp, t3
                  c.nop
                  rem a0, s11, t4
                  c.addi16sp sp, -16
                  c.or a0, a2
                  sra tp, s6, s1
                  slli zero, a0, 29
                  c.addi4spn a0, sp, 928
                  mulhu t5, a3, t1
                  sra zero, a5, s4
                  nop
                  c.lui s10, 15
                  andi t4, sp, 559
                  andi s4, s0, 1938
                  c.slli gp, 6
                  xori a5, tp, 935
                  c.li t0, 3
                  slt s8, s1, t4
                  sltu t4, s7, s11
                  c.srai a0, 25
                  sltu s3, a7, a6
                  c.mv s5, s1
                  c.addi16sp sp, 496
                  mulhu s5, s3, zero
                  sltiu a5, a4, 902
                  c.xor a5, s0
                  c.mv s3, s1
                  c.addi4spn a0, sp, 752
                  rem ra, t1, s0
                  c.addi16sp sp, 496
                  c.li sp, -1
                  mulh sp, s8, a1
                  c.and s1, a2
                  ori s5, tp, 1578
                  c.mv s3, t0
                  sltiu zero, a2, 193
                  and s8, s7, t1
                  auipc a6, 810443
                  lui a0, 466552
                  mulhu s6, a3, s7
                  mul zero, sp, t6
                  c.addi16sp sp, 400
                  xori zero, a6, -2045
                  and s5, s1, gp
                  mulhu zero, a1, s3
                  c.mv ra, s2
                  ori t3, a2, -1767
                  slli a1, gp, 10
                  c.li ra, 2
                  slt gp, gp, a5
                  add zero, s10, zero
                  c.addi4spn a5, sp, 192
                  ori a5, t2, -1989
                  mulhu s9, a6, a0
                  and a1, s6, s4
                  and s4, s4, a4
                  div s3, a6, a4
                  mulhu s5, s5, s8
                  xori s8, tp, 274
                  xor s2, ra, a3
                  mulhsu s9, s1, s10
                  mulh a2, ra, a2
                  sltu a5, s5, s9
                  c.andi a0, -1
                  c.nop
                  c.srai a0, 23
                  mulh sp, a7, s8
                  div s5, t5, t3
                  srai a7, s7, 1
                  mulhsu s5, gp, tp
                  c.nop
                  c.srai a0, 6
                  nop
                  c.addi16sp sp, 432
                  ori t0, a6, -376
                  srli sp, s11, 8
                  c.addi4spn a2, sp, 96
                  sra tp, zero, t0
                  c.lui t5, 20
                  c.srai s1, 19
                  c.addi4spn a1, sp, 528
                  srli s3, s2, 12
                  ori ra, t1, -288
                  lui t5, 934343
                  c.xor a0, a2
                  sltiu zero, s5, -563
                  and s8, s8, zero
                  c.addi16sp sp, -16
                  nop
                  c.addi a6, 4
                  xor zero, t5, a3
                  xor zero, tp, a3
                  addi t0, sp, 262
                  c.xor a0, a0
                  addi s2, a5, -518
                  add gp, a6, a1
                  sltiu t1, s7, -560
                  slti s9, zero, -1520
                  mulh a1, a2, s9
                  sll s8, s0, t5
                  c.add ra, s3
                  slti s10, s3, 1738
                  sub a5, t0, sp
                  addi ra, a2, -1570
                  c.addi t3, -1
                  c.addi4spn a1, sp, 64
                  mulh t3, sp, s0
                  c.andi a0, -1
                  c.lui gp, 6
                  nop
                  slli zero, t4, 26
                  slti a4, s2, 1088
                  sll ra, a6, s11
                  c.nop
                  divu sp, a4, a7
                  add t4, a2, a2
                  sltu t4, a5, s8
                  sll a4, s2, a4
                  and zero, a0, s7
                  c.and a2, a1
                  c.li t4, -1
                  c.addi4spn a5, sp, 720
                  rem a4, a7, s8
                  andi gp, s0, 1683
                  c.and s1, s1
                  sltu tp, a3, t6
                  srli s9, sp, 10
                  srl gp, zero, a7
                  slt zero, t5, s7
                  sra zero, s1, a2
                  srai a5, a2, 15
                  addi zero, s11, -1593
                  addi gp, s8, -1946
                  sub t5, t6, ra
                  sra a5, s3, zero
                  srli t3, zero, 26
                  divu tp, s9, t6
                  c.srli a0, 16
                  lui tp, 345983
                  srai zero, t2, 3
                  slli ra, a5, 21
                  div tp, s9, s0
                  c.lui a5, 8
                  c.addi s7, -1
                  sltu a2, s7, s11
                  auipc a6, 19392
                  div a0, s0, s0
                  mulhsu s3, s4, a0
                  c.nop
                  srai a7, s8, 11
                  c.and s0, s0
                  c.addi4spn a0, sp, 448
                  xor s7, s8, s6
                  div zero, a7, s6
                  and ra, s8, a7
                  srl s9, t1, t2
                  and s3, s6, tp
                  add a5, zero, s4
                  c.andi a2, 19
                  add s2, s8, s2
                  sra t6, s5, zero
                  srl t4, a3, t1
                  add a4, t0, s7
                  srli t0, gp, 23
                  sub t5, a3, s6
                  c.or a0, a1
                  mulhsu t4, t3, t0
                  c.andi a0, -1
                  or zero, a7, s4
                  c.nop
                  auipc s5, 672313
                  add a4, t1, s3
                  andi s10, zero, 577
                  mul t0, s3, s2
                  c.addi s10, 29
                  andi t5, s8, -1004
                  c.addi4spn a0, sp, 240
                  add s10, s3, s10
                  c.and a0, a2
                  mul a1, s2, a1
                  ori a1, a2, 1687
                  c.andi a2, 3
                  divu s9, zero, s8
                  and s3, zero, a7
                  ori a0, a0, 322
                  c.nop
                  mulhsu a2, t1, t1
                  sub a7, sp, t0
                  srl zero, t4, s2
                  sll s5, a5, a3
                  c.andi a0, -1
                  or a7, s0, s2
                  mul t3, s4, t2
                  srl a7, a4, sp
                  mulhu s4, s1, gp
                  or s4, t3, tp
                  c.xor a2, a1
                  slt t1, t0, a0
                  srli s6, t5, 27
                  c.srai a0, 6
                  divu tp, s11, a0
                  slli tp, t6, 12
                  sub t4, tp, s9
                  srli t3, s10, 5
                  div a1, s8, a7
                  srai zero, a4, 17
                  slt ra, s9, s5
                  divu gp, s8, a2
                  c.srli a2, 28
                  sltu s2, t3, t2
                  divu gp, t5, s5
                  c.andi a0, -1
                  xor s4, a3, s6
                  c.addi a0, 22
                  c.slli s0, 16
                  slt t1, t1, a0
                  or t3, a2, t1
                  addi zero, a0, 1968
                  sltu a0, a6, s1
                  mulhu t6, t3, t2
                  mulhu t1, a1, s5
                  c.addi4spn a0, sp, 528
                  sll zero, s6, a0
                  srli t4, t6, 3
                  c.addi16sp sp, -16
                  c.mv s10, sp
                  c.or a0, a0
                  lui s3, 190443
                  slti s4, t2, 49
                  div s9, s11, a1
                  c.andi a0, -1
                  rem s6, s6, a1
                  and t5, a2, a5
                  c.nop
                  c.addi a4, 13
                  sll a4, a1, a2
                  srli a4, ra, 27
                  c.addi s1, 29
                  c.addi16sp sp, -16
                  sra t5, t4, s8
                  c.nop
                  c.srli a0, 18
                  auipc sp, 999192
                  sub zero, a4, gp
                  slt s3, a0, t2
                  or a5, t1, a0
                  auipc s2, 233787
                  slt zero, s10, ra
                  c.xor s0, a2
                  add t0, s4, s1
                  sltu s2, zero, s9
                  slt s3, s2, t6
                  slli t1, s1, 1
                  c.slli t0, 30
                  c.or a2, a0
                  c.and a0, a2
                  mulhu zero, t3, t4
                  c.srli s1, 28
                  andi t4, ra, -1089
                  sub s5, ra, sp
                  slli s6, t1, 15
                  mulhu zero, a7, s7
                  andi s1, s4, -2034
                  c.add gp, t5
                  auipc zero, 10775
                  rem a0, s6, a5
                  c.or a0, a2
                  c.slli a4, 18
                  mulhu zero, a3, sp
                  srl t3, t2, tp
                  c.addi16sp sp, -16
                  c.xor a0, a3
                  divu s4, a0, t3
                  c.and a0, a3
                  sltiu ra, a7, -1575
                  c.sub a0, s0
                  c.sub a0, a5
                  add s3, s5, s7
                  xor s1, sp, a1
                  mulhsu gp, s8, s4
                  c.srli a5, 11
                  divu s9, a5, s6
                  mul s10, zero, a7
                  slli s4, a7, 7
                  mulhsu s0, t1, t0
                  nop
                  xor t4, s3, s10
                  mulhu t5, s7, t1
                  auipc s10, 734738
                  sll s2, a4, zero
                  slt t4, s0, a2
                  c.addi16sp sp, -16
                  c.andi a0, 5
                  c.srli a2, 6
                  c.xor a0, a3
                  srai zero, s10, 4
                  c.xor a0, s1
                  mulhsu t3, s0, zero
                  c.srai a0, 21
                  andi zero, t5, -770
                  rem t1, t4, t4
                  slli t4, s6, 24
                  c.xor a0, a2
                  xori t4, t4, -613
                  auipc a5, 503315
                  c.nop
                  srli s10, s9, 22
                  srli ra, sp, 4
                  c.nop
                  srai a2, a7, 22
                  auipc a0, 384410
                  slli s5, t2, 26
                  andi zero, a5, -870
                  c.andi a4, -1
                  slt s0, s7, s5
                  srai gp, s3, 20
                  xori a4, t1, -1828
                  c.addi sp, -1
                  mul a0, a3, a4
                  srli s0, s3, 14
                  c.mv a5, a1
                  sltiu sp, s6, 831
                  mul s0, tp, a6
                  addi zero, gp, -243
                  c.add t6, a2
                  addi s3, t1, 331
                  div s0, s3, s4
                  c.sub a0, s0
                  c.slli t6, 30
                  mulh s10, s6, t0
                  c.or a0, a5
                  c.andi a5, 17
                  c.addi16sp sp, -16
                  add s1, s7, s3
                  slli s7, s3, 7
                  lui zero, 296410
                  add s10, s10, s9
                  add s2, a3, ra
                  sub s9, s8, t5
                  slt t1, a6, a5
                  c.lui a7, 2
                  srai s1, s6, 26
                  lui sp, 37138
                  div sp, t2, a1
                  slt s5, t6, s8
                  c.srli a0, 9
                  sra zero, a1, t0
                  rem s3, gp, a3
                  c.xor a0, a2
                  c.li a4, -1
                  mulhu sp, a4, t2
                  sra t5, sp, t6
                  c.add t6, t1
                  c.sub a0, s0
                  c.and a0, a0
                  c.srli a2, 22
                  div t5, s9, gp
                  c.addi4spn a0, sp, 416
                  sll ra, tp, gp
                  c.lui t4, 31
                  andi s7, t5, 1384
                  c.addi16sp sp, -16
                  div zero, s2, t1
                  mulhu a2, s5, s1
                  slti t6, ra, -623
                  c.srai a5, 14
                  c.andi a0, 4
                  sll t6, s2, s11
                  c.addi4spn a0, sp, 992
                  slt a4, s1, s2
                  c.sub s1, a0
                  mulhsu s9, zero, s11
                  slli t6, s11, 19
                  ori t4, s0, 1347
                  mul zero, zero, s0
                  or s5, s9, t1
                  mulhu zero, a6, gp
                  xor tp, s9, s6
                  sub t5, t5, a1
                  mulhsu a1, a2, s11
                  mulh a4, s11, s8
                  srli s9, s10, 18
                  div sp, t2, a7
                  srl zero, sp, t6
                  c.or a2, a1
                  c.andi s1, 7
                  srl gp, t1, t4
                  or s0, s9, s1
                  c.addi s7, -1
                  or t5, s4, sp
                  mulhu t1, t6, s8
                  div a7, s6, s4
                  sltu ra, a3, a2
                  sltu a5, a6, a2
                  sltu s8, t6, s11
                  srai s9, s11, 24
                  auipc t1, 914587
                  c.sub a4, s0
                  c.andi a0, -1
                  addi s6, a4, -1999
                  slli s0, a0, 12
                  addi a6, s11, 398
                  add s4, sp, gp
                  sltiu t6, s8, -10
                  auipc a7, 610235
                  slli a5, s4, 20
                  mulhu gp, a4, t2
                  lui zero, 663389
                  c.sub a0, a1
                  c.srli s0, 25
                  c.and a2, a5
                  or zero, s2, t6
                  rem a4, s8, t0
                  slli zero, ra, 1
                  c.xor s0, a2
                  rem s7, sp, tp
                  slti t1, t6, 1005
                  or t4, s7, s6
                  srl t6, a0, a3
                  srai a0, a1, 31
                  sub s6, a1, s7
                  ori a4, a5, 1751
                  c.srli a2, 1
                  or zero, s10, s7
                  c.srai a0, 5
                  sub s10, s3, s6
                  add zero, t2, a7
                  nop
                  c.add ra, a3
                  addi s10, t4, 1458
                  c.addi16sp sp, 160
                  c.li s1, -1
                  sub s10, a3, t2
                  c.lui ra, 6
                  or s1, s9, s5
                  slti t0, ra, -1295
                  sra s7, t4, zero
                  c.addi4spn a2, sp, 752
                  nop
                  srli s4, s3, 9
                  c.nop
                  c.or s0, a0
                  c.add t5, t0
                  srl zero, s10, s8
                  c.andi a0, -1
                  c.sub a5, a0
                  auipc s10, 744528
                  slti a5, a7, -222
                  slli s9, s3, 0
                  mul ra, zero, a7
                  sra a5, s3, s1
                  c.li s6, -1
                  slli s8, t4, 6
                  add s8, s4, t3
                  c.addi16sp sp, 64
                  c.srli a0, 14
                  c.add ra, t2
                  c.or a0, a0
                  mulhsu a1, zero, s5
                  c.mv s8, a0
                  auipc a4, 210615
                  mul s4, t4, s5
                  mulhu zero, a2, a6
                  c.addi16sp sp, 464
                  srai s1, s11, 26
                  nop
                  c.slli gp, 19
                  and s8, s3, s6
                  c.mv a5, a1
                  c.mv gp, a4
                  c.srli a0, 9
                  divu a1, a1, s8
                  c.slli s1, 1
                  mulh s9, s4, s3
                  mulh a1, a0, s0
                  ori a4, ra, 1578
                  sra a4, a6, s6
                  and s0, t5, gp
                  mulhsu t3, s11, s2
                  c.addi ra, 18
                  c.addi4spn a5, sp, 896
                  c.srai s1, 31
                  c.andi a2, 31
                  lui s3, 80773
                  c.and a0, s0
                  slli a1, s1, 9
                  c.andi a0, 9
                  ori a2, a5, 341
                  c.addi s2, 16
                  or s4, a3, a7
                  srli t6, s4, 3
                  xori t6, s7, 805
                  srai s7, sp, 0
                  slt s9, zero, gp
                  c.li a5, 9
                  nop
                  c.andi a0, -1
                  c.addi16sp sp, -16
                  slli sp, sp, 3
                  c.srli a0, 19
                  add t0, t3, s11
                  sra a7, tp, s11
                  c.sub a0, s0
                  c.slli t5, 25
                  sra a2, s9, s6
                  mulh s3, t4, s5
                  c.srai a0, 18
                  c.and a1, a3
                  addi gp, a2, -581
                  lui s8, 420280
                  c.addi16sp sp, -16
                  sltiu t3, s7, -558
                  c.addi16sp sp, 48
                  and t5, s0, t6
                  mulhu s4, a7, ra
                  mulh s2, a7, sp
                  c.slli t5, 17
                  sltiu s2, t6, 246
                  c.srai s1, 26
                  slt s1, s9, s11
                  auipc zero, 149563
                  c.addi t1, -1
                  c.addi4spn a0, sp, 832
                  sltu zero, a2, t5
                  mulhu s9, a0, s7
                  c.lui ra, 20
                  nop
                  divu s6, s4, t3
                  srli a1, s1, 9
                  c.andi a0, -1
                  c.andi a0, -1
                  lui sp, 177747
                  mulh s10, s1, a2
                  c.addi4spn a0, sp, 832
                  c.addi s3, -1
                  c.slli a7, 26
                  slli gp, a7, 4
                  mul t5, s8, s7
                  c.srai a0, 1
                  sltiu sp, s1, 1348
                  sra a5, a0, s7
                  c.andi a4, -1
                  mulhsu zero, a4, a3
                  c.sub a5, a1
                  addi s6, a1, 1484
                  c.addi4spn a0, sp, 848
                  c.xor a0, s1
                  rem t5, s5, a7
                  mulh t3, t2, a4
                  c.addi t4, -1
                  c.sub s0, a3
                  srl s3, s4, t0
                  nop
                  or s0, s10, s7
                  and s0, zero, sp
                  or s1, s7, s7
                  sltu tp, ra, s3
                  c.lui s2, 29
                  rem a2, a5, a2
                  sra t4, gp, t5
                  c.nop
                  div zero, a3, a2
                  nop
                  sltu t4, ra, t5
                  divu a6, s7, gp
                  sltiu s2, s0, -35
                  andi ra, ra, -1994
                  lui gp, 133552
                  c.srli a5, 31
                  srl t1, t1, s10
                  c.srli a2, 4
                  srai t6, s10, 10
                  slli a1, s7, 3
                  nop
                  c.add s4, a5
                  divu s3, t2, a4
                  mulhu t3, a7, ra
                  ori s7, s10, -1285
                  c.srli s1, 23
                  c.srai a0, 10
                  mulh s9, s5, a2
                  slti a0, t6, -88
                  slt s5, gp, s5
                  lui s3, 766376
                  c.srli a0, 29
                  ori a6, sp, -167
                  and zero, s8, s5
                  sltiu a0, s3, 1186
                  slti s6, sp, -1216
                  lui s5, 456553
                  sra s10, t0, s11
                  rem sp, zero, zero
                  c.and a0, a3
                  srl zero, t0, a2
                  c.addi t1, 2
                  c.srai s1, 29
                  li t6, 0x0 #start riscv_int_numeric_corner_stream_3
                  li t5, 0x1
                  li ra, 0x0
                  li a7, 0x127d50e5
                  li t4, 0x1
                  li t3, 0x7e36bab3
                  li a2, 0x0
                  li s8, 0x1
                  li a5, 0x749653f
                  li s5, 0x7b40dbf
                  c.addi16sp sp, -16
                  add s2, a3, t3
                  c.addi16sp sp, 144
                  c.mv a5, t3
                  add s6, s5, s11
                  lui s6, 619057
                  c.li ra, 9
                  mulhsu a5, a5, s3
                  c.addi4spn s1, sp, 48
                  addi zero, s2, -1444
                  add zero, s8, a0
                  c.addi16sp sp, 192
                  c.mv a7, t3
                  addi s9, tp, -137
                  c.li tp, -1
                  c.li ra, 18
                  c.slli s1, 26
                  ori s9, s3, 664
                  mul t3, s3, a6
                  c.lui a6, 28
                  sltiu s7, a6, -1635
                  slti sp, t6, 1009
                  c.or a0, a2
                  rem zero, s7, s0
                  c.slli ra, 22
                  xor tp, ra, s0
                  andi s4, t3, 616
                  auipc s6, 352509
                  addi a7, s8, -583
                  c.lui ra, 2
                  mulhsu a2, a1, ra
                  lui t4, 605908
                  mul s7, a0, t5
                  c.mv t1, a0
                  c.srli a2, 27
                  slt sp, t1, t4
                  andi tp, s11, -1651
                  andi s8, s5, -56
                  sll t3, a7, a7
                  slti zero, s8, 449
                  addi sp, t3, 995
                  sll zero, t2, a5
                  c.mv s9, a3
                  rem s4, s0, a0
                  c.addi a0, 20
                  add t6, t3, a0
                  and t4, s2, s0
                  c.nop
                  lui t0, 103477
                  srli zero, a5, 5
                  add zero, t2, tp
                  andi t6, sp, 94
                  slli a1, s1, 30
                  lui sp, 565007
                  sll a0, s2, s7
                  c.srli a0, 15
                  c.lui ra, 10
                  lui gp, 197015
                  mul t5, a4, s7
                  sltu t5, a5, s4
                  c.srai a0, 6
                  slt s0, a1, s4
                  sra s7, zero, a4
                  sltiu t5, s8, 549
                  ori a2, tp, -21
                  sub tp, a5, sp
                  sll zero, t0, s3
                  andi zero, t5, -1961
                  c.andi a0, 24
                  rem s0, tp, a4
                  slti gp, t1, -646
                  c.nop
                  c.srai a2, 22
                  nop
                  slt a7, a4, s11
                  c.xor a0, a5
                  ori a4, s3, 1863
                  lui s6, 994586
                  srl t4, a2, s2
                  xor a6, s10, t0
                  sltu s1, s1, ra
                  sltiu s0, t4, -1463
                  slli zero, t6, 23
                  rem ra, a0, a3
                  srli s7, a7, 3
                  mulh zero, a7, s6
                  sltu s3, t6, t1
                  mulhu t4, t0, a3
                  rem a1, a6, s8
                  xor t1, a3, t3
                  c.srli a2, 15
                  c.and a2, a1
                  c.lui t1, 16
                  sll s10, a7, sp
                  srl s4, t5, a4
                  c.add t4, s3
                  c.addi4spn a0, sp, 816
                  sltu s8, a2, ra
                  rem s6, a0, t2
                  mulhsu s6, t6, s0
                  xori a1, s3, 347
                  c.and a0, a0
                  c.sub a2, a1
                  ori s0, a2, -387
                  addi s4, a4, -165
                  c.mv s1, a2
                  mulh a4, s3, s7
                  sll s9, a6, t2
                  rem s10, a1, t1
                  c.li a6, 0
                  xor s4, a6, tp
                  srl s5, sp, t0
                  mul zero, a5, s0
                  srai s2, s8, 0
                  srl zero, tp, s7
                  divu sp, a6, s7
                  c.srai a0, 10
                  mulh a2, s7, zero
                  sltu a7, a4, a1
                  mul s10, s7, s9
                  slli zero, s7, 20
                  c.addi a4, -1
                  c.and a0, a4
                  slti s7, t6, -1881
                  c.srai a0, 23
                  add s10, sp, t0
                  mulhsu a6, a0, s6
                  mulhu s4, s0, s6
                  mul a1, gp, tp
                  c.andi s1, -1
                  xori s6, t0, -2044
                  c.xor a0, s1
                  add zero, a6, t1
                  ori sp, s10, 1861
                  slt s8, gp, a2
                  nop
                  c.srli a0, 6
                  c.add s9, tp
                  c.xor a0, s1
                  c.sub a0, a5
                  rem t5, t1, gp
                  c.and a0, a0
                  c.addi16sp sp, -16
                  slti t5, ra, -1041
                  ori ra, s0, -1820
                  c.srli a5, 29
                  sltiu zero, s5, 1655
                  add a4, t6, a5
                  c.addi4spn a5, sp, 1008
                  auipc a6, 909139
                  mulhsu a0, gp, t6
                  c.mv s7, a2
                  c.addi4spn a0, sp, 320
                  srl t4, t4, s0
                  slti a6, a7, -1673
                  srl s1, s11, tp
                  mulhu a1, s7, s0
                  c.addi4spn a0, sp, 384
                  c.addi t5, 10
                  and zero, s3, t1
                  and t4, t3, s11
                  srai t6, t0, 24
                  c.addi4spn a0, sp, 16
                  rem a7, zero, s4
                  rem tp, s10, s10
                  c.mv s10, a7
                  c.mv ra, sp
                  or zero, t0, s10
                  andi s4, s11, 379
                  c.srli a0, 10
                  addi s7, s4, -1927
                  auipc tp, 123411
                  c.mv ra, s5
                  c.and a2, s1
                  c.nop
                  c.add tp, s7
                  andi a1, s5, 1824
                  srl t4, s5, t6
                  slti tp, s6, 752
                  srli t5, t2, 10
                  c.andi a0, -1
                  slt t5, t2, a3
                  srli a2, t6, 31
                  add t6, t3, t6
                  c.andi a0, -1
                  sltu a6, t0, a2
                  rem ra, a1, sp
                  sltu s2, a1, t1
                  sll a1, s6, sp
                  c.lui s3, 22
                  slli t0, s3, 26
                  c.or s0, a3
                  add t1, s5, s9
                  sub a2, sp, s5
                  c.add s1, a0
                  sltiu zero, zero, -252
                  c.or a5, a1
                  mulhu t6, s7, gp
                  mul zero, tp, s8
                  mul a2, t3, t4
                  sll s4, a0, t5
                  c.sub a0, a1
                  slt t4, s9, a0
                  c.srli a0, 9
                  andi s7, s4, -2035
                  c.or a0, a0
                  nop
                  c.addi16sp sp, 112
                  c.li t1, -1
                  c.nop
                  slli zero, a7, 1
                  c.addi s5, -1
                  xori a7, t6, -781
                  auipc t1, 244988
                  sra s8, s2, a3
                  c.addi4spn a0, sp, 640
                  c.xor a5, s0
                  addi zero, s2, 26
                  div sp, t3, a3
                  andi s10, a0, 1439
                  sll s10, s3, t2
                  slli s4, t1, 21
                  xori s8, t2, 1659
                  lui sp, 119725
                  c.andi a0, -1
                  c.or a0, a0
                  c.lui s10, 10
                  c.addi4spn a5, sp, 272
                  c.or a0, a1
                  nop
                  lui a5, 359033
                  sltiu s3, t2, 1273
                  nop
                  c.srli a0, 1
                  sltu a6, s1, s2
                  slti s9, gp, -1043
                  slt a4, sp, gp
                  lui s7, 115616
                  c.lui t3, 20
                  c.and a0, s1
                  c.andi a0, -1
                  c.and a0, s1
                  divu s7, s7, a4
                  c.andi a0, 10
                  c.slli a6, 10
                  mul s9, a2, t2
                  c.sub a0, a3
                  mulh s6, s5, t3
                  auipc zero, 668486
                  rem t1, a5, t0
                  slti s2, sp, 1194
                  mulhu tp, zero, sp
                  xor zero, s0, t6
                  c.nop
                  auipc s0, 540342
                  c.srli s1, 30
                  c.andi a0, 21
                  slti s7, t5, -1676
                  mulhu s0, s8, s5
                  c.xor a0, a1
                  c.srli a1, 1
                  slli a6, t2, 4
                  c.addi4spn s1, sp, 480
                  srai t5, t1, 0
                  add zero, t3, s2
                  c.addi t3, 9
                  sub a5, a4, a7
                  srl t3, s5, a5
                  addi s4, gp, -361
                  c.srli a0, 8
                  lui t5, 344857
                  c.sub a2, a4
                  srli s4, a1, 28
                  and t1, a5, a0
                  xori ra, s10, 358
                  add a7, tp, a7
                  c.addi a5, -1
                  lui s4, 984548
                  c.lui s3, 12
                  c.or a0, a1
                  c.addi4spn s0, sp, 784
                  c.or a2, a0
                  mul s9, s10, gp
                  lui s9, 61120
                  c.nop
                  c.li s2, -1
                  sra s0, s4, sp
                  nop
                  lui s7, 751710
                  slt t5, a5, s8
                  divu t1, sp, s10
                  sub zero, s9, s10
                  or a4, t2, t6
                  or ra, s6, t5
                  c.slli s10, 27
                  sub a7, a7, t6
                  add s2, s2, t5
                  xori a5, a0, 598
                  sll a6, a5, s8
                  lui a2, 723701
                  andi s5, s3, -1626
                  c.addi16sp sp, -16
                  div t1, sp, a0
                  xor t6, s8, s4
                  or s6, gp, a0
                  div tp, a0, a1
                  sltiu a7, a0, 151
                  lui a1, 210084
                  rem a5, t2, s10
                  xori a5, t1, -1300
                  xori gp, s11, -774
                  and zero, a1, ra
                  mulh zero, ra, ra
                  divu zero, s7, s6
                  sltu gp, tp, a3
                  ori a4, s9, 471
                  xor gp, a7, s5
                  c.sub a1, a0
                  sra t4, a2, a5
                  slli t6, s10, 31
                  c.addi a1, 22
                  c.sub a0, a3
                  slti a5, t4, -166
                  or s1, s2, s10
                  add a6, s5, s1
                  lui t3, 198264
                  c.nop
                  c.nop
                  c.sub a0, a3
                  c.addi16sp sp, 176
                  sll zero, a2, s5
                  addi a7, s8, 1478
                  xor a7, s8, t1
                  mulh a6, ra, s1
                  mulh a4, a3, s11
                  mul t1, s9, t3
                  c.andi a0, 25
                  c.slli a0, 4
                  c.sub a0, a0
                  c.or a2, a3
                  c.and a0, s0
                  slli a4, t1, 30
                  divu t1, s4, t3
                  srai s1, s7, 15
                  divu a0, zero, a6
                  xor zero, a4, t4
                  srai s8, s8, 30
                  sltu s5, s6, a1
                  c.addi ra, -1
                  c.addi4spn a0, sp, 352
                  sub t0, sp, s4
                  andi a5, a4, -420
                  sub zero, a6, s5
                  lui t1, 180674
                  c.li a7, 9
                  slt s1, s5, t4
                  xori a2, s2, 316
                  xori zero, t6, -786
                  c.or s0, a0
                  sltu a5, t6, a7
                  c.andi a0, -1
                  srli t5, sp, 22
                  or a6, s1, s9
                  andi s4, s9, 766
                  c.addi4spn a1, sp, 928
                  c.addi16sp sp, -16
                  slli s6, t2, 9
                  add s2, sp, s10
                  c.add s4, s4
                  slti s2, t1, 498
                  c.addi4spn a2, sp, 192
                  c.mv a1, t2
                  c.slli s9, 24
                  c.sub a0, a3
                  c.li s7, -1
                  sll a0, t1, a4
                  c.addi t5, -1
                  slti ra, s7, -1675
                  c.mv t4, a0
                  div s5, s10, s5
                  c.xor a1, a3
                  sltiu s4, s0, -1883
                  c.add s8, t6
                  andi zero, sp, 1963
                  add zero, gp, t3
                  auipc zero, 102158
                  add zero, s5, t4
                  sub t4, s8, s0
                  c.andi a0, -1
                  srl tp, ra, t0
                  sltu s3, s3, s5
                  c.slli tp, 30
                  sltu a4, a1, t6
                  sltiu s4, a3, 1291
                  c.or a0, a0
                  add t4, a2, t5
                  addi s0, a1, -1724
                  andi s6, s9, -1417
                  c.li s8, -1
                  mulh s3, t4, s2
                  c.srli a0, 11
                  or sp, s7, s10
                  rem t1, s4, s7
                  c.slli s6, 23
                  andi t3, t5, 1898
                  lui s4, 50017
                  c.addi4spn a0, sp, 944
                  rem s6, a1, t1
                  and s6, gp, a7
                  nop
                  auipc t0, 833064
                  c.and a0, a4
                  nop
                  slti zero, s6, 317
                  mulh a1, s9, t3
                  c.addi16sp sp, 208
                  sltu a0, t2, s0
                  srli t0, s4, 4
                  mulh zero, s3, s10
                  c.sub a2, a0
                  c.slli s10, 25
                  rem s1, s0, t2
                  slli tp, t0, 30
                  mulh t5, s9, zero
                  c.sub a2, a0
                  sltiu s10, s9, -7
                  andi s8, s5, -667
                  or s3, a0, ra
                  sub sp, s4, s11
                  c.srli a4, 3
                  xori tp, t3, -1175
                  mulhu t5, gp, s1
                  add s3, s1, a6
                  c.srai a5, 9
                  sra s3, s1, s3
                  or s2, s7, s9
                  sub t5, s7, s2
                  sltu a1, a6, a4
                  c.andi s0, 30
                  c.li s4, 1
                  slli ra, s8, 13
                  c.or a0, s1
                  xori zero, tp, 474
                  c.slli a7, 8
                  c.sub a0, a3
                  xor t5, a4, s10
                  c.andi a0, 15
                  andi a1, a6, 1475
                  or zero, s9, a0
                  sll t6, zero, t6
                  c.li s6, 13
                  nop
                  c.srli a0, 2
                  c.xor a0, s1
                  srli tp, a5, 27
                  ori ra, s10, 1650
                  c.lui s6, 20
                  c.mv s2, t0
                  c.addi tp, -1
                  and zero, a0, s3
                  srli s6, a1, 21
                  c.andi a0, 0
                  sll tp, gp, s8
                  slti a6, s5, -111
                  mul sp, s9, s9
                  c.add s2, s1
                  slt a6, tp, t3
                  c.li s2, -1
                  c.srli a4, 22
                  c.srli s1, 6
                  sltu a2, s10, t3
                  mulhu t4, s4, zero
                  srli a7, s2, 2
                  mul a5, t4, ra
                  or zero, t0, s7
                  div t0, a6, s5
                  sub s3, s6, t0
                  c.nop
                  addi tp, a5, -255
                  srli sp, t5, 24
                  andi s2, sp, 1398
                  ori s5, s5, 1023
                  mulhsu t6, a7, s1
                  c.xor a0, s1
                  srl s6, a3, a3
                  c.li ra, -1
                  rem s5, t0, s7
                  c.srai s1, 20
                  div t5, a6, a6
                  c.lui ra, 1
                  sub t0, s9, s1
                  divu s10, s7, s9
                  auipc a5, 346072
                  c.addi4spn a5, sp, 704
                  mul s5, a6, s7
                  or s6, s8, s2
                  c.and a0, a0
                  slti s10, s5, -758
                  andi s0, ra, 48
                  addi s4, s8, -769
                  srli zero, s2, 24
                  slti s0, s1, 1698
                  sll t3, t3, s3
                  nop
                  divu a2, s4, t3
                  c.addi16sp sp, 288
                  nop
                  mulhu s3, s4, a7
                  c.sub a5, a1
                  xor s3, t0, s9
                  c.or a0, a1
                  xori zero, t3, 1256
                  xor s10, a7, s9
                  c.sub a4, a1
                  slli sp, s9, 29
                  divu t1, s4, s9
                  c.sub a1, a0
                  mulhu s8, a2, s2
                  add zero, t3, a5
                  sra s4, t0, tp
                  c.mv s9, s6
                  c.or a0, a0
                  slli a0, gp, 20
                  or t6, t2, s9
                  srli ra, a1, 10
                  or s10, s0, zero
                  mul s4, s10, t5
                  auipc a1, 426717
                  c.sub a1, a2
                  c.addi4spn s1, sp, 912
                  mulh t6, t3, t3
                  sub zero, a0, s3
                  sltu s1, a0, s9
                  c.and a0, a1
                  c.sub a2, a0
                  xor t5, ra, s3
                  xori s1, ra, 315
                  c.srai a0, 2
                  srai t5, s4, 13
                  srli t3, tp, 5
                  c.xor a0, a1
                  rem s7, s3, t4
                  c.srai a0, 17
                  c.add a6, t1
                  ori a2, gp, -1324
                  c.lui a4, 26
                  c.add a5, s7
                  mulh t5, t3, t4
                  xori gp, sp, -917
                  auipc s0, 733815
                  add t1, a5, t5
                  srl t0, a0, s2
                  mul t6, s5, zero
                  c.mv s0, s10
                  c.andi a0, -1
                  add s4, sp, a3
                  srli zero, t4, 31
                  c.andi a5, -1
                  ori t6, s7, -45
                  c.srai a0, 9
                  andi a4, s5, -760
                  slt gp, s9, a4
                  slli s6, t6, 6
                  rem t0, sp, s4
                  srli a1, t2, 14
                  mulhu s6, s7, t1
                  c.srli a0, 23
                  lui s0, 807328
                  divu t3, t0, a6
                  nop
                  auipc s2, 203353
                  mulhsu s1, gp, s11
                  c.lui ra, 1
                  sub s8, s3, s10
                  c.add t0, s6
                  rem a6, s8, a6
                  slli t5, ra, 4
                  mulhu s1, gp, s1
                  c.lui s1, 5
                  sub t1, t5, sp
                  mul s7, a0, sp
                  div t1, t2, sp
                  srli s4, s11, 16
                  srli zero, a7, 10
                  c.addi s1, -1
                  sll tp, a4, s4
                  ori s5, t0, 269
                  mulhsu s10, ra, s4
                  c.xor a0, a2
                  slti sp, ra, -479
                  and s4, a5, a5
                  c.mv a2, s9
                  c.slli a7, 12
                  c.and a0, a1
                  c.slli ra, 19
                  sub s5, gp, a0
                  slti s7, a4, -609
                  c.addi16sp sp, 416
                  mulhsu s7, s11, s3
                  c.srai a2, 5
                  slli s4, a6, 7
                  c.xor a1, a2
                  lui s6, 259899
                  mulhu s0, t5, s7
                  c.xor a0, s0
                  slli s10, a7, 26
                  sltu a7, s3, t1
                  andi s8, t4, -1057
                  mulhsu t0, s9, ra
                  c.addi s5, -1
                  c.sub a0, a1
                  c.and a0, a0
                  add s6, s0, s2
                  srl s4, s8, s3
                  sltu t5, a6, t5
                  c.sub a0, a0
                  xori s0, a6, -642
                  c.add gp, ra
                  xori a4, a1, 528
                  lui zero, 112354
                  c.lui a6, 8
                  c.srli a1, 9
                  sltiu ra, gp, 893
                  mul zero, t6, s7
                  mulhu t3, a5, s2
                  c.and a0, a3
                  and s6, s3, t0
                  c.xor a2, a1
                  c.srli s1, 22
                  c.andi a0, 2
                  or a4, t1, s8
                  c.addi16sp sp, -16
                  mulhsu s9, s3, a1
                  xor s0, t4, a0
                  ori zero, a5, 32
                  and t0, s6, ra
                  andi zero, s3, 609
                  srli t1, a3, 29
                  ori sp, t2, 490
                  c.xor s0, a0
                  auipc t1, 8214
                  srli t0, t3, 8
                  srai s10, a0, 27
                  xori s4, a2, -1101
                  c.mv s3, gp
                  xori zero, s8, 1458
                  slt s7, tp, a1
                  xori s10, s10, -1745
                  rem a7, s3, s9
                  slli t3, zero, 11
                  xor ra, sp, t2
                  mulh t4, s1, s10
                  and a6, a2, a4
                  c.srli a0, 12
                  nop
                  c.and a0, s1
                  slt a0, s10, s3
                  sra s3, s4, a4
                  ori a2, s6, 945
                  add s9, t1, t3
                  mulhsu t0, t0, a7
                  mul s0, t5, s9
                  sub s10, a6, zero
                  c.and a4, a2
                  divu sp, gp, s0
                  mulhu gp, t1, t1
                  addi zero, a6, -1788
                  lui a0, 270410
                  srl s10, tp, t5
                  and sp, s4, ra
                  div a1, ra, a0
                  divu s5, t5, zero
                  slti t3, s3, 1360
                  c.nop
                  xori a0, s11, -634
                  srai s8, t2, 6
                  div zero, t0, s10
                  sub t0, s11, s3
                  and t1, t3, a0
                  c.nop
                  xori a6, a1, -1964
                  sll t0, s0, s7
                  ori s9, s2, -693
                  c.nop
                  mulhsu t5, t5, a2
                  sra zero, sp, s4
                  c.mv t0, s6
                  ori t4, s0, 619
                  auipc zero, 901053
                  div t4, s10, s11
                  divu s2, t3, zero
                  c.li t4, -1
                  c.xor a0, s0
                  c.and a2, a3
                  srli a7, t3, 1
                  c.addi4spn a0, sp, 192
                  c.sub a0, a3
                  addi zero, a7, 1027
                  xor s10, a0, s6
                  srl t3, a6, s8
                  c.or a0, a3
                  divu a4, a3, s2
                  c.srli a0, 8
                  slti s0, a2, 163
                  div gp, a6, s9
                  c.nop
                  srli a7, tp, 31
                  c.mv s0, a4
                  sub zero, t4, a2
                  c.add s2, t5
                  c.li ra, 14
                  c.or s1, a2
                  c.sub a2, a0
                  sltiu t0, s2, 1466
                  mul s9, a5, a0
                  sltu s9, sp, sp
                  mulhu s5, s3, s0
                  c.mv s1, s2
                  lui zero, 1029031
                  c.xor a0, a3
                  slt s3, a2, s3
                  c.addi4spn a0, sp, 208
                  lui s0, 787537
                  mul s5, s8, a4
                  li a2, 0x0 #start riscv_int_numeric_corner_stream_0
                  li t6, 0x0
                  li t5, 0x1
                  li t1, 0x1
                  li t4, 0x1
                  li t3, 0x0
                  li a4, 0x70c27c42
                  li s5, 0x0
                  li s1, 0x0
                  li sp, 0x0
                  c.addi gp, -1
                  nop
                  c.lui tp, 19
                  mulhsu zero, s7, s9
                  lui t0, 788265
                  c.sub a0, s1
                  mulh zero, ra, s10
                  mulhsu a2, t2, tp
                  mulhsu s9, ra, sp
                  c.addi4spn s1, sp, 432
                  addi t6, t1, -2008
                  sub t0, t6, t3
                  c.addi a4, -1
                  mulhu a1, gp, t6
                  c.li s1, 28
                  rem s3, s8, a2
                  srl s1, zero, s11
                  c.li s2, -1
                  srli tp, t6, 29
                  sltu s0, zero, a6
                  c.srai a5, 26
                  mulhu t0, t2, t2
                  auipc s2, 853936
                  divu s5, t3, s10
                  mul a6, ra, a3
                  c.and a0, a3
                  mulhsu gp, a1, a3
                  c.addi s10, 28
                  c.xor a0, a5
                  ori zero, s9, 330
                  c.srai a5, 7
                  c.sub a2, a3
                  nop
                  c.addi s2, -1
                  sub s3, s4, t0
                  c.or a0, a3
                  lui t6, 620512
                  c.and a0, a2
                  c.addi ra, -1
                  c.and a2, s0
                  sll a5, a5, a4
                  ori t6, s4, -606
                  srai s0, t5, 20
                  sub a5, s2, a4
                  c.sub s0, a0
                  c.xor a0, s1
                  add t3, t3, s3
                  c.li s4, -1
                  or s3, t5, s8
                  nop
                  c.add s4, a3
                  addi a0, s4, 1431
                  c.add t1, t0
                  c.srli s0, 20
                  slli s5, a3, 7
                  slt tp, a6, t4
                  div s10, s11, s0
                  c.addi4spn a2, sp, 896
                  c.or a2, a0
                  c.addi16sp sp, 192
                  srai s6, t5, 4
                  slti s1, t3, -556
                  sll s5, a6, a4
                  add s2, s8, ra
                  c.xor a2, a3
                  c.srai a0, 10
                  addi ra, s5, 276
                  c.addi4spn a0, sp, 528
                  c.li t3, -1
                  c.srli a0, 20
                  sltu zero, s9, ra
                  c.nop
                  c.xor s0, s1
                  auipc a6, 674592
                  c.li tp, -1
                  mul t6, s4, a7
                  c.lui a7, 31
                  mulhu s1, a7, s4
                  sub zero, sp, t3
                  c.mv t0, t1
                  sltu a0, s9, s1
                  c.xor a4, a0
                  xori s1, a6, -562
                  slti s9, a6, -792
                  c.addi s9, 13
                  c.addi16sp sp, 80
                  c.lui ra, 18
                  slti a5, s9, -459
                  add s2, t2, t5
                  c.sub a0, a2
                  ori a4, a1, 1860
                  div s5, a6, t0
                  or s9, s2, s6
                  srli s0, a6, 3
                  c.li s5, 15
                  sub zero, t5, s4
                  c.addi4spn a0, sp, 368
                  nop
                  add s4, a4, s0
                  mulh a1, ra, t4
                  or s7, t6, s6
                  sll t1, a5, s1
                  andi a5, ra, 738
                  nop
                  c.add t1, a6
                  c.mv s5, gp
                  slli a7, a5, 26
                  xor s9, t2, s2
                  srai zero, zero, 2
                  lui s9, 930257
                  c.add tp, tp
                  xor t4, t2, s5
                  slti s0, s5, 1079
                  xori zero, sp, -935
                  ori zero, s5, -1917
                  xor s3, s0, tp
                  c.addi4spn a5, sp, 160
                  auipc s6, 450561
                  c.or a2, a3
                  xor a5, t3, s2
                  c.xor s1, a4
                  sub s4, a1, sp
                  slli s1, s6, 23
                  c.add t3, sp
                  c.addi4spn a0, sp, 400
                  xor s10, s3, s4
                  add s0, s3, s1
                  c.srai a0, 1
                  sll s6, a7, s7
                  sltu ra, t2, tp
                  c.lui s7, 1
                  lui s3, 40427
                  c.addi4spn a0, sp, 848
                  c.lui a6, 2
                  or s9, t6, t3
                  slli s10, s7, 10
                  sub zero, s8, sp
                  nop
                  auipc s6, 424653
                  srl s4, tp, t6
                  c.addi4spn a0, sp, 112
                  c.srai a2, 26
                  xor a5, t3, a0
                  addi a6, s7, 416
                  srli a4, ra, 3
                  srli t1, a3, 15
                  c.li s10, 17
                  sltu t5, s2, a5
                  and a7, a3, s11
                  sltiu tp, t4, 696
                  auipc ra, 1038268
                  and s2, s0, s2
                  sub a5, t5, t6
                  c.srai a1, 24
                  c.sub a0, a3
                  sltiu t4, a7, -666
                  sll zero, s9, a4
                  c.or a0, a0
                  slli t1, a0, 10
                  c.mv a6, s11
                  nop
                  c.srli a0, 8
                  sltu zero, a3, s6
                  add s8, s2, zero
                  srl a1, a5, s9
                  c.srai a0, 1
                  srl s5, s6, t0
                  c.srai a4, 12
                  divu s7, a4, zero
                  mulhsu s10, s1, a5
                  mul s0, zero, s10
                  srli s1, s11, 14
                  slti t0, a5, 267
                  c.lui a4, 13
                  c.mv s9, t5
                  nop
                  mulh s9, zero, s5
                  c.li s1, 20
                  c.addi16sp sp, -16
                  and t3, s7, t0
                  mulhsu s1, t1, a6
                  andi zero, s8, 625
                  c.mv a7, s4
                  div a6, s2, t2
                  div s8, s4, s8
                  c.addi16sp sp, -16
                  c.and a2, a2
                  c.or a0, a2
                  c.li s8, -1
                  c.add a5, s5
                  c.lui s2, 19
                  slti s3, s11, -12
                  sra t4, t1, a3
                  sra a6, s10, s5
                  c.add t1, a6
                  addi s2, s2, -1408
                  srli a2, t6, 3
                  c.andi s1, 28
                  slti t5, s6, -637
                  or zero, t4, a6
                  c.nop
                  sltu tp, a6, a1
                  divu tp, t0, s3
                  c.mv s2, t0
                  xori t4, s7, -1790
                  nop
                  or zero, s10, s11
                  mul s8, s2, t0
                  srl s6, t2, s5
                  srl t5, s1, s11
                  ori t5, ra, 926
                  xori t1, a2, 1552
                  xor zero, s0, sp
                  c.andi a0, -1
                  sra t3, t5, s5
                  c.li s7, -1
                  sltiu s6, t6, 771
                  c.sub a0, a1
                  div zero, sp, zero
                  c.addi t5, -1
                  srl t3, ra, s10
                  or s6, a1, a4
                  andi t3, s9, 1681
                  c.sub a0, a1
                  mulhu a4, a7, a6
                  srli sp, s8, 24
                  c.addi16sp sp, 368
                  auipc s8, 258492
                  lui a0, 190221
                  slli s0, a0, 29
                  la x7, test_done
                  jalr x0, x7, 0
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
mmode_intr_vector_1:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_2:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_3:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_4:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_5:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_6:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_7:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_8:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_9:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_10:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_11:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_12:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_13:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_14:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

mmode_intr_vector_15:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 0x1f
                  beqz x31, 1f
                  j mmode_intr_handler
                  1: la x7, test_done
                  jalr x0, x7, 0

.align 4
mtvec_handler:
                  .option norvc;
                  j mmode_exception_handler
                  j mmode_intr_vector_1
                  j mmode_intr_vector_2
                  j mmode_intr_vector_3
                  j mmode_intr_vector_4
                  j mmode_intr_vector_5
                  j mmode_intr_vector_6
                  j mmode_intr_vector_7
                  j mmode_intr_vector_8
                  j mmode_intr_vector_9
                  j mmode_intr_vector_10
                  j mmode_intr_vector_11
                  j mmode_intr_vector_12
                  j mmode_intr_vector_13
                  j mmode_intr_vector_14
                  j mmode_intr_vector_15
                  .option rvc;

mmode_exception_handler:
                  csrrw x27, 0x340, x27
                  add x27, x13, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x341 # MEPC
                  csrr x31, 0x342 # MCAUSE
                  li x15, 0xb # ECALL_MMODE
                  beq x31, x15, ecall_handler
                  li x15, 0x2 # ILLEGAL_INSTRUCTION
                  beq x31, x15, illegal_instr_handler
                  csrr x15, 0x343 # MTVAL
                  1: la x7, test_done
                  jalr x1, x7, 0

ecall_handler:
                  la x31, _start
                  sw x0, 0(x31)
                  sw x1, 4(x31)
                  sw x2, 8(x31)
                  sw x3, 12(x31)
                  sw x4, 16(x31)
                  sw x5, 20(x31)
                  sw x6, 24(x31)
                  sw x7, 28(x31)
                  sw x8, 32(x31)
                  sw x9, 36(x31)
                  sw x10, 40(x31)
                  sw x11, 44(x31)
                  sw x12, 48(x31)
                  sw x13, 52(x31)
                  sw x14, 56(x31)
                  sw x15, 60(x31)
                  sw x16, 64(x31)
                  sw x17, 68(x31)
                  sw x18, 72(x31)
                  sw x19, 76(x31)
                  sw x20, 80(x31)
                  sw x21, 84(x31)
                  sw x22, 88(x31)
                  sw x23, 92(x31)
                  sw x24, 96(x31)
                  sw x25, 100(x31)
                  sw x26, 104(x31)
                  sw x27, 108(x31)
                  sw x28, 112(x31)
                  sw x29, 116(x31)
                  sw x30, 120(x31)
                  sw x31, 124(x31)
                  la x7, write_tohost
                  jalr x0, x7, 0

illegal_instr_handler:
                  csrr x31, 0x341
                  addi x31, x31, 4
                  csrw 0x341, x31
                  lw x1, 4(x27)
                  lw x2, 8(x27)
                  lw x3, 12(x27)
                  lw x4, 16(x27)
                  lw x5, 20(x27)
                  lw x6, 24(x27)
                  lw x7, 28(x27)
                  lw x8, 32(x27)
                  lw x9, 36(x27)
                  lw x10, 40(x27)
                  lw x11, 44(x27)
                  lw x12, 48(x27)
                  lw x13, 52(x27)
                  lw x14, 56(x27)
                  lw x15, 60(x27)
                  lw x16, 64(x27)
                  lw x17, 68(x27)
                  lw x18, 72(x27)
                  lw x19, 76(x27)
                  lw x20, 80(x27)
                  lw x21, 84(x27)
                  lw x22, 88(x27)
                  lw x23, 92(x27)
                  lw x24, 96(x27)
                  lw x25, 100(x27)
                  lw x26, 104(x27)
                  lw x27, 108(x27)
                  lw x28, 112(x27)
                  lw x29, 116(x27)
                  lw x30, 120(x27)
                  lw x31, 124(x27)
                  addi x27, x27, 124
                  add x13, x27, zero
                  csrrw x27, 0x340, x27
                  mret

pt_fault_handler:

.align 2
mmode_intr_handler:
                  csrr x31, 0x300 # MSTATUS;
                  csrr x31, 0x304 # MIE;
                  csrr x31, 0x344 # MIP;
                  csrrc x31, 0x344, x31 # MIP;
                  lw x1, 4(x27)
                  lw x2, 8(x27)
                  lw x3, 12(x27)
                  lw x4, 16(x27)
                  lw x5, 20(x27)
                  lw x6, 24(x27)
                  lw x7, 28(x27)
                  lw x8, 32(x27)
                  lw x9, 36(x27)
                  lw x10, 40(x27)
                  lw x11, 44(x27)
                  lw x12, 48(x27)
                  lw x13, 52(x27)
                  lw x14, 56(x27)
                  lw x15, 60(x27)
                  lw x16, 64(x27)
                  lw x17, 68(x27)
                  lw x18, 72(x27)
                  lw x19, 76(x27)
                  lw x20, 80(x27)
                  lw x21, 84(x27)
                  lw x22, 88(x27)
                  lw x23, 92(x27)
                  lw x24, 96(x27)
                  lw x25, 100(x27)
                  lw x26, 104(x27)
                  lw x27, 108(x27)
                  lw x28, 112(x27)
                  lw x29, 116(x27)
                  lw x30, 120(x27)
                  lw x31, 124(x27)
                  addi x27, x27, 124
                  add x13, x27, zero
                  csrrw x27, 0x340, x27
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
