.include "user_define.h"
.globl _start
.section .text
.option norvc;
_start:           
                  .include "user_init.s"
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x11, h0_start
jalr x0, x11, 0
h0_start:
                  li x14, 0x40000100
                  csrw 0x301, x14
kernel_sp:        
                  la x31, kernel_stack_end

trap_vec_init:    
                  la x14, mtvec_handler
                  ori x14, x14, 0
                  csrw 0x305, x14 # MTVEC

mepc_setup:       
                  la x14, init
                  csrw 0x341, x14

init_machine_mode:
                  li x14, 0x1800
                  csrw 0x300, x14 # MSTATUS
                  li x14, 0x0
                  csrw 0x304, x14 # MIE
                  mret
init:             
                  li x0, 0x80000000
                  li x1, 0x80000000
                  li x2, 0x80000000
                  li x3, 0x4555b5e2
                  li x4, 0x80000000
                  li x5, 0xb
                  li x6, 0x0
                  li x7, 0xf66c6871
                  li x8, 0xfd7f9a88
                  li x9, 0x0
                  li x10, 0xe4a9c3cf
                  li x11, 0x9adb0bda
                  li x12, 0xfc3edece
                  li x13, 0x0
                  li x14, 0xb51a2ba6
                  li x15, 0x5f70b514
                  li x16, 0x0
                  li x17, 0x80000000
                  li x18, 0xfcd5edb0
                  li x19, 0xfcfdbb51
                  li x20, 0xf8ba7f30
                  li x21, 0x2cc5b987
                  li x22, 0x0
                  li x23, 0x0
                  li x24, 0x7
                  li x25, 0x0
                  li x26, 0x80000000
                  li x27, 0x56617d61
                  li x28, 0x0
                  li x29, 0xf840d8c6
                  la x30, user_stack_end
main:             li         ra, 0x0 #start riscv_int_numeric_corner_stream_2
                  li         s6, 0x1
                  li         t4, 0x1
                  li         t3, 0x184a8bb2
                  li         s11, 0x0
                  li         s10, 0x0
                  li         s1, 0x1
                  li         s9, 0x1
                  li         s8, 0x0
                  li         s5, 0x0
                  nop
                  add         s9, a2, s8
                  lui         s0, 245583
                  add         t2, tp, s2
                  nop
                  addi        s8, a4, -961
                  lui         tp, 899071
                  addi        s2, t2, 748
                  add         s1, t0, ra
                  lui         a6, 601227
                  nop
                  add         a7, a7, a7
                  lui         ra, 291269
                  nop
                  sub         tp, t6, t6
                  nop
                  lui         t0, 459714
                  lui         t2, 327263
                  nop
                  add         ra, s6, s9 #end riscv_int_numeric_corner_stream_2
                  li         t4, 0x0 #start riscv_int_numeric_corner_stream_7
                  li         t3, 0x0
                  li         s10, 0x0
                  li         s11, 0x0
                  li         s9, 0x0
                  li         s8, 0x1
                  li         a6, 0x1
                  li         s2, 0x1
                  li         sp, 0x0
                  li         s3, 0x1
                  lui         s6, 697610
                  lui         t0, 1022696
                  nop
                  lui         gp, 902413
                  nop
                  nop
                  sub         zero, s6, s0
                  addi        s11, s1, -49
                  nop
                  sub         a2, t4, a0
                  sub         ra, s9, s2
                  nop
                  nop
                  addi        zero, s9, -1152
                  nop
                  addi        a0, s1, 2009
                  lui         a0, 180841
                  nop
                  sub         zero, s4, a5
                  lui         tp, 350424
                  add         s1, s7, s4
                  sub         sp, t6, t1
                  nop #end riscv_int_numeric_corner_stream_7
                  li         t4, 0x78a0572b #start riscv_int_numeric_corner_stream_6
                  li         t3, 0x0
                  li         sp, 0x0
                  li         s3, 0x1a8d1fc4
                  li         s7, 0x51ae3b7a
                  li         s11, 0x3db96c6c
                  li         s10, 0x0
                  li         s2, 0x0
                  li         tp, 0x0
                  li         s6, 0x1
                  lui         s7, 433586
                  lui         s2, 279645
                  nop
                  addi        t1, t0, -1949
                  sub         s4, s9, s5
                  sub         ra, t1, s5
                  addi        s5, s7, -1422
                  addi        t1, t5, -595
                  lui         a4, 572535
                  addi        s11, a6, -1768
                  lui         gp, 790225
                  nop
                  sub         a0, sp, t5
                  addi        s9, tp, 1285
                  sub         t1, t4, a7
                  lui         ra, 301226
                  sub         s10, t1, a3
                  lui         tp, 933533
                  sub         s4, gp, gp
                  add         s3, a2, s9
                  lui         a4, 569309
                  lui         t2, 154422
                  lui         zero, 175211
                  lui         s0, 552058
                  lui         zero, 594673 #end riscv_int_numeric_corner_stream_6
                  li         t4, 0x1 #start riscv_int_numeric_corner_stream_0
                  li         s11, 0x1
                  li         s10, 0x253670ce
                  li         s0, 0x0
                  li         ra, 0x0
                  li         s7, 0x750c2c4c
                  li         t3, 0x1
                  li         s8, 0x0
                  li         a0, 0x6863b799
                  li         a4, 0x0
                  nop
                  nop
                  sub         s9, gp, t4
                  lui         a4, 620896
                  sub         s2, t2, s3
                  lui         gp, 587911
                  sub         t1, s7, s4
                  sub         s5, s2, s7
                  add         a6, t0, s3
                  lui         zero, 1033913
                  add         tp, s2, s5
                  nop
                  add         t3, s6, s7
                  add         zero, a5, t1
                  sub         s0, s9, a7
                  lui         sp, 920871
                  addi        a5, a3, -1854
                  nop
                  lui         s8, 170147
                  sub         zero, zero, a1
                  sub         zero, s8, s11
                  addi        a3, ra, -233
                  add         t3, s11, gp
                  lui         s0, 1014115
                  lui         t1, 455370
                  addi        zero, s2, -1296
                  add         s11, t6, s10
                  addi        s7, a3, 141
                  nop #end riscv_int_numeric_corner_stream_0
                  sra         t4, a3, t6
                  sub         t1, s3, a2
                  auipc       t0, 160238
                  slli        zero, a1, 28
                  xori        s10, a0, 667
                  xor         t4, tp, sp
                  addi        zero, gp, 1655
                  auipc       a2, 1041233
                  xori        s8, a3, -281
                  add         s5, s3, a6
                  and         a7, s1, t0
                  sll         a4, ra, t0
                  nop
                  srl         s4, s6, ra
                  andi        tp, s4, 556
                  xor         t1, t4, a2
                  add         s0, a7, t5
                  sll         s0, t4, s7
                  slt         sp, zero, t4
                  sltiu       a7, s6, -1893
                  sltu        t0, s2, a6
                  ori         s5, a6, -547
                  and         s8, sp, s4
                  lui         a6, 748091
                  sll         s10, s3, t0
                  auipc       a3, 212382
                  or          sp, s0, gp
                  slt         t2, s5, ra
                  sll         t1, t3, s5
                  slli        tp, s6, 20
                  xor         ra, s4, t2
                  and         s6, a7, t1
                  addi        s1, s9, 867
                  sltiu       t2, s6, -355
                  srli        ra, t5, 17
                  srai        zero, sp, 14
                  sltu        t2, a2, a2
                  nop
                  sltiu       s2, s1, 234
                  sltu        t4, a0, s11
                  srai        s5, s10, 16
                  srl         a0, t4, s9
                  auipc       a7, 267994
                  sll         a3, tp, zero
                  nop
                  sltu        s9, a5, a0
                  andi        s10, a5, -1650
                  sltu        t0, s1, s4
                  srli        s11, a6, 25
                  ori         zero, s5, 1469
                  lui         ra, 776722
                  slli        t4, s0, 7
                  add         zero, a3, s0
                  addi        a2, a1, 1709
                  srli        a4, t4, 5
                  and         s4, s0, zero
                  srli        tp, t6, 9
                  sll         t3, sp, a1
                  addi        t4, s1, 465
                  slti        t4, s2, -300
                  add         t1, s4, a3
                  xori        t1, t4, -144
                  sll         ra, ra, s3
                  auipc       a2, 341748
                  slti        s10, t4, 503
                  sltu        a0, s0, t4
                  sltu        s0, s10, tp
                  sltiu       t2, t1, -102
                  nop
                  and         t1, a3, a1
                  slt         s1, s8, t4
                  srai        s10, s10, 6
                  srai        s7, gp, 28
                  sltu        sp, ra, t5
                  lui         a2, 744513
                  addi        t0, a4, 1190
                  sub         a5, t1, a6
                  srai        s1, s0, 12
                  sub         tp, s4, s7
                  nop
                  nop
                  or          sp, t5, s5
                  ori         a0, a7, 2004
                  or          a0, t5, s8
                  srli        t1, s11, 28
                  sll         a4, t6, s5
                  add         s5, s11, gp
                  auipc       a5, 902535
                  addi        s8, s11, -70
                  xori        s7, s11, 1643
                  srl         t1, a6, s1
                  slli        s10, s6, 9
                  nop
                  sltiu       s11, t0, 1546
                  auipc       s3, 997516
                  addi        s10, s0, 350
                  lui         s10, 507466
                  slti        tp, a5, -1387
                  add         a4, gp, s2
                  lui         a7, 276863
                  and         t1, ra, gp
                  and         zero, tp, s7
                  andi        s0, a4, 1707
                  sll         s6, a1, gp
                  sub         t4, s9, s4
                  srai        a7, s10, 17
                  srl         t0, zero, a2
                  auipc       sp, 698398
                  sra         sp, t2, t5
                  andi        s2, a0, -1447
                  sub         s2, a0, a4
                  srai        sp, s5, 31
                  srai        a5, a0, 2
                  srl         a0, t0, s9
                  srli        s10, s11, 16
                  nop
                  add         s7, tp, t4
                  srli        t0, t4, 30
                  xor         s7, t3, a1
                  addi        a7, t3, 1588
                  auipc       a3, 487944
                  slli        zero, s10, 22
                  xori        s10, s0, 737
                  andi        s11, sp, 159
                  xor         s4, a4, s3
                  andi        zero, a5, -1832
                  sub         t3, tp, a6
                  nop
                  srl         s9, a7, sp
                  andi        t0, ra, 2040
                  slti        zero, a0, -1106
                  auipc       s6, 276296
                  slt         s4, a2, a4
                  and         a6, a3, t5
                  xori        s7, s0, 1448
                  sltu        t3, t5, a0
                  sll         t2, s6, t6
                  addi        ra, s4, -659
                  sltu        s7, tp, s7
                  xor         s11, a0, t1
                  slti        s10, t5, 1638
                  sll         ra, t4, t3
                  sltiu       s4, t5, 958
                  srl         a5, s10, s10
                  sltu        a3, a6, s0
                  andi        t4, zero, -1795
                  nop
                  sltiu       s2, gp, 2039
                  slli        a5, s4, 14
                  ori         zero, t5, 824
                  sll         a5, s2, t4
                  auipc       s10, 139602
                  nop
                  sltu        s8, t0, s4
                  slt         s11, s2, s1
                  slti        s7, a3, -113
                  xor         zero, t3, zero
                  slt         s7, a2, t2
                  nop
                  slli        s5, s5, 20
                  sub         s11, a3, s10
                  sltu        a0, a1, a2
                  or          a5, t2, s8
                  srli        zero, t3, 11
                  srli        gp, t4, 29
                  lui         t4, 567644
                  xori        s11, s11, -664
                  slt         a7, s4, a0
                  ori         a5, s3, 57
                  xori        a4, t5, 1284
                  sll         t2, s2, t4
                  srli        a0, s2, 20
                  srli        s6, gp, 27
                  slt         a5, s5, a0
                  xor         gp, a7, t0
                  xori        tp, t3, -1069
                  xor         s3, gp, s2
                  sub         tp, s11, a3
                  xori        zero, tp, 909
                  srl         zero, tp, s5
                  sltiu       a0, s0, 810
                  nop
                  add         s10, a4, ra
                  add         s11, s10, a5
                  slt         ra, a4, s2
                  sll         s5, t3, tp
                  add         s1, tp, t4
                  sltiu       t4, s10, -1406
                  xor         gp, s4, s2
                  addi        s1, gp, 1962
                  sltiu       zero, zero, 747
                  slt         a0, s0, s6
                  slti        zero, a3, 755
                  add         s9, s11, t0
                  sltiu       zero, s1, -521
                  addi        s0, s0, 1738
                  ori         s5, s4, -257
                  sltu        t2, zero, s7
                  auipc       s9, 46093
                  xori        t4, a1, 1591
                  and         sp, a0, t2
                  slli        a3, t0, 25
                  addi        s9, s4, -1153
                  add         s8, s1, s11
                  slt         a6, zero, t0
                  srli        s10, a1, 4
                  slt         a7, t3, t0
                  add         a0, s9, sp
                  slt         t2, s0, tp
                  srai        t0, s5, 27
                  srai        s1, a1, 1
                  andi        s7, s3, -419
                  srli        s4, s1, 16
                  and         sp, a0, a0
                  srl         tp, s5, s7
                  sltu        s2, s2, s4
                  slt         s9, s9, a1
                  srl         zero, t0, s5
                  ori         s11, t3, -1714
                  nop
                  srli        t0, t0, 26
                  slli        t2, a2, 18
                  sltu        s8, t4, a2
                  slt         s4, t3, s5
                  lui         a5, 877102
                  addi        s0, a0, 1492
                  or          ra, s4, ra
                  ori         zero, s8, -1139
                  slli        zero, s2, 20
                  auipc       a2, 280350
                  sra         s5, s11, s0
                  slti        s11, s1, 1774
                  slli        sp, a6, 21
                  andi        s10, s10, -1509
                  add         sp, t3, a5
                  sltu        s3, s7, t4
                  sltu        a6, a6, s2
                  xor         gp, a3, a6
                  srai        t1, t5, 26
                  srl         zero, a1, s10
                  addi        a0, s5, -990
                  add         s11, s6, t5
                  sra         gp, sp, t5
                  add         s5, t3, a0
                  lui         s8, 232637
                  andi        s7, s0, 784
                  slt         zero, s4, a4
                  sra         a0, s1, gp
                  srai        zero, sp, 2
                  slt         a6, s0, t1
                  or          s8, s7, t6
                  slti        a4, s1, -699
                  sll         s9, t3, s1
                  andi        t3, t2, 134
                  nop
                  andi        a2, s11, 224
                  slt         s7, s7, a3
                  or          a7, t6, ra
                  sra         s1, a2, ra
                  lui         zero, 913443
                  xor         s1, a2, a4
                  sltiu       a2, tp, -739
                  sltiu       a7, s2, 1235
                  add         a4, a0, a6
                  xori        zero, t0, 1524
                  xor         zero, t1, s2
                  srl         tp, s3, s9
                  srl         s6, sp, sp
                  addi        zero, t2, -1428
                  sra         s8, a7, s5
                  xori        zero, a1, 1879
                  slti        a2, a2, -161
                  addi        s4, sp, 68
                  ori         a4, t6, 1613
                  xori        s10, a7, 1861
                  and         s6, s8, s5
                  auipc       s0, 766031
                  srl         t2, t3, s3
                  andi        a5, t1, 399
                  slli        a7, s7, 7
                  slt         t1, t2, s7
                  srli        s2, zero, 1
                  andi        s7, ra, 606
                  nop
                  slti        s4, t5, -584
                  ori         s10, s11, -283
                  xori        s11, s11, -345
                  ori         zero, t4, -928
                  xori        a2, t2, -1825
                  addi        ra, a1, 1514
                  nop
                  sltiu       zero, a0, 417
                  ori         t4, s4, 172
                  sll         a6, s0, s5
                  srl         zero, zero, a2
                  li         t4, 0x51f77a1c #start riscv_int_numeric_corner_stream_1
                  li         t3, 0x0
                  li         s11, 0x0
                  li         s6, 0x0
                  li         sp, 0x0
                  li         gp, 0x1
                  li         s8, 0x0
                  li         s10, 0x0
                  li         s7, 0x58e762cd
                  li         a0, 0x27219af3
                  sub         s2, a5, a4
                  nop
                  nop
                  add         zero, s4, s11
                  add         s11, s0, s6
                  lui         s4, 954151
                  lui         ra, 703864
                  nop
                  sub         s5, s0, s10
                  add         sp, s8, a5
                  add         t2, s7, s6
                  add         ra, a6, s4
                  lui         t1, 1032059
                  nop
                  add         t3, ra, ra
                  lui         tp, 195807
                  addi        sp, t1, 733
                  nop
                  nop
                  addi        s9, a2, -1511
                  nop
                  nop
                  sub         t4, s0, a3
                  lui         t2, 12424 #end riscv_int_numeric_corner_stream_1
                  ori         zero, s2, 1248
                  addi        tp, t2, 1259
                  or          a6, s2, s2
                  sltu        s1, s9, a6
                  sltu        t2, a0, a3
                  or          a5, gp, t1
                  ori         s0, a3, -740
                  ori         s2, a6, -1672
                  addi        t1, t0, 1632
                  lui         t2, 334544
                  sub         s1, s3, s9
                  or          s3, t2, a1
                  sll         gp, tp, a3
                  sll         a5, ra, s11
                  lui         s2, 835913
                  auipc       t1, 689225
                  ori         sp, a6, 564
                  sub         zero, a4, a3
                  xori        a3, s4, 1676
                  or          s10, s2, sp
                  sltiu       zero, s0, 870
                  srai        a0, s2, 17
                  andi        ra, s5, 956
                  slti        s10, a1, 1090
                  sra         s7, a5, s2
                  sltu        s7, t1, t3
                  ori         gp, s3, 655
                  srai        s2, s8, 23
                  sltu        a6, t0, a0
                  add         t1, zero, s4
                  addi        a2, s8, -1409
                  xori        zero, a6, 1687
                  and         gp, s6, s0
                  xor         s9, s0, t6
                  srli        ra, s10, 9
                  addi        t0, s0, -1624
                  and         a3, t2, s7
                  sub         s7, s1, s4
                  sltiu       zero, s8, -825
                  sltu        a2, s2, s4
                  or          s6, s7, tp
                  nop
                  andi        ra, s6, -878
                  srl         s0, s5, a6
                  ori         s0, a6, 1927
                  ori         s6, t2, -889
                  nop
                  sltiu       s0, a3, 1641
                  sltu        zero, t2, s9
                  srli        t3, s7, 0
                  sub         s2, s7, t3
                  srl         gp, t2, t3
                  andi        a6, a2, 661
                  srl         t2, a7, s6
                  and         a2, s8, a7
                  or          s10, t3, t2
                  sltu        s10, ra, a1
                  sltiu       tp, s8, 880
                  sll         a6, tp, a1
                  andi        s11, ra, 719
                  add         s1, t3, s5
                  nop
                  sll         t3, sp, t2
                  or          tp, a4, s10
                  slli        s4, t6, 8
                  auipc       a7, 107243
                  or          a3, t2, s5
                  xori        a7, t2, -306
                  lui         s4, 959444
                  auipc       t3, 921306
                  srli        a4, s11, 16
                  srai        zero, a1, 4
                  xori        sp, s9, 892
                  or          t4, t2, s6
                  sltu        zero, s5, a1
                  sra         s10, s6, a5
                  auipc       t2, 786540
                  and         zero, gp, a2
                  addi        zero, a7, -643
                  addi        ra, a7, 1806
                  ori         a7, ra, 397
                  srl         t1, a3, a7
                  xor         s0, s4, t3
                  sltiu       s8, t1, -753
                  slli        s2, gp, 25
                  srli        a6, s5, 1
                  xori        sp, s6, -428
                  lui         t2, 1007084
                  sll         t4, t6, t2
                  sll         sp, a5, ra
                  sub         t3, s4, a1
                  ori         s6, a2, 544
                  add         a7, tp, a6
                  addi        t2, s5, -1692
                  sltu        s6, s9, s4
                  sltiu       s4, a6, 1772
                  srai        a6, gp, 30
                  andi        s11, s2, -1119
                  srai        t1, a2, 10
                  slt         a3, a5, s11
                  sltu        s3, a3, t3
                  slli        a4, s2, 7
                  slt         a6, a0, a5
                  slti        a7, s10, 293
                  slli        s11, s7, 29
                  sltiu       a6, tp, -78
                  slt         zero, s4, s11
                  nop
                  sll         s0, s3, t2
                  sltu        zero, ra, a6
                  addi        t2, a4, -1475
                  auipc       gp, 478684
                  lui         t4, 297128
                  and         s0, s1, a6
                  ori         a2, t3, -1687
                  sra         s3, s11, a5
                  ori         s3, a3, 1899
                  ori         a3, s9, -552
                  xori        sp, s2, -361
                  auipc       s1, 705503
                  and         ra, s6, t4
                  xor         t1, s2, ra
                  auipc       t4, 962847
                  sra         a2, s6, t0
                  auipc       s9, 133249
                  sltiu       t2, s11, -1681
                  and         a3, a7, t2
                  sll         s4, a4, s7
                  add         s7, s0, s8
                  xori        s7, t0, -1867
                  add         t2, s0, gp
                  srai        a2, t2, 26
                  add         tp, a4, s9
                  slti        a6, s10, 209
                  srl         s10, a0, s1
                  srai        t4, t5, 31
                  nop
                  srl         a5, s10, s3
                  add         s1, t2, s6
                  srli        s10, sp, 3
                  xor         s2, a1, a6
                  sub         s2, zero, a7
                  xori        s11, a7, -417
                  sub         t4, s0, s9
                  srai        a2, s5, 7
                  and         sp, t1, a3
                  lui         gp, 339665
                  and         s7, gp, t0
                  sltu        a7, t3, s7
                  ori         gp, s7, -8
                  or          a4, s0, ra
                  srl         t3, s9, s5
                  srli        t2, s1, 4
                  srai        a2, ra, 18
                  addi        a5, s9, -1295
                  srai        s1, a5, 14
                  srl         a6, s0, s4
                  srl         t2, a5, t2
                  xor         s10, tp, gp
                  sltu        zero, s1, a7
                  sll         t3, a2, s3
                  slt         s6, s6, t6
                  add         s11, s7, a3
                  xori        t1, t1, 1309
                  slli        s1, a5, 25
                  and         s0, zero, t0
                  srl         s9, zero, a7
                  slli        zero, a6, 5
                  nop
                  andi        a6, a0, -360
                  sub         s1, s8, a3
                  sltiu       t4, t0, 1123
                  srli        sp, a4, 19
                  xori        t1, s9, -47
                  and         t2, ra, a1
                  add         a6, t3, a7
                  andi        a3, a4, -1297
                  add         t3, s8, a5
                  auipc       a2, 114126
                  xor         t1, t2, a4
                  sltiu       zero, zero, -1016
                  slli        s7, t4, 22
                  slti        zero, a2, 1794
                  nop
                  slt         sp, a7, s10
                  xori        s7, sp, -1505
                  and         s4, s9, ra
                  add         s1, s1, t0
                  srli        s5, a6, 0
                  srli        a2, t2, 20
                  slt         t0, sp, a2
                  and         s9, t4, a3
                  andi        s1, a3, 205
                  sltu        gp, s2, s1
                  sub         s4, zero, s8
                  or          s0, a7, t5
                  sltiu       t3, s4, 1087
                  srli        s8, tp, 0
                  sltiu       t0, t3, 1064
                  srl         gp, sp, s10
                  addi        s5, t0, -854
                  slli        ra, s6, 22
                  sltiu       a3, s5, 891
                  slt         s10, a7, s5
                  andi        zero, s8, 1467
                  xori        s2, t4, 1490
                  sra         s7, t5, t0
                  andi        zero, tp, 987
                  nop
                  and         s2, s1, s9
                  slti        zero, a4, -1287
                  ori         s5, s1, -1363
                  or          zero, s8, tp
                  sub         s5, t0, s11
                  lui         s3, 671688
                  or          s2, sp, t2
                  slti        t0, s7, 725
                  srai        s11, t3, 30
                  lui         ra, 378193
                  xor         s10, a6, s8
                  xor         t3, s6, s10
                  srl         zero, s10, s8
                  addi        s10, t3, -449
                  sll         a0, s3, a6
                  slt         s6, t6, s1
                  sra         t2, a7, a0
                  slti        ra, a4, -1672
                  sra         gp, a4, s0
                  addi        s6, a6, 870
                  and         sp, a4, t4
                  andi        zero, t0, -21
                  xori        zero, s11, -648
                  add         t0, gp, a5
                  srai        tp, t0, 31
                  sll         a7, s7, a7
                  srl         gp, s8, s2
                  xor         zero, sp, a1
                  sub         a7, s2, sp
                  and         s10, s11, t5
                  srai        a6, t6, 20
                  srl         a7, t3, s0
                  sltiu       zero, s0, -772
                  sll         tp, t0, s6
                  lui         tp, 1020647
                  and         a6, a1, a4
                  ori         gp, s2, -1940
                  sll         s7, t0, t4
                  andi        s10, tp, 1095
                  srl         a4, s0, s1
                  srl         t1, t6, s6
                  slt         s8, a4, s6
                  andi        s6, zero, 97
                  sltu        t3, s2, t6
                  addi        a4, t5, -987
                  xori        s11, s11, 558
                  sltiu       zero, sp, -1710
                  addi        a5, t3, -75
                  nop
                  auipc       s11, 875086
                  and         t0, a5, s4
                  andi        s4, a3, -496
                  sltu        s1, zero, t5
                  xori        t4, t0, -624
                  xor         sp, t2, t6
                  srli        zero, t3, 28
                  addi        s3, a6, -1521
                  ori         a7, s7, -1060
                  slli        s5, a5, 11
                  sltu        a0, t5, t0
                  sra         a4, s0, tp
                  sltu        s2, t4, s4
                  auipc       zero, 738120
                  slli        a5, ra, 19
                  sra         zero, t0, s9
                  xori        s5, s0, -568
                  xori        ra, s9, 225
                  addi        a0, zero, 396
                  slt         a7, t4, a6
                  sltu        s0, t5, s0
                  xori        t3, s1, 1540
                  sltiu       s6, a4, -1508
                  nop
                  andi        s5, t2, 1268
                  xor         a4, ra, t4
                  nop
                  sra         t3, a0, t1
                  ori         tp, s5, 431
                  srl         s9, s3, a4
                  auipc       s0, 621001
                  nop
                  slt         s3, s5, t4
                  slt         t2, gp, sp
                  srli        a7, s10, 14
                  sltiu       a0, zero, 439
                  sltu        s7, a0, a1
                  xori        zero, t6, 1367
                  sltu        zero, t6, s4
                  andi        a0, t6, 928
                  sltu        s9, gp, a5
                  slli        a5, s2, 26
                  auipc       t2, 73451
                  or          t0, s8, t6
                  slli        tp, zero, 12
                  or          zero, s5, s2
                  sll         tp, gp, s4
                  slti        s0, s1, -41
                  or          s5, a6, zero
                  or          s0, s2, gp
                  slt         a3, s5, s3
                  sltu        a0, s4, a5
                  sra         a5, t1, s5
                  xor         t4, s7, t5
                  srai        s3, s9, 10
                  add         s11, t5, a6
                  slti        s4, a1, 1822
                  addi        tp, s11, -2006
                  sub         a3, s3, t4
                  ori         a5, s0, -1314
                  slt         a3, t3, a0
                  nop
                  srl         t3, s11, s9
                  xor         a7, t4, s2
                  addi        zero, a3, 1276
                  addi        gp, a2, -1857
                  or          a7, t6, s1
                  slli        t3, t5, 11
                  add         sp, t6, s6
                  addi        zero, t4, 259
                  andi        s2, gp, -674
                  xor         zero, s0, s4
                  andi        a4, s8, -1422
                  auipc       a0, 817349
                  srli        a5, s0, 0
                  ori         tp, ra, -140
                  srli        a7, s4, 28
                  sra         s7, tp, a1
                  srl         s8, a4, a2
                  sltiu       zero, a1, -1581
                  xor         a5, a1, a2
                  xori        s7, a2, 1269
                  sll         zero, s6, a0
                  slli        s9, t4, 12
                  sll         t0, s0, t6
                  sll         s5, s10, a5
                  ori         a0, s9, 1522
                  sll         s3, a5, s5
                  srli        a4, t3, 18
                  add         s6, t4, a0
                  srl         tp, s8, s5
                  and         tp, t2, s8
                  auipc       a5, 430225
                  or          a3, t6, s10
                  srl         ra, t3, a4
                  srl         a4, s1, s0
                  srli        s1, s0, 11
                  sltiu       s9, s4, -2025
                  nop
                  sltiu       a0, s4, -1258
                  auipc       s7, 542634
                  andi        s4, t3, -1616
                  srl         t2, gp, t1
                  sra         zero, a2, s0
                  srl         a7, t4, sp
                  xori        a2, a5, 821
                  or          s6, a5, a5
                  add         s9, gp, a3
                  andi        t4, s0, 1392
                  sltu        t3, t1, s7
                  slt         s2, s10, s6
                  sll         t0, t2, a7
                  srai        s1, zero, 30
                  sub         a7, zero, s5
                  lui         s2, 711819
                  srli        s0, a3, 8
                  slli        s9, tp, 17
                  srli        s8, s5, 16
                  or          s4, t1, a3
                  lui         a3, 581587
                  srl         s9, zero, ra
                  xor         zero, s4, s2
                  xori        a0, s1, -2008
                  sll         s6, s1, sp
                  sra         t3, ra, t3
                  and         s2, t1, s3
                  slt         s5, t1, s4
                  auipc       a4, 382821
                  slt         s11, t4, tp
                  srai        t0, a5, 16
                  addi        t2, t4, -534
                  nop
                  and         s10, a4, s11
                  ori         s4, s9, 1789
                  slli        a6, t6, 4
                  addi        t4, a4, -1281
                  addi        zero, s5, 811
                  addi        a4, s0, -994
                  sra         ra, t0, s9
                  nop
                  sltu        zero, s6, a6
                  srl         a3, t1, s1
                  srli        zero, s2, 23
                  ori         t3, s6, -1170
                  srl         sp, t0, s0
                  and         s4, a4, a6
                  sra         s4, s1, t4
                  ori         a6, s9, 1658
                  sub         s5, sp, t1
                  slt         a2, a6, t3
                  xor         a4, a6, s3
                  and         s5, s11, s3
                  srl         s6, s3, s0
                  slti        zero, s4, 350
                  sra         a5, a5, s0
                  or          t1, s1, tp
                  add         a3, zero, t6
                  sll         zero, s10, s1
                  or          s2, a6, zero
                  slti        a5, s4, -273
                  add         a3, s10, a4
                  ori         tp, t3, 1569
                  sltiu       s10, s3, -508
                  add         s11, sp, s2
                  and         a2, t4, s2
                  nop
                  add         a6, t4, t5
                  srai        zero, a0, 23
                  sltu        zero, s3, t4
                  srli        s6, ra, 18
                  and         s11, s2, t3
                  and         s11, a2, sp
                  add         s0, s6, a0
                  srai        t2, s7, 29
                  xori        t2, s10, -60
                  slli        t3, sp, 9
                  srli        s4, a1, 31
                  andi        gp, t3, 1290
                  nop
                  and         tp, t5, gp
                  add         s8, s4, a1
                  addi        s5, a1, -587
                  sltiu       s4, a5, -551
                  sltu        t1, s3, t0
                  sra         s5, s9, s7
                  srl         zero, a0, t1
                  srl         s8, s2, t4
                  srl         zero, s10, ra
                  ori         s3, s4, 1990
                  slti        t1, a0, -982
                  or          t4, s2, s11
                  sll         t3, s7, s6
                  ori         t3, s8, 558
                  slt         s6, a6, t1
                  nop
                  nop
                  and         a2, a0, s5
                  sra         gp, a4, zero
                  ori         s5, a7, 1177
                  sub         tp, a2, s5
                  slti        tp, a7, -1390
                  sub         s2, s1, s10
                  ori         gp, a0, -1402
                  sltiu       s11, s1, 29
                  srai        s11, s8, 26
                  or          s1, s6, ra
                  addi        a3, s5, -1362
                  slti        zero, s1, 999
                  xori        s10, s10, -942
                  srl         t2, a6, t3
                  ori         a2, sp, -1976
                  slti        tp, t6, -920
                  slti        s2, t0, -353
                  nop
                  sltu        a7, a6, a2
                  srai        a2, s7, 1
                  srai        a0, s2, 31
                  andi        a0, t6, -95
                  add         t1, a1, a7
                  andi        a4, s2, -1759
                  xori        s5, t3, 1855
                  nop
                  add         sp, a7, t3
                  slt         zero, s3, ra
                  sll         a0, t2, a0
                  sll         zero, t6, s4
                  li         t4, 0x77f546c9 #start riscv_int_numeric_corner_stream_8
                  li         s5, 0x1
                  li         s7, 0x2aeb90ba
                  li         t3, 0x79d7c2c0
                  li         a3, 0x0
                  li         s10, 0x0
                  li         s6, 0x658369cb
                  li         t0, 0x0
                  li         s9, 0x0
                  li         s2, 0x0
                  nop
                  add         s7, s5, s4
                  nop
                  nop
                  nop
                  addi        t4, t4, -1500
                  sub         t3, s3, a1
                  addi        s9, t0, 33
                  lui         a5, 692277
                  nop
                  nop
                  add         ra, s9, t0
                  lui         t3, 355747
                  lui         a0, 607943
                  nop
                  lui         tp, 140253
                  add         zero, t3, t5
                  addi        a0, a6, -942
                  lui         a5, 894756
                  sub         zero, s8, a6
                  add         gp, s0, ra
                  lui         s5, 904711
                  nop
                  addi        ra, t1, 1346
                  addi        t3, a6, -1311
                  add         a5, s10, s4
                  nop
                  nop #end riscv_int_numeric_corner_stream_8
                  xori        gp, a7, 1571
                  srl         zero, s0, s2
                  or          s9, s10, s11
                  andi        a3, gp, -504
                  sub         s7, a4, t0
                  slli        s2, ra, 22
                  nop
                  sll         s5, a3, s2
                  lui         s2, 538419
                  or          a6, gp, s4
                  and         a3, t5, a0
                  add         s3, t1, a3
                  addi        s11, zero, 1416
                  xor         a3, zero, s5
                  lui         a2, 305421
                  or          t3, s2, s11
                  and         s2, t3, s5
                  srl         a6, s8, s7
                  slti        t0, s8, -1845
                  xori        sp, gp, 1787
                  sub         a2, zero, a6
                  and         a0, s6, t2
                  and         s0, ra, sp
                  nop
                  slti        s4, s4, 989
                  srli        zero, ra, 19
                  xori        t2, t1, -1399
                  auipc       gp, 234274
                  add         s8, a3, s1
                  lui         t4, 946950
                  auipc       s2, 862634
                  srli        zero, ra, 15
                  slti        s7, s7, -1235
                  andi        a0, t6, 92
                  andi        zero, s6, -692
                  sll         s4, a0, s8
                  slt         gp, s7, t2
                  srai        s5, t6, 24
                  sltu        gp, s1, a1
                  or          t1, tp, tp
                  slt         s3, s1, gp
                  sub         t4, a1, s5
                  and         zero, a2, s2
                  srai        s0, a7, 13
                  srai        zero, s9, 5
                  sll         a5, a6, sp
                  nop
                  xori        s7, tp, -1145
                  andi        s8, tp, -1448
                  slt         s5, t5, zero
                  sub         gp, gp, a0
                  sra         a3, s11, t5
                  ori         a5, t6, -461
                  sll         a4, a0, s0
                  sll         a4, t5, gp
                  ori         zero, s6, 246
                  slt         s8, a3, a0
                  srli        t4, a7, 0
                  ori         zero, t3, 582
                  srl         s7, a6, tp
                  addi        a2, s7, 1751
                  xori        s9, a6, 723
                  andi        s8, s1, -561
                  nop
                  add         a4, t3, s6
                  add         ra, s8, tp
                  andi        sp, a1, 2036
                  sltiu       a4, s8, -822
                  andi        s1, s9, -699
                  slli        tp, zero, 17
                  ori         a4, s8, 759
                  sltu        s1, t6, s0
                  slti        zero, s11, -1459
                  srl         t3, a0, s8
                  slti        a7, a6, -289
                  xor         t4, s6, s9
                  sll         a0, a6, s5
                  andi        zero, s7, -2046
                  or          a0, s11, t6
                  srl         s6, tp, s0
                  sub         tp, tp, t3
                  xori        tp, sp, -1323
                  sltu        t0, a0, s4
                  srli        s9, zero, 2
                  and         a7, s4, a4
                  nop
                  srai        t2, s5, 31
                  sub         zero, s5, a7
                  andi        s9, s10, 1122
                  auipc       s5, 822055
                  andi        a5, t4, 1798
                  xor         a4, zero, t5
                  srl         zero, t0, gp
                  addi        a3, a0, -2012
                  sll         t3, a4, a6
                  srai        s5, t5, 29
                  nop
                  slt         s11, a2, tp
                  sltu        s11, sp, a6
                  sll         s4, a3, zero
                  sll         zero, a3, t1
                  srl         t4, ra, a5
                  or          t0, t6, ra
                  slli        t2, s1, 24
                  srl         tp, t3, a7
                  srl         zero, t3, s3
                  and         zero, t2, s0
                  auipc       s3, 346681
                  and         s7, s11, a5
                  srai        s7, a0, 28
                  sll         ra, s11, sp
                  sll         sp, zero, ra
                  ori         t4, t5, -1498
                  slt         s8, s11, a4
                  nop
                  slli        ra, s0, 29
                  ori         s11, t0, 1628
                  addi        zero, s5, -1372
                  sltu        s7, sp, s7
                  slt         a0, ra, zero
                  srl         s9, s1, t0
                  addi        zero, s2, -1063
                  nop
                  sltiu       a6, t5, 253
                  slti        a0, t1, -1961
                  auipc       t4, 655472
                  sltu        s10, s2, a5
                  ori         s8, t2, 597
                  add         s2, s6, s0
                  srli        ra, gp, 30
                  sra         s5, t5, a7
                  addi        s7, s5, 57
                  srl         s0, s3, s2
                  slti        ra, tp, 1573
                  add         gp, s4, s8
                  ori         s10, s0, 1716
                  nop
                  srli        s4, a4, 0
                  lui         a5, 641195
                  srli        s1, ra, 9
                  add         a6, t2, sp
                  sll         t2, sp, s11
                  nop
                  lui         a3, 883004
                  slti        s4, gp, 0
                  sltu        zero, t3, t6
                  srli        a5, s7, 16
                  nop
                  srai        sp, t5, 31
                  or          tp, sp, t0
                  xori        s5, t4, 335
                  slt         s7, s11, a6
                  sltiu       s7, a5, -1468
                  xori        a2, ra, 1001
                  sll         tp, s0, s6
                  or          tp, t2, tp
                  srli        zero, tp, 28
                  addi        s6, a3, 1270
                  and         s5, s5, t1
                  sltu        a7, t4, sp
                  xori        t2, s4, -113
                  slt         a3, a5, s6
                  xor         s2, s3, s2
                  xori        zero, s4, 1574
                  andi        s2, a5, -1525
                  sltiu       zero, a4, -1103
                  andi        s4, t1, 1381
                  slt         s8, s0, s1
                  and         t3, t3, t2
                  addi        tp, t4, -1526
                  slt         ra, s10, a5
                  sltu        a5, s1, gp
                  srl         t0, s5, a5
                  addi        s11, s1, 849
                  sltu        a4, a6, t2
                  nop
                  or          s7, sp, t2
                  auipc       a5, 341895
                  slt         s0, a6, t1
                  sra         t2, a5, t1
                  or          a7, t3, a3
                  sub         zero, s11, tp
                  slti        s5, sp, -514
                  addi        sp, t5, -19
                  and         zero, s10, t3
                  sra         t2, t3, gp
                  slti        ra, ra, -799
                  srai        a5, s0, 28
                  sltu        a6, sp, s10
                  andi        t1, gp, -356
                  xori        a0, s10, 758
                  lui         s10, 906911
                  sll         zero, t2, tp
                  slli        zero, a1, 8
                  xor         zero, s0, t2
                  slt         tp, s0, gp
                  sll         zero, a1, s1
                  and         t4, s10, a6
                  srai        a4, gp, 13
                  sltu        a0, t1, s7
                  slti        s0, s2, 619
                  slti        s3, t2, -1882
                  or          s9, s3, s7
                  auipc       s5, 882551
                  lui         t0, 772079
                  nop
                  ori         gp, t1, 1530
                  slli        zero, s7, 15
                  lui         t3, 1027496
                  andi        s4, s6, -679
                  sltiu       s3, s4, -393
                  ori         zero, t1, 458
                  or          s2, t3, a0
                  srai        t4, a7, 11
                  sub         t3, sp, gp
                  slt         s1, t3, s3
                  addi        gp, a0, 446
                  or          s11, t4, s3
                  lui         a4, 234070
                  sra         s2, s5, t5
                  srai        zero, s11, 24
                  sltu        a2, s6, a2
                  srli        s11, a0, 20
                  auipc       t4, 561654
                  addi        a0, a0, 684
                  nop
                  sltu        zero, t2, zero
                  ori         s9, gp, 359
                  sltiu       t2, s0, -162
                  sub         s1, s9, s6
                  srl         s11, ra, t5
                  srl         t0, s0, s8
                  srl         gp, s6, a7
                  sub         a0, s11, a1
                  xori        t3, a2, -623
                  srai        s11, t0, 17
                  xor         sp, t3, t2
                  and         s11, s9, t2
                  lui         s3, 56031
                  slti        s1, s2, -1989
                  slt         t4, t0, t2
                  addi        s2, s11, -1233
                  and         s1, a6, zero
                  sll         t3, a0, a7
                  slli        a7, s2, 31
                  ori         s4, zero, 1558
                  sll         a6, t4, s6
                  andi        s1, a5, -1415
                  slt         a4, t0, t1
                  nop
                  add         s3, s10, a0
                  addi        s0, zero, 839
                  auipc       s0, 752876
                  xor         s10, s2, ra
                  andi        gp, s6, -1933
                  addi        s7, s0, -873
                  addi        tp, t3, 71
                  sra         a7, s4, sp
                  sra         s9, a3, s4
                  sll         zero, s5, t6
                  sltu        a2, zero, a4
                  sll         t4, t6, s1
                  nop
                  slt         zero, s4, s9
                  ori         a0, ra, -183
                  sltu        zero, s4, a2
                  or          a6, s2, t1
                  slt         zero, t4, s11
                  ori         sp, t1, 718
                  srli        zero, ra, 6
                  nop
                  and         s0, s7, tp
                  auipc       gp, 528925
                  slti        ra, a6, 1183
                  lui         gp, 489624
                  sra         sp, sp, a3
                  or          s5, a2, s10
                  srai        s8, t5, 2
                  slli        zero, t4, 15
                  add         s0, a6, t3
                  addi        a2, s6, -930
                  andi        a7, s4, 1791
                  srli        t4, s10, 20
                  slti        a6, a2, 827
                  sltu        s9, a6, s2
                  xori        s7, s2, -103
                  nop
                  nop
                  slti        a7, gp, -636
                  nop
                  srli        sp, a5, 20
                  xor         a3, s2, tp
                  sra         zero, s1, s0
                  sub         a5, s11, a0
                  add         t4, t2, tp
                  or          zero, s2, zero
                  nop
                  srli        t2, t6, 14
                  auipc       sp, 440038
                  slt         s7, s5, s9
                  and         t0, s11, s11
                  srli        a7, a0, 0
                  sltu        s1, a0, a1
                  slt         s4, a2, t0
                  addi        s5, t0, 195
                  sltu        ra, t3, t3
                  sltu        sp, t1, s4
                  srli        s11, s9, 15
                  slti        zero, tp, -1428
                  xori        zero, s7, -1682
                  and         zero, t6, ra
                  xor         t3, a4, t6
                  sltiu       s11, a1, 789
                  sub         s6, t6, t1
                  xori        a7, zero, -1859
                  srli        gp, s7, 26
                  nop
                  add         zero, a4, sp
                  andi        gp, a0, -1400
                  srli        ra, t4, 20
                  addi        a6, t5, -128
                  xor         zero, a5, t3
                  and         t4, a3, tp
                  and         a5, a2, a6
                  sra         gp, t3, a6
                  sra         a5, s8, s2
                  ori         s8, gp, 959
                  srl         t1, s8, t0
                  and         s0, a0, t4
                  sub         zero, a5, a0
                  sltiu       zero, t6, 87
                  sll         a3, t4, gp
                  sltiu       s5, s2, 654
                  sub         s11, t6, a3
                  or          s3, s1, s10
                  add         a7, zero, s4
                  srl         s8, sp, a1
                  srai        t1, a3, 14
                  srl         s0, s4, s10
                  nop
                  sub         t4, t0, s10
                  sra         s7, s8, a3
                  xor         s10, s6, s3
                  ori         zero, a3, 1191
                  sltiu       zero, tp, 1243
                  or          zero, t3, t4
                  add         s1, a4, a1
                  slt         a6, a2, a7
                  slli        t0, s4, 15
                  slt         s6, sp, a4
                  andi        t4, s1, 1357
                  and         zero, zero, ra
                  srl         a3, a1, s9
                  sltu        a7, t5, t5
                  slt         s10, tp, s6
                  add         gp, s9, t0
                  xori        s5, a1, -1984
                  slli        s6, t1, 17
                  sltiu       a3, s10, 491
                  auipc       a3, 692665
                  srli        a3, a6, 17
                  sltiu       a6, a2, 926
                  srli        a7, s9, 8
                  addi        s2, s7, 222
                  slti        s9, s2, -674
                  addi        s1, s5, -1405
                  sltu        a5, gp, s8
                  sub         a3, s9, t4
                  sra         s1, t2, t3
                  sll         a2, s10, s0
                  ori         a6, a0, -56
                  xor         sp, t3, s2
                  addi        tp, tp, -308
                  xori        zero, a0, -269
                  sltiu       t1, s3, -1310
                  andi        sp, s11, 1131
                  add         a7, t4, sp
                  auipc       s0, 591740
                  addi        s0, a6, -1494
                  auipc       t0, 25264
                  add         s9, tp, s5
                  srli        a6, s2, 17
                  sltiu       zero, s11, 869
                  andi        s10, t0, 1988
                  srl         s5, a3, s10
                  add         s11, t0, a7
                  andi        tp, tp, 888
                  andi        tp, t4, 961
                  xori        tp, t5, -680
                  slti        ra, zero, -1989
                  nop
                  slli        a2, s1, 15
                  andi        tp, s11, -790
                  add         t4, a4, t1
                  xor         a6, s7, t3
                  or          s5, a5, t1
                  nop
                  slli        tp, s6, 30
                  slt         s2, a5, s8
                  srl         zero, t2, s11
                  or          a3, a2, t6
                  add         s4, s3, a3
                  xori        a4, a5, 403
                  sra         s0, a7, a4
                  srai        zero, a5, 18
                  or          sp, a4, a7
                  sll         a5, t3, ra
                  auipc       s9, 639043
                  slli        gp, a3, 11
                  add         a7, s6, a7
                  sub         s10, s10, s10
                  nop
                  addi        a6, s2, 716
                  slt         t3, sp, s8
                  srai        a7, s11, 0
                  xor         a7, a6, s0
                  sltiu       a4, s0, -132
                  nop
                  slti        a0, a3, 872
                  srl         s10, s8, s6
                  lui         a2, 801215
                  sll         a4, s6, s6
                  slt         a0, s11, s6
                  sltu        t2, a7, s1
                  sll         zero, t6, a1
                  nop
                  sub         s7, a4, t1
                  nop
                  srl         zero, a5, t4
                  sra         sp, sp, t2
                  slti        a2, s2, -300
                  xor         s1, s10, s0
                  auipc       s6, 920101
                  add         s7, s0, s6
                  ori         tp, a2, -601
                  nop
                  and         s3, t3, s9
                  andi        s4, a0, 1482
                  sltu        s5, t2, s5
                  or          a5, ra, s1
                  and         t4, a3, s6
                  xor         s11, t4, s6
                  srl         a2, zero, a0
                  addi        zero, t2, 1919
                  auipc       zero, 671417
                  andi        s2, t4, -289
                  xor         a7, a2, a5
                  addi        a2, gp, -1926
                  lui         s3, 806540
                  sub         t0, a5, s7
                  andi        s1, s11, 822
                  sll         a7, s9, s10
                  auipc       s11, 617440
                  srai        a4, a0, 17
                  sll         a7, tp, ra
                  slli        s10, gp, 29
                  add         zero, t1, t3
                  andi        sp, t0, -267
                  sll         sp, t2, s8
                  and         tp, gp, t0
                  slli        sp, s11, 28
                  sltiu       t1, sp, 858
                  srl         s2, s4, s1
                  slti        a3, s1, 1937
                  ori         a0, s0, -17
                  auipc       a4, 704361
                  nop
                  sra         s7, s6, zero
                  nop
                  sltu        a2, s0, gp
                  xor         t4, t4, s6
                  slt         s0, gp, s9
                  xori        t0, zero, -337
                  srai        zero, s9, 5
                  ori         s11, s4, -520
                  auipc       a0, 940288
                  or          ra, sp, t0
                  sra         a5, s3, a3
                  sltu        tp, s5, s7
                  or          s5, s8, a4
                  and         ra, t2, s11
                  or          s10, s10, t0
                  slli        s10, a0, 23
                  slt         s0, s4, a0
                  ori         s6, a5, 1478
                  slli        s7, a5, 12
                  auipc       t4, 296446
                  xori        t2, s8, -1275
                  add         s3, s8, a7
                  ori         t1, s4, -1816
                  auipc       s7, 433654
                  xori        s0, s4, 683
                  addi        a6, a3, -1712
                  sll         t2, a2, t1
                  nop
                  srli        s1, t2, 29
                  srli        zero, gp, 19
                  sll         s2, s11, s0
                  slti        a7, a6, 373
                  slli        ra, t0, 7
                  xori        s11, s1, -152
                  slli        a7, s2, 15
                  sltu        tp, a6, s5
                  xor         s1, a4, t2
                  slti        s11, a4, 1560
                  slli        zero, tp, 19
                  srai        a3, a5, 28
                  srli        a7, s1, 1
                  srli        s2, sp, 11
                  srai        gp, t3, 8
                  ori         t0, tp, -1073
                  nop
                  lui         s3, 714186
                  sub         zero, s3, ra
                  auipc       sp, 9063
                  sra         a7, zero, ra
                  andi        t2, a6, -1221
                  sub         tp, a6, s2
                  or          t2, t5, gp
                  nop
                  nop
                  srli        s5, t3, 14
                  sra         tp, a1, s6
                  srl         t2, a0, t0
                  slti        zero, ra, -1180
                  sra         a4, zero, s0
                  sra         s3, t2, s0
                  slti        a6, a4, -1734
                  sub         s9, a3, s11
                  sll         a6, t2, a5
                  addi        s9, a2, 1009
                  xori        tp, zero, 1390
                  slti        t0, a4, -282
                  slti        zero, t0, -1530
                  ori         s0, t4, -521
                  sll         a5, s10, a4
                  srli        a4, a3, 30
                  sub         s6, s3, t2
                  sltu        s2, a0, s5
                  sltiu       a4, t2, -1019
                  addi        zero, t3, -1965
                  slti        s3, t2, -110
                  sltu        s3, a5, s4
                  auipc       zero, 321533
                  sltu        ra, a6, s1
                  nop
                  andi        s1, a6, 1313
                  slt         gp, s2, gp
                  xor         a7, a3, t5
                  sltu        s7, t3, s9
                  sub         tp, a4, tp
                  add         a4, s9, a6
                  srl         gp, a1, t5
                  lui         a3, 35407
                  andi        tp, t6, -1388
                  srl         s5, t6, t0
                  srli        s2, ra, 23
                  lui         tp, 342449
                  slt         s1, s4, a0
                  addi        a7, t3, 317
                  addi        zero, s6, -675
                  auipc       s2, 20681
                  ori         s9, s4, 1828
                  nop
                  lui         s5, 323702
                  srai        t0, s2, 21
                  sub         s4, a5, s8
                  srai        zero, a5, 12
                  slti        s3, a5, 1715
                  lui         tp, 475147
                  addi        ra, t2, -1700
                  sra         ra, zero, zero
                  slti        a0, tp, -1402
                  nop
                  and         s5, s10, s6
                  sltu        s10, ra, tp
                  srl         s2, tp, s1
                  or          s6, a3, a2
                  slti        zero, a0, -1025
                  addi        s4, s3, -1416
                  sltiu       tp, t5, 708
                  or          a0, s7, sp
                  addi        s0, a2, 1012
                  srli        s2, s2, 29
                  or          s5, t3, t0
                  srai        s2, zero, 20
                  srai        zero, a3, 22
                  srl         s10, sp, s4
                  and         a5, sp, t3
                  lui         s4, 488341
                  slti        t1, s5, 532
                  srli        a5, ra, 5
                  ori         s7, t2, -207
                  sltu        s3, sp, tp
                  srai        ra, a7, 29
                  slti        a4, t6, 21
                  ori         a5, gp, -323
                  sll         s3, a5, a4
                  slt         t0, gp, t4
                  slli        a3, a1, 21
                  auipc       s8, 35556
                  ori         t4, s5, -973
                  sra         t2, t4, s8
                  ori         t4, zero, 1225
                  xor         zero, s5, t5
                  addi        s4, s5, -427
                  ori         t2, s1, -581
                  sltu        s5, s0, s8
                  slli        s9, a0, 10
                  xori        s3, s4, -1902
                  srai        t2, a6, 13
                  sltiu       sp, t5, 1853
                  addi        s0, t3, 954
                  xor         zero, a1, s2
                  add         a5, zero, s11
                  addi        zero, s10, -1717
                  sub         s8, s4, a2
                  slli        s6, tp, 20
                  srli        tp, a0, 0
                  sltiu       a3, s4, 1214
                  auipc       t2, 551892
                  xor         s1, tp, t6
                  sll         s5, t3, a0
                  auipc       s6, 869581
                  ori         s6, a1, 1742
                  sub         t0, s1, ra
                  nop
                  nop
                  xor         s4, a5, s3
                  ori         t0, t1, -1591
                  srli        a2, t5, 19
                  add         a0, t3, a7
                  slli        zero, s1, 24
                  sra         s7, t5, t6
                  sll         zero, s3, a5
                  sll         a5, t4, t3
                  lui         t3, 352980
                  addi        sp, a4, 860
                  slti        s0, s1, -938
                  slti        zero, t6, -1976
                  srli        s5, t6, 29
                  ori         s3, s0, 1393
                  xori        a5, s7, -982
                  xori        zero, t0, -1746
                  lui         a6, 125779
                  sltiu       a0, a6, -1489
                  xor         s6, t0, a7
                  ori         t1, a5, -1414
                  slli        sp, s2, 1
                  and         t3, t6, a0
                  add         zero, a2, a6
                  add         zero, a0, a1
                  sra         t4, s10, t5
                  ori         t3, a0, -339
                  add         s11, a5, s8
                  slti        s0, t1, 1637
                  srli        a2, s7, 23
                  sll         t1, s7, t4
                  nop
                  and         t1, a5, s9
                  or          zero, a0, sp
                  xori        t4, t4, 1338
                  slti        s7, a2, -2015
                  lui         t1, 834085
                  addi        s3, s9, -445
                  slli        t1, sp, 21
                  srl         a5, t0, a4
                  sltu        s0, a5, t2
                  li         s8, 0x0 #start riscv_int_numeric_corner_stream_5
                  li         t4, 0x181475d4
                  li         s11, 0x1
                  li         t3, 0x0
                  li         s10, 0x0
                  li         s9, 0xb09790d
                  li         a4, 0x71e4b8b0
                  li         s0, 0x2f6b04b1
                  li         s2, 0x2fd46547
                  li         a0, 0x0
                  sub         zero, s3, a0
                  addi        s7, s5, -1569
                  add         a4, s8, a6
                  nop
                  nop
                  addi        t0, t3, 128
                  sub         zero, t6, a4
                  sub         zero, a0, t6
                  nop
                  add         a2, s9, s7
                  nop
                  lui         t2, 563648
                  sub         t1, t2, a0
                  sub         s5, t0, a4
                  addi        s9, a1, -742
                  nop
                  addi        a5, gp, 1687
                  nop
                  lui         a4, 6966
                  nop
                  lui         a6, 1040701
                  add         a4, t5, s2
                  lui         t2, 140313
                  add         t2, gp, t4
                  nop #end riscv_int_numeric_corner_stream_5
                  srli        s7, s11, 19
                  slti        t0, s8, 1502
                  sll         t4, t0, a0
                  slti        a5, ra, 238
                  slli        t3, a2, 13
                  slli        a6, t2, 18
                  slt         t1, t4, a5
                  auipc       s7, 371943
                  sll         s1, t5, gp
                  nop
                  auipc       ra, 41069
                  srai        s0, ra, 3
                  andi        zero, s0, 1189
                  nop
                  srli        ra, t1, 17
                  nop
                  sll         s2, t1, s0
                  or          a2, s9, s7
                  lui         t0, 22616
                  slt         t2, ra, a5
                  srl         t1, tp, s7
                  xori        t1, s4, -59
                  lui         zero, 896183
                  xori        s5, s7, 248
                  lui         zero, 416788
                  add         s9, a2, s0
                  add         t3, s0, a2
                  srl         t1, t5, a6
                  sra         sp, a2, s3
                  auipc       a5, 815659
                  slli        t3, a0, 13
                  or          s3, t0, a2
                  srl         a7, a6, s3
                  slti        zero, s11, 1869
                  slli        t1, s10, 24
                  nop
                  slti        zero, t2, -1963
                  sltiu       s6, s9, 1792
                  srli        s7, a5, 21
                  sll         tp, s11, a3
                  add         tp, s1, zero
                  xor         t0, t3, t6
                  srli        zero, t6, 27
                  xor         t0, s8, a0
                  srl         t0, t2, a0
                  or          a3, t4, a7
                  xor         tp, s4, s1
                  srli        s1, s10, 15
                  sll         s8, s4, s2
                  sra         s3, t5, sp
                  xor         s7, s0, t1
                  srai        s1, s9, 15
                  add         s11, s4, tp
                  add         ra, t3, a2
                  nop
                  srl         s5, s6, a5
                  sra         s11, t2, a7
                  li         t3, 0x1 #start riscv_int_numeric_corner_stream_4
                  li         s4, 0x1
                  li         a2, 0x66061c0
                  li         s9, 0x1
                  li         ra, 0xaeec83d
                  li         s5, 0x0
                  li         a0, 0x4f18ebf0
                  li         tp, 0x72c78eef
                  li         t4, 0x5487e5df
                  li         t0, 0x0
                  sub         zero, s2, a2
                  lui         zero, 529674
                  addi        a2, s11, 702
                  nop
                  lui         s8, 186919
                  add         s5, a0, zero
                  sub         sp, a4, sp
                  add         t4, t0, s11
                  nop
                  nop
                  add         a2, a0, zero
                  add         a3, s6, s3
                  add         s7, s0, s9
                  add         s9, s3, s10
                  sub         s11, t0, sp
                  addi        gp, a4, 191
                  nop
                  lui         t0, 836021
                  nop
                  add         t3, tp, s2
                  lui         s10, 989372
                  sub         t2, tp, s1 #end riscv_int_numeric_corner_stream_4
                  srl         a7, t3, a3
                  sltiu       a7, sp, 388
                  lui         s6, 199843
                  add         s10, s6, a0
                  sltiu       a6, zero, 1539
                  andi        zero, t3, -454
                  sltu        zero, a6, a5
                  or          zero, gp, a7
                  xor         s0, s11, tp
                  srai        s0, gp, 22
                  add         a7, gp, a0
                  slli        s5, s8, 30
                  lui         zero, 915134
                  auipc       t1, 288232
                  or          s6, s6, ra
                  nop
                  nop
                  ori         s3, sp, -1906
                  slt         t1, t6, a6
                  sub         s9, a4, t1
                  srai        sp, t0, 30
                  sub         s6, s4, zero
                  slli        s7, a5, 22
                  nop
                  slli        tp, a3, 28
                  srai        zero, sp, 1
                  lui         sp, 105979
                  andi        gp, t0, 986
                  sltiu       a0, sp, -206
                  srli        zero, s0, 31
                  sub         s11, t2, t6
                  auipc       s8, 687986
                  sra         s4, sp, s1
                  sra         zero, s6, a5
                  srai        t0, s8, 10
                  srli        zero, t6, 21
                  lui         a5, 647235
                  and         sp, s10, a3
                  addi        t0, s0, -961
                  auipc       zero, 654091
                  sub         zero, t2, a4
                  nop
                  sra         s3, sp, a6
                  or          s4, s8, t5
                  sll         s9, a6, a5
                  sra         sp, a4, gp
                  andi        t1, s1, 1132
                  add         s10, s3, t3
                  or          a0, t0, s8
                  slli        t1, s2, 16
                  sltiu       s0, s2, 192
                  lui         a3, 629216
                  or          s3, a6, gp
                  nop
                  andi        zero, t2, -494
                  xor         s3, a2, zero
                  xori        t1, tp, 1924
                  slt         a7, s8, s2
                  slli        zero, a1, 31
                  slt         s0, t2, tp
                  ori         t2, ra, -1661
                  srli        s6, s10, 9
                  slti        s2, tp, 1248
                  sra         s3, a4, t5
                  sltiu       a5, s5, -1557
                  xori        s1, s11, 1844
                  xori        s10, s9, -1692
                  xor         s1, t1, s9
                  addi        a3, s9, 1558
                  slt         sp, ra, s0
                  or          a3, s10, s4
                  sll         s11, a5, s6
                  lui         sp, 3820
                  sll         zero, a0, s9
                  sub         s4, s8, s2
                  slt         zero, t6, s4
                  sub         a7, tp, gp
                  or          zero, t1, s1
                  addi        s7, s3, -1924
                  or          t2, ra, s7
                  slt         s5, t5, s11
                  sltiu       s3, s2, 646
                  auipc       t2, 547327
                  sltiu       ra, a7, 1131
                  add         ra, s10, t5
                  nop
                  auipc       s10, 401357
                  xori        s0, gp, -642
                  andi        t3, sp, -693
                  srai        s3, s4, 25
                  xor         a3, s8, s8
                  add         s7, a2, s3
                  slti        s10, a2, -1867
                  addi        a0, s10, -1161
                  ori         s0, zero, 271
                  slt         s6, t6, s7
                  nop
                  lui         zero, 831128
                  slti        ra, a7, 147
                  srai        s4, t2, 9
                  srli        s11, tp, 28
                  nop
                  slti        a6, s7, 1744
                  srai        a7, a0, 23
                  sltu        s10, s3, sp
                  or          s8, a4, s3
                  sltiu       t2, zero, 1293
                  auipc       s3, 290218
                  and         sp, s3, s7
                  addi        s8, s0, 1962
                  slli        a7, s2, 26
                  sub         gp, s5, s0
                  srl         t4, t2, s9
                  sltiu       t1, t1, 1425
                  andi        a2, tp, 84
                  sub         a3, s7, a6
                  slli        gp, t5, 10
                  sra         t3, s4, s5
                  addi        t2, a3, 862
                  slti        a4, gp, 936
                  slli        t3, s7, 9
                  slli        zero, a4, 4
                  slti        a5, ra, 1895
                  add         a3, a2, a5
                  xori        s8, s4, 110
                  srai        t4, s3, 30
                  slti        tp, zero, -468
                  sra         zero, ra, t4
                  xor         s9, t2, sp
                  slt         a0, a3, a1
                  and         a7, a7, t4
                  slli        tp, ra, 24
                  ori         zero, ra, -1442
                  sub         s2, a2, t5
                  slt         zero, s2, t5
                  sltiu       s5, tp, 859
                  xori        a0, s3, -1038
                  ori         s1, zero, -935
                  lui         s6, 743530
                  sltiu       s6, s7, 910
                  srl         a7, t2, t6
                  and         t2, sp, t1
                  srl         a0, t1, a0
                  ori         s1, a0, 1056
                  xori        a4, tp, 1886
                  srli        sp, ra, 10
                  srli        s11, t0, 7
                  slt         tp, t4, t0
                  sltu        s6, t1, t5
                  sll         a3, sp, a5
                  addi        s5, gp, 1811
                  srai        tp, tp, 20
                  nop
                  sub         t1, s1, gp
                  nop
                  andi        s6, ra, 1939
                  srl         tp, a4, t0
                  addi        zero, sp, 1308
                  sltu        gp, sp, a5
                  sll         sp, t3, sp
                  add         zero, s7, a7
                  auipc       zero, 375185
                  add         a6, a5, ra
                  lui         t0, 549197
                  sra         t3, zero, s6
                  srl         t1, s5, a5
                  or          s4, s5, s8
                  slti        s1, t1, 2033
                  srai        t3, t2, 19
                  xori        zero, s9, -436
                  and         zero, a0, a6
                  sub         t4, s2, t2
                  sltiu       s1, t0, -1343
                  sll         a2, t2, t1
                  slti        s0, t2, 1831
                  and         a0, s0, a6
                  srai        t2, t0, 0
                  slt         s7, s3, s10
                  andi        s6, a2, 1946
                  xori        s8, s4, 1689
                  sub         s5, s4, s9
                  sll         a3, tp, gp
                  sub         sp, t5, a2
                  sltu        zero, t3, gp
                  srai        s10, t0, 18
                  sltiu       ra, t4, -1031
                  srli        zero, a0, 20
                  add         s7, a0, s9
                  sra         s10, sp, s7
                  nop
                  srl         t3, t1, t3
                  slt         t4, a7, t5
                  sra         s4, t5, s1
                  sltu        s1, a5, s6
                  slt         zero, s3, s3
                  slt         s6, s7, ra
                  ori         s6, s10, -1192
                  andi        a2, s3, -248
                  and         s10, s4, a0
                  add         s4, s1, s4
                  srai        t4, s1, 1
                  auipc       zero, 244953
                  sra         a6, zero, a3
                  srli        s0, t4, 8
                  sll         s6, a5, s4
                  sltu        s6, zero, sp
                  srl         gp, gp, t0
                  ori         t4, s9, -393
                  xor         a3, t2, a1
                  sub         t3, t1, zero
                  sltiu       a7, a4, -1150
                  ori         zero, s6, 1397
                  srli        s10, t4, 16
                  sll         s0, a4, zero
                  sub         s8, sp, t2
                  sltu        a3, s11, s5
                  slli        s1, a4, 26
                  xor         a7, t6, t0
                  srai        a6, a6, 2
                  sra         t0, a5, s5
                  ori         s1, s2, -1197
                  ori         s7, a6, -1768
                  sra         a4, ra, a7
                  sub         zero, a7, s4
                  sltiu       t0, tp, 1220
                  slli        sp, s7, 6
                  sltu        gp, s0, t6
                  srli        zero, a2, 2
                  sra         s7, t5, s1
                  sltiu       a2, s7, -125
                  slt         s2, a5, s2
                  slli        a5, t1, 29
                  and         t3, sp, t4
                  or          a4, s5, s3
                  sra         zero, s11, s6
                  lui         s5, 714822
                  sltiu       a3, a4, -42
                  or          t3, a6, s4
                  add         s8, t5, t0
                  slli        a0, s11, 11
                  or          t2, s2, a0
                  sltu        s5, a5, sp
                  sll         a7, s0, t0
                  srai        sp, a5, 8
                  slli        a3, t5, 11
                  lui         t3, 153806
                  nop
                  lui         s8, 541619
                  srai        s2, t2, 23
                  sltu        a6, t2, zero
                  srl         s0, s4, ra
                  add         zero, s4, a7
                  xori        t4, tp, 784
                  nop
                  and         sp, s0, ra
                  sub         a2, s10, t1
                  sltu        s6, s6, a0
                  auipc       s6, 997317
                  sub         a2, a4, a1
                  sltu        sp, t2, ra
                  sra         zero, t3, sp
                  srl         a3, t4, t6
                  sub         a0, a5, ra
                  sra         s0, ra, s3
                  srli        ra, a6, 23
                  srl         gp, tp, t3
                  sltiu       s7, s3, -1492
                  auipc       ra, 518935
                  sll         zero, s6, t4
                  sub         s2, s8, a3
                  add         t4, gp, s4
                  or          t0, s5, t6
                  sub         zero, t0, a0
                  slti        t0, t1, 1256
                  lui         a3, 323464
                  or          s5, s2, tp
                  sll         s9, tp, a5
                  or          s1, ra, s9
                  srli        t3, tp, 3
                  addi        s0, s7, -622
                  srl         a3, s5, s1
                  addi        a5, t2, -922
                  ori         s1, a0, -246
                  add         s7, s1, gp
                  or          s4, s2, s11
                  lui         s10, 847385
                  sltiu       t0, t4, 1281
                  slt         t0, tp, ra
                  or          ra, s1, s6
                  xori        t2, t4, 914
                  sra         a0, s3, a0
                  sll         s11, s11, a1
                  slli        a3, zero, 7
                  addi        t3, t2, 228
                  and         s5, a5, sp
                  srli        t3, s11, 23
                  or          t4, a6, s6
                  lui         s5, 119349
                  sltu        zero, tp, a0
                  sra         t4, t3, t3
                  and         s9, s8, s2
                  sltu        s3, s7, a1
                  sll         s4, gp, a6
                  lui         ra, 1007704
                  srai        s1, t3, 1
                  sub         zero, ra, s1
                  andi        s3, a2, -128
                  and         zero, t4, t4
                  ori         a7, t1, 1106
                  slt         a2, a6, s7
                  or          s3, s10, a7
                  lui         t0, 396494
                  slli        a0, t2, 22
                  addi        s1, a4, 739
                  and         a5, a6, t6
                  lui         s3, 3115
                  srl         s9, s4, a5
                  sra         s7, s2, s0
                  or          t1, s5, s4
                  srl         t3, a6, ra
                  xor         a5, a4, sp
                  srl         a4, t4, t6
                  slli        s5, ra, 28
                  xor         t4, a2, t0
                  andi        sp, a1, 1523
                  or          zero, t2, a3
                  auipc       tp, 952977
                  srai        a3, a5, 9
                  add         a0, t5, s11
                  nop
                  sra         s6, t6, a0
                  srai        s5, s4, 26
                  slt         t3, sp, t2
                  sub         s3, t2, s1
                  add         a2, t1, a6
                  add         gp, s6, s1
                  andi        s1, zero, -201
                  slti        s11, a7, -434
                  srai        s8, t5, 28
                  andi        t1, s8, 1989
                  slt         s2, s8, s3
                  sltiu       t1, s3, 1026
                  srli        zero, s5, 19
                  slt         sp, t2, sp
                  ori         a5, s10, -1221
                  sra         s3, s11, sp
                  slt         zero, a7, tp
                  srai        t2, s1, 28
                  slt         s11, a0, a0
                  sltiu       tp, gp, 1200
                  lui         s2, 573630
                  ori         a5, s8, 874
                  sra         s11, s3, s2
                  srli        a2, a4, 17
                  nop
                  slt         zero, s6, s2
                  auipc       t1, 209124
                  ori         s3, s0, 967
                  sra         s8, t5, t4
                  xori        gp, s5, -1194
                  xor         zero, s0, t5
                  slli        ra, s1, 11
                  srli        sp, s10, 1
                  slti        t4, tp, 1104
                  or          zero, s10, s5
                  nop
                  xori        s5, s10, 1552
                  sub         zero, t6, s5
                  slli        s8, s5, 25
                  sra         zero, a1, s0
                  nop
                  add         a3, s1, sp
                  lui         zero, 818361
                  sra         a4, tp, s7
                  sra         a7, t4, zero
                  xori        a2, a3, -598
                  lui         s4, 409628
                  addi        zero, s8, -761
                  nop
                  xori        s2, t4, 1446
                  sltu        s7, zero, s11
                  srl         zero, t1, s7
                  add         s5, gp, s2
                  slli        a6, t3, 16
                  addi        a6, t3, -1899
                  slli        zero, t4, 1
                  ori         t2, s6, -1960
                  slli        s9, a3, 31
                  sltu        s6, s9, t6
                  and         ra, t4, s11
                  addi        zero, s8, 2031
                  ori         s10, a3, -2003
                  sra         t0, s10, a0
                  sltiu       zero, a3, 697
                  and         ra, s1, t0
                  slti        zero, ra, 206
                  or          zero, s8, a6
                  slti        ra, s8, -1195
                  xori        ra, t5, 873
                  slli        zero, t3, 0
                  add         ra, gp, ra
                  sll         s10, t5, a7
                  or          s10, a7, gp
                  auipc       sp, 211504
                  srl         s11, s9, t4
                  nop
                  srai        a2, t6, 30
                  addi        s3, a1, -1331
                  lui         sp, 435639
                  xori        zero, a2, -2034
                  sltu        t4, zero, a2
                  slti        s6, s3, -1651
                  srl         sp, s0, s5
                  xor         a7, s1, t1
                  nop
                  sltu        zero, a1, t6
                  sll         s5, s7, s3
                  and         s0, ra, a5
                  sltu        s4, s6, a3
                  sra         t0, s3, s3
                  andi        ra, s11, 1306
                  srl         a7, s7, a2
                  xori        s5, t6, -1142
                  andi        s10, s7, 702
                  sub         s0, a1, s10
                  srai        zero, zero, 9
                  and         t2, a5, a4
                  sll         t2, t2, a3
                  slli        ra, a5, 14
                  sltu        a4, t1, t5
                  andi        a3, tp, -558
                  and         gp, ra, s6
                  ori         tp, s8, -1387
                  sll         a4, s9, s10
                  add         s4, a5, t2
                  add         s7, t5, s7
                  lui         s9, 56933
                  add         s9, sp, a3
                  or          sp, a2, a7
                  lui         s7, 916236
                  auipc       s9, 1041336
                  lui         t0, 533661
                  sub         s9, t6, ra
                  sub         sp, s7, s9
                  add         s4, t0, a1
                  xori        a3, t5, -210
                  sub         a7, a4, t1
                  srl         s5, sp, sp
                  sub         gp, s8, a2
                  slti        a5, s0, 514
                  sltu        s6, gp, s6
                  auipc       s5, 1037718
                  auipc       a6, 752459
                  sub         s1, a1, t3
                  xori        s3, s7, 1033
                  srai        s2, s8, 5
                  sra         a2, zero, s7
                  sra         sp, a2, sp
                  auipc       a4, 721974
                  lui         a7, 848316
                  or          a6, sp, s8
                  sltu        a0, a4, t5
                  add         t0, a1, t4
                  lui         zero, 346014
                  addi        t4, a2, 2037
                  sltiu       sp, t2, -1756
                  slli        s7, gp, 5
                  addi        zero, t2, 1378
                  sll         a4, a1, t2
                  ori         ra, ra, -1131
                  sra         s7, a2, t1
                  auipc       s2, 564593
                  nop
                  slti        s10, s10, -494
                  sub         a6, zero, zero
                  srl         zero, s3, s11
                  slti        a0, s10, 1815
                  lui         a3, 700552
                  slt         t3, s9, a5
                  auipc       a6, 909288
                  sra         t2, s0, t4
                  sub         a0, s0, t0
                  nop
                  slti        s7, s3, -834
                  slti        gp, s10, -463
                  sll         sp, gp, t5
                  sltiu       s11, sp, 1958
                  sra         s7, a1, a2
                  srl         s0, tp, s6
                  xori        a2, t3, 728
                  ori         s1, s0, -188
                  andi        zero, s5, 1914
                  sltu        s4, s7, t6
                  srli        a2, a5, 7
                  andi        a0, s4, 1277
                  srai        t2, a3, 23
                  and         a0, a6, s9
                  slt         zero, s2, s7
                  nop
                  slli        zero, s9, 1
                  addi        zero, gp, -1282
                  lui         t2, 320270
                  ori         s0, s8, -396
                  srli        s9, s11, 12
                  auipc       zero, 61336
                  xori        t1, s8, 338
                  nop
                  slti        a7, t2, -1686
                  lui         s1, 442880
                  addi        a6, a0, -1661
                  srli        a7, ra, 9
                  nop
                  sra         a3, s3, t0
                  sltu        a2, s10, s11
                  andi        a5, s3, 993
                  addi        zero, s1, -1123
                  sra         s3, s0, tp
                  xori        t2, s8, -925
                  xori        zero, a6, -1153
                  nop
                  and         a0, a4, s3
                  or          zero, t6, t3
                  xori        a6, ra, 539
                  andi        zero, tp, -42
                  sltu        s2, s5, s7
                  or          gp, a5, a5
                  auipc       zero, 501
                  sub         a4, t2, s11
                  xor         zero, s10, s9
                  nop
                  srai        s4, s5, 13
                  sra         t0, t0, ra
                  or          s0, s2, s7
                  sra         s2, a6, s3
                  srl         a3, ra, t3
                  auipc       t3, 463932
                  slti        a0, t6, 1087
                  sll         s11, tp, t3
                  lui         zero, 805516
                  and         zero, s8, a5
                  sub         a0, t2, s0
                  xori        s0, s0, -750
                  srai        a6, t2, 18
                  sltu        s4, sp, s11
                  sltu        a4, t1, t2
                  nop
                  li         a3, 0x0 #start riscv_int_numeric_corner_stream_3
                  li         a2, 0x0
                  li         s7, 0x1
                  li         tp, 0x1
                  li         gp, 0x0
                  li         a5, 0x1
                  li         ra, 0x0
                  li         s5, 0x1
                  li         a7, 0x0
                  li         sp, 0x1
                  addi        s9, s0, -1597
                  nop
                  addi        t1, s0, -215
                  lui         a4, 650380
                  add         a0, sp, s0
                  nop
                  sub         t1, t6, a4
                  sub         a2, a5, a0
                  add         gp, t4, a3
                  nop
                  lui         s0, 637102
                  addi        t3, zero, 1239
                  addi        zero, a5, 1466
                  add         sp, s6, a4
                  nop
                  addi        s11, a5, 1229
                  sub         s3, ra, s1
                  sub         a5, t1, a7
                  nop
                  addi        s3, s9, -1232
                  sub         t4, a1, a6
                  sub         s8, a4, a4
                  addi        tp, s2, 827
                  add         s2, s5, s3
                  addi        sp, t2, -356
                  lui         s1, 219739
                  sub         zero, a6, s0 #end riscv_int_numeric_corner_stream_3
                  and         t2, s4, s6
                  sltu        zero, a7, a4
                  sub         s3, sp, s7
                  lui         s11, 171021
                  slli        zero, t6, 29
                  srl         zero, a2, t3
                  andi        t3, s5, 862
                  xori        t4, a5, 1527
                  slli        a7, ra, 0
                  and         t2, s3, s8
                  auipc       tp, 153040
                  xor         sp, s10, t2
                  auipc       t4, 390722
                  lui         s5, 65614
                  andi        s6, s1, 576
                  lui         t3, 597981
                  lui         ra, 1038563
                  srai        s7, s11, 3
                  add         a7, a0, s2
                  nop
                  addi        s11, sp, 1093
                  sll         a0, t5, a3
                  sltu        t3, sp, t0
                  xor         s6, s6, s10
                  srl         t1, t6, s6
                  srai        zero, a4, 31
                  sltiu       t1, a3, 290
                  srai        s0, t6, 25
                  or          zero, s5, ra
                  sub         a5, a3, a0
                  srli        a2, s4, 21
                  srli        a4, s0, 2
                  srli        s7, s8, 15
                  sra         a6, tp, s0
                  lui         ra, 174897
                  sltiu       zero, t4, 1747
                  slt         zero, zero, sp
                  sltu        s7, s10, t6
                  sltiu       zero, s6, -1877
                  sltiu       zero, zero, 1206
                  xori        s8, s1, -1152
                  sub         sp, t5, t0
                  add         tp, a2, s3
                  or          s4, s6, a2
                  xori        a7, s9, -1259
                  slti        tp, t6, 1664
                  srli        t1, s5, 7
                  srl         t0, a2, a3
                  addi        s8, t3, -790
                  xori        ra, s3, 1063
                  sltiu       zero, a3, 120
                  nop
                  addi        a4, gp, 1393
                  auipc       s6, 190549
                  nop
                  andi        zero, s10, -463
                  xori        a6, s11, 1210
                  sll         sp, t1, s6
                  sll         sp, ra, s2
                  srl         zero, s5, s3
                  xori        zero, a3, -1193
                  sltu        tp, a5, a6
                  slt         s1, gp, a1
                  lui         gp, 176451
                  add         sp, t3, a5
                  andi        t2, t3, 114
                  and         a7, s6, s11
                  xori        a4, t5, 49
                  sltu        t2, a1, t5
                  sll         t2, s4, s4
                  sll         s6, s3, t4
                  nop
                  srli        s3, s8, 16
                  sra         a3, s9, t4
                  ori         zero, t2, -1790
                  andi        zero, s10, 1147
                  sra         zero, s9, a7
                  slt         s3, s11, a2
                  srl         a7, t2, s2
                  srl         s1, s6, a6
                  nop
                  sltu        gp, tp, s4
                  srli        t1, s2, 5
                  lui         sp, 356230
                  ori         t0, t1, -1891
                  or          a0, t5, a0
                  andi        gp, zero, -578
                  sub         s4, a5, s0
                  xor         s9, zero, t0
                  srai        zero, ra, 24
                  auipc       a5, 585591
                  sll         s2, t0, s1
                  xor         s0, s9, a7
                  sub         zero, t4, s4
                  and         s5, a3, s2
                  add         s2, a2, t0
                  slli        s2, s9, 4
                  slli        zero, t4, 16
                  ori         a6, s4, 1957
                  addi        zero, a5, -1255
                  srl         a5, a6, t4
                  or          s10, s10, a3
                  and         s8, ra, a7
                  andi        t2, t2, 211
                  slli        gp, s8, 4
                  ori         sp, gp, -806
                  and         s11, s9, s8
                  slti        s1, t4, -26
                  addi        a0, gp, 1429
                  nop
                  or          s1, a4, s4
                  srl         a6, s0, zero
                  nop
                  auipc       s0, 839858
                  slti        t3, a4, 1906
                  xori        a5, gp, -1791
                  add         s1, s9, s7
                  sltiu       zero, a3, -1312
                  srai        s3, t0, 26
                  sltu        t3, s8, t5
                  lui         t4, 988471
                  srl         s10, sp, t5
                  sub         gp, s2, s7
                  addi        s5, ra, -1339
                  addi        s5, s5, 1401
                  srli        s1, s11, 7
                  andi        s0, s0, -537
                  or          tp, t6, a2
                  ori         zero, a5, -61
                  and         a5, t1, s0
                  addi        a4, t3, -1050
                  sra         zero, ra, s8
                  srli        s11, a4, 7
                  srl         s6, s11, s4
                  add         a2, s6, s8
                  slt         t4, sp, s2
                  sra         a0, s11, a3
                  srli        a0, a3, 19
                  slti        s6, s0, 728
                  sll         s6, t5, a4
                  sub         zero, t2, s9
                  and         zero, s7, sp
                  sltiu       a2, a3, -855
                  slli        t4, s6, 9
                  srai        s2, sp, 24
                  xor         s7, a7, gp
                  addi        a7, s1, -1927
                  andi        zero, a0, -3
                  slti        s10, s5, -1739
                  addi        t1, s3, -759
                  sltu        tp, t0, ra
                  slli        s7, sp, 29
                  srai        tp, a5, 19
                  slli        a5, t1, 7
                  nop
                  sltiu       t1, s8, 626
                  addi        t0, a3, 1925
                  li         t4, 0xf2a4867 #start riscv_int_numeric_corner_stream_9
                  li         t3, 0x1
                  li         s11, 0x7085bd81
                  li         s10, 0x571a86a0
                  li         ra, 0x1
                  li         s1, 0x0
                  li         s2, 0x1
                  li         s8, 0x0
                  li         s5, 0x1
                  li         a0, 0x1
                  nop
                  sub         zero, s10, t1
                  addi        a6, s3, -1624
                  nop
                  sub         a2, zero, s9
                  sub         s5, s6, t1
                  nop
                  nop
                  nop
                  addi        a5, a5, -1982
                  add         s2, s7, t0
                  addi        s7, a3, -16
                  nop
                  addi        a6, a6, 89
                  addi        s4, a2, 1477
                  nop
                  add         t0, s1, t2
                  addi        s8, s6, 1953
                  addi        s5, s0, 920
                  sub         s0, s8, t2
                  sub         sp, t1, a2
                  addi        zero, a1, 465
                  addi        s4, s2, -1879
                  nop
                  addi        a7, t1, -656
                  add         s11, s1, t3
                  nop
                  add         t4, a7, s8
                  lui         s0, 556427 #end riscv_int_numeric_corner_stream_9
                  srai        zero, s11, 10
                  srl         a5, s5, s1
                  or          s4, s7, s0
                  slti        zero, a2, -52
                  srli        t4, s10, 23
                  xori        zero, t3, 810
                  xor         sp, s11, t4
                  addi        zero, s11, -1955
                  or          gp, t5, s6
                  slli        gp, s5, 8
                  andi        s10, gp, -253
                  sub         s9, a3, a1
                  srai        zero, s1, 20
                  sltiu       s0, s9, -1490
                  lui         a4, 748729
                  slt         a3, s6, s4
                  slt         sp, s7, tp
                  sra         gp, s0, s2
                  slt         a4, s0, a4
                  sra         a4, t3, s1
                  xor         zero, a4, s4
                  and         t1, t5, a4
                  nop
                  and         tp, s0, s4
                  andi        a2, t3, -278
                  andi        tp, a3, -696
                  slli        ra, t6, 2
                  auipc       t4, 575647
                  auipc       s5, 599851
                  srli        zero, a7, 18
                  sll         s11, s1, s0
                  srli        t3, a1, 20
                  srli        a4, tp, 18
                  slt         s9, s9, a1
                  srli        s3, s0, 22
                  sll         a0, a3, t1
                  lui         a0, 954317
                  slli        s5, sp, 21
                  add         tp, a2, s6
                  ori         t0, t2, -800
                  xor         a3, s8, a0
                  ori         t1, a1, 149
                  or          s7, tp, zero
                  auipc       s6, 718234
                  add         s4, tp, s7
                  ori         s7, a0, -1561
                  sub         s1, zero, t1
                  sra         s4, t0, s1
                  sub         s0, a0, s2
                  add         a6, s8, a7
                  slli        t2, tp, 12
                  xor         a7, s8, a6
                  auipc       s8, 81874
                  addi        s1, a3, -1266
                  sra         s5, a0, sp
                  srli        t1, t4, 19
                  or          zero, a4, s5
                  xor         s3, a4, t5
                  sll         zero, s4, a1
                  addi        sp, s1, 178
                  sll         tp, a2, s11
                  slti        s0, t1, 403
                  slt         t4, a7, s2
                  srl         s10, s2, a5
                  sltu        s3, s2, sp
                  srli        s2, a3, 24
                  nop
                  srl         s3, a3, s11
                  addi        a7, t5, -213
                  auipc       ra, 435980
                  srai        s7, t5, 1
                  xori        s9, t4, -1291
                  and         a4, s5, s8
                  add         s11, t6, s10
                  or          s5, s2, s5
                  slti        zero, t0, -1882
                  sra         t4, s6, t0
                  sltiu       a7, t5, 6
                  or          a3, s3, s3
                  srl         ra, a6, s9
                  srl         a7, a5, t3
                  slt         tp, s11, a6
                  slli        t2, a5, 24
                  slli        s2, gp, 15
                  ori         a0, a2, -1771
                  auipc       t4, 727067
                  slli        s7, s0, 3
                  srai        a0, s2, 7
                  nop
                  xor         a0, a5, s10
                  andi        zero, s2, -1659
                  slt         s7, s11, s6
                  ori         s1, t2, -1168
                  lui         s0, 1042166
                  xori        a7, a6, -1744
                  sub         s10, ra, s6
                  nop
                  and         zero, t2, a0
                  nop
                  xor         s7, zero, tp
                  srl         s11, a1, a4
                  srl         a2, t1, s5
                  slt         a7, s11, a4
                  sub         tp, t6, a3
                  ori         a4, a0, 1515
                  ori         zero, a0, -512
                  sltu        a6, s3, sp
                  sltiu       a4, sp, -455
                  slti        s7, t1, -17
                  nop
                  sltiu       sp, a3, 1979
                  sub         s10, s4, t3
                  sll         a3, s7, tp
                  sltiu       s10, s2, 154
                  addi        ra, s0, 407
                  andi        t3, a2, 310
                  slti        t3, s11, 543
                  sra         a5, a1, s9
                  auipc       a6, 396571
                  srai        t4, a2, 11
                  slti        s11, s3, -942
                  sltu        a0, tp, tp
                  slt         a4, a0, t1
                  srl         a0, s7, s0
                  nop
                  sra         a5, gp, ra
                  lui         zero, 117207
                  nop
                  slti        t4, gp, 1327
                  srl         zero, a2, a6
                  and         zero, ra, t1
                  lui         tp, 861703
                  and         s9, gp, a5
                  srl         a5, t4, a7
                  sub         zero, s5, t5
                  add         a5, s2, sp
                  sub         t3, t2, tp
                  slli        sp, t3, 30
                  andi        a6, t5, 354
                  srl         a5, s1, a6
                  or          zero, t4, zero
                  or          a6, s5, s5
                  srai        s1, s11, 18
                  sltu        a2, s6, s1
                  ori         a5, s7, 1482
                  nop
                  lui         t0, 153112
                  auipc       a0, 506569
                  and         s9, s0, a7
                  xori        s1, s1, -267
                  add         t2, a5, s9
                  nop
                  sltiu       s6, s6, 101
                  addi        s10, s7, -2
                  slli        a4, s4, 5
                  xor         t1, a6, s6
                  nop
                  addi        zero, s4, 1464
                  add         s6, t3, s3
                  sltu        t1, a7, t3
                  add         s8, s8, a1
                  addi        zero, a6, -134
                  lui         t0, 216488
                  add         a0, t1, t6
                  or          s3, s7, tp
                  xor         tp, s5, s1
                  sub         s7, s3, s4
                  ori         t2, s7, 1356
                  xori        a0, ra, -1544
                  slt         a7, s11, a2
                  and         s2, t5, s1
                  slt         ra, s0, tp
                  sltu        s7, zero, t0
                  sll         s9, s0, tp
                  ori         s10, s2, 1568
                  srli        sp, s0, 9
                  sltiu       a6, ra, -650
                  sltiu       a4, t2, -1119
                  auipc       a3, 2803
                  sltu        a4, gp, sp
                  and         t2, s2, t3
                  or          s1, a1, t3
                  add         s0, ra, s7
                  nop
                  and         s7, a1, a1
                  sub         s3, sp, t6
                  slt         t3, a1, gp
                  slli        gp, ra, 21
                  add         sp, s1, t2
                  ori         a6, s11, 171
                  add         s3, s2, t1
                  srl         a3, t3, s2
                  slti        s4, s10, -894
                  srli        s4, t6, 19
                  addi        s5, a0, 1257
                  srli        a5, a2, 1
                  and         s5, t6, s1
                  sltiu       a2, t6, -744
                  xori        t4, s5, -1677
                  xor         s5, t0, t6
                  sub         s8, zero, t2
                  sub         a7, t1, a5
                  add         ra, a3, t3
                  sltu        a7, s10, a4
                  addi        s2, s4, -363
                  and         a6, s6, s11
                  auipc       s7, 115070
                  sltu        tp, t1, s0
                  xori        zero, t3, 1499
                  or          a2, gp, zero
                  and         s5, gp, s5
                  slli        gp, t2, 14
                  and         zero, s7, s6
                  or          s4, t4, t6
                  slt         s6, t4, s5
                  xori        tp, t4, 1900
                  auipc       sp, 830763
                  ori         s0, a4, 517
                  andi        s8, ra, -524
                  sltu        zero, s6, s10
                  srl         s8, s1, t5
                  slli        a2, t6, 25
                  slli        tp, t1, 9
                  slt         t3, s0, s5
                  srai        zero, t6, 17
                  slli        s9, gp, 31
                  auipc       t4, 908861
                  xor         s0, s1, a5
                  nop
                  sltu        s5, s3, s11
                  sub         s1, a0, gp
                  add         t0, a6, s8
                  srli        zero, t1, 10
                  slti        ra, a3, -625
                  addi        s7, t6, -1185
                  addi        a5, gp, 484
                  ori         s9, sp, 1307
                  ori         t3, a7, 1492
                  add         zero, a4, zero
                  addi        a2, t5, -916
                  sub         t1, t0, s11
                  slt         s11, a4, s4
                  or          a7, ra, sp
                  and         a6, a3, a5
                  sub         zero, a7, s3
                  slt         sp, s1, s4
                  slli        a2, gp, 11
                  addi        t3, s2, 420
                  sltiu       s3, s2, -1923
                  srai        a6, a7, 29
                  srai        s10, t3, 1
                  sub         s3, t2, s10
                  ori         s7, s3, 1183
                  auipc       a5, 824849
                  slti        s2, s6, 901
                  add         zero, t5, a3
                  xor         t3, t0, s10
                  sltu        s9, s9, a6
                  lui         zero, 73493
                  add         s1, s8, t5
                  ori         a0, t2, -1811
                  add         s10, ra, s2
                  xor         s11, a4, s11
                  andi        s6, a4, 816
                  auipc       s2, 489424
                  slli        s2, s9, 29
                  sll         s11, s8, a1
                  add         s4, a2, zero
                  xori        s11, a5, -2005
                  srli        zero, zero, 31
                  andi        t4, t2, -782
                  or          s0, a3, s1
                  slti        t0, t5, -1474
                  slli        tp, tp, 0
                  sltu        s10, s6, a6
                  sra         a5, s0, t2
                  slt         s10, s7, t3
                  auipc       s5, 543450
                  srai        s11, s1, 19
                  add         t0, a7, a0
                  and         gp, sp, zero
                  sra         s11, s9, s1
                  add         a6, a2, t0
                  sltu        s4, s11, s2
                  slti        s10, a0, -1577
                  add         s4, ra, s9
                  addi        a5, a7, 502
                  slti        t4, t4, -162
                  slli        t0, s2, 26
                  addi        s10, s1, -1022
                  ori         tp, gp, 1703
                  slti        a4, s10, 23
                  add         sp, t4, tp
                  srai        ra, s11, 4
                  or          s4, t3, s3
                  slti        zero, sp, 1967
                  slt         s11, s3, gp
                  slli        s6, s10, 9
                  ori         zero, a4, -646
                  lui         s3, 638886
                  sltiu       s8, s11, -535
                  add         t0, s3, t1
                  slt         s10, t6, s9
                  nop
                  sub         t3, t2, a6
                  srai        t4, tp, 17
                  nop
                  auipc       s2, 227507
                  xori        s5, gp, 1911
                  xor         a5, t5, a7
                  sltiu       a3, s1, 747
                  ori         a6, s3, -168
                  sll         a7, a6, s7
                  ori         a0, a4, 1682
                  sll         s8, zero, tp
                  nop
                  and         s0, a0, s2
                  srli        zero, s3, 6
                  sub         s9, s9, t6
                  sra         s10, t5, s1
                  srai        tp, t6, 22
                  slli        s3, a2, 31
                  auipc       zero, 799537
                  and         tp, s9, a5
                  sltu        a4, a4, s11
                  sltiu       zero, t0, -1012
                  srl         s0, t4, t5
                  xor         ra, s3, t4
                  add         sp, s10, zero
                  srl         s0, s5, t0
                  srl         a0, gp, a7
                  or          ra, s2, s2
                  srai        a5, s10, 16
                  andi        s10, a7, 1862
                  andi        a7, s1, -773
                  or          gp, a6, sp
                  andi        a3, ra, -18
                  add         t3, s3, a4
                  addi        s0, t1, 338
                  and         t1, t0, s10
                  auipc       a2, 995993
                  srli        t1, tp, 11
                  srl         zero, s4, s6
                  and         sp, s8, t4
                  slli        s11, s2, 4
                  slt         t2, s7, s1
                  srli        a4, t0, 20
                  andi        zero, s11, 74
                  addi        a7, a5, 734
                  srai        t2, t3, 3
                  sll         a3, s10, a6
                  auipc       s2, 339407
                  sra         t4, gp, s2
                  slt         zero, t2, a5
                  or          t1, s2, s11
                  ori         s5, a4, 1131
                  sll         a3, a7, a3
                  srai        a5, s8, 6
                  nop
                  addi        t0, s9, 787
                  srli        a0, a2, 31
                  ori         s2, a1, 275
                  auipc       t4, 672547
                  sltiu       gp, a2, -316
                  sltiu       a2, s7, -143
                  slt         zero, t1, s3
                  srli        s2, tp, 8
                  la x11, test_done
                  jalr x0, x11, 0
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
                  csrrw x30, 0x340, x30
                  add x30, x31, zero
                  1: addi x30, x30, -124
                  sw x1, 4(x30)
                  sw x2, 8(x30)
                  sw x3, 12(x30)
                  sw x4, 16(x30)
                  sw x5, 20(x30)
                  sw x6, 24(x30)
                  sw x7, 28(x30)
                  sw x8, 32(x30)
                  sw x9, 36(x30)
                  sw x10, 40(x30)
                  sw x11, 44(x30)
                  sw x12, 48(x30)
                  sw x13, 52(x30)
                  sw x14, 56(x30)
                  sw x15, 60(x30)
                  sw x16, 64(x30)
                  sw x17, 68(x30)
                  sw x18, 72(x30)
                  sw x19, 76(x30)
                  sw x20, 80(x30)
                  sw x21, 84(x30)
                  sw x22, 88(x30)
                  sw x23, 92(x30)
                  sw x24, 96(x30)
                  sw x25, 100(x30)
                  sw x26, 104(x30)
                  sw x27, 108(x30)
                  sw x28, 112(x30)
                  sw x29, 116(x30)
                  sw x30, 120(x30)
                  sw x31, 124(x30)
                  csrr x14, 0x300 # MSTATUS
                  csrr x14, 0x342 # MCAUSE
                  srli x14, x14, 31
                  bne x14, x0, mmode_intr_handler

mmode_exception_handler:
                  csrr x14, 0x341 # MEPC
                  csrr x14, 0x342 # MCAUSE
                  li x22, 0xb # ECALL_MMODE
                  beq x14, x22, ecall_handler
                  li x22, 0x2 # ILLEGAL_INSTRUCTION
                  beq x14, x22, illegal_instr_handler
                  csrr x22, 0x343 # MTVAL
                  1: la x11, test_done
                  jalr x1, x11, 0

ecall_handler:    
                  la x14, _start
                  sw x0, 0(x14)
                  sw x1, 4(x14)
                  sw x2, 8(x14)
                  sw x3, 12(x14)
                  sw x4, 16(x14)
                  sw x5, 20(x14)
                  sw x6, 24(x14)
                  sw x7, 28(x14)
                  sw x8, 32(x14)
                  sw x9, 36(x14)
                  sw x10, 40(x14)
                  sw x11, 44(x14)
                  sw x12, 48(x14)
                  sw x13, 52(x14)
                  sw x14, 56(x14)
                  sw x15, 60(x14)
                  sw x16, 64(x14)
                  sw x17, 68(x14)
                  sw x18, 72(x14)
                  sw x19, 76(x14)
                  sw x20, 80(x14)
                  sw x21, 84(x14)
                  sw x22, 88(x14)
                  sw x23, 92(x14)
                  sw x24, 96(x14)
                  sw x25, 100(x14)
                  sw x26, 104(x14)
                  sw x27, 108(x14)
                  sw x28, 112(x14)
                  sw x29, 116(x14)
                  sw x30, 120(x14)
                  sw x31, 124(x14)
                  la x11, write_tohost
                  jalr x0, x11, 0

illegal_instr_handler:
                  csrr  x14, 0x341
                  addi  x14, x14, 4
                  csrw  0x341, x14
                  lw x1, 4(x30)
                  lw x2, 8(x30)
                  lw x3, 12(x30)
                  lw x4, 16(x30)
                  lw x5, 20(x30)
                  lw x6, 24(x30)
                  lw x7, 28(x30)
                  lw x8, 32(x30)
                  lw x9, 36(x30)
                  lw x10, 40(x30)
                  lw x11, 44(x30)
                  lw x12, 48(x30)
                  lw x13, 52(x30)
                  lw x14, 56(x30)
                  lw x15, 60(x30)
                  lw x16, 64(x30)
                  lw x17, 68(x30)
                  lw x18, 72(x30)
                  lw x19, 76(x30)
                  lw x20, 80(x30)
                  lw x21, 84(x30)
                  lw x22, 88(x30)
                  lw x23, 92(x30)
                  lw x24, 96(x30)
                  lw x25, 100(x30)
                  lw x26, 104(x30)
                  lw x27, 108(x30)
                  lw x28, 112(x30)
                  lw x29, 116(x30)
                  lw x30, 120(x30)
                  lw x31, 124(x30)
                  addi x30, x30, 124
                  add x31, x30, zero
                  csrrw x30, 0x340, x30
                  mret

pt_fault_handler: 

.align 2
mmode_intr_handler:
                  csrr  x14, 0x300 # MSTATUS;
                  csrr  x14, 0x304 # MIE;
                  csrr  x14, 0x344 # MIP;
                  csrrc x14, 0x344, x14 # MIP;
                  lw x1, 4(x30)
                  lw x2, 8(x30)
                  lw x3, 12(x30)
                  lw x4, 16(x30)
                  lw x5, 20(x30)
                  lw x6, 24(x30)
                  lw x7, 28(x30)
                  lw x8, 32(x30)
                  lw x9, 36(x30)
                  lw x10, 40(x30)
                  lw x11, 44(x30)
                  lw x12, 48(x30)
                  lw x13, 52(x30)
                  lw x14, 56(x30)
                  lw x15, 60(x30)
                  lw x16, 64(x30)
                  lw x17, 68(x30)
                  lw x18, 72(x30)
                  lw x19, 76(x30)
                  lw x20, 80(x30)
                  lw x21, 84(x30)
                  lw x22, 88(x30)
                  lw x23, 92(x30)
                  lw x24, 96(x30)
                  lw x25, 100(x30)
                  lw x26, 104(x30)
                  lw x27, 108(x30)
                  lw x28, 112(x30)
                  lw x29, 116(x30)
                  lw x30, 120(x30)
                  lw x31, 124(x30)
                  addi x30, x30, 124
                  add x31, x30, zero
                  csrrw x30, 0x340, x30
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
