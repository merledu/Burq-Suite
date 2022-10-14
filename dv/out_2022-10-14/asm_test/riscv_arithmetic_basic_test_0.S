.include "user_define.h"
.globl _start
.section .text
.option norvc;
_start:           
                  .include "user_init.s"
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x12, h0_start
jalr x0, x12, 0
h0_start:
                  li x30, 0x40000100
                  csrw 0x301, x30
kernel_sp:        
                  la x31, kernel_stack_end

trap_vec_init:    
                  la x30, mtvec_handler
                  ori x30, x30, 0
                  csrw 0x305, x30 # MTVEC

mepc_setup:       
                  la x30, init
                  csrw 0x341, x30

init_machine_mode:
                  li x30, 0x1a00
                  csrw 0x300, x30 # MSTATUS
                  li x30, 0x0
                  csrw 0x304, x30 # MIE
                  mret
init:             
                  li x0, 0x80000000
                  li x1, 0xf998c70d
                  li x2, 0x0
                  li x3, 0x80000000
                  li x4, 0x80000000
                  li x5, 0x2
                  li x6, 0x0
                  li x7, 0x0
                  li x8, 0x80000000
                  li x9, 0x0
                  li x10, 0x0
                  li x11, 0x80000000
                  li x12, 0xf691ae13
                  li x13, 0xbd679e6c
                  li x14, 0xf1227100
                  li x15, 0x0
                  li x16, 0xf7729823
                  li x17, 0xf8430556
                  li x18, 0x0
                  li x19, 0x80000000
                  li x20, 0x80000000
                  li x21, 0x0
                  li x22, 0x80000000
                  li x23, 0x80000000
                  li x24, 0x0
                  li x25, 0x0
                  li x26, 0x0
                  li x28, 0x5706d1b3
                  li x29, 0x80000000
                  li x30, 0x3d187974
                  la x27, user_stack_end
main:             li         t5, 0x402d1cc8 #start riscv_int_numeric_corner_stream_24
                  li         t4, 0x1bd84c93
                  li         s6, 0x1
                  li         t3, 0x1
                  li         a7, 0x0
                  li         s10, 0x4e921ae5
                  li         t1, 0x0
                  li         t2, 0x0
                  li         a0, 0x0
                  li         s8, 0x88aa1dd
                  nop
                  addi        a7, zero, 1376
                  nop
                  sub         ra, t6, a3
                  addi        a5, sp, -30
                  sub         a6, s5, a4
                  nop
                  add         a3, a6, s0
                  nop
                  lui         t4, 93776
                  sub         t0, t0, tp
                  addi        gp, a4, 948
                  add         zero, t0, s10
                  lui         gp, 323195
                  lui         zero, 235102
                  nop
                  nop #end riscv_int_numeric_corner_stream_24
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_16
                  li         a7, 0x108fcc73
                  li         t2, 0x2161d013
                  li         s1, 0x1
                  li         t4, 0x0
                  li         t3, 0x43b7a08a
                  li         a3, 0x0
                  li         tp, 0x25cdc61
                  li         s9, 0x0
                  li         a4, 0x1
                  sub         s1, t1, sp
                  add         a0, t3, a3
                  nop
                  add         s6, t1, t5
                  sub         a7, s5, t6
                  addi        zero, gp, 1031
                  nop
                  nop
                  lui         t5, 529518
                  lui         s3, 572640
                  lui         a1, 439192
                  sub         s8, a1, s9
                  nop
                  nop
                  add         a1, t4, t2
                  add         zero, a7, a3
                  addi        s1, s10, 1920
                  lui         s5, 919409
                  nop
                  add         t0, t6, t0
                  nop #end riscv_int_numeric_corner_stream_16
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_30
                  li         t2, 0x0
                  li         t4, 0x1
                  li         t3, 0x0
                  li         a7, 0x1
                  li         s8, 0x1
                  li         s9, 0x0
                  li         a4, 0x75adedc2
                  li         a3, 0x0
                  li         s10, 0x7d62b0b9
                  nop
                  sub         zero, s5, t2
                  add         a5, a3, t4
                  add         t0, gp, s9
                  lui         ra, 607077
                  lui         s0, 1046532
                  addi        t5, s2, 829
                  nop
                  sub         t1, t3, s7
                  lui         a0, 76576
                  nop
                  sub         t5, a4, s0
                  addi        t4, s10, -890
                  lui         a0, 349817
                  add         s5, a2, t5
                  nop
                  addi        zero, a5, 1062
                  sub         t0, t3, a7
                  sub         t3, s2, gp
                  addi        t1, a0, -1446
                  addi        s6, a3, 1187
                  sub         s2, t6, a2
                  sub         s1, gp, a0
                  nop
                  add         zero, s3, s5
                  nop #end riscv_int_numeric_corner_stream_30
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_18
                  li         tp, 0x0
                  li         t4, 0xfae61a
                  li         t3, 0x1
                  li         s10, 0x1
                  li         s9, 0x0
                  li         gp, 0x0
                  li         s8, 0x0
                  li         a4, 0x0
                  li         a0, 0x0
                  lui         t5, 241921
                  add         zero, a1, s2
                  sub         s3, s8, s1
                  nop
                  sub         t2, gp, a1
                  lui         a5, 814486
                  add         t5, t3, s3
                  sub         s2, gp, s5
                  add         ra, s8, tp
                  add         s3, a5, t1
                  addi        s1, s11, -1675
                  sub         t2, t4, s4
                  nop
                  add         zero, a5, gp
                  nop
                  nop
                  sub         s4, ra, s2
                  lui         zero, 646303
                  addi        s7, s11, -1383
                  sub         a0, s2, t4
                  sub         a6, a2, s9
                  lui         tp, 537717
                  nop #end riscv_int_numeric_corner_stream_18
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_25
                  li         s1, 0x7ea73e2
                  li         t3, 0x0
                  li         s9, 0x0
                  li         s4, 0x5aef78c9
                  li         t4, 0x0
                  li         a3, 0x0
                  li         s5, 0x0
                  li         a5, 0x0
                  li         gp, 0x0
                  lui         t0, 237599
                  nop
                  add         s4, s8, a6
                  lui         s3, 13021
                  nop
                  nop
                  nop
                  add         s7, gp, tp
                  add         a3, a7, t3
                  nop
                  sub         s10, t3, a7
                  nop
                  nop
                  add         a6, s2, a5
                  nop
                  addi        s4, a4, -535
                  addi        t1, s1, -1392
                  add         t2, t4, t3
                  add         s6, t1, s9
                  nop #end riscv_int_numeric_corner_stream_25
                  li         t4, 0x0 #start riscv_int_numeric_corner_stream_13
                  li         t3, 0x1
                  li         s5, 0x0
                  li         s9, 0x1
                  li         s7, 0x1
                  li         s8, 0x39a4fd26
                  li         tp, 0x1
                  li         t5, 0x0
                  li         a3, 0x0
                  li         s4, 0x1
                  sub         a6, t1, t2
                  addi        s6, t2, 872
                  nop
                  nop
                  addi        a7, gp, 138
                  sub         s4, t4, s9
                  sub         a4, a2, s9
                  lui         t5, 502480
                  lui         s0, 936608
                  sub         a4, a5, s3
                  sub         s3, t0, zero
                  nop
                  lui         t2, 761010
                  lui         a0, 224192
                  add         s4, gp, a4
                  addi        ra, s8, -1814
                  sub         t5, s9, t1
                  addi        a4, s9, 1035
                  lui         s2, 857261
                  sub         a7, t2, s8
                  nop
                  addi        s9, s8, 567
                  sub         s4, s5, s0
                  sub         t0, s5, ra
                  addi        t0, sp, 323
                  nop
                  lui         t5, 925204
                  lui         a1, 170407
                  add         zero, t4, t3
                  sub         sp, s7, s0 #end riscv_int_numeric_corner_stream_13
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_4
                  li         t4, 0x12b9444b
                  li         t3, 0x1
                  li         s10, 0x0
                  li         s7, 0x0
                  li         a1, 0x0
                  li         s4, 0x32398183
                  li         a4, 0x0
                  li         a7, 0x0
                  li         s8, 0x0
                  nop
                  addi        a6, s1, 902
                  add         a4, tp, sp
                  sub         zero, t3, t2
                  addi        a6, s10, -1367
                  add         s0, s8, s1
                  lui         zero, 181731
                  add         zero, sp, tp
                  sub         s7, gp, s6
                  add         tp, s8, t3
                  lui         sp, 41069
                  nop
                  addi        a3, ra, -1164
                  sub         s5, s7, s6
                  lui         zero, 177741
                  lui         s1, 926667
                  nop
                  lui         zero, 616032
                  nop
                  add         t3, s9, s2
                  add         a5, sp, a7
                  sub         t0, a4, a3 #end riscv_int_numeric_corner_stream_4
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_3
                  li         t4, 0x0
                  li         t3, 0x1
                  li         s1, 0x0
                  li         a6, 0x0
                  li         s9, 0x0
                  li         a7, 0x393f2db5
                  li         s8, 0x387cebcb
                  li         a3, 0x4656b919
                  li         s10, 0x6a100d8d
                  add         gp, a5, zero
                  lui         a1, 801041
                  addi        zero, s10, 1323
                  sub         a6, s6, s6
                  nop
                  lui         t1, 280991
                  addi        s9, a7, 1301
                  addi        t1, s11, 806
                  lui         s1, 1010709
                  sub         a4, a4, s9
                  sub         t0, s3, tp
                  addi        tp, t5, -299
                  add         t5, a0, s8
                  nop
                  sub         zero, a5, zero
                  add         t3, s5, ra
                  nop
                  nop
                  sub         s9, s6, s0
                  addi        s1, s3, 1527
                  add         s4, a0, a2
                  nop
                  sub         gp, t6, a5
                  add         zero, gp, a7
                  sub         s7, a4, t5
                  addi        a6, gp, -1686
                  add         t0, t5, a3
                  addi        a6, a0, -1427
                  lui         s6, 899205
                  addi        t0, t5, -1901 #end riscv_int_numeric_corner_stream_3
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_22
                  li         t4, 0x1
                  li         s7, 0x0
                  li         a3, 0x1
                  li         t3, 0x1615ffc5
                  li         s10, 0x55e0e916
                  li         s4, 0x1
                  li         a5, 0x0
                  li         a4, 0x0
                  li         t0, 0x0
                  addi        a4, a6, -1456
                  sub         s8, a3, s4
                  addi        a0, a1, 926
                  add         sp, s5, t6
                  sub         zero, a7, a5
                  sub         t0, s0, t1
                  nop
                  nop
                  lui         s0, 244534
                  nop
                  addi        t0, a1, -1726
                  sub         a1, gp, s2
                  lui         s4, 813945
                  nop
                  add         a5, s1, a3
                  addi        t5, s3, -767
                  lui         s8, 29517 #end riscv_int_numeric_corner_stream_22
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_33
                  li         t4, 0x0
                  li         a7, 0x0
                  li         t3, 0x1
                  li         a3, 0x0
                  li         tp, 0x0
                  li         t0, 0x1
                  li         s10, 0x0
                  li         gp, 0x0
                  li         a4, 0x0
                  add         zero, a5, a4
                  sub         zero, t5, t4
                  lui         a0, 1008114
                  sub         s8, s9, t0
                  sub         s7, s2, s10
                  lui         a4, 721053
                  add         s5, a4, t0
                  add         a4, t0, a6
                  sub         s4, a7, t5
                  addi        a4, s3, 1754
                  nop
                  sub         s6, s11, gp
                  lui         s1, 138876
                  sub         zero, a3, s3
                  addi        s1, s11, -473
                  addi        a6, a0, 600
                  sub         a1, a6, a2
                  add         zero, a6, s10
                  sub         s1, s2, s11
                  nop
                  sub         a0, s2, s5
                  addi        s4, a0, 590
                  sub         t4, t4, a0 #end riscv_int_numeric_corner_stream_33
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_14
                  li         t4, 0x0
                  li         s10, 0x2ae83b7
                  li         s9, 0x0
                  li         t3, 0x5bad809f
                  li         a5, 0x1f66abe8
                  li         a0, 0x0
                  li         a1, 0x0
                  li         s1, 0x27de6e1d
                  li         a3, 0x1
                  nop
                  sub         s7, t1, a5
                  add         s1, t4, s10
                  lui         s6, 126288
                  lui         t2, 46928
                  add         zero, tp, s6
                  sub         t2, a3, t5
                  addi        s7, s7, 1223
                  nop
                  lui         a6, 759371
                  add         s6, s9, a0
                  lui         tp, 562828
                  addi        s8, ra, -985
                  nop
                  add         zero, ra, a5 #end riscv_int_numeric_corner_stream_14
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_17
                  li         t3, 0x1
                  li         t4, 0x173ea643
                  li         a7, 0x1
                  li         s4, 0x0
                  li         a3, 0x0
                  li         a4, 0x49e64589
                  li         s8, 0x0
                  li         gp, 0x0
                  li         s9, 0x0
                  add         s4, gp, s6
                  nop
                  sub         t5, s11, a2
                  nop
                  addi        s9, t5, -650
                  add         zero, t4, t4
                  sub         s4, s6, t4
                  sub         a3, a3, s1
                  add         t3, a7, s9
                  nop
                  sub         s2, t6, s1
                  add         t2, a4, s7
                  sub         t0, s0, s1
                  add         a7, zero, t2
                  lui         a3, 794457
                  addi        t1, a3, -1822
                  lui         ra, 554671
                  add         a0, s1, a3
                  nop
                  lui         s7, 497684
                  add         t3, t2, sp
                  lui         t1, 278293
                  sub         zero, a4, s7
                  addi        t0, t3, 398
                  addi        t1, sp, -1409
                  nop
                  add         s1, a7, s8
                  add         zero, s1, t3
                  lui         a0, 15352 #end riscv_int_numeric_corner_stream_17
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_19
                  li         t4, 0x0
                  li         t3, 0x1
                  li         s8, 0x1
                  li         s4, 0x24a07ea4
                  li         a3, 0x0
                  li         t0, 0x0
                  li         a4, 0x1
                  li         a0, 0x1
                  li         s1, 0x0
                  add         sp, s11, s1
                  nop
                  addi        t4, s5, 891
                  nop
                  add         ra, a3, t5
                  sub         zero, a5, s4
                  add         ra, tp, zero
                  add         a3, a1, tp
                  addi        zero, a7, -544
                  add         t0, a1, a7
                  nop
                  nop
                  lui         t5, 255413
                  addi        s5, s11, -702
                  nop
                  sub         t1, t4, tp
                  nop
                  add         s8, s3, t5
                  add         a4, a5, gp
                  nop
                  sub         t1, a7, t4
                  addi        ra, a1, 945 #end riscv_int_numeric_corner_stream_19
                  li         a1, 0x1 #start riscv_int_numeric_corner_stream_27
                  li         s0, 0x307fe666
                  li         t5, 0x1a449eea
                  li         ra, 0x0
                  li         t4, 0x0
                  li         t3, 0x0
                  li         a3, 0x0
                  li         a4, 0x63b389bc
                  li         a5, 0x1
                  li         a0, 0x7a5f063e
                  lui         s10, 424959
                  addi        gp, a2, -361
                  sub         s6, a4, s0
                  nop
                  addi        a6, a1, -651
                  sub         a4, a5, s6
                  sub         s6, t2, s10
                  nop
                  nop
                  add         t3, s3, s0
                  sub         s4, tp, tp
                  addi        t3, sp, -967
                  sub         s10, t6, gp
                  lui         a0, 426893
                  lui         a4, 316608
                  addi        a1, t2, -1728
                  addi        s8, s0, 336
                  add         gp, a5, s8
                  add         a7, t5, s9
                  addi        zero, gp, 1230
                  addi        s3, s7, -539 #end riscv_int_numeric_corner_stream_27
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_34
                  li         a4, 0x0
                  li         s2, 0x1
                  li         s10, 0x0
                  li         t4, 0x29fcbf9
                  li         t3, 0x0
                  li         s8, 0x1
                  li         s5, 0x1
                  li         a5, 0x0
                  li         a0, 0x0
                  sub         s8, t1, a5
                  add         t5, s10, s2
                  add         ra, s11, t0
                  lui         sp, 411735
                  nop
                  lui         s10, 717658
                  addi        a5, t4, 732
                  sub         s10, t4, s4
                  sub         s8, s7, t5
                  nop
                  lui         t2, 926137
                  nop
                  nop
                  lui         t2, 110455
                  nop
                  sub         s1, gp, s4
                  addi        zero, tp, -1665
                  sub         a4, s11, s3
                  add         a1, t3, a2
                  add         a4, gp, a6
                  nop
                  lui         s10, 81737
                  lui         s5, 826449
                  lui         t3, 822578
                  add         t3, t1, s4 #end riscv_int_numeric_corner_stream_34
                  lui         s9, 564562
                  srli        a0, s10, 21
                  nop
                  srai        t4, a1, 5
                  add         s5, a3, s5
                  sltu        a6, t2, a4
                  slti        zero, a4, 1521
                  sub         s7, a1, s5
                  srl         gp, s11, a3
                  andi        a5, s6, -1952
                  add         zero, s4, t1
                  sub         tp, s7, t3
                  nop
                  sltiu       s1, a2, 1422
                  slli        s6, s4, 1
                  sltu        t5, s10, t0
                  sltu        t3, a4, a6
                  xori        sp, t4, 1250
                  add         s1, s10, a6
                  lui         t4, 56465
                  lui         s5, 316537
                  xor         s5, s1, a4
                  slli        a1, a6, 23
                  add         tp, a6, t2
                  ori         a1, a1, 1655
                  slt         s2, s8, t6
                  ori         t3, s10, -157
                  slli        a0, t1, 25
                  xori        s4, s11, -305
                  sltiu       sp, s4, -1365
                  slti        t0, tp, 1291
                  nop
                  addi        ra, t5, -1748
                  slt         a6, ra, t2
                  sll         a3, a6, a3
                  nop
                  auipc       a5, 562343
                  and         s8, a5, s4
                  and         t0, t1, a0
                  sra         gp, a4, s3
                  nop
                  sub         ra, t5, s7
                  add         s5, a7, a4
                  srl         a4, t6, t3
                  srli        a1, s9, 5
                  ori         s6, t3, -1612
                  xor         s4, a4, a4
                  andi        t5, t4, -208
                  sll         zero, t5, s2
                  xor         s2, s5, t1
                  sll         t2, a5, t5
                  sltiu       zero, s9, -51
                  add         t3, zero, s8
                  andi        s2, t0, -906
                  or          gp, a0, s1
                  addi        a7, a0, -2007
                  sltu        s7, s2, zero
                  sltu        a5, a4, s9
                  xori        t4, gp, 570
                  slti        sp, s11, -1629
                  sltiu       a3, t4, -147
                  lui         sp, 492030
                  auipc       s1, 796992
                  srli        a4, t2, 3
                  srli        t4, s5, 12
                  sra         s9, a5, s2
                  sub         t2, s5, t3
                  srai        gp, t0, 5
                  srl         s8, t5, t0
                  slt         s2, s5, s2
                  ori         s8, s9, -759
                  sll         a6, s8, s5
                  srl         s9, a2, t6
                  slti        zero, t2, 205
                  sub         s5, t3, a6
                  lui         s0, 664987
                  xori        s10, s7, -1284
                  addi        s7, s2, -477
                  addi        zero, t5, 1132
                  srl         tp, s4, s1
                  or          s5, ra, tp
                  add         t1, a0, s7
                  addi        tp, a3, -866
                  nop
                  nop
                  sub         t3, s5, s5
                  xor         s0, t4, s9
                  slt         sp, s1, a0
                  add         ra, s7, s3
                  sll         t5, t6, s7
                  sub         zero, s3, s11
                  srli        ra, s2, 10
                  sll         a4, t5, s8
                  nop
                  sltiu       t2, tp, -1370
                  and         s1, a0, s6
                  srai        a3, s8, 30
                  ori         zero, a3, 524
                  sub         s3, t6, a6
                  nop
                  andi        s1, t4, -657
                  slti        t1, s2, 2013
                  sub         s8, a6, s1
                  andi        t5, s4, -1593
                  srli        zero, t3, 20
                  sra         s4, ra, a1
                  auipc       a7, 289322
                  sra         s5, t3, gp
                  sub         t1, t4, s0
                  addi        s1, a0, -1371
                  or          ra, s7, gp
                  srli        t3, s6, 7
                  or          s8, a1, s8
                  lui         t1, 242928
                  sll         a0, a3, s7
                  nop
                  slli        s4, t3, 16
                  srl         s3, s9, s4
                  xor         zero, t4, s0
                  slt         t4, t6, t4
                  ori         t4, ra, -1321
                  and         s4, sp, a2
                  sltu        zero, ra, t5
                  ori         a4, ra, 1633
                  xori        ra, tp, 1981
                  xori        t3, s11, 1115
                  xor         s0, s5, ra
                  auipc       a6, 268573
                  lui         a5, 695695
                  or          sp, s3, s4
                  andi        t1, a2, -2030
                  or          t5, a5, a1
                  sub         a6, a7, t6
                  or          sp, s5, ra
                  nop
                  sll         t1, t1, s1
                  sltu        t3, a7, s7
                  sll         t4, a2, a4
                  sll         t1, t5, t0
                  auipc       s6, 403028
                  nop
                  slli        zero, s6, 31
                  srl         t5, t2, t2
                  nop
                  add         zero, a1, s6
                  slti        s8, s10, 1494
                  auipc       s1, 515606
                  sra         s1, a7, a2
                  sltiu       s2, s5, -1326
                  andi        s9, s6, 587
                  xori        s1, sp, 1478
                  nop
                  or          s5, s3, s11
                  and         zero, t3, t1
                  srl         s2, s10, a4
                  sub         s8, zero, gp
                  lui         a1, 339375
                  srli        t0, s0, 14
                  or          s6, s2, a4
                  nop
                  sub         zero, zero, sp
                  slli        zero, s8, 22
                  xor         s5, s9, t1
                  nop
                  add         s4, a6, a1
                  ori         ra, t5, 1972
                  sltiu       a6, t1, 311
                  slt         zero, sp, t4
                  xori        s1, s0, -1229
                  nop
                  slt         zero, a3, t2
                  or          t5, a4, a6
                  slli        s9, s5, 10
                  andi        t3, s11, 1559
                  sll         t2, t2, s9
                  xori        s4, a5, 1261
                  slti        t2, t6, -618
                  slti        s8, ra, 1437
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_5
                  li         t4, 0x0
                  li         tp, 0x1
                  li         a3, 0x1
                  li         t3, 0x0
                  li         s10, 0x48174b04
                  li         s2, 0x0
                  li         s8, 0x0
                  li         a0, 0x0
                  li         ra, 0x0
                  addi        zero, a1, 1824
                  addi        a0, s11, -1171
                  nop
                  add         t5, s3, sp
                  sub         s10, a4, s8
                  nop
                  add         zero, a2, gp
                  sub         a3, t2, s9
                  addi        s5, zero, 1210
                  addi        s1, t6, -1005
                  addi        t1, t4, -1868
                  sub         a6, s8, t4
                  sub         zero, t1, zero
                  add         zero, gp, sp
                  sub         s6, gp, s6
                  nop #end riscv_int_numeric_corner_stream_5
                  add         t5, gp, a7
                  slti        zero, t0, -732
                  lui         zero, 255580
                  slli        a5, a5, 21
                  ori         t0, t5, 1824
                  srl         ra, s11, s2
                  nop
                  sll         t1, a6, s0
                  lui         a7, 391885
                  add         zero, s8, s3
                  sub         s4, ra, a3
                  sra         a0, t5, ra
                  sltu        zero, t4, a7
                  xori        s2, s0, -1146
                  srl         s6, s9, a2
                  sltu        s1, a6, s11
                  slti        a6, s11, 518
                  sltu        t2, t1, s4
                  nop
                  and         t4, s3, s2
                  slt         a5, t5, s4
                  and         s2, ra, s5
                  slti        s0, a7, -530
                  sll         a0, s6, s6
                  addi        s8, t5, 1162
                  sltu        s9, zero, a5
                  srl         t3, s7, t0
                  lui         s8, 116828
                  srai        t2, s2, 18
                  slti        zero, s5, 733
                  and         zero, a4, a2
                  sub         t5, s3, t2
                  srli        s7, t6, 19
                  slli        tp, t5, 2
                  auipc       s0, 699164
                  xor         sp, sp, t4
                  slt         a3, a7, s0
                  sub         s9, s3, t2
                  sltiu       s9, s9, -696
                  and         s2, s6, a2
                  lui         a3, 329488
                  srai        s9, sp, 5
                  srl         t1, s2, t6
                  andi        s0, a2, -1138
                  srl         s2, s7, tp
                  sltu        zero, sp, t5
                  addi        s9, s4, 664
                  sra         a4, sp, sp
                  or          a6, s11, s10
                  sltiu       t4, ra, -204
                  auipc       s9, 67550
                  lui         s8, 270307
                  xori        s10, t0, -1271
                  lui         s0, 670771
                  nop
                  addi        a6, s9, -672
                  slti        ra, tp, 152
                  sra         s0, s9, t3
                  sra         s7, a7, t3
                  and         s6, a1, s9
                  srli        s5, t5, 22
                  nop
                  sltu        s2, s5, s9
                  xori        a7, s11, -1
                  slli        s8, a7, 24
                  srl         gp, s5, ra
                  srl         a1, s4, t5
                  slt         s2, t2, a2
                  slli        a1, t5, 6
                  or          a1, s7, t3
                  nop
                  sltu        gp, a7, s6
                  addi        s1, gp, -1365
                  add         a5, t0, zero
                  sll         s2, sp, ra
                  andi        s7, s4, 222
                  and         s10, ra, a1
                  andi        s7, a1, 131
                  srai        s7, a7, 17
                  slt         s2, a1, a2
                  andi        s4, a3, 931
                  or          tp, a2, a5
                  and         t3, t3, zero
                  and         gp, s11, s4
                  srli        tp, a2, 1
                  addi        zero, ra, 1063
                  andi        s6, t2, -108
                  slli        s1, a2, 4
                  srli        s4, t0, 22
                  sub         s9, zero, a4
                  xor         tp, a2, s9
                  auipc       s6, 175155
                  srai        s6, a6, 27
                  sra         t0, s2, t1
                  xori        zero, s8, 1422
                  slti        s10, ra, 660
                  srli        a4, s7, 29
                  sra         zero, s0, t4
                  ori         a3, t0, -618
                  srai        tp, s4, 10
                  addi        s10, s9, -139
                  add         a1, gp, s3
                  srl         a1, s6, a0
                  xori        t0, s7, 1252
                  sll         s8, a3, s0
                  nop
                  slti        t5, t0, 169
                  sll         s6, s11, s5
                  xor         t2, t1, gp
                  slt         sp, a5, a5
                  slti        a4, a5, 1001
                  srai        zero, a3, 11
                  xor         zero, t6, s2
                  andi        a6, sp, 505
                  auipc       a5, 393269
                  slt         gp, sp, a4
                  xori        s5, s9, -575
                  slt         s5, s10, gp
                  andi        t2, s3, -369
                  sub         t5, a0, t5
                  slt         t4, s10, a1
                  sltu        s2, s10, s8
                  slti        s7, s3, 1889
                  srl         s9, s5, s6
                  sltu        s0, a2, s10
                  slli        t1, t2, 11
                  sltu        s8, s3, a4
                  add         s2, t0, s4
                  srai        zero, s8, 29
                  slt         s2, a0, a2
                  sltiu       zero, sp, -458
                  sub         sp, t0, s11
                  lui         a6, 242655
                  xor         s2, t2, s4
                  sltu        s6, ra, s10
                  nop
                  srai        tp, s11, 5
                  nop
                  sltu        sp, s6, s1
                  or          tp, s1, t6
                  sll         sp, a4, s11
                  or          a6, s0, s3
                  and         t5, a0, tp
                  sub         zero, s8, a5
                  srli        ra, s1, 0
                  srl         s9, zero, s11
                  sll         t4, t3, s4
                  ori         s1, a7, -1854
                  slt         ra, t6, a2
                  nop
                  slti        ra, ra, -161
                  srli        a6, s6, 8
                  xori        a5, a0, -363
                  add         ra, s7, t5
                  srai        t5, t3, 27
                  addi        a3, a2, -33
                  sub         s1, s1, a6
                  auipc       a5, 821631
                  srli        tp, s7, 13
                  srai        t2, t5, 20
                  add         a0, s6, t4
                  slt         s3, t5, s9
                  add         a4, s5, a3
                  ori         a7, s11, 571
                  srli        s5, s6, 7
                  addi        a0, t1, 1139
                  sra         s2, s6, s0
                  ori         s2, t1, -745
                  slti        t1, a1, -491
                  srai        a0, s3, 18
                  sll         tp, a6, a0
                  lui         s0, 1023290
                  add         s0, t5, t3
                  lui         tp, 344011
                  addi        t3, a7, 1368
                  ori         zero, a7, 585
                  sltu        s1, s7, t3
                  lui         zero, 639245
                  srai        a5, t3, 24
                  andi        s3, s5, -1661
                  sltu        tp, sp, s0
                  sra         s4, a3, s5
                  xori        a0, a6, 1026
                  srli        ra, s7, 1
                  andi        zero, s6, -1695
                  addi        s8, t4, 1844
                  srli        a1, s1, 20
                  andi        s4, s7, -1024
                  sltu        s4, ra, t1
                  slli        s0, s4, 0
                  srai        zero, s8, 31
                  and         t0, zero, s2
                  and         zero, t2, a3
                  and         s0, s10, a4
                  sltu        ra, ra, s11
                  sltiu       zero, t4, -1767
                  slt         a5, a0, a6
                  slt         zero, ra, a6
                  srai        a1, s8, 27
                  sra         a4, t5, t4
                  and         a0, a2, t5
                  sra         sp, a2, ra
                  sub         s5, t6, s6
                  andi        a3, t0, -1169
                  addi        t0, s2, 1587
                  or          zero, t2, tp
                  sra         a6, s6, a1
                  lui         t1, 991064
                  andi        a5, a7, 1829
                  sltiu       s5, a7, 770
                  srai        zero, s10, 3
                  add         tp, t4, a5
                  or          zero, a0, s1
                  srai        zero, gp, 25
                  slt         s0, s8, s0
                  slt         gp, gp, a5
                  ori         s8, t5, -1701
                  add         s6, s1, a1
                  ori         s7, t6, 1605
                  ori         t4, s10, 107
                  ori         a0, s5, -255
                  slli        gp, ra, 14
                  andi        sp, gp, -9
                  ori         a6, zero, -1370
                  sltiu       a4, s0, -608
                  or          s6, a2, t0
                  sra         t5, a1, a7
                  or          s7, a3, a4
                  and         s2, s7, s2
                  auipc       s6, 880165
                  srli        a3, a6, 5
                  lui         s7, 434188
                  srl         a4, s6, tp
                  or          s6, a0, s10
                  xori        t0, tp, -193
                  srl         a1, a0, a1
                  sltu        t4, s7, a1
                  srl         s7, s5, t3
                  xor         a7, s10, s8
                  sltu        sp, s6, s11
                  srl         a1, t3, sp
                  slti        s8, t4, -545
                  slli        s3, gp, 31
                  sra         zero, s3, zero
                  add         t3, t2, s9
                  xor         a3, t3, s5
                  slli        t5, a1, 27
                  sltu        s3, s6, s6
                  sltu        t0, gp, s5
                  and         t1, zero, s1
                  srli        s9, s11, 28
                  xori        a4, a0, -761
                  auipc       s6, 124946
                  slti        ra, t1, 1697
                  xori        t3, tp, 1060
                  srai        a1, a4, 30
                  sltiu       sp, tp, 980
                  and         s1, a5, gp
                  xor         a3, t2, s2
                  or          t4, s10, s11
                  srl         s10, s1, t3
                  ori         s7, s11, -1345
                  sltiu       s8, s2, 509
                  xori        a4, t3, -2047
                  andi        s6, a6, -1533
                  ori         s9, ra, 1428
                  xor         s2, t2, ra
                  addi        t5, zero, -890
                  lui         t5, 85872
                  srli        a0, s1, 12
                  nop
                  srli        a5, a7, 24
                  slli        gp, a3, 13
                  sra         s0, t5, s5
                  sltiu       tp, tp, -311
                  srai        zero, s6, 27
                  lui         t4, 605724
                  srai        a7, s3, 24
                  xor         tp, s8, t2
                  andi        t1, a5, -381
                  auipc       zero, 32852
                  add         sp, t2, gp
                  andi        s7, s9, -1468
                  sltu        a7, s3, a5
                  srli        a3, s11, 30
                  lui         zero, 348466
                  sltu        a7, a2, t3
                  ori         t5, t5, -381
                  sll         tp, sp, sp
                  sra         sp, s8, s1
                  srai        s9, zero, 6
                  slli        a6, t1, 16
                  nop
                  nop
                  xori        s9, a2, -1651
                  addi        s4, s7, 358
                  slti        a3, a2, -953
                  addi        s9, a4, -1708
                  sltu        t2, gp, gp
                  lui         zero, 75327
                  ori         s3, s4, 1785
                  addi        a4, s5, 1056
                  sub         a0, s2, a6
                  sltiu       ra, s5, 1699
                  slli        a5, t1, 29
                  sltu        tp, a1, s4
                  lui         s7, 1037268
                  xor         a4, tp, s6
                  slti        a5, gp, -262
                  and         zero, s3, t1
                  srai        s10, zero, 25
                  auipc       a0, 806281
                  srl         s5, ra, t4
                  xori        s7, s3, -1866
                  slli        a4, a2, 7
                  srli        a5, s9, 16
                  slti        zero, t0, -340
                  andi        s1, a5, -493
                  sll         t0, s8, a2
                  nop
                  srl         a6, s5, s1
                  xori        s1, s6, -299
                  auipc       zero, 477001
                  xori        a7, a5, -917
                  or          s1, a6, ra
                  sra         a6, a1, ra
                  sltiu       s1, s8, -1841
                  srl         a0, s5, s6
                  nop
                  auipc       s1, 494998
                  and         a4, s7, s2
                  sub         a6, s9, s11
                  nop
                  slt         s1, gp, t6
                  and         s2, s6, a2
                  sub         zero, s6, a7
                  xori        t0, a3, 2024
                  srl         t1, tp, tp
                  lui         t5, 766432
                  lui         zero, 710516
                  srli        s8, a7, 24
                  sltu        t3, sp, s8
                  slti        a1, tp, 1678
                  sltiu       a3, a1, 979
                  srai        zero, s4, 13
                  slti        s8, a6, -964
                  nop
                  slti        gp, s11, -1102
                  nop
                  andi        a4, a2, 1685
                  nop
                  xor         s4, s0, s2
                  srli        a4, t2, 7
                  xori        s6, a3, -847
                  slt         s9, zero, a1
                  srli        t5, a0, 10
                  and         s3, t6, ra
                  slti        a5, a0, 1935
                  xori        s9, s7, -1971
                  or          t1, sp, tp
                  srai        a4, tp, 22
                  srli        t4, s6, 27
                  srli        s10, s7, 17
                  xor         s7, sp, s10
                  nop
                  auipc       a5, 169665
                  slt         a0, t0, s4
                  srli        t2, a7, 1
                  and         sp, t3, gp
                  xor         zero, s3, t3
                  sll         t4, t5, s10
                  sltu        ra, t4, gp
                  sra         a4, a1, t3
                  srli        zero, a0, 2
                  srli        t2, s3, 26
                  sltiu       s2, zero, 1806
                  srl         tp, s7, s4
                  addi        zero, t1, -777
                  auipc       s3, 66737
                  nop
                  add         s3, s6, a0
                  nop
                  slti        ra, t3, 1538
                  ori         a3, s4, -429
                  srli        s7, a6, 25
                  slli        zero, s10, 13
                  srli        s5, s4, 19
                  lui         a7, 489878
                  sll         s1, t3, a7
                  xori        t4, t1, -912
                  xor         s9, s9, s8
                  srl         a6, s9, s4
                  srli        t3, s4, 20
                  srli        a6, t2, 8
                  lui         s8, 444540
                  xori        s4, a6, 1442
                  xor         zero, t4, tp
                  slt         t3, t5, a1
                  xor         t4, sp, a6
                  or          zero, s9, s0
                  slli        t4, t0, 8
                  andi        a1, a4, 793
                  lui         tp, 717604
                  auipc       a1, 189286
                  sltiu       a5, a7, 148
                  sltu        gp, s2, a0
                  slti        s6, s1, 1022
                  slti        s0, s9, -1470
                  srli        t4, a6, 5
                  addi        a7, s8, 2024
                  andi        s5, ra, 330
                  nop
                  xori        a6, s10, 1290
                  add         a3, t5, t1
                  andi        tp, s2, -1398
                  auipc       a5, 738767
                  nop
                  slt         gp, a1, a6
                  lui         s3, 327890
                  slt         s9, a4, t4
                  sub         zero, ra, t2
                  slt         a5, s11, zero
                  lui         s5, 608365
                  addi        a3, t0, 1454
                  slli        t2, a3, 15
                  srai        zero, s1, 30
                  andi        zero, gp, 1993
                  slli        zero, s7, 13
                  slli        t2, s4, 28
                  xori        a4, a6, 724
                  slli        s7, s1, 10
                  sltu        ra, zero, zero
                  sltiu       a4, t3, 1057
                  lui         s1, 104393
                  srl         tp, s0, ra
                  or          ra, a4, t6
                  srai        gp, a3, 26
                  slli        s8, s8, 10
                  and         s1, s1, sp
                  add         a6, s7, t4
                  ori         s6, s6, 1959
                  srli        t3, s8, 19
                  srli        t1, t0, 7
                  srli        gp, a7, 1
                  nop
                  srl         zero, sp, a6
                  srai        tp, t6, 22
                  srli        a6, t1, 30
                  nop
                  sll         s7, a2, s6
                  srl         t0, zero, s4
                  auipc       s5, 599833
                  auipc       a6, 939369
                  lui         t4, 115245
                  sltiu       zero, t2, 17
                  sll         ra, s10, s5
                  srli        s8, a5, 30
                  slli        s7, s11, 5
                  sll         t4, t5, zero
                  sra         sp, t2, a6
                  addi        s9, gp, 1656
                  sra         zero, sp, t0
                  slti        sp, s8, -1498
                  srai        s2, a3, 6
                  auipc       ra, 131526
                  xori        s8, s5, -1356
                  slli        a0, s1, 23
                  auipc       s8, 254712
                  andi        tp, s7, 613
                  slt         s8, ra, s11
                  addi        a3, gp, -672
                  sltu        a0, s8, a0
                  xor         s4, gp, gp
                  slli        a0, s6, 16
                  sltu        tp, t3, a6
                  srai        zero, s3, 21
                  nop
                  addi        zero, s5, -1595
                  addi        zero, s2, 724
                  auipc       t0, 955840
                  xori        zero, s8, 320
                  nop
                  srl         s8, a5, s1
                  sltiu       t5, a1, 286
                  srai        s0, s7, 15
                  sll         t3, gp, s0
                  slt         t5, a6, a4
                  sltiu       zero, s9, -955
                  andi        s6, s10, -7
                  or          a6, s7, s8
                  xori        t1, t0, -496
                  srai        zero, sp, 28
                  auipc       s8, 647022
                  slli        a1, a0, 24
                  srli        s10, s1, 1
                  sll         s6, s2, t2
                  sltiu       gp, a5, 1129
                  sll         a7, s10, t3
                  sub         gp, t3, t2
                  andi        gp, s5, 1700
                  add         t2, sp, sp
                  sra         t4, t0, a7
                  nop
                  srl         t3, zero, s0
                  add         a7, s4, t0
                  sltu        s6, a1, t1
                  sll         s1, t0, s6
                  lui         zero, 854941
                  lui         s8, 865471
                  sll         s3, a1, t2
                  sub         s0, a2, s5
                  xor         gp, t3, t6
                  srli        t1, a0, 5
                  sra         s10, t3, s6
                  sltiu       a1, s11, 368
                  srai        a0, s10, 2
                  andi        t1, a3, -1703
                  srai        zero, s0, 3
                  sll         s5, t3, a1
                  slli        s8, a4, 20
                  sltiu       a4, tp, 964
                  xori        t2, s2, -417
                  srli        s0, s9, 15
                  or          a1, a5, s9
                  add         t1, a5, s1
                  ori         t3, t5, 1786
                  xori        a3, s2, 731
                  slt         s5, s4, t2
                  ori         a0, s0, -1703
                  auipc       gp, 638642
                  sltu        s7, s5, a4
                  srl         s9, t5, t6
                  sll         s6, s6, s0
                  or          a3, gp, s2
                  sll         a0, a4, t5
                  srl         s10, t3, s0
                  and         t0, a6, a6
                  ori         s9, a5, 1214
                  xor         a6, s4, s10
                  and         s4, a4, a5
                  slli        t3, a5, 1
                  sra         gp, ra, a0
                  xori        s1, s4, -1428
                  srai        s0, t6, 5
                  nop
                  andi        gp, s5, 1642
                  add         tp, t2, a4
                  nop
                  srli        s4, a2, 10
                  xori        zero, a2, 953
                  srai        t1, s6, 23
                  sll         s10, a5, s5
                  sra         t5, tp, t4
                  sll         a0, t0, s7
                  sll         s1, t0, a5
                  srai        s0, s9, 10
                  xori        tp, s2, -110
                  nop
                  lui         s0, 225787
                  sra         s9, ra, s0
                  sltiu       s8, a6, 1590
                  or          t4, s11, sp
                  ori         s3, ra, 209
                  nop
                  addi        a0, s2, -750
                  andi        zero, s1, 581
                  sll         zero, a6, a3
                  sra         ra, s2, s4
                  sltu        a6, a4, t2
                  srai        s4, s3, 24
                  slt         t1, tp, t2
                  sub         t3, a2, t0
                  addi        s3, s5, 838
                  and         s0, s7, s3
                  add         zero, ra, t3
                  slt         zero, s3, s8
                  auipc       zero, 862233
                  srli        gp, sp, 5
                  add         sp, s6, a5
                  sll         t5, ra, s4
                  nop
                  slti        ra, s2, 697
                  add         a1, a3, s2
                  sra         gp, s3, sp
                  slti        a0, s5, 1490
                  lui         s9, 199777
                  andi        s1, t4, -925
                  srli        s9, a5, 16
                  lui         t5, 436586
                  auipc       s3, 149502
                  sll         s7, a4, s10
                  auipc       s6, 934908
                  sra         s2, t5, a4
                  nop
                  xor         s5, a7, a6
                  or          a7, s3, sp
                  and         zero, s6, s9
                  xor         ra, t0, a3
                  srai        s7, a2, 25
                  auipc       t2, 885880
                  addi        sp, s7, 1749
                  addi        s5, s0, 1273
                  lui         t5, 243616
                  sll         s6, a6, s1
                  sll         zero, a0, t3
                  sltiu       s4, t1, 1577
                  sltiu       sp, t3, -690
                  andi        t5, s3, -489
                  slti        zero, t3, 991
                  or          s7, t1, a7
                  or          a0, a5, t6
                  sub         a4, t4, t6
                  sll         zero, s0, a6
                  sub         s5, a6, a3
                  xori        s5, s9, 1977
                  xor         s6, a0, s2
                  sll         s7, t1, s8
                  slti        t0, t1, -268
                  slli        a0, ra, 8
                  lui         t4, 165018
                  ori         s10, a5, 312
                  sltiu       zero, s2, 1130
                  xori        t4, sp, 87
                  sub         s6, s9, s7
                  srl         s4, gp, s2
                  sltu        t1, sp, t3
                  addi        t0, t2, -534
                  lui         a3, 475638
                  auipc       a7, 565365
                  slli        zero, a1, 27
                  or          a3, s7, ra
                  or          t2, s6, s0
                  sll         s0, gp, a3
                  lui         s4, 176844
                  sub         s2, s11, a7
                  auipc       t5, 878744
                  xori        s6, s4, -824
                  slli        s5, s0, 12
                  addi        a0, t5, 889
                  srl         zero, t1, t0
                  or          s4, a7, s4
                  and         gp, s3, s7
                  sub         s10, s5, s10
                  sra         t3, zero, tp
                  andi        ra, t3, -1743
                  and         t2, zero, a3
                  slli        a6, s11, 2
                  sra         a7, a6, a3
                  srl         sp, tp, t2
                  srai        s4, tp, 24
                  auipc       s0, 277224
                  srli        sp, s8, 22
                  andi        gp, a0, 390
                  slli        s4, a3, 31
                  xor         t4, a3, sp
                  nop
                  xori        zero, a6, -494
                  sra         a7, a1, s7
                  auipc       s7, 277395
                  ori         sp, t0, 353
                  srli        s0, t3, 15
                  add         s10, s7, a7
                  sll         s6, t0, s2
                  and         s8, a2, t0
                  srai        sp, t5, 31
                  addi        a0, t6, -865
                  ori         zero, s5, 908
                  sltiu       ra, s0, 1544
                  nop
                  srli        t4, s2, 6
                  slti        t4, sp, 223
                  xor         gp, s10, a5
                  srai        zero, a4, 12
                  slli        a5, t4, 6
                  or          s0, a0, a6
                  slli        t2, a7, 20
                  auipc       s0, 812305
                  li         s9, 0x0 #start riscv_int_numeric_corner_stream_8
                  li         t5, 0x0
                  li         t4, 0x1
                  li         s1, 0x0
                  li         sp, 0x1
                  li         t3, 0x6770a927
                  li         s4, 0x1
                  li         s3, 0x0
                  li         a3, 0x0
                  li         a1, 0x728a8048
                  addi        s8, s4, -1411
                  nop
                  sub         s7, s7, a5
                  lui         t3, 33517
                  lui         a0, 220532
                  addi        a7, a1, -936
                  nop
                  add         zero, t6, s9
                  lui         s5, 821039
                  sub         s0, t2, gp
                  sub         zero, t6, t1
                  lui         s8, 85354
                  nop
                  nop
                  add         tp, a6, t2
                  lui         a5, 962922 #end riscv_int_numeric_corner_stream_8
                  andi        zero, tp, 1613
                  sltu        t3, sp, s6
                  addi        sp, a1, 2008
                  or          sp, s8, s3
                  slt         s6, s8, s9
                  auipc       a6, 495199
                  addi        s4, s5, -40
                  sltu        s5, s7, s11
                  and         ra, s11, s0
                  ori         a3, a7, 525
                  srai        a4, s9, 0
                  slt         s9, t1, t0
                  and         gp, s8, a0
                  xori        zero, a6, -501
                  or          gp, gp, t0
                  xori        s7, s11, -336
                  xori        a0, zero, -1095
                  xori        s10, t5, -1520
                  nop
                  sltu        t1, s6, s5
                  and         t2, s9, a7
                  sltiu       zero, a6, -259
                  slti        s8, zero, -1320
                  srli        s7, s2, 30
                  sra         s4, s6, s8
                  slli        t1, t0, 5
                  slt         s6, s6, a1
                  srli        s9, a6, 1
                  add         t5, s2, gp
                  slli        a7, zero, 27
                  ori         zero, s11, 655
                  ori         t2, a0, -805
                  xor         t1, a6, s11
                  xor         t0, sp, a2
                  srli        t0, t4, 16
                  sltiu       a4, a2, -1327
                  xori        zero, s9, 1174
                  sub         a6, tp, zero
                  sltu        t1, a0, t2
                  addi        t5, a2, 804
                  lui         a6, 173006
                  slli        s6, a5, 13
                  srai        a7, t6, 30
                  and         zero, s7, a1
                  sltiu       s9, s4, 1906
                  slt         tp, a4, a0
                  sltu        tp, t4, s8
                  slli        ra, t6, 22
                  lui         ra, 486425
                  auipc       s3, 907147
                  slti        zero, a3, -1093
                  nop
                  slli        s2, s9, 23
                  add         t2, a3, s10
                  sll         s10, a0, s8
                  srl         sp, t5, t3
                  or          s9, a7, zero
                  sll         s3, t6, a7
                  and         s3, s5, t6
                  ori         s10, gp, 1586
                  and         s10, sp, s6
                  xori        a1, t6, 588
                  sltu        s1, s10, s5
                  addi        zero, ra, -1366
                  sltu        zero, s9, a2
                  srl         t0, t0, s6
                  sll         a5, sp, a2
                  and         zero, a2, s9
                  add         s4, a1, t4
                  srl         s9, sp, s1
                  slti        a3, s5, 366
                  andi        a0, s2, -978
                  and         t2, a6, s0
                  srl         s8, zero, gp
                  or          s4, s3, s0
                  addi        zero, a5, -1906
                  or          tp, t4, t1
                  srl         s9, a3, s4
                  slt         zero, s4, t0
                  or          s2, s0, a6
                  sltiu       t4, sp, 630
                  xor         t5, s8, s5
                  lui         zero, 960796
                  sltu        t2, t2, s5
                  sltu        s1, s1, a1
                  srli        t4, t2, 24
                  lui         t2, 823817
                  ori         t2, a7, -1517
                  slti        t3, a0, 1690
                  sltu        s3, a4, s11
                  or          zero, s7, s4
                  andi        s8, a4, 1040
                  slt         zero, a7, a5
                  xori        zero, s3, -1415
                  nop
                  and         a4, s6, t0
                  xori        s5, gp, 406
                  lui         zero, 201795
                  xor         s1, t5, s11
                  add         zero, a5, s9
                  sra         a4, sp, s4
                  slt         s0, a4, a7
                  xor         a5, a4, a4
                  sra         s1, a0, s9
                  add         s7, s4, a3
                  srli        a5, a3, 27
                  nop
                  sra         t3, gp, zero
                  andi        zero, t0, -590
                  and         s8, a1, zero
                  sra         s9, s6, a3
                  add         s5, t5, t4
                  nop
                  auipc       s7, 324355
                  xori        s7, s4, 1518
                  nop
                  xori        s3, s8, -1129
                  xor         tp, t0, a1
                  sltiu       a3, s4, 1366
                  slti        s6, a4, 553
                  add         zero, a5, a1
                  sltiu       s2, t4, 26
                  andi        t4, t6, -944
                  andi        s4, t0, -988
                  slli        a1, a4, 29
                  xori        a6, t6, -1761
                  sltiu       t5, a5, 1048
                  addi        s8, t6, -956
                  srli        tp, s6, 9
                  auipc       zero, 680797
                  sra         s3, t4, s3
                  ori         sp, a6, -528
                  slli        zero, a6, 31
                  slli        t1, s9, 15
                  or          zero, t4, s2
                  add         ra, t0, s11
                  ori         s7, s6, -184
                  or          s4, sp, t2
                  or          a6, gp, a1
                  xori        zero, s1, 1629
                  andi        s9, a3, 135
                  lui         s8, 446417
                  sll         s10, s5, s10
                  xori        a1, t2, -10
                  sltiu       zero, a0, -1553
                  slt         t0, t2, s11
                  auipc       zero, 682494
                  sltiu       s0, t1, 1532
                  slti        a7, s10, 1535
                  slli        a4, a0, 27
                  and         s1, s10, t0
                  slli        zero, a2, 28
                  xor         s8, sp, a0
                  sra         s6, s0, s9
                  lui         s6, 456614
                  srai        tp, s2, 9
                  xor         s2, tp, s2
                  xori        s3, a5, -1527
                  xor         a5, s8, a0
                  sltu        a1, s6, a3
                  auipc       t5, 1001860
                  sub         t3, t1, s9
                  sltu        a1, a6, s3
                  srli        s4, s1, 9
                  andi        s7, s3, 1466
                  srai        s6, gp, 11
                  sra         a1, t4, a1
                  slti        a7, t3, 1092
                  sub         a7, ra, tp
                  sra         a5, a6, t6
                  or          a3, a2, s8
                  andi        a3, gp, 1297
                  sltu        zero, a7, zero
                  sra         a6, s2, t5
                  sub         s7, a4, a6
                  or          t1, t6, s10
                  add         a4, a0, s11
                  sltu        s7, a2, a6
                  xor         t0, t6, a7
                  sll         t2, t5, t2
                  sll         s1, a7, s0
                  nop
                  nop
                  or          s5, a2, a3
                  slli        s1, sp, 7
                  sltiu       s7, tp, 219
                  srl         a4, s10, ra
                  sll         s1, s1, ra
                  lui         sp, 383608
                  srli        s2, s5, 30
                  xori        a6, s8, 608
                  srli        a7, a2, 29
                  ori         s2, a2, -984
                  or          s3, s9, s11
                  add         s9, ra, ra
                  and         t2, s9, s3
                  auipc       a5, 881481
                  add         a1, s1, s10
                  sltiu       a5, s9, 599
                  slli        a1, t4, 19
                  or          a0, s7, a5
                  or          zero, t3, s0
                  lui         a4, 335274
                  xor         t5, t0, a0
                  nop
                  sra         s3, s6, a7
                  srl         zero, s5, s8
                  and         a7, s11, tp
                  lui         tp, 146897
                  sltu        s5, tp, s2
                  auipc       zero, 290109
                  sll         t3, s9, s0
                  or          t4, t0, a0
                  slt         t0, zero, s3
                  slti        a7, s4, -1786
                  sra         s9, a0, a4
                  lui         s1, 629919
                  lui         s6, 10969
                  andi        t5, s4, 1255
                  sltiu       s2, a4, 1706
                  or          gp, s0, zero
                  and         zero, tp, a7
                  srl         s0, s5, zero
                  srli        s5, s8, 13
                  srl         t4, s5, t0
                  slt         s3, t3, sp
                  sltiu       t4, a3, 656
                  andi        a1, t5, -134
                  sub         s7, a0, a1
                  srl         zero, s9, t3
                  srl         zero, t3, a7
                  srli        s9, gp, 5
                  sll         zero, a7, s11
                  or          a0, a3, s10
                  andi        s7, a1, 312
                  or          s1, s0, a1
                  ori         t4, t6, 1576
                  xori        zero, zero, 1243
                  srai        s7, t2, 11
                  nop
                  or          t1, s5, t0
                  andi        s9, a5, 671
                  xori        s6, s6, -1611
                  srl         s7, a6, a1
                  add         s9, ra, s11
                  sltiu       s1, a4, -1808
                  andi        s8, t6, 70
                  srai        t2, s10, 28
                  sltu        tp, s1, s10
                  andi        a7, s7, -1083
                  slt         t5, t6, ra
                  sltu        t2, s4, t0
                  slli        s2, s9, 26
                  srai        a7, zero, 1
                  slli        t3, zero, 4
                  sll         a0, gp, zero
                  sltiu       s8, a7, 1663
                  srl         a7, sp, tp
                  slti        gp, t0, -990
                  srl         s5, s8, t0
                  sltiu       zero, s2, -593
                  add         sp, s6, s7
                  nop
                  sltiu       t0, t5, 742
                  and         zero, s11, t5
                  sll         s7, sp, s1
                  xor         t1, ra, gp
                  or          s7, a1, t3
                  auipc       a0, 644477
                  nop
                  and         sp, s0, s10
                  srl         a3, s8, a4
                  ori         t3, t4, -1897
                  xori        a1, a5, 1649
                  lui         tp, 474746
                  srli        a3, s1, 18
                  lui         s6, 628593
                  or          s7, s7, a7
                  and         s8, a5, s4
                  and         a7, t4, t2
                  slli        s2, ra, 9
                  addi        t4, ra, -559
                  sra         t4, t5, a7
                  or          s7, t6, a6
                  addi        t4, s8, 1305
                  nop
                  srl         ra, t4, s8
                  xori        a1, a5, -1236
                  sltiu       a4, t5, -570
                  sll         t2, a7, s3
                  sub         zero, t2, a1
                  slli        t0, a0, 4
                  sra         t3, tp, t1
                  slli        s4, a7, 15
                  add         zero, s1, s8
                  sll         t0, a4, s11
                  sub         s7, s11, a3
                  andi        s8, tp, 215
                  sltu        s8, s1, t2
                  xori        s10, a6, -1820
                  slli        a5, s4, 17
                  auipc       t2, 845079
                  addi        t2, s5, -1142
                  sub         s4, gp, s0
                  xori        zero, zero, -2012
                  ori         t3, a3, -1277
                  sll         a3, gp, t1
                  slli        s10, a5, 13
                  srai        a5, s6, 8
                  xori        t0, t0, 1937
                  sltiu       a1, a0, 1159
                  srl         s8, t4, s0
                  auipc       t2, 274720
                  lui         a6, 183034
                  sltiu       s5, s11, 26
                  srl         s2, t5, s10
                  xor         gp, t6, a2
                  slti        zero, s3, -1783
                  sub         zero, gp, a7
                  or          s6, s2, a1
                  sra         t1, s11, a5
                  sll         s7, t5, a2
                  xor         t3, s6, gp
                  auipc       a3, 537363
                  slt         s4, tp, s0
                  ori         s5, t1, -155
                  sra         zero, s1, a4
                  srai        zero, a6, 22
                  or          s4, t3, a4
                  sub         s5, s9, a0
                  sra         a7, a3, tp
                  add         s10, zero, gp
                  slli        a7, s5, 12
                  sub         a5, zero, t6
                  sub         zero, s8, a3
                  sub         s7, t1, a3
                  xori        zero, s1, -417
                  slt         t5, s2, a2
                  or          s5, s10, s11
                  ori         s3, t3, -128
                  srli        ra, t2, 27
                  sltiu       s5, a2, -1690
                  slt         gp, s9, s7
                  xori        a0, t6, 649
                  ori         a5, t6, -243
                  slt         ra, s8, t6
                  and         t2, a5, sp
                  slt         a1, t2, zero
                  and         a5, s7, a6
                  nop
                  slt         s9, s3, a3
                  andi        t1, s6, -320
                  and         s8, tp, a7
                  slti        zero, s11, -350
                  sltu        s9, a4, sp
                  srl         a5, s2, t3
                  lui         t1, 642743
                  slti        t1, s6, -1687
                  sll         a3, a0, s10
                  sra         a0, s0, t4
                  xor         zero, s5, s2
                  andi        a5, t4, 1829
                  xor         zero, t1, s11
                  nop
                  slti        tp, t3, -77
                  sltiu       a4, a1, -1175
                  add         s7, a4, t4
                  ori         t5, s3, -191
                  sltu        s7, s5, s3
                  slli        t2, a6, 26
                  sub         s8, a1, s0
                  srli        s8, t0, 6
                  auipc       s6, 950852
                  srli        t4, a3, 2
                  lui         s1, 154506
                  and         a7, a7, s2
                  srl         zero, t4, t1
                  srli        a5, s2, 12
                  sra         t5, t5, ra
                  xor         zero, t6, s5
                  xor         s0, s6, a5
                  sra         a5, a7, t1
                  and         t1, a3, a5
                  and         t0, s8, t2
                  srl         a6, t4, a2
                  or          s5, t6, t0
                  srl         s2, s8, s5
                  xor         s3, tp, a0
                  srai        a1, zero, 10
                  ori         s2, zero, 1914
                  sra         t5, a3, s9
                  sra         ra, gp, s4
                  nop
                  sltiu       t1, a4, -495
                  ori         s1, s5, 1653
                  srai        t3, s7, 15
                  sub         a7, s10, a7
                  slli        a5, gp, 0
                  nop
                  srl         s0, t1, s5
                  addi        ra, t2, -1267
                  slti        t5, a5, 1341
                  xor         t1, s6, t3
                  slti        s2, tp, 900
                  sltiu       a4, t0, 955
                  xor         t0, a6, a3
                  sltu        s6, a2, t4
                  sub         a6, s3, a2
                  srai        a7, s2, 29
                  ori         s1, s5, 1476
                  slti        t2, t5, -1172
                  ori         zero, tp, -2009
                  srli        ra, sp, 5
                  sub         zero, s10, ra
                  auipc       a0, 444423
                  sll         s10, s3, a3
                  slli        s4, ra, 7
                  or          s8, s0, t6
                  sll         t5, gp, t2
                  addi        a1, s8, 1299
                  or          sp, a4, a0
                  xori        zero, s0, -847
                  xori        s3, t4, 1231
                  lui         ra, 22224
                  auipc       zero, 921681
                  xor         s9, s9, t0
                  or          zero, a3, t4
                  and         t2, gp, t0
                  sll         a7, s3, s7
                  sll         s1, gp, s6
                  srai        t1, t4, 13
                  xor         ra, s8, t4
                  and         s9, s1, s9
                  sra         s6, a4, s6
                  nop
                  sub         s10, s11, s7
                  and         s6, s10, a3
                  ori         a1, sp, -1684
                  slti        tp, sp, -757
                  srli        zero, a3, 2
                  sub         s9, s1, zero
                  slti        s0, s3, 413
                  or          zero, a5, s4
                  sltiu       t3, s8, -1430
                  xor         s2, gp, s9
                  sub         t0, s10, a5
                  srai        s4, a3, 2
                  srl         s3, s9, s3
                  slti        gp, s10, -1994
                  add         s8, a2, sp
                  add         s6, a6, ra
                  sltiu       s8, s0, -1320
                  sra         t1, s0, tp
                  slli        zero, gp, 19
                  srli        t1, a6, 20
                  auipc       sp, 665517
                  and         ra, a4, ra
                  sub         s0, t6, a5
                  xori        a4, a3, -1113
                  srl         a6, a5, tp
                  addi        s4, s2, -1203
                  xor         zero, s7, s3
                  xor         t5, a5, t6
                  lui         t4, 70429
                  auipc       s1, 852494
                  slti        a1, s8, 305
                  xor         t1, t3, s1
                  sll         s3, a2, a7
                  ori         a1, s1, 880
                  sub         a7, s1, s8
                  xori        a4, t3, 1861
                  add         s9, a4, a5
                  ori         a7, sp, -1990
                  sltu        t2, a0, s1
                  sltiu       s1, tp, 1927
                  ori         t4, t0, -1645
                  nop
                  slti        zero, t0, 1009
                  or          s5, s5, s2
                  addi        a4, t2, 2006
                  xori        gp, sp, 699
                  sltu        s7, s9, ra
                  sra         s8, t6, t2
                  srl         a6, gp, s4
                  sll         zero, t1, ra
                  auipc       a4, 304465
                  sra         sp, s3, a0
                  srli        s6, gp, 5
                  sra         s3, t2, s10
                  ori         tp, t3, -254
                  sll         t0, s2, a7
                  srl         zero, s1, s11
                  sub         s6, a1, a6
                  sll         s7, a5, t4
                  lui         a5, 644006
                  add         a0, a5, s10
                  slli        s5, gp, 2
                  add         sp, s9, s1
                  xor         t1, t1, t0
                  srl         t4, s10, a4
                  ori         ra, s0, 334
                  and         s8, a0, s6
                  slt         a1, t4, s2
                  xor         s0, t6, t5
                  srai        t2, a3, 18
                  or          a5, a2, s8
                  xori        t3, s0, 1025
                  srl         zero, s5, t4
                  andi        zero, t1, 505
                  sll         tp, ra, s4
                  xori        t0, s7, 138
                  and         zero, s5, gp
                  and         s1, t1, s10
                  auipc       ra, 777786
                  add         sp, s11, ra
                  and         s3, zero, s0
                  and         s10, s5, sp
                  nop
                  srl         s6, a1, ra
                  addi        s1, s2, 1885
                  sltu        a4, a0, t0
                  addi        a1, a5, -1416
                  auipc       s0, 379203
                  srli        t5, t3, 19
                  sltiu       a6, sp, 1488
                  sub         s6, s5, a6
                  sll         t5, sp, s4
                  nop
                  auipc       a6, 440469
                  andi        s7, t5, 361
                  srl         s9, s6, sp
                  slti        s5, t6, -1366
                  xor         a6, a4, s9
                  sltu        zero, t5, s2
                  slli        s3, t6, 2
                  sra         zero, gp, zero
                  srl         a6, a3, a0
                  addi        tp, s1, -840
                  lui         s8, 387824
                  sra         a5, t4, a7
                  andi        t1, s10, 715
                  sltiu       a3, t0, -1930
                  sltu        t2, t1, a7
                  slli        a5, s5, 16
                  sltu        s9, a7, s6
                  slt         zero, a4, s5
                  sub         s3, a6, s11
                  srai        a5, t0, 29
                  xor         a7, t3, a1
                  and         s10, s7, s2
                  ori         s10, t2, -1988
                  or          a7, t5, a5
                  xor         zero, s11, t2
                  srl         a0, s1, s3
                  sltu        ra, a3, s5
                  and         a6, a5, a6
                  srl         t3, s9, s1
                  srli        s9, a6, 4
                  or          t5, t4, t2
                  sub         a5, a4, s8
                  or          t4, zero, tp
                  and         s3, s4, s11
                  sra         a4, s4, s6
                  sra         a5, t2, a1
                  and         s5, a4, t1
                  sub         a3, s1, a3
                  sll         t4, t5, s1
                  or          s4, t6, t1
                  slti        t5, t6, -1257
                  nop
                  sltiu       s9, s7, -7
                  srl         zero, s10, t6
                  sltiu       s4, t1, 1454
                  addi        a1, t6, 182
                  lui         a0, 812901
                  srli        zero, zero, 0
                  slt         zero, t3, zero
                  andi        s10, t4, -298
                  sll         s1, a0, t2
                  srl         a7, t6, t5
                  lui         zero, 965222
                  xori        gp, s4, -1664
                  andi        t3, s4, 1382
                  xor         t4, tp, s0
                  sltu        t1, s11, tp
                  srai        s3, a3, 8
                  sub         s2, s8, a1
                  slli        ra, a1, 18
                  srli        t3, s7, 30
                  sll         sp, s0, s9
                  slli        zero, t0, 15
                  sltu        zero, a1, zero
                  sra         t5, a1, a4
                  andi        s9, a6, -19
                  xori        s9, s10, -556
                  or          t5, sp, s2
                  srai        s5, s5, 16
                  auipc       gp, 558092
                  xori        s10, sp, 1980
                  xori        s6, a6, -1493
                  ori         s2, a7, -167
                  auipc       t2, 434294
                  srai        a5, t1, 2
                  lui         a5, 927586
                  auipc       a0, 97813
                  xori        t4, ra, 1747
                  sub         a4, s10, a5
                  srl         a7, tp, s7
                  slt         a1, a4, s10
                  xor         t2, a6, s11
                  nop
                  srl         t3, s2, s6
                  lui         s6, 499823
                  sltiu       s7, s5, -507
                  slli        a1, a0, 30
                  srl         t3, t3, zero
                  xori        t0, s2, -1650
                  slli        ra, t6, 27
                  lui         gp, 162819
                  addi        s5, gp, -538
                  slti        a1, t6, -1124
                  sra         a5, t0, a7
                  slli        a5, s8, 9
                  and         t1, a0, t0
                  sub         s3, t6, a6
                  sub         tp, t3, ra
                  ori         t4, sp, -1918
                  slti        ra, t2, -1134
                  xor         s3, s6, a4
                  xor         ra, s11, s8
                  sub         t4, zero, s7
                  sltiu       s4, a5, -880
                  xor         s1, a2, s2
                  sltiu       t0, a0, -458
                  sra         s7, a6, a5
                  sll         a3, a6, t0
                  srai        sp, t3, 7
                  nop
                  srli        zero, a6, 31
                  srai        t5, a4, 3
                  srli        s2, tp, 31
                  and         s7, t3, s6
                  sltu        a4, sp, a7
                  lui         s9, 179356
                  lui         s4, 795128
                  srai        s0, ra, 10
                  srl         s1, s10, a2
                  lui         a3, 171697
                  sltiu       t3, s10, -1153
                  auipc       a5, 738772
                  sltu        zero, s3, a1
                  or          s1, a2, a2
                  srl         t3, s9, a0
                  add         sp, s8, a6
                  srli        s6, s8, 17
                  xori        s4, s8, 888
                  sltu        zero, a0, s10
                  slli        s6, tp, 6
                  sltiu       s6, t3, -665
                  srl         s5, s5, tp
                  nop
                  slli        s4, s5, 10
                  andi        s9, ra, 830
                  and         t5, t5, s10
                  sra         ra, a3, a6
                  srli        a0, gp, 18
                  slti        gp, a0, 90
                  slli        sp, t4, 1
                  addi        gp, s11, -386
                  add         s2, t4, a0
                  nop
                  slt         sp, sp, a1
                  and         ra, a5, s10
                  slti        s3, s11, 1427
                  auipc       s5, 867079
                  addi        t3, t0, -1076
                  sltu        t0, s5, zero
                  slli        a7, t6, 13
                  or          s3, ra, s5
                  xor         s9, t3, t4
                  slt         a7, a7, t3
                  slti        s9, s3, -257
                  xor         a5, s0, a5
                  sltiu       t5, a5, 1196
                  addi        t0, s9, 409
                  andi        s5, t5, 950
                  or          t3, s9, t2
                  srl         zero, s10, t5
                  xori        a1, sp, -1071
                  or          t0, t6, s10
                  slti        t3, a3, -880
                  nop
                  srl         zero, a3, t4
                  sra         gp, t6, s11
                  xor         t0, t0, s7
                  addi        s2, t3, 1568
                  nop
                  sll         t2, sp, s3
                  slt         s3, sp, a4
                  add         sp, s1, s1
                  sltu        s8, s7, ra
                  ori         s5, t2, 2009
                  srli        s0, t0, 27
                  slt         tp, a7, sp
                  slt         s10, a3, t0
                  sra         tp, a4, s0
                  sll         s7, a2, tp
                  auipc       a1, 909164
                  srl         t1, sp, t4
                  andi        tp, zero, -1141
                  slli        s10, a6, 1
                  sltu        a5, s10, s2
                  addi        tp, s10, -1078
                  sltu        s2, a3, t0
                  addi        zero, s4, -306
                  slti        a4, ra, 1705
                  lui         zero, 848649
                  sltu        sp, a3, a4
                  lui         ra, 664849
                  andi        s2, t1, -1576
                  addi        s7, sp, 143
                  slt         a5, gp, ra
                  and         sp, t2, a5
                  or          t2, s0, a7
                  sub         a4, s3, gp
                  andi        a0, t5, 1765
                  srai        a3, t3, 2
                  sub         a1, s6, t2
                  xor         s3, a4, s4
                  sltiu       s9, a1, -1426
                  nop
                  sra         ra, s0, s6
                  sra         s8, s5, s10
                  or          s1, a7, ra
                  and         a3, t3, s2
                  sltiu       zero, a7, 803
                  nop
                  sra         a4, t5, t6
                  addi        zero, s6, -102
                  andi        a0, s10, 908
                  nop
                  srai        s1, s1, 29
                  nop
                  or          zero, s10, gp
                  or          s10, s2, s5
                  sra         a0, t6, a1
                  xor         s6, a0, ra
                  sra         s4, t2, a7
                  xor         a3, a5, s7
                  srli        s10, s4, 18
                  srl         tp, s5, a5
                  xor         zero, s7, a2
                  xor         a1, s9, ra
                  lui         a5, 722924
                  xori        a0, s8, -2008
                  srl         s6, sp, s2
                  xori        a1, a2, -1216
                  sll         s10, t4, s1
                  sltiu       t3, s7, 174
                  or          s8, zero, tp
                  srl         gp, t6, s2
                  xori        s7, s6, 470
                  sll         a5, sp, a4
                  srli        t5, s8, 1
                  ori         t4, zero, -749
                  sub         ra, a0, a5
                  nop
                  sll         s4, t0, s1
                  slt         a5, a4, s3
                  addi        zero, t3, 1074
                  xor         zero, s5, s6
                  xori        t4, s0, -165
                  sltiu       s10, ra, 1314
                  xor         a5, s3, t2
                  xori        s9, a7, 1278
                  and         sp, zero, a6
                  slti        s1, t3, 1404
                  lui         a3, 960482
                  ori         t0, a0, 319
                  sra         a3, a4, s3
                  or          a5, ra, t0
                  and         zero, a7, t6
                  srl         t5, s7, a5
                  nop
                  add         a7, a7, a6
                  lui         t3, 727012
                  slti        t0, t2, 1203
                  andi        s8, a2, 45
                  srli        s2, s8, 28
                  andi        a5, s8, 178
                  sra         t3, t0, s11
                  add         zero, s1, a1
                  sltu        s10, t1, a0
                  add         ra, s8, a6
                  srl         s9, t2, s8
                  sltu        a6, ra, sp
                  sltu        tp, s2, s0
                  or          s6, s5, s10
                  nop
                  auipc       a4, 472051
                  srl         s1, t3, t3
                  sra         s4, a1, a4
                  xor         t2, a7, a3
                  andi        tp, s3, -1791
                  srai        s2, t3, 29
                  sll         s7, a5, zero
                  srai        s6, t1, 24
                  add         s9, a0, s11
                  or          t1, t6, a1
                  or          s7, t0, t3
                  add         zero, t1, a6
                  slti        s3, a0, 1897
                  auipc       s10, 878431
                  sltu        t3, ra, a4
                  srli        zero, a1, 27
                  sra         t2, a3, ra
                  ori         t1, t4, 1898
                  srl         s8, s4, s8
                  nop
                  lui         a6, 717197
                  srai        s2, tp, 3
                  slt         sp, s0, s4
                  srl         a7, t1, a0
                  or          a3, s5, t6
                  and         s3, a4, s4
                  ori         sp, s10, 520
                  srai        s7, a7, 14
                  sub         t3, a5, t3
                  slti        t0, zero, -916
                  xor         ra, gp, t1
                  sll         t1, t3, t4
                  ori         zero, zero, -1848
                  or          a1, a6, a5
                  xor         sp, t0, a5
                  addi        s3, t0, -1868
                  sll         s3, t2, s0
                  or          ra, t0, s11
                  auipc       a1, 140507
                  sll         s10, t5, t2
                  slti        t4, a4, -459
                  andi        s8, s6, 999
                  srai        a5, sp, 15
                  slli        s0, sp, 13
                  sra         zero, s7, s0
                  slti        s4, zero, -1943
                  or          t3, t5, s0
                  or          zero, a1, t2
                  sra         a7, s1, s4
                  add         a5, ra, s4
                  xor         sp, a5, a7
                  sltiu       s10, s11, -1475
                  sltiu       s4, s7, 986
                  ori         a1, s10, 1890
                  slli        ra, tp, 29
                  srli        t3, a2, 17
                  auipc       s10, 725977
                  xor         zero, a1, a0
                  or          t0, s6, s1
                  auipc       sp, 1014474
                  sra         s3, a7, s6
                  ori         s4, s3, 281
                  add         a4, a2, gp
                  srl         t3, a5, s4
                  slt         zero, a5, s5
                  and         t2, t0, s7
                  sub         s8, a1, gp
                  slli        t5, gp, 31
                  xor         a1, t2, a2
                  sll         s6, a7, a7
                  or          ra, s0, s6
                  srl         s0, t6, a0
                  xori        s4, s10, -1859
                  xori        a7, s1, 1430
                  add         gp, s10, s5
                  and         gp, sp, s11
                  sltiu       zero, s10, -2024
                  ori         zero, a0, 69
                  and         a7, s4, t4
                  sub         t2, gp, a7
                  addi        zero, zero, 1566
                  xor         s1, s5, s6
                  lui         a5, 342584
                  srl         a6, t5, s6
                  xor         a6, s3, sp
                  srl         sp, a1, a6
                  sra         s10, a3, s8
                  slt         t0, t0, s4
                  xor         a1, ra, sp
                  and         zero, gp, s1
                  sltiu       s0, t5, -830
                  sll         t1, t4, s10
                  srl         s2, tp, s5
                  add         s8, a1, tp
                  sra         zero, t6, zero
                  sltu        t1, s0, sp
                  sltu        s8, s0, s1
                  srl         s7, a1, gp
                  sltiu       t4, s3, -1733
                  srl         a4, t3, t2
                  srli        s3, s4, 30
                  or          zero, s0, s8
                  sltiu       tp, ra, 895
                  addi        s10, s10, 415
                  addi        s2, t3, 1414
                  add         zero, zero, t6
                  srl         tp, s1, s0
                  auipc       t3, 700926
                  sltiu       t5, s1, -346
                  srli        s8, s11, 21
                  slt         t4, s10, a1
                  sll         s3, s3, s10
                  srl         s3, a2, t4
                  xor         a3, s7, s0
                  sltiu       s4, s6, 1722
                  srl         t4, a1, s7
                  sub         a5, s0, a2
                  lui         zero, 644246
                  nop
                  slli        t3, ra, 15
                  slti        a7, a5, 569
                  lui         s9, 817619
                  sll         t4, a0, s1
                  addi        s0, a7, 1339
                  sll         a5, s2, s2
                  and         a5, t2, a3
                  nop
                  and         s1, s5, s6
                  ori         s1, t3, -1524
                  sltiu       t1, s8, -467
                  lui         a5, 898216
                  sltiu       s5, a2, 822
                  addi        t4, a3, -424
                  nop
                  sltiu       a0, zero, 1849
                  nop
                  slli        a6, gp, 5
                  srli        ra, t5, 17
                  xori        s5, a2, -1668
                  slli        a0, s11, 20
                  slt         s9, gp, ra
                  sltiu       s10, s4, 1519
                  slti        t4, s2, -943
                  srli        a4, s3, 27
                  sltu        a5, a7, s0
                  srli        s9, s8, 13
                  addi        s4, s3, -787
                  xor         tp, gp, t0
                  and         ra, a6, a2
                  nop
                  andi        a3, t2, 2040
                  slti        tp, a0, 969
                  srl         a4, s0, a0
                  sltu        a3, s10, s5
                  xori        zero, s10, -1484
                  ori         s6, a0, -1079
                  auipc       sp, 1044003
                  nop
                  sra         zero, s0, t3
                  lui         a4, 664333
                  nop
                  ori         a3, t1, -683
                  srl         a6, t2, a3
                  andi        s0, a7, 1144
                  andi        s7, s9, -1793
                  or          s9, a3, s2
                  sra         t3, a1, s1
                  slli        s4, t4, 26
                  xori        s8, a5, 776
                  sra         s9, t6, tp
                  or          s9, t4, t1
                  srai        s7, t4, 19
                  slt         a3, t6, ra
                  auipc       sp, 506472
                  addi        t3, a7, 1187
                  slti        t1, s7, 421
                  andi        s6, tp, 769
                  nop
                  addi        s9, s5, 1959
                  xori        s3, s1, 962
                  srli        s8, a3, 27
                  andi        s1, t3, 318
                  xori        a1, s3, -1853
                  sra         a6, s9, s9
                  xor         s0, a5, s1
                  srl         a0, a2, tp
                  xor         t2, s1, s5
                  xori        s3, a3, -251
                  auipc       t0, 551331
                  or          tp, s4, t4
                  addi        s10, t0, -10
                  andi        zero, a6, -1280
                  srli        t2, zero, 31
                  ori         zero, a5, -699
                  slli        a5, a0, 14
                  or          tp, t5, t6
                  sltiu       a0, s9, -1115
                  addi        s5, tp, 776
                  slt         s1, t5, a6
                  xori        s0, a1, 1926
                  nop
                  slti        t2, gp, -2019
                  sltu        a6, s5, s8
                  add         s8, t1, t1
                  andi        a5, a3, -638
                  ori         s9, t1, 51
                  slti        s7, a6, 935
                  srl         s9, tp, a3
                  add         s2, s5, t6
                  xori        s10, gp, 1808
                  add         s5, a3, s4
                  srli        s1, a0, 9
                  sra         a0, a1, t0
                  sll         a6, tp, t1
                  sll         a0, a2, a6
                  slti        a4, t4, -459
                  auipc       s9, 1006400
                  add         s10, s2, t0
                  addi        t1, s11, 102
                  nop
                  srli        a1, s9, 15
                  and         tp, sp, s9
                  xori        a3, a3, -838
                  nop
                  slt         s4, s7, a1
                  slti        s1, zero, -814
                  slli        s4, s9, 19
                  addi        tp, s1, -1791
                  slli        a3, t3, 22
                  or          s3, s8, t1
                  sub         t2, t0, sp
                  nop
                  srli        s8, t3, 23
                  xori        t5, a0, -454
                  lui         s8, 265419
                  slli        zero, a5, 31
                  slli        t0, a0, 14
                  sll         s6, s10, s11
                  slli        a0, s11, 6
                  sltu        t4, t3, t0
                  slli        t0, s0, 13
                  xor         zero, tp, a3
                  sra         s1, t0, a6
                  srai        s2, t6, 5
                  slt         s7, t0, gp
                  lui         t4, 69448
                  andi        s1, ra, 1008
                  slt         t5, ra, s1
                  xor         a7, a5, s1
                  slti        t4, a2, 1868
                  srli        s3, gp, 21
                  addi        a5, a4, -1114
                  xor         sp, ra, tp
                  nop
                  lui         s8, 659176
                  srai        gp, s0, 15
                  add         tp, s7, a0
                  andi        sp, sp, 952
                  nop
                  xor         zero, t2, s2
                  slt         t5, a3, a7
                  srli        a7, s9, 23
                  ori         zero, a4, 747
                  srai        s0, a7, 11
                  srai        gp, gp, 3
                  slli        s2, t2, 25
                  srl         zero, a4, a0
                  auipc       tp, 843442
                  sltiu       t2, a3, 1050
                  xori        gp, s6, -78
                  sub         t3, t4, t4
                  sltu        t2, a2, t2
                  sltiu       zero, a1, 1241
                  sub         t1, t1, t3
                  sll         s9, a7, s3
                  xor         gp, a1, a7
                  slt         zero, ra, a0
                  andi        a1, a3, 801
                  srl         a6, t5, sp
                  sltu        t1, a3, a2
                  sltiu       s8, s4, 1226
                  sra         a6, s10, ra
                  sltiu       s6, a0, -1474
                  li         t4, 0x0 #start riscv_int_numeric_corner_stream_26
                  li         t5, 0x75e242c3
                  li         t3, 0x35ffd7a9
                  li         tp, 0x0
                  li         s3, 0x0
                  li         s0, 0x0
                  li         s5, 0x1
                  li         a4, 0x43b64cbd
                  li         a3, 0x0
                  li         s10, 0x0
                  nop
                  lui         a3, 107591
                  add         a5, gp, s0
                  nop
                  addi        s2, a0, -1490
                  nop
                  add         s3, t0, t1
                  add         a0, s5, t3
                  lui         a5, 269195
                  lui         zero, 670888
                  add         s5, s5, a0
                  nop
                  nop
                  nop
                  sub         a0, s7, a3
                  add         zero, a6, s1
                  sub         s5, s4, ra
                  lui         t5, 104979
                  lui         s9, 797618
                  add         a7, a5, s0
                  nop
                  lui         s9, 460434
                  addi        t2, s9, -1835 #end riscv_int_numeric_corner_stream_26
                  srai        ra, a6, 5
                  srai        a1, t5, 12
                  nop
                  slti        s0, tp, -885
                  addi        a5, a5, -1611
                  auipc       t3, 772024
                  or          s6, t2, s1
                  addi        s6, a2, 595
                  and         s10, a2, a7
                  xori        s9, s3, 376
                  xor         zero, a4, t5
                  sub         s9, t1, s9
                  sub         ra, t3, t5
                  slti        t2, a2, -1719
                  slti        s3, s6, -823
                  slli        t3, t3, 28
                  lui         s0, 249793
                  lui         t2, 598604
                  addi        s3, s0, 388
                  lui         sp, 164187
                  xor         t1, a2, gp
                  slti        a0, a0, 1392
                  ori         s5, s8, -2017
                  addi        t4, a7, 75
                  ori         gp, t2, -399
                  sltiu       ra, sp, -119
                  srli        t3, a1, 7
                  sra         s0, a2, s7
                  slli        s1, a2, 25
                  andi        a3, s2, -1261
                  sub         s4, t6, s10
                  slli        zero, t4, 7
                  srli        tp, a6, 22
                  sltu        s7, t3, s4
                  xor         a7, a5, a7
                  and         t4, s7, sp
                  ori         s9, t5, -367
                  lui         zero, 189748
                  nop
                  srai        a6, ra, 29
                  or          a4, s4, s9
                  and         s8, s8, s10
                  andi        gp, s0, -382
                  sra         s6, a5, ra
                  srai        t1, s8, 5
                  sltu        s5, s2, t2
                  sll         sp, gp, s2
                  and         zero, t2, ra
                  sltiu       s5, t2, 1580
                  sll         zero, s0, s3
                  slti        s6, gp, -502
                  xori        s9, a3, -839
                  sll         a5, t4, a7
                  srl         tp, a6, a4
                  addi        s5, tp, -1919
                  sra         a0, t1, sp
                  srai        a6, s1, 0
                  auipc       ra, 835027
                  nop
                  sra         s1, t0, a0
                  slt         s10, s8, a1
                  slti        s5, t4, 1479
                  andi        s4, s5, 118
                  sltu        s2, t6, a2
                  xor         a6, a7, gp
                  ori         a7, a6, -1207
                  ori         tp, s2, -303
                  srl         s9, s11, t1
                  slli        s8, a5, 26
                  xori        gp, s8, -957
                  sub         ra, s4, s3
                  and         s4, a5, s4
                  slt         t4, a4, t2
                  add         a4, a6, t1
                  xor         zero, gp, a2
                  or          t5, s8, a4
                  slli        t4, t0, 14
                  sltiu       t3, a7, -1281
                  xori        a7, s7, -185
                  slli        t2, s10, 15
                  sltu        a7, a0, s11
                  sltiu       t5, a4, -1989
                  sra         s4, t2, s8
                  sltiu       gp, s7, 1072
                  addi        zero, s7, -809
                  xor         a6, a0, s2
                  lui         zero, 786097
                  nop
                  ori         s6, s8, 1128
                  sltu        a6, a3, t3
                  srl         s6, sp, a7
                  nop
                  sltiu       s2, t3, 1621
                  ori         s9, s7, 337
                  and         a0, a5, t5
                  add         a5, s7, zero
                  slli        t5, a3, 2
                  srl         s9, t1, s2
                  srli        t2, t2, 4
                  or          zero, s6, a1
                  srli        zero, a2, 10
                  xori        a3, a6, -1413
                  srl         a5, s5, s6
                  andi        sp, a6, 1477
                  slt         ra, s11, ra
                  srli        t2, a7, 1
                  srli        s2, a3, 23
                  addi        gp, t4, -552
                  xori        t1, ra, 2028
                  slti        a0, a5, 1
                  xor         zero, s3, t6
                  add         a5, t0, t6
                  sll         zero, a2, zero
                  sra         a1, s4, a6
                  add         s8, s2, t5
                  xori        t5, s9, 246
                  auipc       a0, 325024
                  add         a1, a3, t3
                  srai        s2, ra, 22
                  lui         a3, 983458
                  auipc       s6, 443177
                  sltu        s7, t0, ra
                  srai        s9, s10, 11
                  andi        sp, ra, -515
                  sltu        s6, s2, t0
                  srai        s1, zero, 11
                  nop
                  sub         a1, s3, s11
                  sub         a7, s5, s2
                  srli        zero, t0, 30
                  slli        t1, s11, 27
                  srl         t1, gp, t6
                  auipc       t2, 526841
                  sra         sp, s10, tp
                  and         s9, a2, a2
                  srl         a6, a6, t3
                  andi        t2, a0, -177
                  srli        gp, t5, 14
                  nop
                  sll         a0, s4, t1
                  andi        tp, a4, 807
                  srai        zero, s5, 4
                  andi        a5, t5, -137
                  sltu        s5, t2, a6
                  xor         s3, s1, s0
                  auipc       a4, 1030759
                  srl         tp, a3, s11
                  and         a3, s0, a5
                  srli        a4, s10, 10
                  nop
                  or          zero, t1, a1
                  slli        t3, s7, 3
                  add         t2, s10, tp
                  or          t3, s10, gp
                  xor         t3, s8, a5
                  add         a3, ra, a5
                  sra         s8, s9, t3
                  and         t1, s10, s2
                  srli        t4, s10, 19
                  xor         s4, s2, s5
                  and         s3, t2, a3
                  xori        a7, s0, 470
                  and         s3, t2, s6
                  sltiu       s5, zero, -1380
                  srli        s10, s2, 29
                  lui         t1, 863415
                  sra         s1, zero, s0
                  srli        a1, s0, 20
                  sltu        s7, a0, a7
                  slt         a0, t0, a3
                  addi        s7, a3, 1826
                  sra         a0, t2, a0
                  auipc       gp, 699785
                  srl         a5, t2, s1
                  add         a3, a6, t2
                  xor         s4, ra, tp
                  sra         a3, t1, s1
                  xor         sp, s10, a1
                  add         a5, s4, s5
                  add         zero, s11, t3
                  xor         a0, a6, s10
                  sub         s3, s4, a5
                  srai        t3, s10, 3
                  slli        a3, t6, 16
                  srl         s2, s3, gp
                  addi        s5, s8, -1867
                  nop
                  srl         s4, ra, a7
                  srai        sp, s8, 0
                  sltu        t0, t4, a1
                  auipc       gp, 1015908
                  sll         a7, s3, ra
                  addi        gp, a6, -1712
                  ori         a6, s5, -662
                  lui         s10, 993846
                  xor         s5, ra, zero
                  lui         a3, 290376
                  slli        a3, t2, 30
                  sub         zero, a1, a1
                  srl         t5, s3, a3
                  sll         s3, t5, a0
                  addi        t3, a5, -1501
                  ori         t5, s10, 2019
                  xori        a7, s2, -112
                  add         s2, gp, ra
                  sub         zero, a0, sp
                  srli        gp, t2, 3
                  ori         t3, zero, -1162
                  addi        zero, gp, -377
                  auipc       t2, 361653
                  xori        a3, t1, 1332
                  sra         s1, s10, s0
                  slti        ra, s6, 956
                  lui         s2, 1001246
                  and         s5, a2, s6
                  auipc       s10, 6417
                  srai        a4, s7, 3
                  sltiu       a0, gp, 392
                  srl         s0, s10, a4
                  srli        zero, s1, 21
                  slt         sp, s1, s3
                  slli        a0, s11, 11
                  or          s2, s5, s5
                  sra         a7, s11, zero
                  xor         a4, s3, s8
                  sub         t5, t6, t5
                  auipc       s9, 638106
                  addi        zero, t0, 1043
                  auipc       zero, 1024127
                  slti        s8, s3, -1902
                  and         a4, t5, a2
                  slt         zero, s4, ra
                  srl         a3, zero, s2
                  xor         s5, s7, t0
                  addi        a7, s7, 425
                  srl         s8, s0, a4
                  add         t5, s5, s11
                  sra         sp, t1, a0
                  sub         tp, s9, s8
                  addi        tp, a2, -464
                  sltu        t1, a6, t6
                  or          zero, a2, a6
                  and         t3, sp, t1
                  ori         zero, t1, -909
                  sltiu       t5, s6, 217
                  xori        zero, sp, 816
                  auipc       t4, 35813
                  srai        sp, a1, 11
                  srli        t4, t6, 15
                  addi        a0, t1, -404
                  sub         gp, s5, s5
                  sra         s10, gp, t6
                  slti        a0, a0, -1143
                  xori        tp, s3, 563
                  sll         t0, t4, zero
                  sra         zero, a7, s9
                  add         a5, a6, s9
                  xori        t3, a1, 928
                  sltiu       a0, t1, 402
                  slli        s3, tp, 4
                  slti        s6, s5, 933
                  auipc       a0, 337362
                  srli        ra, s5, 20
                  xor         ra, t3, s1
                  sub         t2, t5, s1
                  addi        sp, a7, -1965
                  addi        zero, tp, -1775
                  slti        zero, t2, -1250
                  slti        gp, t5, 1924
                  add         s10, s1, s9
                  slt         t0, t4, s6
                  sra         gp, a1, a2
                  xori        t2, s1, -1625
                  nop
                  andi        s4, s4, -1433
                  auipc       a6, 1017828
                  auipc       s0, 766233
                  sltiu       tp, s0, 1071
                  slli        s10, s4, 13
                  xori        sp, s10, 1029
                  sra         a0, a0, s2
                  xor         gp, s9, a2
                  add         s6, s8, sp
                  or          a7, a7, t0
                  add         zero, t5, s0
                  xori        s8, a1, 1624
                  slti        t1, zero, -838
                  andi        t1, a1, -1094
                  srli        a5, gp, 12
                  srli        ra, s8, 1
                  xor         a6, a4, t2
                  addi        zero, sp, -893
                  slli        zero, s6, 3
                  srai        a6, a3, 26
                  slli        s2, a6, 28
                  slt         zero, s7, a2
                  sll         s0, s0, s6
                  lui         t0, 820970
                  li         t0, 0x0 #start riscv_int_numeric_corner_stream_9
                  li         t5, 0x0
                  li         t4, 0x0
                  li         t3, 0x1ad91439
                  li         s4, 0x0
                  li         a1, 0x1
                  li         a4, 0x60dcbc5c
                  li         a3, 0x1
                  li         t1, 0x0
                  li         s3, 0x0
                  sub         zero, s8, t6
                  lui         a0, 878714
                  addi        t1, gp, 135
                  addi        gp, tp, 102
                  add         a1, s6, t5
                  add         zero, s11, t5
                  add         s10, s3, ra
                  add         s10, t0, s3
                  lui         t2, 873752
                  sub         zero, s6, t3
                  nop
                  add         t0, s5, a1
                  sub         s9, s5, a6
                  sub         a1, t0, a7
                  nop
                  add         s3, t3, t1
                  addi        a6, ra, -374
                  add         a3, s11, a5
                  sub         ra, a0, t3
                  sub         t2, t3, s11
                  add         s0, s3, t4
                  nop
                  add         s8, sp, a5
                  sub         s7, a1, a6
                  add         s9, s0, s11
                  nop
                  add         gp, a0, s7 #end riscv_int_numeric_corner_stream_9
                  sra         s9, t0, a2
                  ori         a4, a2, -594
                  nop
                  sra         ra, s6, t0
                  slli        s3, t5, 3
                  or          tp, t0, zero
                  andi        a3, s1, 857
                  srl         s5, ra, a0
                  sll         a6, ra, sp
                  srai        zero, s9, 7
                  nop
                  sltiu       sp, s4, -1485
                  nop
                  slt         s6, t4, s1
                  slti        a7, a5, -686
                  auipc       a0, 670128
                  andi        a0, s3, -242
                  sltiu       zero, s4, 314
                  slti        t0, ra, 710
                  sltu        s4, s3, s10
                  addi        ra, a0, -632
                  slti        s7, t2, -911
                  srl         sp, s6, a4
                  sra         t2, s2, a0
                  auipc       a7, 830369
                  and         s7, a6, s3
                  xor         s10, a0, tp
                  add         s8, s2, s6
                  and         a7, s8, tp
                  auipc       t5, 734875
                  srl         ra, s7, s0
                  ori         s0, s5, 488
                  sra         t4, a7, s7
                  slt         t4, a4, zero
                  sltiu       t5, a6, -1290
                  sra         t5, tp, s11
                  and         s1, a0, s6
                  sub         zero, a1, gp
                  xor         a7, s4, s5
                  xor         a3, a7, s8
                  lui         zero, 61984
                  srai        zero, zero, 12
                  sra         s6, s10, a0
                  add         gp, a7, s2
                  or          s0, a0, sp
                  xori        t5, t3, 666
                  xor         t4, s4, tp
                  srli        a0, s10, 24
                  sltiu       t4, s4, -513
                  nop
                  slli        s1, a7, 16
                  auipc       s2, 1046591
                  slli        t1, zero, 5
                  srli        ra, s11, 8
                  andi        a4, a5, 653
                  sub         a6, s10, s8
                  srli        zero, tp, 22
                  xori        s6, a4, 2034
                  sll         t2, s0, t5
                  sltu        zero, a5, t4
                  add         zero, t2, a4
                  add         s6, a0, s4
                  addi        t2, gp, 534
                  add         t4, s8, ra
                  andi        s10, s9, -568
                  slli        a0, s5, 16
                  slt         t0, sp, a6
                  sll         s4, a7, a2
                  xor         t2, a7, s2
                  add         s10, gp, t1
                  sll         s8, t0, a5
                  or          a0, a5, a1
                  ori         a0, zero, 1419
                  srl         s6, s4, t4
                  srli        t1, s11, 9
                  slli        t1, s5, 17
                  sltu        zero, tp, s7
                  addi        s6, s0, -1235
                  sra         ra, t1, s4
                  slti        gp, t3, -1255
                  and         zero, s7, t6
                  or          s10, t4, s3
                  srl         ra, a6, a0
                  xori        t0, s10, -1678
                  slt         t2, a1, s9
                  slt         zero, t1, tp
                  srai        a4, s3, 16
                  sub         s0, a2, a1
                  addi        zero, zero, -1984
                  or          sp, t1, t3
                  sra         a0, a0, gp
                  sltu        zero, a6, s4
                  xor         s5, sp, sp
                  slti        t2, a5, 2021
                  sub         a4, s5, s3
                  sltiu       t1, a3, -1679
                  xori        t2, sp, -261
                  slt         zero, s9, t5
                  slti        s2, t1, 1464
                  sltiu       zero, a6, -154
                  slli        s0, t6, 21
                  nop
                  andi        a7, t0, -993
                  xor         gp, a0, sp
                  slt         s7, tp, a6
                  sltiu       s2, a0, 1594
                  xor         s0, s4, t2
                  lui         s0, 550236
                  sub         tp, a6, t4
                  srli        t3, a7, 23
                  sltiu       s2, ra, -719
                  andi        zero, a0, 1468
                  slli        zero, ra, 6
                  sltu        t1, s5, s9
                  andi        gp, s7, -179
                  slt         s3, a4, zero
                  lui         a4, 341314
                  sll         t4, gp, t6
                  and         a0, a7, a5
                  nop
                  srai        t1, t5, 27
                  srl         zero, sp, zero
                  srl         s10, a0, s5
                  slt         ra, tp, a5
                  sub         t2, s7, t6
                  auipc       s3, 999120
                  slti        sp, s4, 1316
                  sltiu       t2, a3, 1919
                  and         s0, zero, s10
                  sra         s3, s8, s8
                  slli        s8, a1, 31
                  nop
                  sltiu       sp, s1, -884
                  ori         zero, s0, -178
                  lui         zero, 353576
                  or          s5, t0, a5
                  andi        a4, sp, 1708
                  xori        t1, a0, -805
                  lui         a1, 191938
                  sltu        s10, t5, t3
                  auipc       a3, 417495
                  srl         t2, a7, s7
                  addi        s0, t5, -1020
                  srli        s0, s7, 4
                  srl         t3, t5, a0
                  slt         a3, s4, t4
                  xori        sp, s6, -608
                  slti        s9, a2, 577
                  srai        a1, t0, 28
                  and         zero, t5, t6
                  xori        sp, s10, 1571
                  xori        s4, s7, -435
                  srli        t1, zero, 13
                  nop
                  slti        s2, s3, 882
                  sll         a0, tp, a3
                  sub         s7, s10, s2
                  or          zero, s2, a2
                  andi        t2, zero, -1824
                  and         s10, t4, s2
                  add         a0, s1, a4
                  sub         s10, s10, zero
                  sra         s10, s10, t5
                  ori         sp, t1, 1199
                  or          s0, s3, t0
                  slti        s4, t2, -503
                  srl         zero, a3, sp
                  sra         s4, a3, s8
                  sra         s7, t0, a6
                  srl         zero, zero, s3
                  auipc       tp, 295918
                  and         a5, ra, ra
                  sltu        zero, t3, t4
                  addi        s4, ra, -1436
                  xor         zero, sp, s7
                  nop
                  ori         zero, s5, -662
                  sll         s4, t5, a4
                  sll         t1, s5, s2
                  sltu        gp, s11, s6
                  xor         s1, t6, t1
                  sra         a3, s9, s7
                  slt         s5, s7, t3
                  sltu        t4, s7, s6
                  ori         zero, s5, 1306
                  and         a4, t5, sp
                  sra         t4, s1, s9
                  srl         zero, tp, t4
                  srl         t1, s8, t2
                  sub         zero, s1, a5
                  slt         tp, s11, s6
                  sltiu       ra, t4, -1064
                  sltu        a6, s7, t6
                  andi        a0, s9, 531
                  srai        s1, t5, 16
                  srli        s1, s5, 25
                  addi        zero, a0, 2010
                  slti        s8, gp, 883
                  slli        tp, zero, 23
                  sub         zero, a2, t5
                  add         t3, s8, s7
                  and         zero, zero, t0
                  andi        a4, s1, -1792
                  lui         s2, 674170
                  sub         a6, zero, a7
                  sltiu       s1, t2, 1849
                  auipc       a3, 964166
                  sll         a5, a3, s5
                  sra         s2, a4, zero
                  slt         s1, s3, s10
                  srai        a3, t4, 5
                  and         t0, t6, a3
                  or          a7, zero, a2
                  sltu        tp, s9, s1
                  slti        a0, gp, 382
                  slli        s0, t3, 24
                  sltiu       t1, s8, 493
                  xori        a3, t2, -1533
                  sltiu       s7, a7, -277
                  sltiu       s3, s6, 1700
                  lui         a7, 273929
                  nop
                  andi        t2, a2, 1299
                  andi        ra, a6, -2046
                  slt         s3, a7, t5
                  nop
                  and         s7, s9, s1
                  slti        a1, t6, -691
                  sub         zero, s5, s3
                  add         sp, a5, t4
                  auipc       s7, 344073
                  srli        sp, t5, 0
                  nop
                  add         zero, sp, a3
                  slli        a0, a3, 8
                  srl         a7, ra, zero
                  sub         s3, t5, s8
                  add         s1, s11, t0
                  add         s8, t4, t0
                  and         zero, a7, t6
                  and         a0, a1, a2
                  addi        a7, s5, 1114
                  auipc       zero, 860791
                  srli        s5, t5, 30
                  slti        s6, a0, 251
                  sll         s3, a1, t4
                  andi        a5, s0, 329
                  sll         a4, t5, a1
                  slt         s1, s2, s9
                  xor         a7, a1, s11
                  srai        s0, t3, 3
                  add         s9, s11, s4
                  slli        t3, t6, 24
                  srai        zero, s7, 2
                  auipc       sp, 916680
                  sra         zero, s10, ra
                  sll         s10, s8, t3
                  xor         a4, s8, t3
                  li         gp, 0x0 #start riscv_int_numeric_corner_stream_12
                  li         t5, 0x0
                  li         t4, 0x4a2cd6bc
                  li         s4, 0x1
                  li         t3, 0x0
                  li         tp, 0x504e087e
                  li         s8, 0x1
                  li         t2, 0x1
                  li         a3, 0x0
                  li         s6, 0x1
                  lui         zero, 994154
                  addi        a5, t4, -195
                  addi        t5, a3, 1077
                  sub         a6, t5, a6
                  sub         ra, s10, sp
                  addi        t0, s1, 1080
                  add         sp, a5, a3
                  addi        a4, s0, -686
                  sub         zero, a3, ra
                  nop
                  nop
                  addi        s0, t0, -1358
                  addi        a5, s9, 1207
                  add         s2, a4, t6
                  lui         s8, 398003
                  sub         a7, t2, a5
                  lui         s0, 411165
                  sub         t4, a4, s11
                  sub         s4, a3, a7
                  addi        s3, a0, -2015 #end riscv_int_numeric_corner_stream_12
                  ori         s0, s8, 589
                  sltiu       s0, s3, 1196
                  sra         a7, s11, t1
                  xori        a5, s5, 779
                  xor         t1, s0, s0
                  srli        a3, s1, 20
                  auipc       t2, 181528
                  sltiu       s3, s7, -1383
                  lui         ra, 500013
                  slli        sp, s11, 31
                  sll         a4, s2, s7
                  slt         s0, s0, s3
                  or          s10, t0, s4
                  slt         t1, s6, sp
                  addi        zero, t0, -688
                  auipc       s2, 999146
                  sub         a3, ra, gp
                  slli        t5, s6, 27
                  srli        s9, s2, 12
                  srli        a3, s7, 31
                  auipc       s0, 810216
                  sra         gp, s0, s9
                  andi        s6, a6, -1825
                  sll         a4, s3, t5
                  srli        sp, a0, 10
                  srai        zero, s5, 19
                  srl         a4, t6, t2
                  srl         s3, s11, a2
                  slli        t1, t6, 7
                  slti        s3, t6, 590
                  slti        t0, s8, 1168
                  and         a5, a4, a3
                  nop
                  nop
                  srl         a0, t2, t2
                  xori        s5, a1, 820
                  nop
                  ori         zero, s4, -1502
                  and         s3, s11, s5
                  and         s5, a1, s6
                  xor         s4, a7, s8
                  ori         t0, ra, -800
                  add         zero, sp, s11
                  auipc       s5, 796773
                  slti        a1, a7, -364
                  slt         s5, a5, ra
                  sltu        t2, sp, s8
                  sltu        a3, s3, t2
                  andi        t1, t2, 82
                  sra         a4, t5, s3
                  and         s10, s8, a2
                  srli        a5, gp, 7
                  slt         a6, a6, sp
                  auipc       s6, 451447
                  srl         gp, a1, t3
                  sra         t0, sp, tp
                  sub         a4, s8, s2
                  or          s1, a7, s11
                  xor         zero, s7, t5
                  srai        s9, zero, 2
                  sll         gp, s10, s7
                  srli        s8, zero, 16
                  slli        s2, s9, 0
                  auipc       a7, 164292
                  xor         s8, s9, s0
                  xor         gp, a5, s7
                  auipc       a5, 793218
                  xori        s1, zero, -1724
                  xor         sp, s7, s9
                  or          zero, s9, ra
                  addi        gp, ra, 577
                  slti        a0, s8, 137
                  sll         s9, a7, s1
                  slli        zero, t6, 30
                  xor         t0, s2, sp
                  sub         t2, s9, s5
                  slli        t1, s10, 7
                  ori         s3, ra, -1719
                  xor         s8, a6, s0
                  slti        s3, ra, -1771
                  lui         s6, 474178
                  sltiu       s10, s5, 1933
                  sub         t5, a0, a6
                  sltiu       s9, a4, -646
                  sra         a1, a6, a4
                  sll         s0, t1, t3
                  slti        tp, a3, -1963
                  sub         t5, t5, tp
                  addi        s8, s7, 1878
                  and         s1, t0, zero
                  auipc       s3, 316336
                  srl         s8, a3, s6
                  srli        a3, t2, 30
                  srli        t5, t5, 12
                  sub         a4, t3, s0
                  sltu        a4, t0, a7
                  add         a5, ra, sp
                  sltu        s7, s6, s11
                  sra         t2, s5, a5
                  sra         zero, s11, t2
                  and         s10, a6, t2
                  sra         zero, s3, a0
                  andi        a0, t5, 1834
                  srai        t5, t0, 13
                  srli        zero, tp, 18
                  sltu        s3, gp, a5
                  srl         a1, t5, a1
                  lui         t1, 1003389
                  nop
                  addi        s6, s1, -1085
                  auipc       a5, 142717
                  or          s9, s4, ra
                  lui         s5, 898928
                  nop
                  lui         a1, 668945
                  slli        s5, a6, 18
                  and         zero, a6, s6
                  slli        ra, s11, 2
                  slti        t2, t0, -255
                  and         s6, s10, ra
                  sll         t3, s4, a1
                  auipc       gp, 575891
                  xor         zero, a0, a0
                  sub         a7, t4, a4
                  addi        s6, tp, 406
                  srai        zero, t3, 10
                  ori         s2, s4, 986
                  and         a3, s0, a4
                  xori        a1, s11, -1006
                  sltu        gp, s4, t4
                  sltiu       a0, s9, 1477
                  slli        s5, a1, 16
                  srl         a4, a0, a5
                  sll         s10, t0, t6
                  nop
                  ori         s5, t2, -876
                  slti        t4, a1, 2015
                  auipc       s3, 971157
                  add         s0, t2, a0
                  sra         a3, gp, a4
                  slli        a3, a1, 18
                  sub         s4, s5, t6
                  sltiu       a0, gp, 377
                  sub         a1, a7, ra
                  xor         t0, a6, t2
                  addi        gp, a3, 1428
                  addi        zero, s6, -1553
                  slt         a7, s9, a1
                  srl         zero, zero, s0
                  sub         t4, s6, a1
                  slt         zero, t4, s7
                  add         s10, s4, s3
                  sltiu       ra, s2, -430
                  srai        ra, t0, 26
                  sub         a7, s8, s4
                  nop
                  nop
                  sltu        a5, gp, s9
                  sra         tp, s0, s1
                  xori        t2, a7, 1039
                  sltu        tp, s10, s0
                  slti        tp, tp, 378
                  sra         tp, s9, s5
                  sub         s6, s10, t3
                  addi        gp, s9, 1170
                  srl         zero, a1, s6
                  sub         t2, a0, s6
                  sra         a7, s5, ra
                  ori         a0, gp, 1417
                  and         a5, t1, t6
                  xor         t5, t6, a0
                  slt         tp, s0, t0
                  or          a4, s10, t6
                  srl         t4, s6, t3
                  andi        ra, s1, 1970
                  xori        a6, t0, -263
                  auipc       sp, 6675
                  slti        a3, s1, -715
                  nop
                  slti        a1, t4, 1772
                  andi        t0, a0, 1554
                  srl         s5, s7, a1
                  xor         t0, s9, s11
                  andi        sp, s3, -1652
                  sltu        zero, t6, a0
                  srai        t4, t2, 2
                  xor         s2, a2, s4
                  srl         s3, s1, s11
                  sltiu       s4, s0, -1317
                  slt         s9, ra, t0
                  and         a4, a2, s8
                  slli        a5, zero, 28
                  sll         a4, s9, zero
                  sltu        s8, s4, ra
                  srai        s2, s6, 18
                  xori        gp, a4, -1908
                  add         s2, a2, sp
                  add         s7, s10, s1
                  srai        a0, a0, 27
                  sra         t0, s2, t4
                  nop
                  auipc       s2, 506424
                  srai        s3, t1, 0
                  sub         gp, t3, s0
                  sltu        s8, a5, s4
                  addi        a7, sp, -263
                  slt         t3, s2, a6
                  srai        a6, t0, 29
                  addi        t4, a4, 278
                  sltiu       zero, t3, 26
                  slti        t3, gp, 1475
                  lui         t0, 516355
                  xor         zero, t2, s0
                  ori         s4, s6, -1279
                  add         s4, tp, gp
                  nop
                  xor         s6, a5, gp
                  srl         a7, t3, t0
                  sltu        s9, tp, sp
                  sll         a4, ra, s4
                  srl         a7, s7, t0
                  nop
                  add         t1, s3, s10
                  addi        t3, s2, -997
                  nop
                  andi        t3, t2, -1699
                  xori        t0, gp, -275
                  andi        s5, gp, -1094
                  xori        s9, zero, 63
                  ori         a0, a4, -1165
                  or          a5, zero, a4
                  srl         t1, a2, s9
                  sltu        t2, a6, s0
                  or          s10, s1, a2
                  auipc       sp, 671285
                  ori         s7, a2, 1109
                  sltu        a0, s7, s7
                  lui         s6, 933023
                  addi        s2, sp, -143
                  auipc       t2, 1003966
                  andi        sp, s11, -1800
                  sra         tp, a4, a2
                  srai        zero, a0, 6
                  xori        s4, t1, -1113
                  sll         a4, t3, s2
                  andi        s6, tp, 967
                  add         t3, s2, s7
                  sltu        t5, t0, a5
                  add         tp, s10, a1
                  srai        sp, t5, 26
                  sra         t5, t5, s3
                  slt         s6, a7, t3
                  xori        a4, gp, -261
                  xor         a5, a1, a5
                  sltu        s7, a3, s1
                  srai        ra, s10, 15
                  srli        sp, zero, 13
                  sltiu       a5, s8, 1216
                  sub         a6, s11, a3
                  srl         tp, tp, a0
                  sltu        a3, zero, s5
                  lui         s7, 947315
                  addi        s7, a2, -1100
                  lui         a0, 476837
                  sltu        s2, t5, s1
                  add         a0, a6, t1
                  andi        s7, tp, 1965
                  andi        s4, t5, -252
                  auipc       s2, 580096
                  slt         s0, t6, a0
                  srli        a4, t4, 4
                  srl         gp, gp, a3
                  sltiu       s9, s6, 616
                  sub         s1, tp, s6
                  slt         a4, t4, t3
                  slti        s8, a1, 248
                  sltu        zero, ra, t6
                  auipc       t3, 948534
                  sra         gp, s10, a7
                  and         s1, gp, s8
                  srli        t1, s9, 30
                  or          s4, a5, s11
                  ori         tp, a7, 637
                  slli        a6, a1, 24
                  sll         s4, sp, a7
                  sltu        gp, a1, s1
                  srli        zero, a5, 26
                  srl         t3, s1, s10
                  add         s10, tp, t3
                  xor         zero, ra, tp
                  srli        s3, a6, 8
                  sll         a7, t6, a7
                  ori         s9, a6, -329
                  srai        t3, sp, 26
                  sra         zero, s4, ra
                  addi        gp, a5, -76
                  addi        t2, t3, 1328
                  xor         t1, s6, t1
                  and         s3, t4, a2
                  auipc       s3, 332151
                  sltu        a7, gp, sp
                  srl         s5, s8, s11
                  srai        t0, t2, 16
                  sra         a0, zero, a6
                  andi        t3, t0, -120
                  slli        s6, s8, 14
                  lui         a4, 401231
                  sub         s10, gp, a3
                  srli        s4, a3, 5
                  sltu        tp, s11, a5
                  add         t1, s1, s1
                  xori        a5, s6, -705
                  auipc       ra, 609318
                  andi        zero, s1, -269
                  nop
                  auipc       s5, 516562
                  or          s7, gp, t2
                  ori         t1, tp, -414
                  slli        sp, a0, 21
                  sub         zero, s3, a3
                  sra         a6, t4, a7
                  sll         s7, zero, t1
                  srai        a5, s9, 22
                  sub         gp, a2, s11
                  andi        a1, a2, 875
                  slt         t5, t5, a0
                  srl         a1, t1, a4
                  slti        t3, sp, 879
                  slt         a7, a5, a6
                  sltu        t2, zero, t5
                  and         a0, s11, t3
                  srl         ra, t5, s0
                  sll         s7, t0, s7
                  andi        t4, s8, -497
                  or          zero, tp, a0
                  auipc       s8, 929886
                  slti        t2, t6, 313
                  srl         zero, zero, a6
                  addi        s3, s7, -657
                  sra         s0, s8, s3
                  xori        t1, zero, 1721
                  nop
                  slti        t4, s9, 676
                  slt         a6, s0, t6
                  srli        a7, s2, 25
                  auipc       a6, 663373
                  slt         t0, t2, s9
                  nop
                  slt         s4, a0, a0
                  nop
                  slti        s0, zero, 610
                  and         s10, s7, s0
                  andi        s3, a0, 1998
                  auipc       a0, 560512
                  srai        t5, sp, 7
                  andi        s0, s1, -275
                  xori        a5, a7, 599
                  or          a0, t6, t2
                  and         a5, s4, gp
                  add         zero, a0, s5
                  ori         s9, sp, -1487
                  sltu        a4, t5, s3
                  lui         sp, 324384
                  ori         t1, t0, 618
                  addi        s7, a6, 1424
                  sltu        a3, ra, a1
                  slt         sp, t3, t4
                  srai        a3, ra, 8
                  or          a5, s0, a7
                  add         t2, s6, t5
                  sltu        s6, s5, a7
                  sltiu       a5, a4, -268
                  lui         a1, 695745
                  sll         t1, s3, s8
                  sra         t2, a0, sp
                  xori        zero, s11, 206
                  auipc       t0, 946046
                  addi        s1, sp, -1819
                  andi        a7, t4, -567
                  ori         tp, s0, 1813
                  auipc       t5, 725888
                  srai        s4, a1, 12
                  srai        zero, sp, 21
                  sub         a0, t6, t2
                  or          a0, t5, s10
                  addi        s9, zero, -355
                  slt         t2, s3, a4
                  sltu        s3, s3, s1
                  sll         t3, ra, t1
                  srai        s7, sp, 30
                  srli        t0, gp, 8
                  srl         s0, a0, ra
                  srai        s6, t3, 27
                  addi        s0, s2, -1354
                  xori        a7, t6, -1235
                  andi        s5, s8, 682
                  auipc       s9, 15285
                  sra         t4, a0, t0
                  slti        tp, s4, 289
                  sltiu       s4, t3, 707
                  lui         s6, 960751
                  and         a1, a2, a6
                  sltu        s8, a2, t5
                  srl         t3, a7, s11
                  addi        t1, s3, 1035
                  sll         s9, t1, s0
                  sltu        s0, s9, a3
                  sltu        s5, s0, t0
                  slt         zero, s7, s1
                  lui         a7, 981390
                  srli        s9, t3, 12
                  xori        a1, t3, 189
                  slti        t5, a4, -468
                  auipc       s8, 228656
                  and         zero, t5, t2
                  xor         s10, s7, a0
                  sub         s0, s11, a4
                  ori         tp, a0, 1112
                  srl         zero, s8, t3
                  nop
                  srli        t3, s10, 24
                  sra         t4, zero, ra
                  sra         t2, a7, a1
                  srli        a6, a1, 2
                  slli        s5, a3, 30
                  sltu        s8, t6, s6
                  srl         zero, a3, s8
                  sra         a6, s3, s4
                  addi        s10, s2, 606
                  srai        a5, t5, 3
                  addi        t1, s10, -356
                  xor         s0, s6, s7
                  lui         a3, 523861
                  sltiu       a7, t5, -1455
                  sub         s0, t1, s0
                  nop
                  sltu        gp, t2, t1
                  xor         a1, s9, s7
                  sltiu       a7, s8, -1628
                  or          s2, s4, s8
                  srl         t0, ra, s3
                  slti        a7, s0, 841
                  sra         zero, s11, s4
                  ori         s4, s6, -1199
                  sltu        a7, s4, s3
                  xori        zero, t4, 985
                  nop
                  xor         a0, zero, t3
                  sltiu       s4, s10, -1759
                  srl         a1, s7, s6
                  sltu        t4, a7, s6
                  slti        zero, s10, -934
                  andi        t0, a1, 1819
                  srli        a3, t5, 10
                  slt         t3, zero, s6
                  nop
                  add         a7, sp, a5
                  sra         s10, t0, s3
                  or          ra, s1, s8
                  sub         t4, a1, a2
                  slt         s8, zero, gp
                  lui         zero, 768677
                  slti        sp, t0, 1697
                  addi        s10, s0, -54
                  xor         t3, t1, a7
                  srai        a7, a3, 15
                  lui         s8, 311012
                  srai        s0, s1, 22
                  add         s2, gp, a2
                  sll         tp, t5, s7
                  sub         ra, s2, s5
                  srl         t3, a1, s11
                  slt         t5, s6, s0
                  slli        zero, s8, 31
                  or          t5, a4, t4
                  sra         a0, t5, t6
                  addi        s5, a1, -1217
                  sra         t5, s6, t4
                  sub         t0, a4, s9
                  addi        s7, s11, -1487
                  slt         t2, ra, t3
                  nop
                  nop
                  sll         s7, t3, zero
                  sra         zero, t2, t0
                  slt         a3, s0, a0
                  nop
                  srl         s2, sp, s6
                  or          a5, a1, s5
                  auipc       zero, 786637
                  sra         s8, t4, t1
                  srl         gp, t3, s5
                  slt         zero, s6, a2
                  srai        s1, a6, 2
                  auipc       zero, 445271
                  lui         t3, 97381
                  sltiu       sp, t5, 1786
                  ori         s8, zero, -667
                  xori        tp, s5, 976
                  slti        a4, t3, -692
                  xori        gp, a2, -1357
                  xor         a4, a5, t5
                  addi        a4, t0, -1218
                  slli        t1, s11, 3
                  sltiu       tp, s9, -516
                  andi        zero, a6, 763
                  sll         zero, a5, t2
                  addi        sp, gp, -1520
                  add         s9, s7, s3
                  sll         s7, s8, a7
                  xori        s8, tp, -430
                  xor         s6, s10, s7
                  slti        s5, s0, -891
                  slli        tp, a6, 11
                  sll         s4, t3, t3
                  add         t3, gp, s2
                  srl         gp, t2, s4
                  andi        a7, s5, -1534
                  add         s3, a4, a3
                  xor         s3, s9, s11
                  add         t1, s10, gp
                  slli        zero, s5, 20
                  sub         a0, s5, s2
                  andi        s3, s7, 728
                  slt         s6, a4, s6
                  sra         ra, a1, s9
                  sltiu       a0, s1, 266
                  srl         a7, s3, a5
                  srai        s7, t1, 20
                  ori         s0, a1, 1604
                  xor         zero, s1, a0
                  srai        s2, s10, 18
                  andi        s8, ra, -1835
                  slli        s6, t4, 2
                  sra         t2, a1, sp
                  sra         a6, a5, s3
                  srai        ra, s9, 6
                  lui         t4, 224451
                  srli        s8, s4, 10
                  or          s8, t3, t4
                  srli        a7, gp, 11
                  sll         sp, t0, a1
                  add         zero, s7, sp
                  slli        zero, s7, 7
                  slti        s0, s8, 1290
                  srai        a7, t2, 18
                  addi        s2, t6, 1425
                  nop
                  sltiu       a1, a4, -212
                  slti        zero, a2, 1826
                  lui         s4, 859571
                  xori        s10, ra, -1345
                  sltiu       a6, s3, -654
                  and         t5, s8, s11
                  or          a1, zero, s3
                  xori        zero, sp, 236
                  slti        a0, a6, -1469
                  sra         gp, tp, zero
                  or          a5, a1, s0
                  srli        zero, s1, 22
                  sll         t5, s8, a0
                  lui         a6, 167114
                  slt         a5, a5, s2
                  nop
                  ori         s2, t5, -1748
                  addi        zero, gp, 1154
                  add         s4, zero, zero
                  and         ra, t3, t5
                  auipc       zero, 468575
                  sltiu       s9, a5, 167
                  xori        t5, a1, -540
                  srl         a1, sp, a6
                  or          t2, sp, tp
                  sll         a0, a5, s11
                  slti        a1, a6, 2042
                  xor         t4, sp, s11
                  xori        s6, s2, -1851
                  xor         s5, a7, t4
                  sll         s9, a6, a5
                  sll         t0, a1, a2
                  slt         tp, t2, a3
                  srai        s4, a3, 3
                  add         s5, a3, s8
                  addi        zero, gp, 1948
                  auipc       ra, 222612
                  xori        ra, s2, -1050
                  srai        a5, s8, 31
                  srli        t4, a7, 27
                  sub         a3, zero, a4
                  or          s6, t4, a0
                  or          s2, t1, gp
                  andi        a4, s1, 716
                  auipc       t2, 941035
                  lui         sp, 615101
                  auipc       s10, 675079
                  slti        s2, s11, 1304
                  lui         s6, 1026275
                  xor         s4, a2, t4
                  srai        zero, s8, 11
                  slti        s2, a4, -1479
                  sltu        s8, s0, tp
                  sltiu       t3, s5, -402
                  srli        zero, s11, 3
                  addi        t4, ra, -1426
                  nop
                  sltiu       s6, s6, -1169
                  andi        a0, a0, -1429
                  li         s0, 0x0 #start riscv_int_numeric_corner_stream_31
                  li         t5, 0x0
                  li         t4, 0x0
                  li         t3, 0x0
                  li         s10, 0x0
                  li         a0, 0x0
                  li         a1, 0x0
                  li         s3, 0x0
                  li         s1, 0x7564547c
                  li         s4, 0x461c9084
                  lui         a4, 647007
                  lui         a0, 497386
                  addi        s10, a4, 2023
                  lui         tp, 455995
                  nop
                  sub         s5, s3, s3
                  lui         s4, 879611
                  addi        a0, t1, 265
                  addi        zero, s1, -937
                  add         s3, a2, s10
                  addi        t0, s0, 408
                  lui         t4, 363021
                  nop
                  lui         zero, 328481
                  add         s6, s11, zero
                  sub         zero, t1, a2
                  add         zero, s8, t4
                  add         a7, s1, s6
                  addi        s1, tp, 1621
                  sub         s0, a5, tp
                  nop
                  addi        s5, s4, 474
                  lui         s2, 217919
                  sub         a7, t4, a1 #end riscv_int_numeric_corner_stream_31
                  srai        a5, t2, 28
                  sltiu       a3, t0, -1901
                  srai        t1, t4, 12
                  srl         s2, t4, t6
                  sra         s6, t1, zero
                  xor         a4, a3, s1
                  slli        t1, a3, 20
                  ori         a7, a4, 1263
                  or          a1, ra, t2
                  addi        gp, s3, -255
                  sra         s8, t3, s2
                  slt         zero, a0, tp
                  sltu        gp, s0, a1
                  sltu        t5, s9, a2
                  srl         a1, a0, t1
                  sll         a4, t3, a6
                  sltu        t5, s0, zero
                  xor         s5, a3, t2
                  or          s2, t2, t2
                  slli        a7, s4, 30
                  slt         s0, a6, a5
                  srai        zero, t0, 14
                  lui         a7, 474911
                  xor         t0, a4, t2
                  xor         gp, ra, a2
                  lui         a0, 467170
                  slt         a7, t1, s1
                  add         t0, s2, s1
                  sra         zero, t3, a0
                  andi        s1, s3, -1559
                  lui         t3, 451933
                  xori        t5, a6, -1815
                  srl         zero, s0, s3
                  slti        s7, tp, 245
                  srl         t2, s5, s7
                  addi        t2, a3, 1855
                  ori         s8, t5, -4
                  auipc       t3, 25869
                  slt         t4, t3, a1
                  sll         t1, a2, t2
                  xor         zero, ra, t1
                  lui         a7, 987288
                  ori         a7, tp, -119
                  addi        a7, a2, 1859
                  sll         zero, s0, a6
                  sltu        s2, a6, a6
                  sll         s2, tp, gp
                  srai        s4, s6, 14
                  sltiu       t5, s6, -301
                  lui         a6, 391372
                  and         a4, a7, s11
                  xor         a7, a5, zero
                  slt         s2, tp, gp
                  ori         ra, a2, 135
                  sub         t2, s10, t3
                  slli        zero, a1, 6
                  ori         a7, s10, -1506
                  sll         s1, s3, a3
                  sra         a3, s7, s9
                  srl         s2, a7, a6
                  slti        zero, s6, -276
                  srl         sp, a7, t4
                  srl         t2, s9, s11
                  or          t2, t6, t3
                  sltiu       t1, s2, -722
                  nop
                  or          zero, s10, t0
                  addi        a6, a2, 88
                  nop
                  nop
                  sra         zero, s0, t4
                  andi        t4, zero, -1364
                  or          t0, t0, t2
                  lui         t1, 981564
                  and         zero, ra, gp
                  and         t5, a4, a0
                  sltu        t4, a3, gp
                  ori         a6, zero, 830
                  slli        a3, gp, 20
                  sub         t5, a1, sp
                  nop
                  xor         s6, zero, t5
                  slt         t3, s8, s9
                  lui         s10, 572542
                  and         t1, zero, s10
                  or          t4, a2, sp
                  or          t2, s4, s8
                  andi        gp, a2, 660
                  andi        s4, a1, 1150
                  or          zero, s7, a6
                  sltiu       gp, s9, -659
                  slli        sp, t2, 12
                  sltu        s1, a1, s6
                  or          s5, s9, t1
                  andi        s9, t0, 2016
                  ori         a5, s7, -273
                  andi        a6, a7, 1975
                  addi        zero, a6, -780
                  auipc       t4, 830667
                  xori        s6, s7, -280
                  ori         zero, s6, 719
                  and         s0, zero, a4
                  sltu        zero, s6, sp
                  slli        ra, s2, 23
                  srl         s4, s0, s7
                  andi        ra, a5, -892
                  addi        ra, a3, -924
                  slt         t1, zero, a5
                  andi        s9, s4, -2028
                  add         s10, a3, s9
                  and         tp, t3, t6
                  addi        sp, s7, 1570
                  xori        zero, t6, 1377
                  sub         s8, t3, s4
                  and         t4, s3, a7
                  lui         s3, 379467
                  slli        tp, s8, 23
                  lui         zero, 530293
                  and         s9, s1, a6
                  sltu        gp, a4, t4
                  sra         zero, s2, zero
                  addi        t2, a2, -1868
                  srai        s2, s5, 25
                  ori         s6, s7, -1945
                  or          a0, t4, sp
                  nop
                  or          a1, s7, t3
                  sub         s4, a6, t3
                  sub         a3, t2, s2
                  nop
                  lui         s6, 431777
                  andi        t4, s0, 195
                  add         a5, ra, t5
                  and         zero, t6, t0
                  sra         a6, s10, a4
                  xori        s4, a1, 801
                  nop
                  sltu        a5, t6, t4
                  auipc       tp, 162696
                  srai        t0, s6, 18
                  and         zero, ra, s1
                  sra         t5, t0, t2
                  slt         t3, s2, s3
                  sub         s2, s10, t4
                  sltu        t4, a7, zero
                  auipc       zero, 203788
                  andi        s9, a1, 1477
                  slti        t4, s9, -1756
                  xori        zero, a5, 1084
                  xori        s1, t0, 1828
                  nop
                  slt         tp, sp, gp
                  sub         a4, s11, s3
                  srl         s3, s11, a7
                  sra         s1, a5, t4
                  addi        s9, a2, 111
                  sra         s8, t2, ra
                  slt         s2, s2, t2
                  srai        s1, a4, 15
                  sltiu       a5, t4, -1956
                  xor         s9, s10, a6
                  sltu        s10, a6, a2
                  nop
                  sltu        s3, a2, sp
                  addi        zero, s10, -776
                  nop
                  auipc       a7, 810828
                  sub         t4, s2, a0
                  slti        s8, t0, -1167
                  xor         s0, a2, zero
                  xor         s10, t6, zero
                  ori         ra, a0, -1959
                  slti        t5, a5, -578
                  andi        a1, s6, 1630
                  andi        a0, s4, -1532
                  add         a3, s11, s1
                  slli        s3, s11, 27
                  sll         t2, s6, ra
                  add         zero, s11, s11
                  and         tp, a5, a3
                  nop
                  addi        zero, t0, -413
                  or          s8, a7, s4
                  srai        a7, s0, 17
                  sll         s0, a1, a4
                  xori        s4, a4, 489
                  sltu        s1, t6, a7
                  andi        a7, s1, -121
                  sll         a7, t6, a1
                  slti        zero, a6, -518
                  and         s2, s3, a4
                  sltiu       s9, s9, -1808
                  or          a6, ra, t3
                  auipc       t3, 358104
                  sltu        s5, t4, a2
                  slli        ra, t6, 14
                  srai        s3, tp, 26
                  or          zero, gp, s4
                  sra         tp, t3, a4
                  sltiu       t0, sp, 15
                  li         t4, 0x1 #start riscv_int_numeric_corner_stream_23
                  li         s0, 0x1
                  li         t0, 0x1
                  li         t3, 0x0
                  li         t5, 0x0
                  li         ra, 0x0
                  li         s8, 0x11a44072
                  li         a3, 0x0
                  li         s5, 0x0
                  li         s10, 0x0
                  addi        zero, a7, 1582
                  nop
                  sub         t3, s5, s0
                  addi        a3, t2, -1352
                  nop
                  add         a4, a7, s4
                  lui         s5, 773919
                  lui         s2, 271709
                  lui         s5, 285754
                  nop
                  lui         s8, 301640
                  nop
                  add         a4, s5, s5
                  lui         tp, 42977
                  lui         zero, 303532
                  lui         t1, 861279
                  sub         sp, s8, sp
                  addi        s8, ra, -492
                  lui         t3, 709409
                  sub         zero, s9, s10
                  nop
                  addi        s2, t4, -880
                  sub         s8, t6, t3 #end riscv_int_numeric_corner_stream_23
                  add         a6, s3, s4
                  nop
                  sll         t3, t2, sp
                  sra         ra, a4, s11
                  sra         t0, s3, t3
                  sra         zero, a6, s11
                  srl         s0, t0, zero
                  add         t3, a1, zero
                  auipc       a3, 740845
                  andi        a4, s8, 1693
                  or          s9, s9, t3
                  sra         s8, s0, a4
                  nop
                  ori         a4, s2, 1088
                  ori         a6, a4, -1112
                  srli        zero, s10, 1
                  sub         gp, t3, s11
                  sltiu       ra, t1, -131
                  sltiu       s8, ra, 680
                  slli        s2, zero, 9
                  nop
                  slt         s4, a7, a6
                  sltiu       s2, a3, 498
                  slli        s4, s4, 4
                  slt         t4, s5, s7
                  nop
                  srai        gp, a2, 13
                  addi        s2, a0, -1630
                  nop
                  addi        t2, s11, -6
                  slli        zero, ra, 26
                  slli        a6, t0, 27
                  and         t4, a4, a1
                  or          gp, s8, zero
                  sra         sp, a6, s9
                  lui         s8, 558928
                  ori         a3, tp, -631
                  sll         a6, s3, s1
                  auipc       a1, 917901
                  srli        t2, s2, 18
                  xori        zero, ra, -1112
                  slt         t0, t5, s11
                  sra         a0, t0, ra
                  slt         a5, a2, a2
                  slli        zero, s8, 22
                  sra         s7, gp, ra
                  and         s4, s9, a2
                  srli        zero, s0, 22
                  sra         gp, s4, s3
                  andi        s5, a3, -790
                  or          s7, t5, a5
                  lui         sp, 801993
                  and         t4, s6, t0
                  srai        a1, s11, 6
                  sltiu       tp, s9, -117
                  add         t1, s10, t6
                  sub         gp, t3, t5
                  sub         a7, s7, s0
                  sltu        s0, s11, a5
                  sra         a6, s9, s4
                  andi        s8, a4, 940
                  srli        s8, a3, 13
                  xori        s0, t4, 1931
                  and         a7, s5, s5
                  add         t1, s10, a7
                  sub         s9, t2, t6
                  sltu        tp, s7, t5
                  addi        a1, s0, -1097
                  sltiu       s1, s1, 1777
                  nop
                  sll         zero, ra, a3
                  lui         s0, 349067
                  add         a0, a4, a4
                  andi        t2, s3, -1687
                  andi        s6, sp, -1314
                  ori         s7, s6, -1919
                  or          tp, a5, s1
                  nop
                  sub         s5, s3, s2
                  auipc       a5, 309333
                  slli        ra, a3, 18
                  or          zero, gp, s4
                  lui         s6, 856263
                  sltiu       a7, s8, -330
                  srli        t0, zero, 11
                  and         a6, a2, t2
                  slt         a5, t5, s3
                  addi        s5, s10, -71
                  xor         s7, s7, t3
                  or          t0, t6, s2
                  srl         s0, t5, t0
                  srli        t4, s0, 0
                  xor         a3, s0, s5
                  sra         tp, t5, s0
                  ori         s5, a3, -1729
                  sra         t4, a4, t5
                  sltiu       a1, a1, 1365
                  addi        s2, t3, -654
                  sltiu       zero, t4, 780
                  slti        s2, s0, -1634
                  slti        gp, t3, 1184
                  sltu        t2, t3, s3
                  srl         s5, a1, a2
                  and         a3, s0, s9
                  srl         s8, a3, gp
                  xori        t5, t6, -1558
                  srl         zero, ra, s8
                  and         t5, a1, t4
                  and         zero, s3, a3
                  srai        sp, t2, 22
                  and         s1, a2, a7
                  add         t4, a7, t0
                  srai        s10, t1, 7
                  sra         s10, s11, a5
                  add         gp, a5, a6
                  srl         t0, t2, s8
                  lui         t3, 978466
                  slt         a6, s6, s0
                  sra         sp, s10, t2
                  srli        zero, s7, 19
                  sll         t4, s0, a6
                  ori         s2, zero, 1355
                  srli        zero, t3, 5
                  addi        t0, t2, 1445
                  nop
                  or          gp, s1, zero
                  add         t2, t4, s3
                  sub         s0, s9, s9
                  sltiu       a0, zero, -1051
                  xor         s10, s4, s3
                  xor         a3, s2, ra
                  add         zero, s2, ra
                  srai        t2, ra, 9
                  sub         a3, a7, ra
                  xori        s10, a0, 664
                  or          t3, ra, s2
                  xori        t3, s4, -1994
                  sltu        a5, a4, s4
                  slti        zero, a5, 193
                  xor         zero, s2, s7
                  or          t3, gp, s11
                  sltiu       a0, t6, 1377
                  andi        t0, t5, 1338
                  sltu        a4, a2, s2
                  slli        sp, t5, 9
                  nop
                  srli        s1, s3, 4
                  and         s7, s9, tp
                  sltiu       t2, t4, 212
                  sll         zero, t0, zero
                  and         a1, s0, s2
                  slti        t4, a7, -2000
                  auipc       a4, 546727
                  slli        s1, zero, 20
                  slti        a5, a0, 225
                  add         a4, s10, ra
                  srai        sp, ra, 10
                  nop
                  sltu        zero, a3, a4
                  slt         tp, s5, t6
                  xor         t1, a5, t4
                  sra         a5, tp, s3
                  add         zero, zero, a5
                  addi        t2, s1, 1436
                  auipc       a5, 488932
                  sra         a6, t3, s5
                  srai        t1, a5, 2
                  srli        tp, t0, 3
                  slti        t1, a2, -71
                  and         ra, tp, gp
                  lui         s8, 163297
                  sltiu       s6, sp, -1317
                  add         s0, t0, s1
                  xori        a7, s5, -473
                  slti        s6, a7, 1112
                  ori         s1, zero, 1789
                  andi        t4, t3, 552
                  slti        s1, a6, -112
                  sll         tp, a2, zero
                  andi        s6, s8, -1133
                  auipc       t4, 655692
                  nop
                  nop
                  slti        a3, s8, 139
                  slt         t5, tp, gp
                  and         t2, s0, s0
                  andi        s7, t6, -711
                  xori        s10, a2, -1938
                  srai        t2, tp, 13
                  sltu        t4, s1, a1
                  slli        t5, t0, 21
                  andi        s9, t3, 60
                  sltu        tp, s4, t4
                  slt         t4, s8, s10
                  add         s2, t3, s4
                  auipc       a1, 300716
                  srl         a7, s9, a1
                  sltiu       t1, s2, -398
                  and         s4, tp, s10
                  srli        s1, s10, 28
                  xor         s2, s3, ra
                  slt         a5, a7, a0
                  slti        s8, s11, -1096
                  andi        ra, ra, 1385
                  sub         t1, a0, sp
                  andi        s4, t6, 829
                  andi        tp, t4, 1102
                  and         a7, s6, a1
                  lui         a1, 285160
                  sra         zero, s1, s9
                  slti        zero, s9, 914
                  xor         s0, a5, s1
                  slli        s2, gp, 27
                  slli        sp, ra, 28
                  sltiu       t0, s4, -676
                  srli        t1, a7, 15
                  lui         s6, 464207
                  addi        s10, a1, -1339
                  slt         tp, a7, s1
                  sll         t4, s5, a4
                  and         a3, s10, s9
                  andi        a5, s5, 1795
                  xori        s0, a5, 663
                  nop
                  srli        a3, s4, 16
                  sltu        s3, a4, s1
                  slt         zero, t4, sp
                  srli        t1, a0, 18
                  sltu        s2, gp, a1
                  addi        s10, s0, 1367
                  sll         zero, ra, a6
                  sltiu       a7, s4, 1106
                  auipc       a7, 43046
                  sra         a6, s11, t1
                  srai        a3, t3, 5
                  ori         zero, sp, -626
                  sra         t0, a5, s7
                  srl         s1, t0, s0
                  slt         s3, s2, s11
                  xor         a5, s4, t2
                  xor         t4, s3, gp
                  lui         zero, 540248
                  slt         s8, s4, s2
                  add         s4, ra, a7
                  sub         s7, t2, a1
                  andi        s1, s9, -831
                  and         s2, t1, t3
                  sra         t4, s11, a0
                  srli        zero, t1, 31
                  srli        t4, s9, 20
                  nop
                  or          zero, sp, t2
                  srai        t4, s1, 19
                  addi        tp, s7, -1800
                  sltu        zero, a0, t5
                  add         s5, s1, t4
                  and         a1, s11, s8
                  xori        t0, t2, 172
                  ori         a4, s5, -1128
                  sra         a3, zero, s8
                  slt         s9, s11, a4
                  sltiu       gp, zero, -972
                  andi        sp, s0, 1591
                  andi        t2, s10, -1684
                  sltiu       s2, a4, -176
                  auipc       s1, 447430
                  xor         s2, t5, a7
                  lui         t0, 466318
                  andi        a0, a4, 103
                  and         zero, s3, s9
                  or          zero, a7, a3
                  srli        s7, s7, 19
                  andi        a7, t0, -881
                  sra         s3, t5, s2
                  sub         zero, tp, s8
                  andi        sp, a7, 1739
                  auipc       s3, 328786
                  xori        s9, t6, 1006
                  sltu        s7, sp, ra
                  sltu        s3, s7, zero
                  sltu        s8, s3, t2
                  srli        s4, sp, 8
                  xori        tp, s4, 2003
                  and         t3, t5, a6
                  add         s4, a5, s4
                  sub         s8, a6, zero
                  ori         zero, ra, 1043
                  xori        s4, a5, -990
                  auipc       a4, 416273
                  addi        s8, s8, 2027
                  lui         t4, 757993
                  srli        zero, sp, 22
                  srai        s4, t4, 8
                  lui         sp, 833607
                  slt         zero, s0, sp
                  slti        ra, s1, -1625
                  slli        gp, s0, 23
                  sltiu       s7, s5, 1312
                  sltu        a4, s5, t6
                  slt         a3, s8, gp
                  slli        a7, t6, 30
                  xori        a3, s1, -1020
                  lui         s8, 241255
                  andi        gp, a3, -415
                  slti        zero, t3, -1611
                  srl         t1, t6, tp
                  sll         a5, a4, s3
                  slti        s5, a2, 1792
                  slt         s6, ra, s3
                  add         gp, s1, s5
                  sltiu       s6, sp, 646
                  slti        s2, s9, 1748
                  auipc       a3, 33492
                  xor         a6, s1, tp
                  sltu        s2, s10, t5
                  sll         ra, a5, t1
                  lui         t4, 730063
                  srl         zero, t1, ra
                  sll         a0, s0, t5
                  xori        s0, s9, 1167
                  add         t4, s2, a3
                  andi        zero, s4, -1370
                  srl         t3, s7, s5
                  srai        t4, t5, 22
                  li         a1, 0x5b0ad8a2 #start riscv_int_numeric_corner_stream_7
                  li         t5, 0x2615e7f7
                  li         t4, 0x1
                  li         t3, 0x0
                  li         a6, 0x1
                  li         s9, 0xfb865ce
                  li         a3, 0x0
                  li         a7, 0x0
                  li         a5, 0x0
                  li         s1, 0x0
                  lui         a6, 1034296
                  nop
                  nop
                  addi        sp, s0, 740
                  add         s2, s10, t6
                  add         a0, t2, tp
                  add         a6, t1, t4
                  addi        t4, a0, -1794
                  addi        t4, t4, -343
                  lui         s9, 1040879
                  nop
                  add         s1, s5, s0
                  sub         a4, s11, zero
                  add         ra, a7, a2
                  add         a1, s7, t6
                  add         t1, s4, s0
                  add         zero, t5, s5
                  add         s4, t2, t6
                  sub         zero, gp, s7
                  nop
                  sub         a7, s9, t4 #end riscv_int_numeric_corner_stream_7
                  srai        s2, s0, 7
                  nop
                  ori         s2, ra, 1855
                  xori        a4, s7, 1479
                  sub         s7, s0, t5
                  addi        a0, s10, -408
                  auipc       s7, 278951
                  and         a3, t2, ra
                  srli        s10, s3, 13
                  sltiu       zero, s7, -1646
                  sub         a3, t4, ra
                  slt         t4, s9, a2
                  add         a5, t2, a6
                  and         zero, s4, a4
                  slli        zero, tp, 1
                  nop
                  sra         zero, a2, t6
                  auipc       s2, 1008121
                  and         s9, a7, s4
                  srl         s6, s5, s10
                  sltiu       a0, a2, 744
                  auipc       a7, 235280
                  or          a3, a0, s7
                  xori        s10, t0, 2000
                  ori         s9, s4, -1631
                  sltu        zero, a7, t3
                  srai        t0, s8, 12
                  srl         t1, ra, zero
                  ori         t1, s10, 1893
                  nop
                  sll         t1, a4, t2
                  sll         zero, s2, s7
                  srli        s8, s6, 17
                  ori         a5, a5, -1749
                  slt         s5, a6, sp
                  or          a3, s4, a6
                  add         a3, a6, t6
                  auipc       s1, 335781
                  sltiu       zero, t4, -1521
                  add         t1, t4, s6
                  auipc       s0, 909991
                  slt         zero, s3, a1
                  srli        s0, t2, 1
                  slti        zero, s8, 226
                  add         s3, s2, s3
                  nop
                  auipc       sp, 231422
                  xori        zero, tp, -294
                  xori        s0, t5, 1359
                  addi        s8, t6, 335
                  slli        a3, s11, 29
                  slli        sp, a0, 29
                  lui         gp, 903794
                  sltiu       zero, s2, -1856
                  and         s3, s6, a7
                  or          t3, a7, a2
                  sub         s1, s9, a0
                  srl         t3, t0, s9
                  or          s8, a0, t4
                  auipc       a4, 414780
                  and         s1, a6, t5
                  slti        sp, s11, 1442
                  nop
                  sltiu       tp, s7, -1647
                  sltu        t2, ra, s6
                  sub         t0, t6, ra
                  andi        zero, tp, -941
                  srli        s9, t6, 26
                  slti        t4, s6, -1563
                  sll         t3, t6, a5
                  slt         zero, s1, s8
                  ori         s2, s7, -1804
                  xor         s9, zero, a0
                  auipc       a6, 499699
                  slli        ra, zero, 9
                  srai        s1, a6, 20
                  srli        a4, a1, 15
                  sub         sp, t4, sp
                  xor         s8, t3, a4
                  sltu        t3, a7, s2
                  slti        a3, t1, -795
                  srl         ra, s11, t3
                  sub         s7, s4, sp
                  sll         sp, a3, s11
                  srl         t1, tp, t3
                  srai        s1, s1, 7
                  andi        t4, a6, -876
                  srl         t1, a0, s7
                  ori         t1, s1, 143
                  auipc       s1, 543503
                  srli        zero, a2, 30
                  srai        t0, a1, 26
                  xori        tp, a5, -507
                  or          s9, a0, s4
                  or          a3, t6, t3
                  sra         a4, s6, s4
                  sll         s9, t5, s9
                  sltu        s6, a3, a4
                  slli        gp, t4, 0
                  sub         a0, s11, a4
                  sltiu       a4, s5, 1329
                  sub         s5, s8, t3
                  slti        s0, s3, -113
                  sra         zero, s4, s1
                  and         s0, s0, a5
                  srli        s4, s10, 29
                  xori        a7, s8, 945
                  srl         s0, s5, s4
                  and         s8, a1, s7
                  or          a6, t0, a0
                  slli        t5, s10, 15
                  add         s3, s4, t4
                  sltu        t0, t6, a5
                  srl         a7, s0, a7
                  sltiu       s4, s2, 1150
                  nop
                  sltu        s8, s5, s2
                  xor         sp, sp, s2
                  add         a1, t3, t5
                  sub         zero, s8, s11
                  nop
                  or          tp, s1, s0
                  sltu        sp, a1, s1
                  ori         t4, a2, -529
                  andi        tp, s0, 1687
                  sltu        a4, t2, s1
                  andi        t5, gp, 128
                  sll         s5, gp, s9
                  or          s5, t5, t6
                  xor         zero, s6, gp
                  ori         a1, a0, 968
                  srai        s0, a3, 8
                  srl         ra, s5, s8
                  auipc       s7, 410052
                  srai        a5, s8, 8
                  sub         s1, t3, a1
                  srl         a4, s6, t6
                  sll         a1, s0, a3
                  lui         zero, 40943
                  ori         s5, tp, -1738
                  sltiu       a4, s8, -135
                  srai        a4, t5, 0
                  slti        a1, t3, 1883
                  sra         a4, s8, s0
                  slti        s6, s11, -1747
                  slli        s8, t3, 10
                  lui         a5, 681308
                  and         a4, s8, s11
                  slt         t0, a1, s1
                  sltu        t5, s2, t2
                  or          zero, s0, s7
                  sra         s9, t5, a0
                  slt         ra, a1, t0
                  auipc       sp, 835545
                  lui         s2, 1014755
                  andi        a5, t1, -1707
                  xori        zero, s3, -287
                  nop
                  srai        a1, a2, 31
                  sub         s0, zero, s3
                  and         ra, s8, s4
                  sll         a5, s3, a1
                  xor         a6, t1, s3
                  nop
                  ori         gp, tp, 1653
                  srai        s6, s11, 23
                  xor         s9, a3, a4
                  addi        s4, s3, -541
                  srai        t5, t5, 28
                  sltu        s10, gp, ra
                  and         t1, a5, tp
                  srli        sp, s9, 7
                  slt         t0, t5, s11
                  sltu        zero, s0, s8
                  lui         s10, 669160
                  srai        zero, s0, 22
                  auipc       sp, 683341
                  srli        zero, s1, 18
                  addi        sp, sp, 302
                  slli        a7, s6, 8
                  sub         t5, t6, a6
                  sra         s9, a3, t4
                  sltiu       zero, a0, -222
                  slt         t2, t0, a0
                  slt         zero, tp, t6
                  auipc       zero, 24783
                  sll         a5, s7, sp
                  andi        s10, ra, 1854
                  add         s3, s3, s2
                  srl         a4, zero, gp
                  srl         t0, a1, a5
                  sub         zero, gp, tp
                  srl         a6, s0, s9
                  addi        t4, s1, 397
                  slti        s2, gp, 545
                  ori         sp, t3, 250
                  srli        s7, a5, 14
                  sra         tp, a2, a5
                  slti        ra, a1, 1740
                  sub         s9, s9, t3
                  slli        s8, t6, 23
                  sra         t1, a4, a4
                  and         a3, s7, a0
                  slti        t1, gp, 2040
                  xor         a6, a6, t6
                  or          a3, s11, s5
                  xor         a1, t6, t2
                  sra         t2, s3, s4
                  and         s2, t6, s10
                  andi        s9, a1, 1
                  sll         a7, a0, a0
                  andi        zero, ra, -90
                  sub         a1, s8, gp
                  ori         a7, a6, -1023
                  slt         a0, sp, a7
                  ori         s0, t3, 1736
                  andi        t1, sp, 1179
                  auipc       s1, 545989
                  nop
                  nop
                  and         a7, s4, a5
                  sltu        s3, s6, s7
                  addi        a4, zero, 1031
                  sltiu       zero, t4, 773
                  sra         a0, t1, t2
                  sra         s8, a5, a2
                  ori         s5, a3, -1550
                  sltiu       a1, s5, 1081
                  sltu        a4, gp, a0
                  add         sp, a4, s5
                  slli        s9, s8, 19
                  lui         ra, 218821
                  sra         s0, a5, s9
                  srli        t4, t5, 4
                  slli        a7, s3, 11
                  add         s6, sp, s1
                  slli        s10, s9, 22
                  and         zero, a5, s10
                  sll         zero, sp, sp
                  sll         s9, gp, ra
                  xor         a6, a4, s4
                  xor         s8, t4, gp
                  sltu        a0, s6, zero
                  addi        a4, s8, 830
                  sltu        t1, s9, s8
                  sltiu       t1, s8, -1283
                  slt         zero, ra, zero
                  addi        zero, s1, 1774
                  ori         t5, zero, -2037
                  nop
                  srl         s5, s3, a6
                  sub         s9, s2, a0
                  auipc       a5, 555406
                  slti        a1, a7, 1303
                  sltiu       s6, s10, 1917
                  andi        s3, t6, 1284
                  sra         zero, s4, a1
                  addi        s4, gp, -256
                  lui         t5, 488350
                  sll         a1, a4, s2
                  sll         ra, t3, t4
                  sltiu       s10, s7, 1480
                  auipc       zero, 124606
                  srl         gp, s7, t1
                  sra         ra, zero, s6
                  addi        s4, a3, -309
                  srli        t2, s6, 17
                  add         a4, zero, a2
                  sub         zero, a6, a7
                  addi        a3, ra, 765
                  srl         s0, s6, ra
                  sub         t3, s7, s8
                  lui         s3, 362075
                  sra         s9, t2, s0
                  slt         a1, t0, zero
                  or          zero, t4, s1
                  slli        s5, s6, 3
                  ori         s6, a4, -1714
                  andi        a3, s9, -90
                  srl         s1, s1, s3
                  add         s9, t6, t1
                  srl         a5, t1, a0
                  srl         s0, s3, s8
                  srl         a3, sp, s7
                  add         zero, zero, gp
                  slt         s2, t0, tp
                  xori        sp, gp, 1790
                  xori        s5, s6, -428
                  and         a6, s7, s6
                  or          zero, s1, s10
                  slt         ra, t5, t4
                  slli        s5, t5, 2
                  srai        tp, t4, 2
                  lui         s5, 174401
                  sub         s9, ra, a2
                  slt         s0, s6, s9
                  srl         a6, t0, s4
                  add         gp, a5, t3
                  srai        a3, a7, 24
                  sll         zero, a0, a4
                  sltiu       a1, s2, 1759
                  srl         zero, s7, t2
                  sll         a7, a2, t1
                  sub         t2, zero, a6
                  lui         zero, 909921
                  slt         t3, t5, s2
                  ori         sp, gp, 524
                  and         zero, s0, s8
                  sra         zero, a7, s9
                  sltiu       a0, s8, -676
                  srl         s5, t6, zero
                  and         t3, s11, a6
                  xori        zero, t6, 1348
                  addi        s10, a3, -1345
                  slti        t5, sp, -553
                  sll         t0, s8, gp
                  or          tp, zero, a0
                  srl         t2, s5, t1
                  addi        t2, ra, 2027
                  ori         a1, s0, 272
                  auipc       s6, 1044223
                  xori        s9, s3, 1921
                  add         a1, a5, a0
                  and         t5, s4, a2
                  andi        t1, a1, 1957
                  xori        zero, zero, -1583
                  addi        t5, a2, 1043
                  sra         s10, a5, s10
                  srai        s3, a1, 10
                  ori         s9, tp, -1448
                  or          gp, s2, a0
                  sra         a6, s5, s4
                  and         a7, s6, s2
                  lui         s7, 756684
                  ori         t5, a7, -818
                  xor         t5, a6, s8
                  auipc       s1, 28870
                  slli        a4, s1, 24
                  ori         zero, s3, -1814
                  ori         a1, t0, 1212
                  or          a6, t2, zero
                  srl         gp, ra, s9
                  addi        ra, a1, -1271
                  slti        zero, tp, 101
                  slti        s1, gp, -683
                  slt         a6, s11, a7
                  or          s3, a1, a3
                  nop
                  sltiu       ra, t2, 1114
                  slli        sp, s9, 9
                  sub         ra, t3, s9
                  ori         zero, t3, -1075
                  xori        s5, zero, 912
                  sra         a0, zero, a4
                  sra         t5, gp, tp
                  srl         s1, s3, gp
                  addi        zero, a0, -401
                  or          s1, a7, a7
                  srli        s1, tp, 10
                  ori         s8, a2, 5
                  slti        a7, a5, -352
                  sltu        s6, s10, s4
                  or          t0, tp, ra
                  xor         zero, zero, t5
                  andi        ra, s9, 922
                  slti        t1, a5, -554
                  add         s10, t2, a0
                  srl         s7, s3, gp
                  ori         t5, a4, 321
                  ori         s10, a6, 746
                  slti        a4, a3, 1354
                  or          t0, t5, s10
                  sra         s4, t3, a0
                  ori         s5, t6, 321
                  sltiu       a7, t1, 1401
                  xori        t1, s10, 1987
                  xor         s2, t2, a4
                  sra         s2, gp, s5
                  andi        a6, t4, 1984
                  srai        s2, t1, 25
                  xori        tp, s1, 1158
                  andi        s2, s4, 428
                  lui         tp, 426646
                  add         a5, t2, t5
                  and         t0, t4, s6
                  addi        t0, a2, 196
                  sltu        s9, s2, ra
                  sltu        a0, s7, a1
                  slli        s7, s2, 17
                  sll         a7, t0, t2
                  sra         s5, a3, t5
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_6
                  li         s8, 0x1
                  li         gp, 0x1
                  li         a3, 0x7cd45563
                  li         t4, 0x3cb50f48
                  li         t3, 0x0
                  li         s1, 0x0
                  li         a4, 0x0
                  li         tp, 0x1
                  li         a0, 0x0
                  sub         zero, t1, t0
                  add         tp, s11, a3
                  addi        s6, s5, 1577
                  add         a3, s6, s8
                  add         a3, s2, t1
                  nop
                  addi        t5, ra, -184
                  sub         a0, t4, s4
                  sub         t4, s6, s5
                  lui         tp, 20379
                  lui         t2, 746701
                  addi        s8, s6, -1578
                  addi        s10, t6, -226
                  add         a0, t0, s4
                  nop
                  lui         t1, 25386
                  nop
                  add         t5, s1, s8
                  add         a1, a5, t4
                  addi        ra, s3, 276
                  lui         a0, 914897
                  sub         a4, s11, a2
                  nop
                  sub         a5, t6, s7
                  add         t4, s11, s11
                  sub         zero, t2, a3
                  add         s1, t6, t1 #end riscv_int_numeric_corner_stream_6
                  xori        zero, t3, -680
                  sltiu       s6, a1, 136
                  lui         s4, 661807
                  addi        a6, s4, -704
                  slt         ra, a7, t2
                  sub         a6, t0, a3
                  slti        s4, s9, -560
                  sltu        t2, a1, t2
                  sltu        gp, a4, ra
                  andi        ra, zero, 214
                  sll         a0, s3, t6
                  add         s4, t1, s4
                  sltiu       s5, t1, -1536
                  slli        a4, s11, 11
                  add         s6, a4, s11
                  sra         t5, a7, t6
                  slli        a4, gp, 25
                  or          s7, a6, tp
                  sub         s10, s7, a1
                  sll         a6, t2, s6
                  add         s6, t1, s2
                  addi        t3, a0, 219
                  slli        a1, t0, 22
                  addi        t2, a0, 389
                  and         a7, a5, s6
                  sltiu       s8, s8, -1886
                  slt         a7, s10, t6
                  auipc       s5, 494874
                  nop
                  nop
                  andi        sp, sp, -141
                  xor         ra, a5, t5
                  xori        t2, s3, -488
                  add         a6, s10, s10
                  add         a4, sp, s1
                  slt         a1, s3, t5
                  andi        s1, s2, 619
                  srli        s1, t5, 20
                  srai        t5, t2, 25
                  slt         tp, s2, a6
                  andi        t1, tp, 1457
                  slli        zero, s7, 18
                  slt         s10, a3, ra
                  sub         t2, s10, s3
                  slli        t4, a0, 10
                  addi        t5, ra, 1727
                  srl         a0, tp, a2
                  slli        t5, s10, 12
                  slli        a7, t3, 9
                  auipc       s3, 701366
                  srai        s10, s5, 30
                  addi        s8, ra, 1941
                  slli        s9, s0, 20
                  sltu        s0, s3, s1
                  and         a1, s9, sp
                  sltiu       t1, s10, -237
                  srl         a7, a1, t6
                  slt         gp, sp, s10
                  ori         a7, t5, -1168
                  xor         a3, t6, s3
                  srai        zero, a7, 5
                  slt         s2, s8, s10
                  or          sp, a0, s8
                  slti        a0, t1, 846
                  sltiu       s8, a5, -1278
                  nop
                  andi        t1, s6, 1660
                  and         gp, t2, s4
                  sltu        zero, t5, a2
                  slti        tp, a5, 1911
                  addi        sp, s7, 1159
                  ori         t2, gp, -1627
                  addi        t5, a2, -133
                  andi        t4, t2, 1503
                  andi        zero, s11, -576
                  andi        t0, a5, -771
                  sll         t3, s9, a6
                  nop
                  slti        s8, s11, -361
                  sub         s6, a7, a1
                  sltiu       sp, s6, -1204
                  auipc       a0, 783051
                  lui         a3, 301700
                  and         t3, t2, s3
                  srli        s10, t5, 13
                  srl         t1, s1, t2
                  sltu        t1, a6, s9
                  ori         s9, tp, -1855
                  or          t0, s9, s0
                  andi        s4, a6, 239
                  addi        s9, s8, -455
                  srli        s7, a3, 5
                  sra         tp, ra, a0
                  xor         t3, s3, tp
                  andi        t4, s11, 1791
                  addi        a3, s9, 1422
                  sra         zero, zero, t3
                  addi        t0, t3, 327
                  auipc       zero, 813347
                  andi        t3, t5, -1
                  slli        sp, s1, 17
                  nop
                  sltiu       gp, t0, 0
                  xor         s0, a2, t5
                  xor         zero, s4, s10
                  xor         t2, t1, gp
                  and         a6, a5, s7
                  slt         s10, s0, s7
                  lui         s0, 171054
                  xor         sp, s6, s11
                  lui         s0, 468305
                  add         zero, a1, a3
                  or          s3, s5, sp
                  sra         t5, s5, s10
                  slli        a3, a6, 0
                  sltiu       t0, t5, -1411
                  slli        zero, t4, 28
                  lui         gp, 359867
                  srli        s5, a0, 7
                  addi        t2, s11, 1658
                  sltiu       zero, s0, 2015
                  nop
                  sltu        a7, a4, a2
                  sub         s4, a3, a4
                  slli        t3, s0, 18
                  slli        s1, s6, 31
                  andi        a4, sp, 1420
                  sltiu       t0, s8, 1558
                  lui         zero, 688491
                  sub         s0, t4, a2
                  slt         a7, s8, t2
                  srai        zero, a7, 3
                  sub         s1, ra, s10
                  xori        s10, ra, -674
                  sub         s1, ra, a5
                  srai        sp, sp, 24
                  and         zero, ra, s6
                  sltu        s6, sp, s5
                  nop
                  xor         tp, s9, s8
                  lui         s9, 438921
                  srli        a6, s0, 25
                  sltiu       a4, s11, 1839
                  slti        s3, s4, 1354
                  or          s10, t6, s8
                  slt         tp, t6, a2
                  nop
                  nop
                  xori        s2, s1, 1328
                  slt         s5, t1, a7
                  sltiu       s6, t0, 742
                  and         s1, t6, a2
                  sltu        a5, a7, tp
                  srai        s8, t1, 23
                  slli        s10, a4, 20
                  addi        ra, a1, 870
                  xori        s1, zero, -1201
                  srli        a3, zero, 13
                  addi        gp, t1, -112
                  sub         t3, t6, s3
                  nop
                  ori         t2, s3, -1725
                  srli        t1, s9, 9
                  xori        t1, s4, -825
                  lui         t0, 820746
                  sltiu       t4, t2, -1134
                  sub         s2, a4, a7
                  andi        a0, s3, 1482
                  slti        s6, t0, -1417
                  sub         s9, a3, a6
                  xori        ra, t5, -415
                  ori         ra, a3, 89
                  sub         t1, a1, a3
                  xori        a5, t4, -1773
                  xor         t3, s10, ra
                  andi        s9, zero, 722
                  and         s2, zero, s5
                  slt         a5, zero, t5
                  sra         t0, a4, tp
                  slli        sp, gp, 13
                  sub         a7, a7, t2
                  slt         s6, ra, a1
                  nop
                  addi        s9, tp, -4
                  and         s7, t4, a0
                  sub         t5, ra, a4
                  srai        t2, t2, 24
                  and         a4, s5, t4
                  xori        s8, sp, 75
                  andi        s4, s1, -581
                  sltu        a5, s0, a6
                  add         s1, a6, s3
                  nop
                  sltu        s9, gp, s0
                  auipc       ra, 814505
                  auipc       s3, 21403
                  srli        a4, s1, 17
                  xor         zero, a5, a7
                  sub         tp, s0, t1
                  sltu        a5, a3, s5
                  and         s10, t0, s11
                  sll         a6, s5, s5
                  sltu        t0, t6, a1
                  addi        t2, s1, 758
                  or          a6, s5, t1
                  sll         s5, s0, gp
                  addi        t1, zero, -843
                  xor         ra, tp, t2
                  xori        s5, s9, 1520
                  ori         sp, sp, -272
                  addi        t5, s5, -58
                  sltu        zero, t0, s4
                  sub         a0, t2, s3
                  add         t3, a3, zero
                  ori         ra, s4, -359
                  add         s3, s9, s6
                  sll         a4, t0, t3
                  lui         a6, 38870
                  sltu        s4, t5, s10
                  nop
                  sub         s1, sp, ra
                  srli        s3, a3, 31
                  and         s6, t6, t6
                  addi        sp, t1, 2012
                  srli        s1, sp, 27
                  slt         s9, s3, ra
                  nop
                  xori        s8, s8, 1735
                  srai        s2, t2, 0
                  andi        a4, a5, 1304
                  add         a1, s5, ra
                  ori         s8, s9, -1469
                  auipc       zero, 961660
                  or          s7, zero, a7
                  lui         zero, 637689
                  srl         a3, tp, a3
                  sll         t2, a2, s9
                  addi        a1, a5, 141
                  addi        tp, a0, -1828
                  srl         t3, s3, a1
                  and         tp, t6, t3
                  andi        tp, ra, 1383
                  sltiu       a1, s6, 124
                  slli        zero, a0, 17
                  andi        t2, gp, 1059
                  sltiu       s0, s10, -1836
                  slli        s1, s3, 1
                  andi        zero, gp, 1098
                  slti        s10, sp, -623
                  srai        t0, t4, 9
                  xor         s6, a2, zero
                  slli        t3, s2, 28
                  sra         s0, s8, a0
                  srli        gp, a2, 25
                  nop
                  sll         s5, s4, gp
                  srli        t0, s4, 1
                  add         s8, t5, s9
                  slli        s0, ra, 23
                  xor         s3, a4, s6
                  srl         s7, a4, tp
                  sll         s9, a1, t5
                  andi        ra, a4, 1787
                  add         a7, t3, t2
                  sub         t2, a3, a4
                  and         s0, t5, ra
                  slli        s9, tp, 2
                  xori        a7, ra, -550
                  srai        t4, s2, 28
                  ori         s7, a4, -53
                  srai        s5, s1, 26
                  ori         a7, a5, -890
                  sll         s1, a0, t0
                  auipc       t1, 46640
                  and         t5, a5, s2
                  or          zero, sp, s11
                  srl         s6, zero, sp
                  xori        s2, t5, -1997
                  sltu        s2, gp, s10
                  ori         t0, t5, 1502
                  xor         sp, s11, s5
                  sltu        a4, s3, s2
                  and         a1, zero, t2
                  auipc       a7, 981453
                  slti        t5, zero, -187
                  slt         sp, t1, s1
                  addi        s1, t1, -806
                  sltu        ra, tp, a1
                  and         s9, t2, a0
                  andi        a7, s3, -1949
                  nop
                  nop
                  add         t1, s6, sp
                  or          ra, s1, a7
                  lui         zero, 366163
                  ori         zero, tp, -1811
                  ori         t2, t0, -149
                  srai        ra, s6, 18
                  slli        t4, s7, 16
                  nop
                  andi        t0, t4, 1563
                  srai        a4, s6, 26
                  and         s8, a5, s10
                  sll         a0, ra, a7
                  slt         s2, s4, a4
                  xori        a4, s1, -1199
                  sll         a3, a1, s2
                  add         s8, zero, s11
                  or          s6, a7, sp
                  auipc       t1, 299256
                  nop
                  srl         ra, t5, zero
                  and         t5, a7, tp
                  xor         s2, a2, s3
                  sltu        t4, s11, s7
                  nop
                  srli        t2, ra, 30
                  srli        s2, s2, 20
                  slt         a3, t6, a2
                  slti        t2, t2, 306
                  sra         s2, a0, s5
                  ori         s4, ra, -1217
                  sll         a0, s10, t6
                  nop
                  srli        zero, a6, 13
                  srli        s5, t6, 24
                  slt         zero, s7, s10
                  ori         t2, s0, -491
                  slli        t1, s6, 27
                  add         zero, tp, t0
                  or          s7, a2, s7
                  slt         a0, a4, t4
                  srli        t0, t4, 24
                  slli        a6, a5, 3
                  slti        s3, a1, 914
                  srai        s9, zero, 6
                  slti        ra, s1, -1525
                  xori        s8, s9, -576
                  slti        t4, t6, -1652
                  add         s5, a1, t3
                  lui         a3, 522678
                  sra         zero, t3, gp
                  xor         s0, t4, a1
                  sltu        a5, a2, t1
                  add         gp, s11, a2
                  sll         s4, tp, s3
                  or          s4, a6, gp
                  auipc       t1, 110155
                  slli        s10, s4, 22
                  sltu        s6, s4, gp
                  li         t5, 0x4e869080 #start riscv_int_numeric_corner_stream_0
                  li         t4, 0x6ebe7d42
                  li         t3, 0x0
                  li         a3, 0x0
                  li         s1, 0x0
                  li         s0, 0x25d14f0a
                  li         tp, 0x0
                  li         a4, 0x474e1272
                  li         s8, 0x55dd0470
                  li         s7, 0x0
                  sub         zero, a7, s9
                  lui         s1, 9224
                  addi        s5, t4, -1795
                  add         t1, s6, s6
                  sub         s10, s8, t0
                  lui         a4, 820261
                  addi        s9, a0, -509
                  lui         a1, 455720
                  add         a4, s5, t3
                  sub         t4, a1, a5
                  sub         s5, s1, tp
                  nop
                  lui         a7, 1019746
                  add         s5, a0, t0
                  add         s0, s1, a1 #end riscv_int_numeric_corner_stream_0
                  and         s7, s6, zero
                  sltiu       a0, s8, 936
                  slli        s3, a3, 19
                  srl         t1, a1, a6
                  auipc       a4, 617786
                  lui         zero, 714647
                  nop
                  sll         s3, t3, zero
                  auipc       s10, 231478
                  and         zero, a7, t6
                  and         zero, a0, s3
                  srl         s0, s3, s9
                  xor         a6, t2, t5
                  nop
                  slli        t5, s0, 10
                  sra         ra, t1, s1
                  slti        ra, gp, 261
                  add         a5, a7, a5
                  xori        a5, a6, -513
                  andi        s0, a7, -174
                  and         sp, t4, a4
                  and         t5, gp, gp
                  andi        s1, a7, -221
                  addi        zero, zero, -432
                  slti        s9, t6, 1314
                  nop
                  lui         s9, 678535
                  and         tp, s5, s4
                  srli        a0, s4, 9
                  lui         zero, 878629
                  add         a4, s5, s8
                  nop
                  srli        gp, t3, 19
                  slli        t3, t1, 14
                  lui         s6, 608800
                  sltiu       s2, s8, 1336
                  add         s7, a2, s8
                  and         a3, a7, a3
                  xor         s3, a5, s7
                  ori         s6, s5, -261
                  ori         ra, s0, 1639
                  sll         s2, a1, s9
                  sltu        s4, t0, s5
                  ori         s1, s6, -1688
                  xori        s6, a2, 1305
                  addi        s8, s1, 1357
                  slli        s1, s2, 0
                  srai        zero, a1, 12
                  slli        s7, a1, 8
                  sub         a5, t0, a0
                  slti        s9, gp, -207
                  srl         zero, tp, s8
                  add         s9, t6, a4
                  slt         a4, s7, s10
                  xori        s6, a6, -50
                  addi        s4, s8, -540
                  srl         s9, s9, s3
                  sub         s2, s2, s1
                  andi        zero, s0, 829
                  and         s9, s11, s8
                  or          gp, s6, s0
                  andi        s3, gp, -1884
                  lui         s9, 225129
                  srai        tp, a3, 0
                  auipc       s0, 82615
                  slt         s1, t4, s3
                  xori        zero, a7, -1848
                  lui         s9, 361229
                  addi        s6, s4, 696
                  add         a6, t0, t6
                  auipc       a5, 52141
                  auipc       a7, 36382
                  slti        a0, zero, 1384
                  slli        t4, s0, 22
                  ori         zero, t0, 1467
                  or          s7, t0, s3
                  sub         s8, s3, t5
                  sub         gp, a4, a7
                  xori        s2, t6, 1363
                  sub         gp, s6, s11
                  sltu        s1, sp, s10
                  slt         gp, t4, a2
                  ori         t1, a1, 1976
                  ori         t1, s3, -118
                  xor         s4, ra, s11
                  sll         a7, zero, s2
                  addi        zero, a0, 334
                  auipc       a0, 768810
                  nop
                  addi        zero, t6, -476
                  xor         s6, ra, t0
                  add         zero, s1, a6
                  add         t4, t1, a0
                  srai        s1, a2, 20
                  slt         tp, a3, ra
                  sltu        zero, a7, t6
                  auipc       t4, 298587
                  lui         s5, 195982
                  ori         a1, a6, -299
                  srai        s3, t0, 3
                  addi        a3, a1, 1795
                  nop
                  sltiu       tp, s4, 2009
                  ori         zero, t6, -1801
                  srai        s5, s0, 0
                  auipc       s1, 659246
                  or          a0, s0, t1
                  ori         a0, s3, 63
                  nop
                  srai        t0, s9, 10
                  sltu        a0, s7, s0
                  srl         s10, s6, s6
                  sub         gp, a6, s1
                  slli        s0, t2, 29
                  andi        t0, t2, -1186
                  or          s4, a4, s3
                  slti        s6, s4, 302
                  srli        t2, s6, 3
                  xor         t3, a2, t4
                  or          t2, s3, t5
                  andi        s2, s4, 67
                  auipc       t0, 442946
                  xori        tp, t1, 146
                  or          a7, a5, t2
                  andi        t2, t3, 1866
                  nop
                  slti        a1, a3, 859
                  auipc       s4, 788883
                  sll         a5, a7, s10
                  auipc       zero, 1007631
                  srl         gp, t1, a4
                  xori        t0, sp, 696
                  sll         t0, s10, a4
                  srai        s7, s10, 16
                  andi        tp, a5, 233
                  slt         a1, s7, s6
                  sll         s5, s7, a6
                  sra         s1, t2, t5
                  or          tp, zero, zero
                  srl         zero, t5, t6
                  xori        s2, gp, 1987
                  xori        s4, s0, -1911
                  sll         s2, t3, t2
                  add         a6, t6, a1
                  sll         s0, s10, s10
                  srli        a3, t4, 13
                  sub         s6, t4, zero
                  nop
                  or          zero, a7, s4
                  slti        a1, s1, -176
                  slt         t3, gp, gp
                  sltu        s10, a2, s8
                  xor         s9, t4, s6
                  sltu        s10, s0, ra
                  sll         s8, a5, s8
                  sll         t2, a5, t4
                  or          a0, a3, a6
                  sltu        zero, a0, s6
                  andi        s0, t1, -1346
                  and         a7, a4, s0
                  andi        ra, s11, 679
                  or          zero, a6, sp
                  sltu        a0, s8, a5
                  slt         s1, a7, t2
                  ori         s5, a4, 1936
                  slti        t1, a2, -1121
                  andi        s1, t2, -1822
                  sltu        s0, s5, s3
                  slli        zero, s0, 30
                  srli        s10, gp, 4
                  srai        s5, s1, 3
                  add         ra, s10, s0
                  slt         s4, s5, s7
                  lui         s5, 73516
                  srli        zero, a0, 22
                  srl         s6, a2, a0
                  xori        a5, a6, 1133
                  slti        s3, s8, 1639
                  and         a4, zero, s0
                  slli        a7, s6, 7
                  srai        s5, s7, 13
                  ori         s9, s0, 1116
                  andi        t4, t3, -889
                  srl         a3, gp, a2
                  xor         t0, a6, gp
                  sub         a5, s10, t6
                  lui         zero, 259692
                  lui         sp, 4672
                  srl         a7, a4, s1
                  sltu        t3, t0, s3
                  srai        tp, t5, 5
                  lui         zero, 345087
                  srl         s4, a2, s8
                  srai        a4, t1, 31
                  add         zero, gp, a0
                  add         s8, a2, t4
                  srli        t5, a1, 1
                  add         zero, t0, a2
                  andi        t5, s8, 650
                  or          a6, t4, s3
                  ori         a3, a4, -1031
                  or          ra, a0, s5
                  srli        s6, a4, 6
                  add         s7, a5, gp
                  sra         tp, s6, zero
                  auipc       s8, 826782
                  xori        sp, a0, 1223
                  auipc       s4, 518683
                  sll         s3, t1, a5
                  lui         t2, 104996
                  sltiu       s10, s8, 1102
                  srli        t2, s0, 15
                  auipc       zero, 480802
                  xori        zero, a5, 435
                  sltiu       zero, s0, 600
                  sltu        s3, a1, s9
                  xor         t2, t1, s9
                  sll         s0, sp, tp
                  and         s3, a5, t0
                  xor         zero, s1, a2
                  slt         a3, ra, a3
                  auipc       gp, 838787
                  or          a5, s3, s10
                  auipc       tp, 918683
                  andi        a7, a0, 1318
                  sll         s0, a0, t4
                  lui         a5, 267373
                  srl         t5, a1, s3
                  andi        a7, s2, -425
                  lui         a7, 934956
                  andi        s3, t1, 686
                  slt         s4, s10, sp
                  nop
                  and         zero, s4, ra
                  andi        a0, a5, -1512
                  slli        zero, a1, 4
                  lui         t4, 434169
                  slt         a5, a3, s7
                  andi        s4, sp, 603
                  sltu        a4, t2, a6
                  slt         s7, s3, ra
                  srai        t4, s11, 2
                  srl         zero, t1, a4
                  andi        s5, a1, -171
                  slli        zero, gp, 13
                  andi        s2, s5, -1176
                  xori        s2, a5, 114
                  auipc       s1, 873799
                  and         zero, t5, s2
                  sll         t5, t1, zero
                  srai        zero, t0, 20
                  sub         t1, a7, t5
                  or          zero, s2, s8
                  lui         s6, 602174
                  xori        zero, t3, -768
                  or          t4, s1, ra
                  and         s4, s2, t3
                  auipc       ra, 243143
                  srai        zero, s7, 1
                  sltu        a4, a4, tp
                  xor         s4, gp, a4
                  lui         t3, 86483
                  addi        t5, s9, -1315
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_15
                  li         a7, 0x1
                  li         t4, 0x0
                  li         s10, 0x2f7248c3
                  li         sp, 0x210ecaf4
                  li         s9, 0x6d855eb8
                  li         s5, 0x0
                  li         s3, 0x0
                  li         t3, 0x8ea87ba
                  li         s7, 0x364286dd
                  lui         s10, 299846
                  addi        a1, a5, 1340
                  lui         t5, 563564
                  lui         ra, 800307
                  addi        a5, t5, -1957
                  lui         zero, 650966
                  sub         s9, a5, t0
                  nop
                  lui         zero, 657662
                  nop
                  sub         zero, s6, s1
                  sub         a0, s7, zero
                  addi        zero, t4, -2011
                  add         t1, a7, s9
                  lui         a3, 625457
                  nop
                  sub         t2, s9, s10
                  addi        s9, s3, -144
                  lui         s10, 770071
                  sub         a7, t1, s10 #end riscv_int_numeric_corner_stream_15
                  sra         zero, a6, t2
                  addi        s9, zero, 1043
                  sltiu       tp, a5, -936
                  xori        t0, a7, 1329
                  nop
                  xor         zero, s0, s7
                  slli        zero, s5, 28
                  xor         t3, s9, a6
                  addi        s6, s2, 546
                  sltu        a3, t2, t0
                  sll         a7, t3, a1
                  xor         t4, t3, a4
                  srl         s0, s11, t4
                  xori        s10, s8, 605
                  sra         s6, s10, a2
                  lui         tp, 372863
                  auipc       t4, 297550
                  add         zero, t5, s8
                  slli        zero, ra, 13
                  slt         s10, s8, a4
                  srli        a0, tp, 21
                  slti        zero, s11, 393
                  slli        s6, s3, 10
                  sltu        tp, t6, tp
                  lui         a0, 579797
                  ori         s0, a4, -809
                  sra         zero, s8, t4
                  lui         s8, 857141
                  auipc       a3, 979342
                  auipc       s8, 151982
                  srai        a0, t2, 7
                  add         s0, a5, s10
                  sltiu       s1, t5, -732
                  srai        t0, s8, 21
                  sub         s8, a7, a0
                  ori         a5, s2, -363
                  srai        zero, s1, 25
                  and         t2, t3, s5
                  auipc       s9, 842660
                  slli        a3, s2, 5
                  nop
                  srl         s2, s2, s9
                  auipc       s1, 462591
                  lui         sp, 554276
                  sll         gp, t1, t4
                  auipc       s6, 684069
                  lui         s10, 876531
                  addi        s6, tp, -417
                  andi        gp, t0, 1609
                  sltu        a3, a6, gp
                  slt         zero, sp, ra
                  slti        a4, t6, 1747
                  ori         s9, s10, -48
                  srli        s4, a7, 27
                  slli        zero, s1, 18
                  sltu        zero, t1, s3
                  srl         t4, s0, s8
                  sltu        ra, ra, a2
                  slt         zero, a1, ra
                  slli        zero, ra, 0
                  addi        t3, t5, -205
                  addi        a5, a6, -196
                  srli        a6, a2, 11
                  add         s1, t2, ra
                  or          tp, a3, t2
                  lui         t5, 688336
                  slt         t0, a3, s0
                  sra         s4, s9, s7
                  lui         s9, 535991
                  srai        gp, s9, 27
                  slli        gp, a0, 28
                  slt         s3, t0, t6
                  add         a5, zero, a6
                  or          t3, gp, a4
                  srli        t2, t1, 9
                  srli        s3, a6, 21
                  sll         zero, s8, s8
                  nop
                  xor         s0, a6, s8
                  sltu        s2, s9, a7
                  srl         t0, a0, a2
                  srli        a7, a4, 14
                  sll         t4, gp, s10
                  andi        t2, t3, 1386
                  srl         s3, t4, a4
                  xori        sp, t2, -368
                  xori        s10, t2, -112
                  sltiu       t2, a5, 1803
                  auipc       s8, 275472
                  srl         s6, s7, t3
                  sll         a5, s6, t4
                  or          a5, a2, s0
                  add         a7, s6, s8
                  slli        ra, s9, 3
                  slli        a6, a6, 8
                  ori         t2, t2, -1666
                  or          s4, a5, s0
                  xor         t5, t4, a5
                  sub         s10, s2, s10
                  sra         a4, ra, s6
                  addi        a5, t2, -710
                  xor         a5, s9, t2
                  ori         t0, s7, 1515
                  andi        s10, a2, 194
                  lui         zero, 572923
                  ori         ra, s0, -1286
                  ori         sp, ra, 1809
                  add         t3, s7, s10
                  auipc       zero, 259459
                  xori        tp, s0, 268
                  and         t3, t5, s2
                  srl         a4, a0, a7
                  addi        s1, s9, -40
                  sltiu       s0, t3, 1041
                  slli        a6, s8, 6
                  slti        s10, t4, 1246
                  xori        t0, s3, 1251
                  ori         s3, a3, 1257
                  lui         zero, 722409
                  xori        s4, s8, -1324
                  srl         t3, ra, t1
                  and         s3, s5, s6
                  slt         s2, s1, t3
                  xor         a4, s1, a7
                  xor         s4, tp, s0
                  srl         s3, t3, a4
                  slti        s0, a5, -953
                  auipc       zero, 612941
                  nop
                  sltu        a7, t6, s5
                  sltiu       t0, s11, -376
                  nop
                  sll         s9, s10, s8
                  nop
                  and         t5, t0, s7
                  lui         a7, 937886
                  srai        t4, s0, 20
                  auipc       a1, 456505
                  sltu        s5, a1, zero
                  slt         t3, a4, a0
                  srl         zero, t6, gp
                  xori        zero, a6, 1257
                  nop
                  srl         tp, s10, s0
                  lui         sp, 971250
                  add         zero, t6, s9
                  or          s2, s1, a7
                  sltiu       a5, a0, -1794
                  slti        a1, ra, 392
                  sra         t2, a6, a7
                  add         t2, t2, t5
                  sra         zero, s7, s5
                  and         s6, a6, s10
                  slt         s10, a7, a5
                  sll         a5, t0, s3
                  slti        s1, s7, -1242
                  sltiu       s7, a7, -218
                  slt         s2, t2, zero
                  lui         s9, 955013
                  xori        s2, t2, 1516
                  slt         a1, t1, s11
                  sltu        zero, t4, a5
                  and         zero, s2, s6
                  add         t2, t4, gp
                  sltiu       s10, t0, 71
                  lui         t2, 174542
                  nop
                  sub         a5, s3, t3
                  slti        s9, s1, -1228
                  srl         t0, t5, gp
                  or          zero, s2, ra
                  or          t3, a6, t2
                  auipc       s8, 751672
                  sll         s7, s1, a0
                  srai        t0, t0, 23
                  xor         s8, a1, s3
                  srl         a5, t5, t1
                  sra         s2, a5, t5
                  lui         s6, 209444
                  auipc       zero, 492981
                  sltu        a5, s4, t4
                  slt         s3, zero, a2
                  srai        s5, t5, 6
                  and         zero, t4, a5
                  srl         zero, a3, a3
                  sra         s7, t6, a4
                  slti        a5, s6, -65
                  and         a6, a0, s3
                  slti        a4, a1, 1881
                  srl         gp, t6, s9
                  auipc       tp, 1048223
                  andi        t0, t5, 1962
                  sltiu       ra, sp, -2039
                  and         s6, a6, s0
                  slli        s3, t2, 8
                  slt         s5, tp, t0
                  sltu        ra, s0, s10
                  sll         a1, a2, s11
                  and         a6, a3, t3
                  srli        s8, a3, 15
                  srai        s0, t6, 3
                  sltu        s0, a0, t6
                  xor         s1, t3, t0
                  nop
                  slt         a0, t6, s8
                  lui         t2, 886695
                  sll         t5, a7, t3
                  sltiu       s7, ra, 1761
                  auipc       t4, 324262
                  slt         t4, zero, a0
                  addi        s9, s4, -1858
                  auipc       s8, 587544
                  xori        s5, a7, -143
                  slt         a6, a7, t4
                  slli        s1, a4, 11
                  sra         a1, a3, s6
                  xori        s0, t2, 836
                  slti        zero, t1, -1865
                  sltu        ra, a2, a5
                  slli        zero, tp, 11
                  ori         s3, tp, -1342
                  xor         t4, a4, s11
                  sltu        zero, s9, a4
                  sltiu       s1, t3, 1511
                  slli        a6, a5, 22
                  andi        a6, a3, -1255
                  srl         a0, a4, s9
                  add         ra, t5, t4
                  sltiu       s10, s3, 644
                  lui         t2, 1046470
                  nop
                  slt         s2, a4, a3
                  nop
                  slti        sp, a5, -1341
                  sub         t0, gp, a0
                  sltiu       a5, zero, 1948
                  sltiu       t0, ra, 1708
                  sub         s5, s3, gp
                  sub         s6, s2, a0
                  srl         s0, ra, s11
                  slli        a1, tp, 13
                  sll         zero, a7, s4
                  ori         t1, a2, 1429
                  auipc       t3, 572899
                  nop
                  xori        zero, gp, 1064
                  addi        t3, a3, -1033
                  xori        t0, t0, 1011
                  slli        s2, s11, 29
                  auipc       t1, 331809
                  ori         s9, t3, -1706
                  srai        a4, a0, 18
                  addi        a3, t5, -1780
                  sll         s2, t2, a5
                  srli        ra, a0, 11
                  and         sp, a1, tp
                  lui         t5, 293364
                  addi        zero, tp, 818
                  xori        s5, ra, 1505
                  srl         s10, zero, a7
                  sra         t0, a2, t0
                  add         s8, s5, gp
                  or          ra, zero, a5
                  and         s10, t1, a0
                  slli        ra, s4, 21
                  nop
                  auipc       s0, 231748
                  addi        a0, gp, 709
                  andi        s0, a3, -1372
                  srai        s9, s11, 13
                  slt         a6, gp, a4
                  addi        t4, a1, -786
                  srl         s8, t3, gp
                  lui         s0, 908770
                  andi        s8, s3, -305
                  xor         s7, t3, a7
                  srl         a0, s4, s6
                  nop
                  srai        s2, s4, 5
                  and         zero, t3, s9
                  addi        t4, t6, -1150
                  sll         a7, ra, s10
                  slt         s7, s2, a6
                  and         s6, t1, s5
                  or          s5, t2, a3
                  ori         zero, t5, 1050
                  srli        zero, a4, 21
                  slli        s5, s1, 13
                  xor         a6, a2, s10
                  lui         t3, 315477
                  or          t3, s4, t4
                  xor         s5, t0, ra
                  ori         s4, t5, 125
                  andi        a4, ra, -1967
                  andi        a6, a0, 1210
                  addi        ra, sp, 687
                  addi        tp, s10, 1962
                  auipc       zero, 446866
                  srli        s10, s4, 11
                  sub         s6, a2, s3
                  sra         s3, s4, s3
                  or          s10, s1, s10
                  srl         a1, a4, t0
                  slti        t3, s5, 1845
                  andi        s8, s2, 96
                  slli        s4, t6, 11
                  slli        gp, s4, 7
                  sub         s1, gp, t5
                  andi        t5, s3, -144
                  srli        ra, tp, 26
                  sub         a1, s6, s3
                  add         ra, t4, a3
                  xor         t0, s5, a3
                  slli        s5, t1, 24
                  sub         tp, a0, s10
                  slli        a5, a6, 11
                  ori         s8, s11, -1843
                  xori        zero, a5, -545
                  auipc       s1, 425798
                  add         a0, s4, t0
                  or          gp, sp, a7
                  sra         t3, a7, s1
                  xor         s4, t2, gp
                  slt         s8, t3, ra
                  auipc       s9, 504669
                  slti        s0, zero, -1706
                  sub         a1, t4, a1
                  srli        s7, a1, 9
                  or          a3, a5, s5
                  auipc       s5, 807244
                  sra         s6, s6, s0
                  slt         t5, zero, t2
                  sub         a6, t3, t4
                  sll         t2, t2, a3
                  ori         a0, zero, 996
                  sltu        t0, t1, s5
                  srai        s0, s2, 24
                  srl         tp, s9, a5
                  sra         tp, a2, a0
                  slli        zero, s6, 26
                  lui         zero, 151891
                  xori        a1, s2, -727
                  sltu        a5, t2, t0
                  sub         tp, t6, t2
                  auipc       a0, 413779
                  xor         s6, t1, t1
                  andi        zero, a7, 557
                  sll         a0, s3, s0
                  sub         t0, gp, a0
                  sub         s9, s10, t2
                  srai        a6, s7, 6
                  slt         t4, s6, s7
                  andi        s9, tp, -1197
                  xor         ra, t3, s11
                  sub         a7, s10, a7
                  slli        t0, s0, 20
                  srl         s3, s7, a2
                  lui         t3, 116497
                  slli        t2, s8, 14
                  xori        zero, s9, -90
                  add         ra, sp, a4
                  lui         s0, 1041190
                  lui         a0, 927892
                  sll         zero, s3, a7
                  slt         s8, s5, tp
                  lui         zero, 135408
                  ori         s0, s1, -589
                  xor         a7, a5, a2
                  add         t3, s6, s10
                  andi        s2, a0, 702
                  xori        a0, s8, 1191
                  sll         a3, s8, s8
                  sltu        s10, s0, sp
                  add         s8, s5, a6
                  sltiu       a0, s1, -1226
                  xori        tp, t5, 825
                  andi        s3, s6, -707
                  sub         a3, a0, s5
                  addi        s8, a7, 429
                  andi        tp, t3, -427
                  add         a7, s9, a5
                  auipc       t0, 917194
                  xor         s3, s11, a6
                  xor         t1, a4, s0
                  slt         s8, s1, a5
                  or          sp, s10, t4
                  or          tp, a4, s5
                  sub         ra, a2, t3
                  ori         a7, s2, -437
                  ori         gp, s9, 1857
                  or          t0, s4, s4
                  and         t5, zero, a2
                  srai        s10, a1, 1
                  sll         s2, s6, sp
                  nop
                  addi        s5, s3, 1692
                  sub         zero, a4, t0
                  sra         s1, t0, zero
                  srl         a4, s8, a0
                  auipc       s9, 297737
                  sltiu       s2, s9, -658
                  addi        s9, s5, -1770
                  auipc       s2, 896239
                  xori        s5, gp, -408
                  sra         s5, s1, s1
                  slli        a5, t3, 28
                  sra         s3, a7, t0
                  xori        t2, a3, 99
                  sltiu       s8, s5, 757
                  lui         s8, 436968
                  srl         t4, a2, a7
                  slti        s6, s7, 222
                  addi        s8, ra, -808
                  srli        s9, s11, 11
                  sltiu       t3, a5, -1739
                  sltiu       a6, sp, -1192
                  andi        sp, gp, 434
                  slli        a4, t6, 24
                  lui         a5, 999694
                  nop
                  slt         s5, zero, t5
                  srli        s7, ra, 18
                  addi        s7, s10, -212
                  sub         s6, a0, a5
                  slli        t0, s0, 5
                  auipc       t5, 269875
                  srl         zero, a0, t3
                  slt         a0, s8, a2
                  andi        zero, t6, -621
                  ori         s10, s0, -275
                  slti        gp, s11, 604
                  or          zero, s1, s3
                  sltiu       t4, t6, 81
                  slli        sp, s4, 0
                  and         s4, tp, tp
                  slli        t5, s3, 2
                  ori         s3, s6, 1670
                  add         s0, a1, ra
                  xori        sp, a3, 964
                  xor         tp, s8, s7
                  slli        t5, t4, 14
                  srai        a7, t2, 13
                  slti        s5, zero, -1701
                  ori         s9, t1, -871
                  slt         ra, s6, sp
                  and         t2, a4, gp
                  and         s4, s11, s6
                  xor         ra, gp, s3
                  sll         t3, s2, t6
                  sub         tp, a6, s1
                  sltiu       s10, gp, 1431
                  srli        a7, zero, 31
                  srli        zero, s5, 19
                  sltiu       zero, a7, 1935
                  xor         s6, t5, gp
                  lui         t2, 983803
                  nop
                  slli        zero, zero, 31
                  or          s0, s0, ra
                  sub         s5, sp, s7
                  srai        a4, a1, 13
                  or          s0, s6, t5
                  sra         s10, a6, s11
                  add         s9, a0, t0
                  sra         a7, s9, a6
                  nop
                  addi        t1, s5, -1192
                  add         zero, s7, s2
                  nop
                  xori        gp, s5, 1743
                  lui         sp, 73090
                  and         t5, s5, a5
                  srl         a7, s5, a3
                  sltiu       a3, t2, -73
                  andi        s2, a2, 2040
                  nop
                  srl         s10, a6, zero
                  srli        a4, a6, 16
                  slli        s5, sp, 29
                  xori        sp, t0, -180
                  sll         s10, a7, t2
                  sub         gp, tp, s2
                  sltiu       s8, s6, -910
                  sltiu       t5, s10, 103
                  and         s6, a3, s7
                  sltiu       s1, s3, -1659
                  andi        s5, a7, 55
                  sltu        a5, a0, t3
                  add         t3, a2, s5
                  auipc       s6, 942941
                  andi        zero, s11, -1699
                  ori         s9, s1, -386
                  andi        t2, t4, 1944
                  srl         t3, s0, s3
                  slt         s6, a1, s0
                  slli        s4, tp, 10
                  sra         a1, t3, t3
                  andi        t0, ra, -581
                  ori         zero, ra, -942
                  lui         a3, 464200
                  sll         a1, gp, a4
                  or          s9, s9, t0
                  srai        a5, s8, 14
                  nop
                  andi        a1, s1, -1878
                  sub         zero, t5, tp
                  addi        s1, a5, 538
                  slti        s2, s0, -461
                  ori         t4, t1, 1904
                  ori         s4, t3, -1693
                  sll         sp, s10, a4
                  lui         s9, 328329
                  nop
                  ori         zero, ra, -287
                  and         zero, s5, ra
                  and         t2, a5, a4
                  slli        t1, t6, 24
                  sra         t3, a7, s10
                  auipc       a6, 238327
                  sltu        s9, a7, s11
                  sltu        ra, s0, s6
                  lui         s1, 126909
                  or          t3, s1, a4
                  srl         s3, a0, s1
                  xori        ra, a3, 488
                  slli        s10, t3, 5
                  slt         s7, t0, t2
                  srai        gp, a3, 15
                  andi        a7, a0, 561
                  xor         a4, sp, zero
                  srl         zero, a6, gp
                  slt         s9, a7, a2
                  and         s7, ra, s4
                  ori         a0, s11, 312
                  addi        s2, s7, 397
                  andi        s6, a7, -1097
                  xor         a3, s4, ra
                  xori        sp, ra, 1563
                  xori        s1, s6, -2030
                  lui         a4, 879659
                  slt         a4, s0, s6
                  sra         s10, a0, a3
                  srli        s4, a3, 13
                  xori        t5, a3, 1795
                  sltiu       t2, a4, 1466
                  srli        t0, t4, 9
                  xori        tp, a4, -277
                  ori         a4, a3, -1077
                  srai        ra, t1, 20
                  sltiu       zero, t2, 862
                  slti        s10, a2, -646
                  slti        zero, t1, 1497
                  nop
                  sub         s6, a1, t2
                  sltu        a5, t0, t2
                  srli        zero, s5, 24
                  or          t5, t1, a2
                  addi        zero, s10, -60
                  lui         t1, 896522
                  or          s8, t1, a5
                  andi        t4, s11, 559
                  xor         zero, s8, a6
                  sltiu       zero, a1, 1997
                  auipc       s0, 784397
                  ori         s9, zero, 1886
                  addi        a1, s8, -1068
                  nop
                  ori         a3, tp, 1812
                  xori        s3, gp, -312
                  slti        tp, t4, 453
                  or          s2, a7, a5
                  lui         a5, 521222
                  slli        t5, s4, 5
                  srli        zero, a2, 0
                  srai        a3, s11, 2
                  ori         a0, t0, -819
                  nop
                  addi        t0, t5, 1856
                  sltiu       t3, t6, -874
                  lui         a5, 195266
                  or          gp, a3, sp
                  sub         a7, a7, zero
                  sltu        sp, s2, s2
                  sltiu       s0, a3, 175
                  sll         s8, t2, s11
                  sra         tp, s7, ra
                  sra         a1, s4, a6
                  srli        a1, s2, 7
                  xori        gp, s8, -959
                  xori        a5, s7, 779
                  slti        sp, a1, -129
                  andi        a4, s3, 1620
                  slti        t1, a5, -846
                  srli        s2, s3, 1
                  srli        zero, s5, 29
                  sltu        t1, s1, a6
                  sltu        a0, tp, s9
                  andi        a0, a6, -461
                  addi        a0, a7, 1630
                  slli        a3, s1, 30
                  sll         t0, s6, t6
                  addi        a1, s7, -898
                  addi        a0, a2, -1865
                  and         s9, s9, ra
                  lui         s9, 1001911
                  srli        s9, a0, 22
                  nop
                  nop
                  sra         t5, t4, t3
                  srli        s9, a6, 7
                  add         s6, sp, t6
                  srai        t1, t4, 0
                  andi        gp, t6, 636
                  sub         s0, a1, a7
                  sra         s2, a3, t2
                  and         gp, t3, a4
                  srli        tp, a5, 25
                  srli        a1, s6, 25
                  sra         tp, a5, a1
                  nop
                  ori         zero, t1, 734
                  andi        zero, s8, 1270
                  and         zero, sp, s11
                  slti        s7, t0, -844
                  and         ra, s0, s9
                  xori        tp, s6, 572
                  srl         tp, s0, s4
                  addi        a1, t3, -731
                  xor         t3, s4, a6
                  xori        s2, a3, 807
                  xori        a6, t6, -624
                  add         ra, t0, tp
                  sll         tp, a5, a1
                  lui         a6, 348358
                  sltiu       s0, s10, -1519
                  sub         s6, s10, a6
                  sltu        a7, a1, tp
                  srli        s7, s6, 0
                  sub         gp, s6, t3
                  srl         t5, a4, s3
                  slt         s8, s7, s6
                  auipc       sp, 515799
                  nop
                  and         s7, zero, t4
                  srli        s3, a7, 29
                  lui         t4, 966937
                  srl         s6, t0, a2
                  ori         zero, a3, 885
                  sltiu       s3, s6, 467
                  andi        sp, s4, 2020
                  ori         s4, ra, -1079
                  and         ra, t6, a4
                  addi        zero, sp, -631
                  lui         t4, 294897
                  lui         zero, 257275
                  slt         a4, t1, zero
                  auipc       s2, 552833
                  sra         s3, s8, s2
                  sra         tp, s8, zero
                  and         s9, a1, t6
                  xor         zero, s8, s4
                  slti        s1, s8, 1667
                  and         a6, s3, a4
                  sltu        zero, s9, s2
                  andi        s2, s11, 1143
                  slli        s4, a1, 19
                  sll         a1, s10, tp
                  sra         s9, s4, a4
                  add         s2, gp, t3
                  slt         s5, ra, a0
                  or          s8, t0, a3
                  add         zero, a2, sp
                  sub         s2, zero, sp
                  slt         tp, t2, s10
                  auipc       zero, 866426
                  lui         s6, 585732
                  and         s10, s4, s4
                  or          a0, s6, s5
                  slt         s2, sp, s4
                  and         s8, tp, t5
                  sltu        a1, t6, t4
                  srl         a5, a1, zero
                  and         s9, t3, t0
                  auipc       s6, 1016404
                  or          s7, t4, s1
                  xori        t1, sp, -856
                  sub         a5, s4, a7
                  srai        s0, s7, 16
                  sltiu       t4, t6, -605
                  xori        t2, sp, -1608
                  slt         s5, sp, t1
                  and         s7, t4, sp
                  xori        s7, zero, 909
                  sll         a6, t5, a5
                  lui         s1, 277272
                  addi        s5, a4, 1651
                  or          s9, a2, s3
                  add         t0, s0, a0
                  sll         zero, t3, s1
                  add         t4, a7, t1
                  nop
                  sll         s9, t0, a5
                  sra         a5, ra, t3
                  slti        zero, tp, 1359
                  and         s4, a4, t6
                  add         s6, s9, gp
                  sra         s4, t1, t3
                  sra         a7, tp, t4
                  slt         s2, s10, a5
                  sll         zero, a4, s1
                  or          t1, a4, s2
                  addi        a1, s0, -1262
                  xor         gp, a7, s6
                  add         tp, a1, s9
                  slti        t0, s4, 1076
                  srl         t1, s9, a6
                  slt         s4, a1, sp
                  srai        gp, a5, 20
                  srli        zero, a3, 30
                  lui         t2, 690806
                  sltu        s4, zero, s0
                  slli        t0, s3, 1
                  srai        s3, s2, 1
                  srl         a6, a5, a6
                  sltiu       s5, s6, 714
                  ori         a7, t4, -1789
                  auipc       zero, 3280
                  lui         ra, 430586
                  xori        s0, s0, -40
                  srai        t0, sp, 9
                  slli        t3, a3, 1
                  addi        s6, a7, -1766
                  slli        zero, t4, 14
                  slt         a5, sp, t3
                  srli        s1, t6, 21
                  auipc       zero, 860972
                  sub         s5, s3, s11
                  slt         a1, s8, t3
                  addi        s1, s5, 1446
                  srai        a7, a7, 15
                  srli        gp, gp, 30
                  and         t4, t5, s6
                  or          a5, gp, a2
                  lui         a4, 940543
                  slti        s6, a3, 226
                  and         s9, t5, s6
                  xori        a7, s9, 581
                  xori        tp, t1, -367
                  add         s4, s1, s7
                  sra         zero, t4, t6
                  and         a6, s1, s4
                  ori         s3, s11, -731
                  nop
                  srai        t1, a4, 2
                  sltu        t0, s2, s4
                  ori         s0, s2, 1203
                  addi        s3, t6, -1373
                  slti        s0, t2, -621
                  xori        sp, s11, -297
                  andi        a6, a1, 923
                  slt         s10, t6, a7
                  andi        tp, s4, -995
                  sll         zero, s4, s10
                  sll         s10, s9, t1
                  srai        zero, tp, 19
                  slli        a4, zero, 0
                  xori        s8, s7, 652
                  xori        zero, s3, -1709
                  sra         s10, s3, t1
                  sltiu       t1, s11, -1576
                  xori        t5, s0, 1480
                  xor         s2, s6, s5
                  srli        s9, a1, 27
                  slt         s2, s6, t0
                  srai        sp, a5, 25
                  addi        zero, a0, 1345
                  slti        a0, a2, 34
                  sltiu       t5, a3, 1297
                  srai        a5, s11, 17
                  sll         a7, s10, ra
                  sub         s10, t5, sp
                  andi        zero, t2, 1309
                  srli        s7, s8, 18
                  sltiu       t1, t5, 867
                  add         t2, a1, t6
                  srli        s2, t3, 3
                  sra         s9, sp, zero
                  add         s0, gp, a1
                  xor         a1, s3, s11
                  slti        a0, a2, 230
                  nop
                  ori         t1, s9, 1975
                  sra         a7, s5, s3
                  nop
                  auipc       t0, 727362
                  nop
                  addi        s1, s8, 1232
                  or          a1, a3, t0
                  sub         t3, s11, a6
                  auipc       ra, 852742
                  sltu        gp, s8, sp
                  sra         s0, s1, a4
                  srai        s6, t6, 1
                  or          s7, gp, a0
                  sub         tp, t4, t3
                  sub         zero, t2, s0
                  sll         t0, a4, zero
                  andi        a3, s4, 1116
                  sltu        t0, s10, t4
                  slti        t5, a6, 2001
                  slti        s9, s4, -96
                  sltu        t3, t5, a0
                  andi        sp, s8, -1033
                  xori        zero, t4, 446
                  sltiu       tp, a1, 1507
                  srl         s4, t1, s6
                  addi        s9, tp, -1561
                  lui         a7, 194812
                  sll         s10, s4, t0
                  or          s10, a3, a3
                  nop
                  xori        a0, t3, -1758
                  slli        ra, t3, 30
                  srai        zero, a6, 6
                  lui         s0, 614928
                  srai        a6, a1, 10
                  or          s5, s10, zero
                  xori        gp, a4, -1430
                  lui         a5, 658830
                  slli        zero, s3, 25
                  srl         ra, s9, a1
                  sra         s10, s9, sp
                  sub         a3, sp, t6
                  auipc       t5, 937200
                  srl         zero, s0, s11
                  addi        a7, tp, 1568
                  xori        t0, gp, 470
                  slli        a0, a4, 16
                  srli        s10, t0, 30
                  slt         s5, s3, gp
                  xor         zero, a1, a4
                  and         a4, s4, t1
                  andi        a5, t5, 1410
                  xori        a4, s9, 1693
                  srl         a6, s9, a6
                  ori         tp, t0, -1438
                  xor         sp, s1, s7
                  add         ra, s6, gp
                  ori         a3, s8, 1429
                  or          s10, s11, a0
                  slli        zero, t0, 29
                  srai        s1, sp, 6
                  sll         s10, t0, s2
                  sltiu       t3, a5, 635
                  sltiu       a0, zero, 938
                  srli        a6, s8, 19
                  sub         s8, t4, s9
                  srai        a1, s1, 5
                  xor         tp, a6, s0
                  srai        s5, t5, 7
                  srl         a4, tp, s5
                  slli        s10, s0, 18
                  slli        s9, t6, 0
                  sub         a7, sp, s0
                  nop
                  srai        a7, s4, 14
                  nop
                  and         s2, t5, t6
                  sra         a5, t0, t0
                  auipc       t3, 54744
                  slti        s3, a5, 72
                  andi        s9, s9, -367
                  andi        tp, sp, 546
                  sltiu       s6, t4, 593
                  sra         ra, s0, a4
                  srli        s8, t1, 2
                  xori        t3, zero, 801
                  slti        a0, a4, 1402
                  xor         zero, a2, s1
                  sltiu       a1, t4, -1645
                  slt         s2, s11, a5
                  lui         t2, 19974
                  srai        gp, t5, 11
                  srli        s8, s6, 16
                  srl         s8, t1, s10
                  srli        s8, zero, 5
                  sltiu       a3, s4, -152
                  lui         t2, 418773
                  and         s3, s8, s3
                  addi        s1, zero, -94
                  sll         s5, t4, s5
                  add         tp, t0, t3
                  ori         a5, s6, 146
                  srli        a0, s9, 5
                  nop
                  and         s7, a0, sp
                  or          tp, t1, s0
                  sll         a4, ra, s10
                  lui         s5, 78488
                  srai        s3, s2, 23
                  or          sp, a0, a5
                  xor         zero, t4, s3
                  slt         s1, gp, a1
                  and         a3, sp, s0
                  srai        ra, a0, 10
                  sltu        s4, gp, a6
                  slt         t0, t4, t1
                  sll         s2, s10, s9
                  slli        zero, a6, 19
                  or          a3, a4, s1
                  xori        zero, ra, -1250
                  auipc       zero, 221484
                  or          a6, t0, a7
                  ori         zero, t3, 1381
                  nop
                  slt         gp, s9, a3
                  auipc       a0, 772489
                  lui         s9, 429466
                  lui         gp, 272705
                  or          zero, s0, t6
                  sltu        s3, zero, a2
                  nop
                  sll         s8, t6, t5
                  or          t3, a3, t5
                  srl         t0, a5, s6
                  slli        a7, a6, 5
                  srli        zero, t2, 8
                  sltu        a7, a3, a5
                  srai        zero, s1, 6
                  srl         a0, a1, ra
                  auipc       a0, 699699
                  sll         a1, a4, sp
                  sub         s6, a7, s7
                  sltu        zero, t2, s10
                  auipc       zero, 539777
                  add         t2, ra, s1
                  add         s7, s9, s2
                  srli        ra, s7, 0
                  lui         a3, 541955
                  sltu        s3, s1, s2
                  slti        sp, s4, -1257
                  add         s1, s0, s0
                  slti        t0, t0, -1462
                  addi        sp, t1, 905
                  add         t5, t0, t2
                  or          a6, s10, t4
                  srl         s10, a2, a5
                  sltiu       s0, t5, 1583
                  andi        a5, a4, -290
                  sltiu       t0, a7, -555
                  add         s8, a2, sp
                  slti        t3, a6, 745
                  or          tp, a7, s9
                  or          t4, a6, s9
                  slli        gp, s3, 12
                  slli        t1, t3, 14
                  slt         s5, a2, a2
                  xori        s2, s3, 945
                  or          s0, gp, s7
                  slli        s10, tp, 24
                  sub         s10, s0, gp
                  srai        zero, s10, 3
                  or          s10, a7, a7
                  or          a6, s3, tp
                  addi        s1, s10, -1415
                  add         zero, tp, s2
                  srli        a4, a7, 28
                  auipc       s8, 867739
                  slti        gp, t5, -1453
                  sra         a3, t4, a2
                  slt         s3, s1, t0
                  srl         a7, gp, s3
                  add         zero, a6, t1
                  ori         s6, t6, 728
                  srl         a1, s6, s2
                  addi        s2, a5, 1241
                  slli        a3, s4, 7
                  xor         a7, s8, a3
                  sll         a4, t1, a5
                  srai        a6, t2, 23
                  srl         s7, s0, s7
                  or          s5, t3, t6
                  or          ra, s4, t0
                  srl         a7, s1, t2
                  srai        a3, s10, 5
                  add         zero, t3, a2
                  and         t2, s8, zero
                  sll         a4, sp, a4
                  or          t1, s3, t2
                  sltu        a0, t6, a3
                  sltiu       zero, t3, 393
                  add         a7, s0, ra
                  addi        t1, s4, 771
                  and         a6, t2, a4
                  sra         gp, s11, t3
                  addi        s9, a1, 1855
                  sll         s2, t2, t6
                  nop
                  sltiu       zero, t5, -869
                  sltiu       a6, t4, 1695
                  sltu        s7, gp, tp
                  srl         s2, sp, t2
                  or          s9, t4, zero
                  xor         a5, s9, tp
                  andi        s5, s2, -438
                  sra         a7, a1, t5
                  xor         zero, s1, s3
                  sub         a7, s9, s5
                  auipc       zero, 585706
                  sltu        t3, s8, gp
                  sltu        a4, gp, s8
                  or          s4, a7, a2
                  nop
                  slt         s6, t4, a2
                  ori         sp, t4, -1493
                  andi        a7, s10, -32
                  sub         t0, s1, t4
                  srl         s10, a6, gp
                  and         zero, ra, t2
                  sltu        tp, a1, sp
                  xori        t4, s2, 2031
                  andi        a1, s2, 2017
                  slti        s10, gp, 1606
                  srl         s10, a4, s4
                  slt         a3, ra, a6
                  auipc       s5, 542989
                  sltu        a6, a4, t3
                  nop
                  srl         a3, zero, s10
                  addi        s5, s3, -768
                  sltiu       ra, s6, -1403
                  sra         t0, ra, s5
                  srl         s3, t1, ra
                  sltu        tp, s8, t0
                  auipc       s2, 507526
                  sub         a4, a0, a6
                  or          t2, s9, t1
                  lui         t2, 7443
                  nop
                  lui         t2, 654127
                  addi        t4, gp, 1464
                  auipc       zero, 152453
                  auipc       s5, 1048398
                  nop
                  sra         tp, s4, t1
                  sltiu       s2, sp, 1496
                  slti        s8, sp, 1167
                  add         s2, s1, t2
                  xori        a0, t0, 1769
                  slti        s1, gp, 500
                  srai        a7, s3, 21
                  sltu        s6, a3, s7
                  srai        s6, a1, 10
                  sltu        s9, a3, t4
                  sub         s1, t2, tp
                  slt         ra, t6, s6
                  andi        s0, tp, 282
                  sll         zero, s3, s6
                  lui         a6, 892879
                  addi        gp, zero, -456
                  sub         gp, zero, t3
                  slt         gp, t0, s2
                  sub         a6, ra, s8
                  and         s7, t0, s6
                  lui         a1, 94650
                  addi        zero, t0, 1378
                  and         s10, s7, a1
                  sltu        s5, tp, tp
                  slti        zero, s5, 553
                  andi        zero, s5, -636
                  sra         s2, a7, s4
                  sra         t1, ra, s0
                  slti        a7, gp, -1397
                  sub         a4, s2, a2
                  srli        a7, a1, 21
                  srai        s4, s2, 30
                  sra         zero, a0, a4
                  slt         t5, s3, tp
                  sll         zero, a6, gp
                  slt         zero, t1, tp
                  xori        t5, zero, -152
                  sll         a0, t3, s7
                  sll         zero, s10, a3
                  slti        a3, t6, -689
                  sub         t5, s2, a2
                  sub         zero, ra, a7
                  andi        a7, zero, -4
                  auipc       s3, 442340
                  or          a1, a6, a2
                  sub         s9, a6, s7
                  srl         tp, s11, a3
                  srai        a4, t3, 18
                  xor         a6, s6, t1
                  and         t0, zero, a5
                  srl         t2, s5, s5
                  xori        s1, s6, -1694
                  srl         s0, s5, ra
                  srai        t3, t5, 14
                  slti        t0, s4, 889
                  add         t1, tp, a3
                  auipc       t5, 526813
                  srl         s5, s11, a3
                  sltu        zero, a3, s7
                  or          sp, s3, t1
                  xor         s3, a0, t0
                  sub         s4, s8, tp
                  xor         s2, t0, s4
                  xori        a5, s5, 286
                  sra         a5, a6, t0
                  sra         s6, t2, t1
                  srai        t2, t5, 6
                  sll         s0, s7, s2
                  andi        zero, tp, -902
                  srli        a7, s0, 30
                  or          t4, s3, zero
                  ori         zero, s9, 221
                  add         s0, a1, s8
                  sll         zero, s2, a3
                  srli        t2, tp, 22
                  sltiu       s0, s3, -300
                  ori         zero, zero, -1987
                  sll         a6, tp, t0
                  auipc       s1, 95759
                  sub         gp, a2, sp
                  or          gp, a3, s4
                  add         zero, a5, s5
                  ori         zero, t0, -1606
                  sub         a0, t5, t0
                  and         a6, t4, s6
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_29
                  li         a3, 0x22a626a9
                  li         t4, 0x780af0f9
                  li         s3, 0x0
                  li         t3, 0x1
                  li         s7, 0x0
                  li         s10, 0x0
                  li         s8, 0x0
                  li         a0, 0x0
                  li         t2, 0x270a92fe
                  lui         t3, 986379
                  lui         zero, 545024
                  nop
                  addi        t1, s9, -292
                  sub         s7, s10, s10
                  sub         s0, a1, t0
                  lui         sp, 982923
                  sub         t0, s10, t0
                  addi        t2, zero, 1767
                  lui         t2, 139263
                  addi        a0, a1, -1203
                  lui         s9, 741894
                  add         s5, a7, t4
                  sub         tp, gp, s4
                  add         zero, s2, a6
                  lui         s5, 45824 #end riscv_int_numeric_corner_stream_29
                  srai        t3, ra, 27
                  nop
                  xori        t5, s0, -894
                  sltu        s2, s3, a0
                  nop
                  xor         zero, a2, s0
                  sltu        s9, sp, s3
                  xori        gp, a4, -1102
                  xori        sp, s2, -1989
                  srli        t5, t6, 31
                  sltiu       zero, a1, 1732
                  and         gp, s6, a1
                  xori        zero, a5, -114
                  srai        tp, tp, 31
                  srl         tp, ra, zero
                  sub         s9, s2, t2
                  slli        zero, a3, 1
                  slt         s4, t4, s3
                  sltiu       s5, a6, 7
                  slti        s9, tp, -1942
                  slti        gp, t2, 1961
                  nop
                  auipc       sp, 677823
                  andi        s2, s1, -1686
                  xori        a3, a5, 1848
                  srl         t3, a5, s10
                  sub         t1, zero, gp
                  srl         s3, gp, s2
                  sltiu       a3, s2, -1784
                  sra         a7, tp, a2
                  or          tp, a2, s11
                  lui         s5, 912880
                  add         a4, tp, s8
                  sll         s10, a4, s6
                  or          a6, t4, t0
                  srl         a1, s0, s11
                  add         s5, t4, sp
                  auipc       s0, 177862
                  andi        s8, a3, 1276
                  xor         sp, a1, t3
                  andi        a7, a4, -433
                  srli        zero, sp, 14
                  slli        t3, t3, 6
                  sll         sp, a6, s3
                  slti        t0, s9, 1758
                  slt         s9, a0, s9
                  lui         a4, 663709
                  sub         s0, a0, t3
                  ori         s2, a1, 1236
                  sltu        s6, gp, a0
                  slt         zero, s5, s4
                  ori         t3, s0, 992
                  ori         s2, s11, -1119
                  ori         t2, a0, -1273
                  sltu        s8, s11, s10
                  slti        t5, zero, 1267
                  slti        zero, s2, 1106
                  slli        s10, t6, 6
                  li         t4, 0x0 #start riscv_int_numeric_corner_stream_2
                  li         s1, 0x1
                  li         t3, 0x0
                  li         s9, 0x48b26381
                  li         s8, 0x1
                  li         s0, 0x1
                  li         t5, 0x0
                  li         s10, 0x619c6cb7
                  li         s6, 0x0
                  li         s7, 0x16cba3dc
                  add         s5, zero, s6
                  nop
                  sub         t5, s0, s7
                  add         t1, t6, t6
                  addi        s10, t5, -971
                  sub         a7, s7, a6
                  lui         a4, 513046
                  addi        a0, s11, -1823
                  sub         s7, a1, gp
                  sub         zero, t2, s10
                  add         s1, s8, s2
                  sub         s0, s11, s5
                  add         a7, tp, t6
                  sub         t0, a3, s4
                  nop
                  addi        a6, a6, -1961
                  nop
                  lui         s1, 449041
                  addi        gp, a4, -322
                  add         a4, a7, s6
                  sub         a7, s3, gp
                  nop
                  add         s3, a5, s7
                  add         a6, t6, gp #end riscv_int_numeric_corner_stream_2
                  xori        t0, a3, -73
                  xori        s8, ra, -1276
                  and         a5, s4, s6
                  srli        s4, a3, 24
                  lui         s5, 215940
                  and         s4, a6, gp
                  add         t3, tp, a2
                  xor         a3, s2, s9
                  xori        s10, a6, 1944
                  sll         s1, a1, t6
                  sra         s6, a7, s5
                  lui         t4, 606029
                  auipc       s5, 521985
                  sra         s2, s11, s3
                  andi        t0, zero, 983
                  slt         a5, t4, a6
                  srli        t1, sp, 28
                  ori         s0, t3, 996
                  sltu        tp, a2, t1
                  srl         t1, a4, a4
                  auipc       zero, 771099
                  nop
                  lui         t1, 942053
                  srli        zero, gp, 6
                  xori        gp, s11, -1850
                  slt         a5, s2, t3
                  or          a6, a1, s9
                  srai        zero, a1, 27
                  sll         t4, t5, a6
                  andi        a6, ra, 64
                  xori        s9, s4, 1593
                  slli        a4, t2, 28
                  sll         zero, t1, s0
                  slti        s8, s1, 391
                  xori        a1, a1, -662
                  xor         sp, a7, sp
                  or          s5, zero, t1
                  xori        s0, zero, -1554
                  xor         s9, s8, s11
                  srl         s1, a2, s1
                  sltu        a0, gp, s8
                  auipc       a0, 819785
                  nop
                  auipc       tp, 644841
                  sra         t0, s10, ra
                  lui         t1, 398268
                  slt         sp, s2, a7
                  nop
                  nop
                  ori         s1, s3, -1520
                  slli        tp, a0, 0
                  add         t5, t3, t5
                  and         a5, t6, a6
                  slti        a6, t5, 487
                  nop
                  and         a3, a1, a3
                  slti        zero, s11, -2036
                  nop
                  or          s0, t2, gp
                  slt         t2, s5, s3
                  andi        s10, s4, 314
                  srai        t4, a7, 9
                  ori         a4, a5, -726
                  auipc       t3, 862470
                  sltiu       t4, t2, -91
                  andi        t2, a3, -438
                  ori         a1, t2, -75
                  ori         s1, t2, 1807
                  srai        a7, s4, 16
                  srli        s10, s3, 27
                  sub         s4, zero, a3
                  nop
                  sll         zero, s0, s10
                  sub         s0, a5, t2
                  auipc       a0, 389405
                  slt         t5, tp, s5
                  slli        s5, s0, 20
                  xori        s3, t3, -580
                  addi        s6, s3, -1207
                  sltu        s6, a6, sp
                  sltu        t3, a6, s3
                  sub         s5, s0, gp
                  xori        s7, s6, 1295
                  or          s6, t2, s8
                  add         a5, t4, t4
                  nop
                  nop
                  auipc       zero, 375745
                  xori        s8, t2, 1951
                  slli        t0, a2, 23
                  li         a3, 0x67d86fd8 #start riscv_int_numeric_corner_stream_21
                  li         s10, 0x1
                  li         t0, 0x0
                  li         t5, 0x0
                  li         t4, 0x1
                  li         t3, 0x5b9b8537
                  li         s8, 0x0
                  li         a5, 0x0
                  li         ra, 0x3165bf2b
                  li         a1, 0x6defe1d2
                  sub         s0, a3, ra
                  lui         a4, 97316
                  addi        zero, t6, 2009
                  add         t3, a5, s5
                  lui         s7, 152308
                  lui         gp, 451453
                  addi        s1, a0, -1319
                  add         t1, s1, gp
                  addi        ra, gp, -299
                  sub         zero, s6, s3
                  addi        t3, t4, -923
                  sub         t2, s5, s5
                  lui         t5, 232604
                  addi        s10, a0, -1558
                  add         ra, s7, t3
                  add         a6, t1, a3
                  addi        a6, s10, 1178
                  addi        s5, tp, 508
                  addi        a0, s9, -1537
                  addi        a1, t3, 948
                  lui         gp, 731524
                  lui         s6, 798350
                  lui         t0, 688896
                  nop
                  lui         a5, 591877 #end riscv_int_numeric_corner_stream_21
                  sltu        s5, a3, s6
                  auipc       zero, 438409
                  and         tp, s4, a6
                  xori        s8, a4, 915
                  srl         s9, t6, t1
                  sltu        zero, sp, s11
                  srai        zero, tp, 14
                  slt         s0, gp, a6
                  sra         t1, gp, s2
                  srl         zero, gp, gp
                  slli        a3, tp, 24
                  addi        s0, a0, 1624
                  srai        t4, sp, 17
                  ori         ra, s9, 238
                  nop
                  andi        s1, t2, -1049
                  sra         a4, t2, zero
                  sltu        sp, tp, s5
                  slti        zero, t3, 922
                  slt         s3, s10, s2
                  srai        s5, s4, 28
                  lui         a4, 89243
                  srai        s6, t2, 25
                  srl         zero, s3, t3
                  srli        zero, s4, 27
                  xor         a4, s8, s6
                  lui         t5, 980125
                  sltu        t5, zero, sp
                  slt         ra, s0, a1
                  xori        t0, ra, -297
                  or          a7, s7, a6
                  nop
                  srai        s0, a0, 28
                  sltiu       a1, t6, 675
                  sub         s10, s11, t0
                  andi        a7, zero, -571
                  sub         zero, a1, t5
                  slt         s10, a3, s11
                  sub         zero, a1, t0
                  slti        zero, s9, 1689
                  sub         zero, s4, a1
                  srai        sp, tp, 16
                  lui         t5, 807103
                  sll         t0, t3, s10
                  or          t2, s10, s2
                  srl         zero, s9, a7
                  andi        t5, s4, -1652
                  slli        s1, s5, 19
                  add         s9, s3, gp
                  auipc       t4, 47933
                  slti        s1, t1, 1189
                  sltiu       a0, s8, -442
                  sub         s8, t0, ra
                  nop
                  sltu        s10, s4, gp
                  sltiu       s10, t2, -1367
                  slt         zero, a2, a3
                  and         a5, s4, s2
                  xor         s10, gp, a3
                  sll         t2, t2, s10
                  add         zero, a7, a6
                  lui         a4, 526754
                  slti        t1, t1, 928
                  slt         a4, tp, gp
                  sra         zero, s4, s10
                  srai        a5, t5, 8
                  xori        t2, a2, 694
                  xori        s1, t1, -912
                  slt         s6, a6, sp
                  addi        t2, ra, 377
                  slt         zero, a3, a6
                  sub         s4, s3, a3
                  or          s10, ra, a0
                  auipc       zero, 670313
                  and         a6, a4, t4
                  sll         s9, a3, sp
                  slti        a1, a2, 1306
                  nop
                  sub         zero, s9, a3
                  or          s8, a5, s8
                  xori        s10, t1, -154
                  srli        a5, s3, 11
                  andi        t5, s10, 1488
                  slt         t4, a5, sp
                  slt         t5, t1, t1
                  or          s7, a0, t0
                  addi        a5, a3, -324
                  or          t1, a5, tp
                  srai        t2, s5, 24
                  xor         zero, sp, tp
                  add         s10, t3, a7
                  xori        t3, s8, 1520
                  sll         t2, a4, t5
                  add         sp, gp, a2
                  xor         s4, t4, ra
                  auipc       gp, 861598
                  nop
                  nop
                  slti        zero, s2, -1622
                  add         a7, a4, s9
                  or          t2, t4, s6
                  andi        a7, s8, -1597
                  srai        sp, s5, 23
                  auipc       a3, 5534
                  addi        zero, gp, -1794
                  srli        zero, s11, 24
                  or          a1, s3, s8
                  slt         t4, a6, a6
                  ori         tp, t3, -738
                  nop
                  sltiu       a4, sp, 1801
                  add         zero, t4, a3
                  srai        zero, s4, 11
                  and         s9, s11, sp
                  srai        a4, s5, 2
                  auipc       zero, 537902
                  andi        a5, a7, 583
                  srli        tp, ra, 10
                  ori         a3, s6, -848
                  ori         s3, t4, -1725
                  slt         a1, t3, zero
                  sra         s3, sp, s9
                  add         t3, a6, s1
                  or          t1, t4, s6
                  slli        t4, a6, 9
                  sll         zero, s11, s11
                  lui         tp, 16212
                  sub         s3, t5, s11
                  slli        s8, s3, 4
                  addi        t1, a1, -1271
                  addi        tp, a4, -1330
                  slt         t1, t4, a0
                  andi        a0, s11, 1270
                  nop
                  xor         t1, sp, zero
                  sra         zero, t2, t5
                  slti        gp, s2, -1029
                  slli        t0, tp, 19
                  srai        s9, s5, 7
                  and         zero, s1, t3
                  slli        s2, s1, 19
                  srai        s9, s6, 11
                  xor         t0, s0, a4
                  or          a0, sp, s5
                  sltiu       a4, t0, 903
                  sltiu       s6, s11, 1190
                  auipc       s8, 664888
                  andi        t5, s2, -838
                  srai        a7, t1, 20
                  sra         s5, a3, gp
                  slti        t0, s8, -647
                  xor         gp, t6, s0
                  lui         s10, 557105
                  slt         zero, s0, s1
                  add         zero, a2, t5
                  xori        a3, s4, 599
                  slli        zero, s6, 21
                  srl         s8, a5, a4
                  sltu        zero, t3, tp
                  auipc       zero, 162131
                  srl         zero, t6, a4
                  ori         s0, s5, 112
                  and         a1, t4, a0
                  xori        zero, a2, 1704
                  ori         s7, t4, -1500
                  slt         sp, gp, a2
                  srli        zero, s11, 8
                  srl         s9, a3, s10
                  srai        t1, s11, 9
                  sll         s2, t2, a0
                  sub         s6, zero, s7
                  or          a4, tp, s3
                  sra         s1, a2, s9
                  sub         t2, a7, t5
                  xor         t1, a6, tp
                  sltu        tp, a3, s1
                  sltu        s2, a2, s10
                  sra         a5, s10, a3
                  srli        t0, sp, 18
                  srl         a3, t0, s11
                  add         s5, s4, s4
                  sll         a4, s5, s1
                  sll         zero, t2, a3
                  sub         a1, a6, sp
                  and         s4, a4, a0
                  srli        s8, a6, 8
                  auipc       s0, 764704
                  slti        a3, zero, 1074
                  and         s8, t0, t5
                  srai        zero, s4, 11
                  srl         s1, a6, s7
                  sll         t4, s2, t6
                  ori         t3, t0, -1023
                  or          a4, s3, s11
                  slli        t3, a4, 4
                  srl         s0, s8, t2
                  lui         a6, 403501
                  addi        s5, s7, 676
                  sll         s9, a1, s10
                  sub         s5, t0, s9
                  srli        zero, s11, 23
                  or          a6, s7, s10
                  xor         t5, s9, zero
                  or          s10, t2, s5
                  sra         s10, a7, a4
                  or          t3, a5, a6
                  slt         zero, s0, s0
                  auipc       a1, 124099
                  sltu        s1, s5, a1
                  sltiu       s5, s10, 1139
                  auipc       s10, 170921
                  slli        zero, t0, 3
                  sll         t3, a2, a4
                  xori        a1, t4, -942
                  add         zero, t5, s1
                  sll         t5, tp, s8
                  srai        zero, s9, 20
                  and         s5, tp, a0
                  slli        a3, a5, 13
                  xor         t3, sp, s10
                  slt         s3, s7, a3
                  xor         t0, a6, s11
                  srl         s0, a1, a5
                  xori        tp, s5, -1728
                  sub         t3, s3, t4
                  xori        sp, t0, 1739
                  xori        s9, t1, 736
                  sub         a0, zero, s4
                  xor         s1, s4, t4
                  xor         a1, s3, s3
                  slt         a6, a7, t1
                  or          s6, t2, t2
                  srli        a4, zero, 27
                  xor         s6, t0, t5
                  addi        s7, t2, 1103
                  xor         s3, a3, a6
                  nop
                  lui         s9, 5149
                  add         t5, a6, a3
                  nop
                  add         s7, t6, t1
                  ori         tp, t1, 484
                  lui         sp, 167878
                  sltu        t3, s5, s6
                  sltiu       zero, a7, 700
                  srai        s4, s10, 8
                  xori        a3, t1, 561
                  slt         t0, t3, t2
                  xor         a6, s3, a5
                  add         s4, t4, s8
                  lui         t1, 185215
                  andi        t0, zero, -1866
                  slli        s3, s3, 9
                  sltu        a4, sp, sp
                  slli        a5, s2, 12
                  or          a0, a5, sp
                  slt         a1, t3, s10
                  xor         a0, a6, s1
                  slli        a4, a0, 30
                  add         gp, t5, s10
                  andi        s2, a6, -1334
                  auipc       zero, 476543
                  xori        s6, ra, 1210
                  ori         s4, s7, 1587
                  xor         t0, a1, a0
                  slti        t3, a4, -1132
                  sra         t0, zero, a3
                  srai        t2, s6, 25
                  slti        gp, a3, 1552
                  addi        t1, t6, -1182
                  nop
                  xori        s8, s9, 1883
                  add         s0, t5, s6
                  slt         t5, a0, s9
                  sll         s2, t5, s7
                  sra         t5, s8, s1
                  nop
                  srli        t5, t3, 9
                  sub         zero, t4, a7
                  sltu        zero, a2, t6
                  nop
                  nop
                  xor         t0, a2, t2
                  srli        t5, t3, 0
                  slt         zero, t4, tp
                  sll         zero, s1, sp
                  sub         zero, s6, t2
                  andi        t4, t6, -839
                  slt         a4, a0, a6
                  sra         zero, s2, s2
                  nop
                  andi        s2, s11, -747
                  srl         zero, a3, s11
                  andi        tp, t5, -601
                  ori         a6, a7, 206
                  or          t0, t5, t2
                  sltu        s5, s4, s3
                  xori        a7, t6, -293
                  and         s8, s5, a1
                  sll         s10, s0, gp
                  xor         s6, a3, t0
                  sub         t1, s4, s8
                  ori         s8, a4, 1051
                  andi        ra, s11, 788
                  srli        gp, s5, 30
                  xor         zero, a1, s11
                  lui         s0, 457012
                  sltiu       gp, s7, 1156
                  sltiu       ra, a5, -314
                  slli        zero, s0, 12
                  srli        a1, s9, 24
                  or          t5, t4, s1
                  sltu        a3, a0, s2
                  xori        a7, t6, -388
                  sll         a0, s4, s8
                  add         a6, s2, s5
                  and         t3, s2, a7
                  slti        t3, s0, 630
                  ori         zero, a0, -204
                  ori         s1, t2, -488
                  addi        s7, s4, -1353
                  ori         t5, t5, 800
                  or          a5, a4, s5
                  nop
                  add         a5, s9, tp
                  slt         s0, s11, s5
                  lui         t0, 459290
                  slt         s2, a4, s5
                  nop
                  srl         a0, a3, t1
                  srl         s4, a3, s6
                  or          t5, s9, t6
                  slt         a6, s6, t4
                  srli        s6, a2, 23
                  xori        a3, gp, 1241
                  ori         t3, t5, 1297
                  xori        a6, s8, 1293
                  and         t4, t6, s7
                  srli        ra, t3, 5
                  srl         tp, t3, t3
                  or          a5, s9, zero
                  nop
                  slti        a6, t3, 471
                  sltu        a4, a5, s8
                  srai        s10, s7, 23
                  lui         s8, 805552
                  nop
                  srai        a7, s2, 22
                  sltu        t0, sp, a4
                  lui         t2, 1015988
                  sll         sp, s4, ra
                  sub         s0, s1, s11
                  andi        t0, tp, 897
                  sll         s2, a1, s0
                  or          ra, a7, t4
                  slti        a1, s7, -885
                  xor         a1, t5, t3
                  addi        t2, t2, 607
                  xor         tp, gp, s8
                  xor         s3, a6, s1
                  sub         s6, a0, t6
                  auipc       s3, 349635
                  xor         zero, t2, tp
                  xori        s1, s3, 636
                  sltu        s1, tp, ra
                  sll         t5, s1, a7
                  nop
                  slti        sp, t3, -369
                  and         a1, t4, a3
                  srai        s8, s1, 29
                  slt         sp, t6, a6
                  auipc       s2, 43731
                  auipc       a0, 940863
                  slti        zero, t0, -1007
                  xori        a5, t0, -1581
                  andi        ra, sp, -715
                  auipc       s9, 127015
                  slli        zero, s3, 30
                  srli        zero, t3, 18
                  auipc       ra, 799235
                  and         s3, s1, t5
                  or          a0, a4, s6
                  xori        zero, s6, 1615
                  slli        s4, s11, 8
                  slti        s4, a7, -1262
                  srli        s4, s4, 14
                  srai        a7, s0, 4
                  srai        a4, tp, 3
                  andi        ra, zero, -713
                  slli        t2, s5, 28
                  srli        zero, t0, 3
                  nop
                  xori        s6, t6, 621
                  ori         t5, a4, -101
                  addi        t3, a2, 1041
                  slti        s7, sp, 466
                  andi        tp, a1, -1541
                  slt         s5, a7, ra
                  auipc       s10, 62400
                  sltiu       s10, a5, -1062
                  slti        s8, t6, -780
                  xor         tp, a6, a7
                  xor         zero, zero, s8
                  andi        zero, t4, 1634
                  lui         s8, 735297
                  srai        zero, t4, 15
                  slt         s4, s2, t5
                  slt         a6, s1, a3
                  sub         a7, t1, s3
                  add         zero, s7, zero
                  xor         a0, s6, sp
                  nop
                  add         a1, a1, t5
                  nop
                  and         s3, t3, s4
                  xor         a4, a4, s6
                  srl         zero, ra, a5
                  slt         sp, t4, s4
                  slti        s4, a0, -703
                  sll         t2, s9, s9
                  xor         a6, t2, a6
                  slt         zero, s1, a6
                  nop
                  sll         ra, s11, tp
                  slti        t4, s6, 755
                  addi        s3, s1, 25
                  sltiu       s10, s6, 706
                  or          ra, s7, a3
                  slli        a4, ra, 12
                  slli        a4, sp, 21
                  addi        zero, sp, -1336
                  nop
                  ori         s3, t1, -163
                  srai        a5, s0, 22
                  nop
                  and         zero, s5, gp
                  srl         s8, s5, a5
                  auipc       s8, 1029739
                  sll         zero, t0, s7
                  sub         t2, s4, a1
                  srli        zero, t5, 3
                  slti        a7, s0, -1031
                  sra         s5, s8, s11
                  or          zero, a0, t5
                  sltiu       s10, sp, 824
                  add         a0, t3, a3
                  add         s2, s8, s5
                  sra         s3, s4, t2
                  sub         a4, t3, s11
                  and         zero, a2, s5
                  sub         zero, t3, a1
                  add         s10, s5, s9
                  auipc       a6, 47777
                  sra         t1, a1, t2
                  slt         t4, a1, s5
                  slt         t3, s2, s7
                  lui         a7, 776638
                  lui         gp, 778525
                  slt         t3, s7, a2
                  ori         a4, zero, 495
                  slti        gp, t3, 1012
                  add         s8, s11, s11
                  addi        a1, a3, 654
                  sra         a7, s8, s4
                  slli        a7, s5, 19
                  slti        ra, a2, 41
                  and         t3, t6, t1
                  sub         a1, sp, a7
                  auipc       a5, 244548
                  auipc       zero, 178143
                  and         tp, zero, s10
                  sltiu       t1, t6, -136
                  auipc       s6, 636117
                  add         s7, t5, t5
                  sltu        s7, zero, t0
                  or          s10, s0, s5
                  auipc       a7, 694384
                  slli        s2, tp, 27
                  xor         zero, s7, ra
                  slt         a0, s2, s9
                  sltiu       zero, a5, 384
                  nop
                  sll         a0, a5, s4
                  slt         tp, t2, t2
                  slt         a7, t2, s3
                  lui         zero, 730576
                  slli        s10, s7, 2
                  sra         s6, s8, t6
                  xori        gp, a0, -153
                  and         t0, s10, a1
                  ori         t2, s4, 1693
                  lui         a1, 195607
                  sra         sp, t2, t1
                  or          s4, s6, s3
                  sra         t2, s3, a3
                  sll         t4, zero, t4
                  andi        t0, ra, -2
                  srl         zero, s4, a4
                  sll         zero, gp, s11
                  auipc       a4, 296719
                  andi        a6, t3, 683
                  nop
                  nop
                  slli        s6, a6, 11
                  srli        s4, s8, 9
                  and         gp, s11, zero
                  addi        t5, s6, -2003
                  add         a0, s4, s11
                  srli        zero, s10, 24
                  xori        a4, sp, -1280
                  and         s10, a1, a6
                  slli        s8, t5, 17
                  ori         a6, s4, 76
                  lui         t3, 651884
                  lui         t1, 348543
                  or          tp, a3, s2
                  srai        s8, s5, 28
                  ori         zero, s7, -1275
                  slli        zero, a1, 27
                  sll         a0, s3, s3
                  auipc       s7, 308051
                  sll         t0, s9, s8
                  slti        s1, s0, -738
                  sra         a7, s6, s8
                  lui         a1, 256477
                  andi        zero, a6, 504
                  xor         zero, t4, a3
                  sltiu       a7, zero, 1265
                  addi        a0, s1, -363
                  add         a0, s1, s6
                  or          s9, t2, t6
                  xori        zero, ra, 464
                  andi        s10, s3, 196
                  xori        ra, zero, 152
                  slti        t4, a5, 1237
                  sra         zero, a3, s3
                  and         s5, s4, s5
                  sra         a5, a7, t4
                  srai        a7, s3, 25
                  slt         a5, gp, ra
                  sll         a4, a4, s2
                  sltiu       zero, a0, -571
                  and         zero, t4, t4
                  srli        tp, s2, 21
                  slt         gp, t0, t4
                  add         zero, t5, a1
                  add         s0, t6, s5
                  addi        a1, a1, 826
                  lui         t0, 511256
                  sll         a5, t6, t5
                  addi        sp, t1, 1816
                  sra         s1, t1, t2
                  auipc       t2, 929248
                  add         s7, s6, a4
                  addi        a4, tp, -143
                  sll         gp, s0, tp
                  add         a1, s9, s11
                  srl         s1, a1, s7
                  slt         t2, t1, s11
                  slti        a3, gp, 239
                  addi        s5, a3, -1084
                  slli        s8, t0, 28
                  lui         s9, 315695
                  slt         ra, s9, ra
                  auipc       s2, 942606
                  slti        a6, ra, 1844
                  slti        a5, a7, 1313
                  auipc       zero, 256088
                  srli        s9, t5, 1
                  sub         s10, t4, s5
                  slt         sp, s6, t2
                  addi        a3, tp, 2008
                  ori         s5, s1, -694
                  sltu        s7, a0, a6
                  srl         s8, sp, ra
                  slt         s4, t4, t3
                  lui         s7, 1046572
                  sltiu       sp, s8, -1628
                  xori        a5, a7, 265
                  xori        a1, a2, -775
                  srli        sp, a0, 12
                  slli        a7, s11, 5
                  sll         s1, t4, a2
                  sll         s2, t3, s2
                  or          sp, zero, s5
                  xori        s10, s5, 1612
                  sll         s1, gp, s9
                  andi        t2, s3, -1949
                  slti        tp, s4, 1529
                  sltiu       s1, gp, 211
                  xori        s7, a3, 1384
                  slt         a7, t4, t1
                  auipc       s5, 645905
                  nop
                  slli        a3, a2, 13
                  ori         zero, s7, 1567
                  xor         tp, sp, s0
                  srli        zero, s10, 0
                  sltiu       a1, t6, 1740
                  andi        s5, a1, -1148
                  sll         a1, s7, a1
                  sltiu       s0, ra, -20
                  slli        t4, t0, 26
                  or          t2, s2, tp
                  sra         t0, a5, t1
                  sub         s6, s9, s9
                  slt         s4, s2, t6
                  andi        s9, a1, 1353
                  sltu        t3, a3, zero
                  sltu        zero, s11, s11
                  sltu        s7, s0, s6
                  auipc       t4, 72364
                  slli        a0, t2, 7
                  slt         gp, a4, t2
                  sltiu       t3, s3, -4
                  slti        s9, s11, -1374
                  or          t3, a2, t2
                  sra         tp, a0, a3
                  nop
                  xor         t3, t0, a7
                  slti        t2, a7, 1224
                  xor         s0, s3, s5
                  srli        s0, t0, 27
                  sub         zero, s7, t2
                  sra         t0, zero, s2
                  xor         s8, t5, a7
                  xori        s4, t3, 1403
                  addi        zero, s0, -1153
                  add         s8, s1, ra
                  ori         a1, s0, 528
                  xor         s4, a1, zero
                  or          s6, s1, s1
                  or          gp, s2, gp
                  andi        s2, ra, 1669
                  addi        t2, a3, 730
                  srli        s2, s3, 4
                  nop
                  slli        t2, s6, 8
                  lui         t3, 1020770
                  ori         zero, a7, 505
                  sra         t4, a1, s0
                  sltu        a3, s10, tp
                  srl         a7, t2, s9
                  nop
                  xor         s9, tp, a2
                  xor         t0, a5, tp
                  xor         s5, s10, a2
                  slti        tp, s9, 1869
                  ori         zero, zero, -62
                  andi        t4, t1, 477
                  and         t2, t4, gp
                  auipc       t0, 845146
                  srli        t1, s4, 7
                  sra         t2, gp, a5
                  or          zero, a1, s4
                  srli        s9, ra, 29
                  srli        tp, s4, 22
                  addi        sp, zero, -1220
                  slt         tp, s11, a3
                  sltu        s10, zero, t5
                  andi        zero, s1, 300
                  sra         s7, s5, a4
                  srai        s6, s6, 10
                  and         a3, t6, s5
                  addi        s0, zero, 1126
                  sltu        s6, a3, t1
                  sll         sp, a4, a6
                  ori         ra, s6, -1972
                  sltu        a1, s10, s9
                  and         a3, s0, t2
                  sra         t5, s2, s11
                  auipc       s5, 174884
                  addi        sp, t5, -328
                  xori        tp, t6, -1919
                  srl         s4, a2, a3
                  sltu        t3, ra, a3
                  sltu        s5, a2, t1
                  auipc       zero, 373405
                  ori         s6, zero, -1026
                  slti        a1, t0, -1211
                  auipc       s2, 813206
                  auipc       s3, 328520
                  sub         ra, a4, a6
                  sra         a7, a7, s5
                  and         s4, t1, s7
                  or          zero, gp, ra
                  sra         s0, s2, s0
                  srai        a7, a0, 19
                  sll         s10, a1, s4
                  sltu        a6, a5, s3
                  srl         s9, a4, s0
                  srl         a3, a7, s9
                  sub         zero, t6, s7
                  add         t2, a0, a4
                  addi        sp, tp, 559
                  srli        zero, a5, 7
                  sltu        s1, s7, gp
                  sll         t0, s0, s4
                  srai        s1, a3, 30
                  or          s4, t5, t6
                  sll         s1, a4, s6
                  nop
                  and         s3, a7, a7
                  sra         zero, a6, a7
                  addi        zero, s7, -1325
                  sltu        gp, a2, tp
                  lui         t0, 201310
                  sra         tp, a1, t5
                  nop
                  slt         zero, t5, t1
                  sltu        t0, t5, t3
                  and         a7, t1, t5
                  sltu        zero, gp, gp
                  srl         zero, s2, a3
                  slt         zero, tp, zero
                  xori        s5, s9, -1344
                  ori         a7, t1, 44
                  sll         t1, a2, a2
                  xori        a5, a5, -1834
                  nop
                  nop
                  srli        zero, a3, 8
                  and         zero, a0, tp
                  xori        a5, ra, -1056
                  srl         t2, t2, s11
                  srl         t2, s2, a4
                  andi        t4, s7, 1225
                  xor         s7, s7, s11
                  slli        t3, tp, 20
                  add         s9, s7, t4
                  srli        zero, s4, 15
                  sltu        tp, a0, t6
                  auipc       gp, 752012
                  sub         gp, s8, t5
                  or          zero, s5, a1
                  sll         s7, ra, t0
                  nop
                  and         a6, s4, a4
                  slli        s3, t1, 25
                  sra         t3, zero, t1
                  sltu        s7, a3, a1
                  lui         s4, 905428
                  srai        t3, s3, 3
                  addi        s6, sp, -1830
                  addi        ra, t1, 896
                  auipc       zero, 839188
                  nop
                  srl         s6, s4, s4
                  xor         s9, a7, a2
                  srai        s10, a0, 10
                  ori         s6, s4, -1823
                  sra         t3, a0, s4
                  sll         zero, zero, t2
                  lui         s2, 386481
                  xor         sp, tp, a6
                  srl         ra, sp, t4
                  sra         s6, a3, tp
                  srl         zero, tp, t5
                  and         a5, t1, t5
                  sltiu       zero, t2, 1910
                  srli        t3, s9, 15
                  sltu        s9, t1, s8
                  addi        s8, sp, 1911
                  sra         s6, a7, a7
                  sll         a4, a2, a0
                  add         t5, s5, s6
                  and         ra, t6, s0
                  slti        s6, t2, 158
                  sub         a0, ra, tp
                  sltu        ra, s3, t1
                  srl         a6, s0, gp
                  sll         s10, ra, t2
                  slt         a4, a5, t6
                  slti        t0, s4, 215
                  andi        a6, s6, 1540
                  ori         zero, sp, -1721
                  srai        zero, s10, 8
                  srai        s10, s6, 17
                  addi        ra, a0, 1988
                  ori         a5, a5, 91
                  xor         t2, a0, ra
                  srl         t4, gp, sp
                  srai        t4, a5, 15
                  nop
                  sra         s4, s10, s1
                  addi        sp, s2, -773
                  ori         s9, a0, -1139
                  sltiu       s5, sp, 914
                  ori         s2, a4, 380
                  sltu        s3, s9, sp
                  and         s7, t5, s9
                  andi        s0, t3, 734
                  slt         a0, t1, a7
                  ori         a4, t5, 2023
                  or          zero, s3, s4
                  add         zero, s2, a0
                  sltu        t5, s7, t3
                  and         a7, tp, t2
                  lui         s8, 908507
                  srai        s3, s10, 4
                  srl         sp, gp, a2
                  srl         tp, a4, gp
                  sltu        s10, gp, gp
                  or          zero, gp, a4
                  srai        s5, sp, 29
                  xori        s8, s0, -265
                  sltiu       tp, s7, 123
                  srli        ra, t0, 2
                  sll         a3, a6, s10
                  srl         t3, t0, s3
                  auipc       a4, 106394
                  sll         a6, t5, t4
                  sub         zero, a0, s0
                  lui         tp, 186446
                  and         s6, sp, zero
                  xori        a6, t3, 1031
                  sub         ra, s1, s3
                  add         t3, t3, a7
                  nop
                  slti        t4, a4, -1833
                  sltu        sp, t5, s10
                  andi        ra, s5, -1913
                  and         a0, a7, s3
                  sra         a7, t0, tp
                  add         s7, t2, s5
                  and         s1, s9, a1
                  lui         s9, 283658
                  add         zero, s6, s10
                  srli        s8, t3, 20
                  xor         a4, ra, s7
                  xor         t2, s6, a6
                  srl         t0, s5, gp
                  sra         a4, zero, s4
                  srai        a0, s8, 21
                  sub         zero, s2, t2
                  slli        sp, sp, 27
                  ori         s10, s10, -833
                  sll         t4, gp, a1
                  addi        zero, a7, 909
                  addi        s7, t0, 46
                  add         s7, t0, s9
                  add         t1, s3, sp
                  ori         tp, s7, -369
                  or          zero, s6, s7
                  sltu        t1, t0, sp
                  srli        zero, s7, 20
                  and         t0, a5, s10
                  srl         t1, s10, s0
                  and         s8, a0, a3
                  slti        t1, gp, -542
                  sltu        a0, ra, a1
                  srli        s10, s4, 24
                  and         s0, a6, s8
                  xori        s8, a7, 433
                  slli        s2, a4, 27
                  slti        a1, s8, 1259
                  auipc       s7, 651444
                  xori        s6, s10, 1668
                  srai        t0, s5, 0
                  or          tp, s5, sp
                  add         a7, s8, t3
                  ori         sp, a4, -1754
                  andi        zero, s11, -799
                  nop
                  addi        s6, s2, 685
                  slti        a1, t3, 637
                  slli        t2, s9, 13
                  sub         a6, tp, s0
                  xor         s9, s11, s1
                  xori        a6, s4, 1868
                  sll         a5, s0, s0
                  xori        t3, sp, 1160
                  slti        s8, s5, -17
                  andi        s5, zero, -196
                  slt         s3, s7, s11
                  auipc       s9, 914096
                  sll         s4, s4, ra
                  auipc       s8, 722937
                  sltu        t2, sp, t4
                  auipc       s10, 1015244
                  addi        a1, a5, -788
                  lui         a5, 396309
                  sra         zero, s2, s9
                  nop
                  ori         a1, a6, -309
                  sltiu       a6, t4, -1208
                  nop
                  add         sp, a7, s7
                  sub         a3, t5, t5
                  srli        s5, s1, 17
                  ori         s0, a5, -1321
                  ori         a0, a1, 1923
                  auipc       a0, 632562
                  or          s1, t1, tp
                  auipc       gp, 797416
                  addi        t2, ra, 541
                  srai        zero, a4, 9
                  sltiu       s8, s7, -1654
                  srli        s0, a0, 22
                  srli        s10, s6, 1
                  andi        t0, a6, 1236
                  lui         zero, 891204
                  xor         s6, a4, s5
                  sltiu       s8, a1, 1505
                  sll         s4, s5, t0
                  sll         s9, t6, a3
                  and         a0, gp, t2
                  sub         s9, tp, s0
                  srl         s3, a7, a5
                  lui         a7, 928541
                  srai        s7, s9, 28
                  xori        t0, s6, 372
                  nop
                  nop
                  srl         ra, s5, s11
                  sltiu       s5, a5, 656
                  and         s1, s7, a4
                  slt         zero, a1, t0
                  slt         a1, gp, s6
                  srli        a5, t6, 24
                  slt         s10, s6, s8
                  nop
                  sll         zero, a0, a6
                  sub         s0, s5, s7
                  slli        t4, t3, 28
                  srli        t4, t5, 29
                  srli        s5, t5, 18
                  slli        a5, ra, 1
                  sltiu       a7, s11, 1380
                  or          a0, a6, a6
                  slt         zero, a6, a5
                  sltiu       a6, t5, -1209
                  srl         s7, t5, s10
                  or          t2, a2, ra
                  slli        s1, ra, 28
                  xor         zero, s0, t0
                  slli        sp, a7, 17
                  addi        s0, s11, -1697
                  xori        zero, zero, 1603
                  slti        s3, s4, 592
                  sll         t3, t6, s1
                  lui         zero, 662924
                  add         zero, s5, a1
                  auipc       t5, 914272
                  andi        gp, s11, -1183
                  lui         s1, 280616
                  nop
                  sra         s3, t5, t6
                  addi        sp, s10, 283
                  sra         a0, tp, s2
                  and         zero, tp, t6
                  or          zero, a2, s3
                  sltu        a0, t5, s1
                  nop
                  slt         s8, s1, a6
                  ori         s10, s4, -1543
                  sltiu       a5, s8, 651
                  sltiu       zero, t5, 697
                  sra         t0, s4, t5
                  andi        s2, tp, -1721
                  sltu        gp, a1, a6
                  slti        a7, a6, -464
                  srai        ra, s9, 30
                  sltiu       t4, a2, -1143
                  andi        a5, s4, -315
                  auipc       s1, 729684
                  or          a5, t2, s10
                  sll         a0, a3, s10
                  sll         s2, t2, t0
                  slti        a7, a5, 447
                  andi        a3, a4, -901
                  ori         s9, sp, -1656
                  sll         a0, a1, s10
                  xori        a7, a0, -377
                  add         zero, a2, t5
                  xori        t3, a7, -1980
                  sltu        s7, a1, a6
                  or          s6, s1, s4
                  xori        zero, s7, -951
                  xor         s7, a7, a0
                  slt         t1, s4, s11
                  andi        a4, zero, -1538
                  addi        ra, a3, -425
                  srl         tp, s6, s4
                  srl         s7, a1, s3
                  andi        s9, gp, -893
                  sra         a4, t5, a3
                  srai        s10, a2, 20
                  addi        t4, zero, -1543
                  ori         zero, s10, 1294
                  auipc       a5, 429218
                  slt         a7, s10, ra
                  and         zero, s0, s7
                  srli        zero, s7, 18
                  sub         s10, a4, s5
                  lui         a0, 197390
                  sltu        s0, tp, t4
                  xori        gp, t3, 928
                  andi        zero, t6, -364
                  add         zero, t3, s8
                  nop
                  sub         zero, s2, a3
                  srai        a3, ra, 4
                  sra         tp, zero, a3
                  lui         gp, 116224
                  sltiu       a1, t2, -876
                  sra         s7, s4, a6
                  auipc       zero, 562462
                  sltu        a6, s8, ra
                  sub         a1, sp, t0
                  slli        t3, sp, 25
                  slt         ra, a6, t0
                  sub         a4, gp, a6
                  sra         a7, tp, a7
                  ori         tp, s2, -1149
                  slti        gp, s0, -194
                  slti        t2, a4, 302
                  addi        s2, a7, -1254
                  xori        a4, tp, -1002
                  or          t0, s11, t5
                  sll         gp, zero, t5
                  auipc       s9, 417665
                  sra         s8, s6, t5
                  ori         a3, t1, 1086
                  andi        gp, s8, 667
                  nop
                  sub         s3, s7, t2
                  sub         s9, gp, s1
                  add         a4, sp, t1
                  sltu        t0, s9, a3
                  lui         sp, 1026306
                  sltiu       s10, s7, -1492
                  andi        zero, t1, 578
                  sra         s1, a1, a4
                  sll         gp, a3, s3
                  lui         s6, 145726
                  and         t1, s2, s4
                  xor         a5, t2, tp
                  srai        s2, a7, 15
                  add         t0, t4, ra
                  or          a1, zero, a1
                  srai        t5, s11, 18
                  lui         t1, 107781
                  sltu        s1, zero, t3
                  sra         tp, s9, gp
                  or          t4, zero, s9
                  and         a3, t3, ra
                  add         ra, gp, gp
                  slt         gp, sp, s4
                  addi        a7, t6, 1229
                  srai        s5, t3, 22
                  or          s10, a3, a2
                  addi        s7, s11, 153
                  nop
                  slti        s2, s5, -1503
                  srli        t2, s7, 17
                  addi        a1, s5, -1989
                  lui         ra, 182030
                  xori        a5, s3, -1431
                  sll         a7, a3, t6
                  sra         t4, a0, t1
                  srai        s9, t4, 25
                  or          a4, a2, sp
                  xor         ra, s3, a7
                  auipc       s0, 363396
                  or          tp, sp, t3
                  slli        zero, s1, 27
                  xori        a4, s11, 356
                  sub         t4, s6, a4
                  or          s10, s1, s4
                  srl         t3, sp, a0
                  xori        t3, gp, -123
                  sltiu       t0, s10, 580
                  xor         t1, zero, a5
                  addi        a1, s9, 847
                  sll         s10, a5, t3
                  ori         s7, a2, 1568
                  sra         zero, s0, s5
                  sltu        a7, t6, s6
                  ori         s5, s8, -968
                  srai        sp, s9, 5
                  xor         zero, s8, zero
                  xori        s4, t5, -1379
                  srl         zero, t1, s0
                  auipc       s2, 3182
                  slt         a5, a5, s10
                  sub         a0, ra, t4
                  slti        a0, s10, -1311
                  srai        sp, tp, 15
                  sll         s1, t4, s0
                  sltiu       zero, s8, 511
                  lui         s7, 500171
                  addi        s8, a1, 1848
                  lui         s7, 690562
                  xor         a0, t4, t1
                  xor         a1, s5, s7
                  sll         zero, t3, s4
                  slt         a0, a7, gp
                  xori        a5, s8, 1985
                  sra         s0, t3, s9
                  xor         sp, gp, s3
                  slli        t2, a3, 6
                  slti        s0, t3, -1163
                  sll         s9, a2, s6
                  or          a1, t5, s2
                  slli        a1, tp, 10
                  andi        s8, t4, 1502
                  auipc       s1, 570941
                  slt         s10, zero, t0
                  srli        t1, t5, 31
                  sltiu       sp, gp, -1606
                  lui         t2, 873463
                  ori         a6, a4, 455
                  andi        s10, s6, 1696
                  andi        s10, s0, -400
                  srli        ra, a2, 6
                  slti        t3, a3, 1839
                  srl         a4, a6, s0
                  xori        s1, s8, 1684
                  ori         a7, s6, 626
                  addi        a1, s8, -869
                  srai        t3, s8, 18
                  xor         s8, sp, sp
                  srai        a3, s6, 11
                  nop
                  nop
                  srai        t3, s7, 16
                  slti        t3, a0, 653
                  slli        s4, a0, 2
                  nop
                  xori        a5, t5, -2047
                  srai        s10, s11, 0
                  auipc       t5, 68790
                  sltu        s8, t2, s2
                  slti        ra, s5, -1409
                  sltu        zero, s6, s5
                  srl         s6, a2, t2
                  lui         s10, 212575
                  sltu        s4, a0, s3
                  lui         a5, 509823
                  auipc       s0, 966057
                  sra         s7, s7, a6
                  addi        t5, s7, 874
                  srai        t5, zero, 20
                  sltiu       gp, s6, -1713
                  slli        s10, a2, 30
                  sll         t3, s3, a2
                  auipc       t3, 9715
                  lui         tp, 539672
                  sltu        t5, s5, s5
                  sll         a3, t2, t3
                  slt         t3, s11, s1
                  or          zero, sp, t0
                  sub         tp, zero, a7
                  sub         zero, gp, s10
                  andi        t4, a7, -133
                  or          tp, sp, s4
                  sll         ra, s11, t3
                  slti        t4, s3, 1426
                  and         zero, s11, s6
                  sub         s7, s8, sp
                  andi        tp, a1, -547
                  add         s8, s7, a1
                  and         s9, s3, s10
                  slt         s8, a4, s0
                  slli        a5, s5, 23
                  or          a1, s0, s7
                  srli        s7, tp, 23
                  slti        ra, s2, -1836
                  slti        t3, a4, -994
                  slti        s1, s4, -1701
                  and         t0, s10, t5
                  slti        s4, t3, -330
                  ori         t0, s7, 1407
                  slli        t5, s8, 22
                  srai        a5, t2, 9
                  srli        gp, s5, 14
                  andi        s3, t1, -618
                  slt         a4, s6, s9
                  andi        t1, sp, -1572
                  add         ra, s7, sp
                  sub         s9, t0, s8
                  sll         s1, s5, s8
                  slli        t3, gp, 2
                  add         a5, s0, t0
                  sll         sp, a5, s0
                  srli        a4, a2, 11
                  slt         s1, s0, a4
                  addi        sp, s6, -1867
                  ori         a7, s7, 1361
                  sub         s9, a6, a0
                  slti        t4, a6, -1932
                  sub         s0, t6, t2
                  sltiu       zero, s5, -1995
                  sub         a7, s10, s1
                  sltiu       s3, s5, -798
                  nop
                  auipc       s1, 787959
                  xori        a0, a6, 234
                  sra         s3, s8, s7
                  xori        zero, t6, -1560
                  sltu        t1, gp, s5
                  nop
                  xor         a3, s10, ra
                  auipc       t1, 502421
                  sltiu       t5, t2, -65
                  add         s6, a1, s8
                  add         t4, s4, s8
                  ori         a5, a3, 1231
                  srli        s4, s5, 23
                  slt         a5, s11, a5
                  slli        t0, a2, 8
                  add         s3, gp, s11
                  sltu        t3, a1, t5
                  slti        a4, s8, 1844
                  sub         s8, t0, zero
                  xori        t5, a7, -1038
                  srli        s10, t2, 29
                  sltu        a4, s4, a4
                  sll         a5, s5, s0
                  srai        zero, a0, 8
                  sltu        a1, a7, s5
                  nop
                  srl         a3, s9, gp
                  srl         a3, s9, t2
                  slli        t4, gp, 8
                  sltiu       s4, t4, -1299
                  auipc       t3, 806841
                  xori        s7, t6, 1494
                  nop
                  andi        gp, s4, 800
                  nop
                  srl         a5, t5, s4
                  auipc       s3, 514042
                  andi        ra, s11, -979
                  srli        s6, tp, 8
                  nop
                  srai        tp, s5, 21
                  nop
                  sra         s5, t0, tp
                  nop
                  or          sp, a1, t2
                  or          s9, s1, s5
                  xor         s2, a2, t4
                  or          t0, a5, s1
                  or          s6, ra, s7
                  addi        t3, a6, 1517
                  lui         a1, 444532
                  andi        zero, zero, -962
                  srli        zero, t0, 2
                  srai        tp, tp, 11
                  srl         s2, t0, t0
                  srai        zero, ra, 12
                  xor         t4, a0, s5
                  slli        zero, s8, 27
                  add         s8, t4, sp
                  lui         s6, 59204
                  auipc       a3, 988360
                  nop
                  or          s4, s2, s7
                  slli        zero, gp, 15
                  auipc       s4, 9905
                  srl         t2, s11, a1
                  nop
                  srli        s1, s9, 31
                  or          zero, s4, s2
                  slti        tp, s5, 1328
                  xor         zero, s10, a4
                  addi        ra, a5, 1494
                  slli        zero, t2, 17
                  xor         a0, s4, ra
                  slli        a6, s0, 23
                  xor         t1, t1, t2
                  nop
                  slli        s8, t4, 27
                  addi        t4, gp, -1801
                  sll         s5, a7, t1
                  and         t1, s4, t1
                  slt         gp, s3, s9
                  sltu        a6, s8, a7
                  xori        s6, a1, 1710
                  sra         s8, ra, t1
                  slli        s0, gp, 0
                  slt         zero, s7, s2
                  add         t0, s4, a4
                  sub         zero, s5, s3
                  nop
                  sub         a6, a6, a1
                  addi        ra, a4, -470
                  srl         a7, t1, s7
                  sll         zero, s11, ra
                  slti        a4, zero, -3
                  add         s6, s4, a1
                  sra         t2, s4, a5
                  sltiu       s4, t3, 1307
                  slt         zero, s3, sp
                  lui         t5, 1036901
                  andi        zero, a2, 253
                  srai        s9, t4, 20
                  srli        s2, t2, 27
                  slli        zero, s0, 2
                  andi        a1, a5, 2024
                  xor         s6, a3, s3
                  addi        a0, zero, 1255
                  sra         t0, s7, s4
                  xor         t0, t1, s6
                  sltu        a5, t6, a2
                  auipc       a5, 375796
                  sltiu       zero, t5, -1557
                  sra         zero, t5, s6
                  xori        s9, s11, 888
                  sra         t2, s7, t2
                  and         zero, t6, s4
                  srli        s5, s5, 8
                  auipc       a7, 780226
                  xor         s8, s3, a7
                  lui         t2, 605800
                  andi        zero, s0, 874
                  slli        zero, s2, 7
                  ori         t2, a6, 740
                  sltiu       zero, a2, -1968
                  srl         gp, t6, t5
                  srai        t0, s11, 27
                  slt         tp, t2, s5
                  add         zero, s0, s7
                  srl         a0, a7, a5
                  and         gp, a1, a6
                  srl         zero, s4, t2
                  lui         s10, 640572
                  or          a4, t6, s5
                  srai        sp, t4, 7
                  srl         a4, a3, s0
                  or          a5, t0, t1
                  srai        t1, gp, 8
                  slti        gp, zero, 1220
                  sll         s8, t4, a6
                  or          s7, s2, a4
                  slli        a4, t0, 13
                  slli        a3, s10, 26
                  slti        s4, t4, -623
                  slti        s0, s2, -1901
                  slt         s6, t3, a1
                  slt         a1, s5, s1
                  lui         sp, 448176
                  andi        a5, s4, 258
                  sll         t2, a4, s10
                  srai        a1, a6, 24
                  lui         s3, 917071
                  add         s2, s3, s7
                  slti        s10, gp, -157
                  and         s2, s11, s4
                  srli        a0, s9, 21
                  sub         tp, a0, sp
                  srli        zero, zero, 4
                  sll         s5, s8, s9
                  slli        zero, zero, 14
                  auipc       t3, 416284
                  slti        zero, sp, -1777
                  ori         zero, s2, -1992
                  xor         s6, s0, sp
                  lui         s5, 115966
                  sll         sp, s4, a5
                  auipc       t0, 17128
                  slti        zero, t1, -1288
                  nop
                  lui         s1, 873367
                  sltiu       t0, s2, 207
                  addi        zero, a2, -432
                  or          a1, s1, t3
                  srl         a7, sp, a2
                  sltu        t0, sp, s2
                  or          s2, s8, s7
                  lui         ra, 324332
                  nop
                  slli        a1, zero, 23
                  srli        s6, s10, 7
                  sra         zero, s8, t4
                  add         zero, a2, a0
                  srli        s8, zero, 0
                  slti        s8, t5, -257
                  and         s10, a0, s10
                  sll         s9, a5, t1
                  sltu        s7, s10, zero
                  srli        sp, t4, 20
                  slt         s3, a4, a0
                  nop
                  addi        zero, a3, 1784
                  slt         sp, a3, s10
                  add         a5, a2, a1
                  or          s1, t4, gp
                  slt         a5, sp, sp
                  nop
                  andi        a3, s3, -1821
                  xori        t1, a4, 1609
                  xori        a3, t3, 1162
                  and         t3, a3, t1
                  and         t5, s1, sp
                  add         s7, a6, gp
                  nop
                  or          s7, a3, a7
                  and         t3, s1, s6
                  slti        s1, s10, 374
                  nop
                  and         zero, a7, t2
                  sltiu       s4, t0, 1747
                  and         t1, s7, t5
                  lui         tp, 910471
                  sub         t0, s9, t4
                  sub         s9, s6, s5
                  srli        sp, ra, 31
                  nop
                  xor         zero, t3, zero
                  and         t4, s11, a6
                  slti        a7, t5, 1792
                  slti        tp, a3, 1991
                  or          s1, s10, s0
                  addi        a5, a7, 168
                  lui         s6, 859924
                  andi        t4, s7, 94
                  srai        s1, s9, 31
                  sra         t1, a5, s4
                  sltiu       s5, s9, 43
                  sub         t2, s10, a5
                  ori         zero, t4, -1809
                  and         t1, s10, tp
                  xori        s10, s6, 74
                  srai        t3, s6, 21
                  andi        a4, t0, -953
                  and         t5, s4, s9
                  sll         t5, s11, sp
                  and         zero, s7, s9
                  nop
                  auipc       tp, 786312
                  sub         s5, a1, s7
                  srli        t2, s1, 26
                  sll         zero, a4, t0
                  sub         s6, t6, a1
                  srai        t0, s7, 2
                  slli        s9, a0, 19
                  slti        zero, t4, 1954
                  sub         a4, a7, t6
                  sltu        s9, t3, t6
                  xori        a0, s11, 120
                  sll         s2, a0, a5
                  srai        s3, gp, 14
                  slti        s6, s6, 291
                  andi        a7, a3, -1838
                  nop
                  sll         t3, a3, a2
                  xori        a7, s11, 941
                  andi        zero, s8, 1668
                  sll         a1, s8, t2
                  sra         zero, s6, a2
                  ori         a5, s6, 610
                  auipc       s1, 308693
                  lui         a6, 40878
                  srli        t0, s8, 2
                  srli        zero, tp, 8
                  ori         gp, tp, -1528
                  sltu        sp, a2, s0
                  nop
                  slli        s1, s11, 9
                  xori        zero, s7, -1889
                  nop
                  ori         sp, s1, -457
                  andi        t4, a4, -1191
                  auipc       s3, 595062
                  xori        a0, a3, 1991
                  sra         s0, a5, t5
                  sll         s7, ra, a7
                  addi        a0, s2, 1704
                  srli        s3, a3, 13
                  nop
                  xor         t0, s10, a6
                  slt         s0, s8, t2
                  srai        a6, t4, 31
                  auipc       gp, 846149
                  or          t0, s10, s2
                  sub         s9, t1, s10
                  lui         s10, 315764
                  or          s2, ra, a3
                  nop
                  addi        s9, a6, -802
                  or          gp, zero, t6
                  sub         s3, a0, t4
                  sltiu       s1, s6, 1917
                  andi        s7, s2, -509
                  xor         zero, t0, t0
                  lui         s9, 48738
                  sra         t5, s3, ra
                  and         t4, a4, zero
                  srl         a1, zero, s3
                  lui         a5, 810905
                  and         s8, tp, s1
                  addi        zero, a4, 396
                  ori         s7, a7, 1982
                  ori         a0, t5, 1888
                  xor         s8, a6, a3
                  sltiu       a1, tp, 1203
                  ori         zero, a1, 1676
                  addi        s0, a6, -1225
                  xor         s10, s11, s6
                  auipc       zero, 395910
                  ori         s4, s8, 1712
                  slti        s0, t1, 293
                  addi        s0, s0, -1601
                  slli        zero, a4, 8
                  add         zero, s2, s7
                  lui         s8, 140154
                  xori        gp, t1, -1631
                  lui         s10, 776758
                  add         s10, zero, t5
                  sll         a4, a7, gp
                  srli        s0, ra, 20
                  sub         zero, a1, a2
                  xor         s0, gp, a4
                  auipc       gp, 167567
                  and         s10, s2, t5
                  nop
                  xor         s9, t2, s3
                  srli        zero, a3, 28
                  lui         zero, 580799
                  sltiu       t5, a4, 1015
                  andi        a4, a7, -279
                  sub         gp, t5, a7
                  slt         ra, a2, a0
                  srai        a1, a6, 28
                  and         s9, sp, sp
                  ori         s8, a4, -313
                  srl         s10, s0, tp
                  ori         a0, s9, 1128
                  srli        s1, a2, 24
                  sll         a5, a7, s3
                  add         a0, s3, t0
                  srl         s8, s6, s1
                  nop
                  auipc       gp, 689646
                  or          zero, s0, s1
                  add         a6, s1, a4
                  xor         zero, t4, s8
                  and         t3, t1, a0
                  slti        a1, t1, 2044
                  xori        s3, s1, -304
                  addi        gp, zero, -1975
                  li         t4, 0x0 #start riscv_int_numeric_corner_stream_32
                  li         a1, 0x0
                  li         t3, 0x0
                  li         a5, 0x1
                  li         s8, 0x183948d3
                  li         s5, 0x0
                  li         s9, 0x0
                  li         a7, 0x1
                  li         t5, 0x0
                  li         ra, 0x0
                  add         zero, a2, tp
                  lui         s0, 233015
                  nop
                  sub         sp, s9, s0
                  addi        s6, a7, -734
                  lui         zero, 305533
                  add         t1, t5, tp
                  add         a7, s11, a7
                  lui         t3, 714802
                  add         s9, s1, t6
                  sub         a5, sp, a7
                  sub         a6, a5, tp
                  addi        zero, a7, -861
                  nop
                  add         t4, ra, s3
                  lui         a1, 235710
                  nop
                  add         zero, s4, s8
                  lui         a7, 613910
                  add         t4, sp, s9
                  add         tp, s0, a5
                  nop
                  add         s3, t6, s4
                  nop #end riscv_int_numeric_corner_stream_32
                  sra         s3, a7, s5
                  srl         ra, sp, s5
                  andi        s5, t0, -1357
                  xori        tp, s3, -217
                  sltiu       gp, s6, -1811
                  nop
                  auipc       a3, 516330
                  slti        zero, a4, -701
                  andi        a6, t3, 1929
                  srl         t1, s8, s11
                  srli        s4, s8, 8
                  sll         s1, t2, s9
                  srai        s5, a5, 15
                  lui         tp, 588535
                  xor         t0, s1, ra
                  srai        t4, s3, 3
                  sltu        tp, s10, ra
                  srl         ra, a7, s6
                  srl         zero, gp, s6
                  andi        sp, s0, 1181
                  addi        t4, a4, 248
                  slt         s4, a3, gp
                  sltu        sp, a7, a4
                  sra         s8, a0, a1
                  srai        s10, t3, 21
                  srai        zero, s10, 16
                  andi        a6, a6, 1410
                  xor         a6, a3, s7
                  slt         t1, ra, t3
                  lui         a3, 653357
                  sll         zero, t1, s0
                  ori         a6, zero, -1754
                  sub         a7, t5, t1
                  sltu        s10, t1, t0
                  sub         s10, a4, s8
                  lui         zero, 879176
                  srl         ra, s0, t1
                  lui         t2, 1017024
                  add         s1, a2, a7
                  nop
                  srli        t2, s5, 28
                  add         t5, sp, t0
                  slti        s3, t4, -1688
                  slt         s10, a4, s9
                  srli        gp, t4, 27
                  slli        s2, s4, 10
                  andi        s4, a6, -150
                  sll         t4, sp, t6
                  xori        zero, a4, 378
                  nop
                  slti        a4, a7, -1779
                  slli        t0, a3, 17
                  addi        t4, a7, 18
                  nop
                  nop
                  lui         zero, 178187
                  lui         zero, 611339
                  srai        s9, ra, 8
                  sltiu       t4, tp, 1387
                  sll         s9, s11, gp
                  sll         s5, a6, s0
                  and         zero, tp, t0
                  andi        a7, ra, 1762
                  auipc       a3, 988123
                  srli        sp, a0, 28
                  ori         ra, s3, -172
                  xor         gp, a6, s5
                  slli        s10, ra, 12
                  sll         s4, a6, a5
                  srl         a0, a0, a0
                  sub         t0, s6, a1
                  and         tp, zero, s1
                  sub         t4, a0, s0
                  nop
                  srai        a5, sp, 27
                  xor         t1, ra, gp
                  sll         s2, s1, t5
                  sll         t3, t5, s2
                  sra         s0, s3, a6
                  sltiu       s8, a6, 282
                  andi        a0, t0, -195
                  sltu        tp, s6, a1
                  sll         a7, s5, s6
                  sll         a7, s1, a3
                  andi        s3, s0, 1108
                  srl         s1, s9, s6
                  slli        s4, s9, 1
                  nop
                  add         a4, a5, t0
                  addi        a6, s0, -1124
                  andi        s4, t2, -1631
                  slti        sp, s11, -1084
                  sltu        s0, s8, sp
                  sub         t1, s7, gp
                  xor         zero, t6, t2
                  add         s7, s3, s5
                  add         zero, s11, zero
                  andi        s5, a5, 304
                  sub         gp, a7, a2
                  xori        s2, s8, -1542
                  ori         s0, s7, 135
                  lui         t1, 559555
                  xori        t2, s6, -163
                  or          a6, sp, t1
                  sltu        t0, a4, t4
                  srl         t3, s4, a0
                  srl         a4, s11, a4
                  srl         a3, s4, s6
                  nop
                  and         sp, a4, s2
                  ori         s3, t0, -1438
                  srl         ra, t4, s8
                  and         zero, s1, t5
                  sll         s2, t3, s1
                  slt         s1, t1, t6
                  or          t2, a1, gp
                  sltu        t3, s10, t4
                  srai        t1, t6, 6
                  sltiu       s2, a6, -1731
                  slti        s0, s5, 130
                  srai        s3, s5, 9
                  lui         zero, 698950
                  xori        s7, s10, 993
                  srl         a6, s2, s9
                  xor         zero, t0, s1
                  sll         s1, s10, zero
                  add         s10, s9, s8
                  srl         s0, a1, s7
                  sub         t1, zero, t0
                  sltiu       t2, t1, -1347
                  ori         t2, zero, 716
                  add         s2, zero, gp
                  sub         t4, s7, s0
                  or          s5, a3, t1
                  srai        s5, s6, 7
                  srl         zero, t1, a1
                  and         s7, t3, s5
                  auipc       s4, 375708
                  sltu        t2, a7, s6
                  xori        t4, t0, 1975
                  addi        s2, s11, 410
                  srl         a1, tp, t0
                  sll         t4, t5, tp
                  nop
                  srli        a7, s8, 16
                  sll         t0, s3, t4
                  ori         a1, s10, -1136
                  xori        s7, s2, 1765
                  srai        s10, s11, 0
                  srl         s1, s0, a5
                  slti        sp, t6, 140
                  ori         tp, s6, 1767
                  xor         s6, t0, t5
                  sub         t5, t0, s4
                  slt         sp, s4, s11
                  srli        a0, a6, 12
                  addi        t0, t2, 5
                  sll         t3, sp, a7
                  srai        s3, a0, 1
                  or          t5, a2, gp
                  auipc       zero, 235987
                  srl         t5, s7, a3
                  nop
                  andi        zero, t0, -129
                  and         s3, s0, s4
                  andi        s8, s11, -305
                  andi        s0, zero, -1383
                  slt         t1, s11, s0
                  lui         t0, 497246
                  sltiu       a0, s9, 1630
                  and         sp, a1, s4
                  andi        t0, t1, -1550
                  slti        a3, a0, -618
                  nop
                  slti        a6, zero, -1861
                  and         gp, tp, s11
                  srai        t0, sp, 12
                  xor         zero, a7, t0
                  addi        s7, s6, 1814
                  or          s5, t6, gp
                  add         sp, s11, s11
                  srai        s10, a6, 23
                  srli        s5, sp, 24
                  sltiu       s8, s6, -33
                  sltu        s4, s3, t2
                  srl         ra, sp, tp
                  sltiu       a5, t1, -1789
                  nop
                  or          a7, a4, a7
                  ori         zero, t2, 222
                  and         t2, a0, s0
                  slti        s0, s2, 693
                  add         a1, s9, s8
                  slli        s5, tp, 29
                  xori        a1, s11, -861
                  sub         gp, t5, s1
                  sltu        s4, s2, s2
                  xor         t3, gp, s4
                  srl         t5, t0, s8
                  add         a3, s11, ra
                  xori        a1, a3, -1278
                  slti        t2, t3, -900
                  sltiu       s5, a5, -112
                  srli        s1, s10, 9
                  srli        t0, a4, 15
                  sltu        a6, s10, s2
                  srli        t1, t6, 13
                  sra         a4, a4, t5
                  sra         s10, s11, a1
                  auipc       sp, 205423
                  add         s10, s3, s3
                  srl         zero, t1, a1
                  xor         a1, t2, a4
                  slt         zero, s3, s9
                  srl         s7, a0, t2
                  ori         a4, s5, -2019
                  slti        gp, a1, 475
                  ori         tp, a1, -111
                  slti        t0, a7, 1425
                  xor         s10, a3, s7
                  ori         s10, sp, 1338
                  ori         tp, a1, 1352
                  slt         t3, s6, a2
                  xor         s8, s10, t0
                  addi        s9, a0, -49
                  addi        a5, a5, -1912
                  sub         s9, a3, s6
                  srai        zero, a7, 8
                  srl         a3, a2, a1
                  sll         s5, a7, tp
                  ori         zero, t5, 1544
                  and         s7, tp, s11
                  andi        ra, t5, 1568
                  or          gp, a4, s9
                  lui         a7, 163145
                  srai        s6, tp, 9
                  srai        a7, t2, 5
                  slli        t4, a5, 14
                  auipc       t0, 509897
                  xor         ra, s4, s11
                  and         s5, a0, a6
                  srli        t4, t2, 31
                  sra         s10, s4, s11
                  sub         zero, gp, a5
                  and         s10, gp, zero
                  auipc       s4, 169791
                  xori        a7, gp, -725
                  ori         s1, t4, -1568
                  srai        zero, zero, 6
                  sltiu       zero, tp, -1515
                  xori        s2, a0, -1844
                  auipc       s9, 438487
                  sll         zero, s1, t3
                  srli        ra, t1, 9
                  lui         gp, 215886
                  slli        a6, s6, 25
                  sub         a5, a0, s3
                  sll         a4, s7, s4
                  auipc       a3, 561758
                  auipc       ra, 770219
                  or          s5, s1, a5
                  slli        zero, s3, 3
                  sub         s0, ra, s3
                  addi        t1, a7, -1517
                  or          t0, s6, s6
                  sll         tp, gp, s0
                  sub         t2, a6, a3
                  sltu        t2, a0, s4
                  auipc       a4, 575754
                  sltiu       s9, t0, 820
                  sub         zero, t2, s10
                  xor         zero, t3, zero
                  andi        a3, s6, -1937
                  srl         s6, s0, s9
                  or          zero, gp, t0
                  sll         a4, t1, a0
                  nop
                  slt         zero, a3, t4
                  add         s7, sp, a1
                  sra         zero, t0, a6
                  andi        a5, t3, 484
                  srli        s7, s0, 4
                  sra         zero, s0, a0
                  ori         t1, a1, 1547
                  slt         t3, a5, t1
                  ori         s9, a5, 315
                  slt         t3, a2, s4
                  sra         sp, t1, a4
                  lui         a1, 601928
                  srl         s3, a7, s10
                  slli        t3, t6, 2
                  srai        zero, a0, 30
                  auipc       s6, 892153
                  auipc       t2, 708409
                  srli        gp, s9, 24
                  sll         ra, sp, s4
                  ori         s5, s8, 1475
                  nop
                  andi        a6, gp, -493
                  addi        a4, zero, 979
                  ori         s9, a6, -1725
                  addi        a6, s6, -1562
                  addi        zero, s5, 1751
                  ori         zero, a4, -237
                  xori        s4, a3, 1616
                  slti        zero, t4, 550
                  add         s8, t2, s6
                  andi        t3, s7, -605
                  addi        a0, s0, -166
                  lui         s6, 546766
                  slt         zero, t2, s3
                  and         ra, t6, gp
                  sltiu       tp, s3, -96
                  lui         s4, 1042471
                  addi        a6, s8, -491
                  nop
                  lui         s10, 433774
                  slt         s5, ra, t5
                  and         a3, a6, s9
                  sra         zero, t5, t4
                  sll         t2, s1, t6
                  ori         s6, s2, 909
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_1
                  li         s0, 0x1
                  li         t0, 0x0
                  li         t4, 0x1
                  li         t3, 0x0
                  li         s10, 0x0
                  li         s8, 0x1
                  li         a0, 0x1
                  li         sp, 0x1
                  li         ra, 0x0
                  lui         t3, 761300
                  sub         a1, ra, a2
                  sub         a7, sp, s7
                  nop
                  lui         s4, 571109
                  lui         tp, 20620
                  lui         t3, 514817
                  nop
                  sub         gp, t2, s1
                  addi        s4, s11, 355
                  nop
                  add         s2, a4, a2
                  sub         gp, t3, ra
                  addi        t2, s4, 1744
                  sub         a6, s10, t6
                  add         gp, zero, t3
                  lui         a7, 716033
                  lui         t4, 710726 #end riscv_int_numeric_corner_stream_1
                  addi        t4, a4, 1232
                  addi        s9, t0, -32
                  sra         t2, tp, s6
                  add         s8, s4, s3
                  auipc       s9, 360545
                  sll         t4, a4, t4
                  or          s10, t5, s0
                  sll         tp, s9, s7
                  add         t5, s1, t1
                  add         s10, a1, zero
                  ori         zero, a1, -556
                  lui         ra, 162504
                  lui         a1, 136855
                  sub         a6, a6, t5
                  nop
                  sll         ra, t3, s1
                  srai        tp, a7, 12
                  slti        s7, tp, 1867
                  srl         s5, ra, t0
                  lui         a7, 311661
                  sra         a7, a6, t3
                  addi        s9, a4, -548
                  srli        s9, s8, 16
                  add         t1, s6, a3
                  srl         t2, t3, s5
                  srai        a6, s3, 14
                  nop
                  and         a0, s6, s7
                  sltu        s7, t2, s11
                  srl         zero, s7, t2
                  and         a3, ra, s3
                  slti        tp, t5, 2027
                  sltu        sp, a6, s7
                  srai        s2, s4, 5
                  slt         s7, t1, sp
                  nop
                  slli        t3, a7, 18
                  srl         a4, t4, a3
                  ori         sp, a5, 809
                  lui         zero, 102772
                  or          s1, zero, a7
                  xor         s1, a1, a0
                  slt         t1, s7, a3
                  add         sp, s7, s6
                  andi        t0, s7, 3
                  add         a0, a3, s3
                  sltiu       t0, zero, 2040
                  slti        ra, a6, 787
                  slt         a0, s5, a6
                  addi        s10, s10, 76
                  ori         s1, a6, 1973
                  xori        s1, s2, -746
                  nop
                  lui         s7, 632952
                  andi        s5, s11, -110
                  sltu        tp, s6, a7
                  srl         sp, t0, t3
                  sll         a1, s8, s10
                  srai        s7, a0, 22
                  srl         tp, s6, s2
                  slt         t0, s2, t1
                  xor         zero, s8, a2
                  sltu        t2, s11, t3
                  srl         t0, s2, zero
                  srli        a1, s0, 26
                  add         gp, a0, a4
                  xori        s5, sp, 945
                  sltu        s8, t3, t4
                  sltu        s10, a6, s2
                  sltiu       a0, a3, -1386
                  srai        t2, gp, 5
                  sra         s2, t2, s5
                  add         t3, t5, s5
                  nop
                  srai        gp, sp, 5
                  nop
                  and         s0, s1, s4
                  add         zero, a6, a7
                  sra         tp, s8, gp
                  slli        s2, s2, 29
                  sltu        s0, a3, s11
                  sll         a7, a1, a1
                  slli        s2, a6, 9
                  add         a0, t0, t2
                  sltiu       a4, tp, 1283
                  srli        t3, s8, 14
                  add         s4, t3, s1
                  sll         s5, s7, a2
                  sltiu       s10, a3, 688
                  slt         a4, tp, t0
                  slti        s7, t4, -765
                  srl         s8, a5, s0
                  or          a4, s8, t4
                  andi        tp, a6, 467
                  srli        zero, t1, 23
                  add         s4, zero, t1
                  xor         zero, a4, s3
                  li         s10, 0x0 #start riscv_int_numeric_corner_stream_11
                  li         t4, 0x353e32a2
                  li         t5, 0x0
                  li         s0, 0x1
                  li         t3, 0x0
                  li         a7, 0x0
                  li         a1, 0x2b281e40
                  li         s8, 0x1
                  li         a4, 0x7c9caf29
                  li         s9, 0x1
                  lui         s2, 321044
                  nop
                  addi        sp, t1, -2016
                  lui         a5, 207001
                  sub         a5, a2, s7
                  addi        t1, t4, -1402
                  add         tp, s6, t4
                  nop
                  add         tp, a4, t4
                  addi        zero, zero, -21
                  add         a5, t2, s1
                  lui         t1, 884718
                  sub         t2, gp, t0
                  nop
                  lui         s8, 898419
                  sub         t2, t5, sp
                  sub         gp, s8, zero
                  lui         a6, 707402
                  nop #end riscv_int_numeric_corner_stream_11
                  ori         gp, a2, -930
                  srai        t4, s3, 2
                  andi        s6, s7, 1843
                  xori        zero, t2, -1327
                  ori         gp, a2, 526
                  slt         tp, a1, gp
                  add         s0, s5, a4
                  sll         s1, a0, a2
                  sltiu       a5, a7, 1023
                  slli        a4, t5, 16
                  nop
                  slli        t4, a3, 29
                  sub         zero, s10, t4
                  sub         a4, ra, a1
                  srli        t4, t5, 0
                  nop
                  slti        gp, t2, 939
                  add         gp, s6, a7
                  srai        s9, a7, 26
                  srl         s9, sp, t2
                  auipc       t5, 38279
                  andi        s0, sp, -261
                  sll         s2, a2, t4
                  auipc       s7, 127676
                  slti        a7, a6, 1417
                  slti        s10, t6, 779
                  or          s6, t0, s3
                  slti        a0, t0, -1705
                  slt         a0, s7, a4
                  sub         a6, s6, t4
                  sll         ra, s9, s5
                  auipc       a4, 531836
                  slli        ra, t5, 9
                  auipc       sp, 323522
                  xori        s10, t5, -953
                  srai        a4, s2, 1
                  nop
                  srli        s8, s11, 11
                  srai        s7, a5, 27
                  slti        ra, s2, -1950
                  andi        t3, s7, -1642
                  ori         zero, t2, 1434
                  add         zero, zero, s8
                  sra         sp, sp, s3
                  slti        s4, a2, -1354
                  auipc       a0, 627380
                  sub         a3, t3, s11
                  xor         s3, a2, tp
                  lui         s1, 999054
                  sltu        s2, t1, t4
                  or          s3, t0, a0
                  auipc       a3, 917407
                  slti        a4, s6, -966
                  srli        s10, s2, 9
                  andi        a1, a0, 421
                  or          t4, a1, a0
                  sltu        zero, t4, s1
                  slti        zero, s3, -1530
                  sra         t0, s5, s6
                  lui         t2, 839254
                  sltiu       sp, zero, -1962
                  srl         zero, a7, s1
                  sltu        t4, a2, tp
                  xor         ra, t0, a1
                  addi        t5, s10, -319
                  srli        a5, s4, 20
                  xor         tp, tp, s7
                  sltiu       a4, a7, -1435
                  xor         s10, t6, s5
                  nop
                  sra         s10, s6, t3
                  srli        s0, t5, 0
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_28
                  li         a7, 0x1
                  li         s8, 0x1
                  li         t4, 0x1
                  li         s7, 0x1
                  li         t3, 0x0
                  li         s10, 0x0
                  li         a3, 0x34a2fe40
                  li         a0, 0x547e41
                  li         s9, 0x0
                  lui         zero, 743424
                  sub         gp, s9, a6
                  nop
                  nop
                  sub         a0, a3, zero
                  add         s2, s3, a2
                  nop
                  lui         zero, 823145
                  lui         s0, 1044865
                  sub         t4, ra, t0
                  lui         s0, 848515
                  addi        sp, s11, 58
                  nop
                  sub         gp, ra, s10
                  sub         s10, t6, a4
                  addi        s6, zero, -345
                  lui         t0, 262353
                  lui         s5, 629277
                  add         a3, a3, a1
                  nop
                  add         t4, s1, s11
                  addi        zero, a1, 1282
                  lui         s3, 1009969
                  addi        gp, t1, -931
                  add         s3, gp, a5
                  sub         ra, t5, s8
                  nop
                  add         t4, s7, t0 #end riscv_int_numeric_corner_stream_28
                  andi        t3, gp, 983
                  slli        a1, s9, 17
                  sltu        s3, t6, s6
                  andi        t1, tp, -709
                  lui         tp, 619025
                  add         a0, t1, a5
                  srl         s1, s8, ra
                  auipc       t1, 839271
                  or          tp, zero, a3
                  sltiu       t2, sp, 1591
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_20
                  li         t2, 0x134da467
                  li         a3, 0x0
                  li         t4, 0x2a5985a6
                  li         t3, 0x1
                  li         s9, 0x0
                  li         s8, 0x0
                  li         a7, 0x0
                  li         a5, 0x1
                  li         s3, 0x0
                  lui         a4, 396313
                  sub         zero, a4, t0
                  lui         s0, 272569
                  sub         a5, zero, a6
                  nop
                  nop
                  nop
                  addi        s1, gp, 1125
                  sub         sp, s1, a1
                  nop
                  nop
                  nop
                  addi        zero, s10, 1020
                  sub         s9, a7, a4
                  sub         tp, ra, a6
                  sub         s8, tp, s0 #end riscv_int_numeric_corner_stream_20
                  srl         zero, t6, t4
                  sltiu       a7, zero, 1020
                  xor         a3, a5, s0
                  slt         t0, a1, a1
                  ori         tp, t4, -89
                  nop
                  sll         t5, a3, s3
                  slt         zero, a7, a1
                  srl         a4, t1, t1
                  sra         a4, t0, s6
                  slti        t3, ra, 695
                  lui         s2, 373776
                  sltiu       t2, sp, -1742
                  slli        zero, s0, 15
                  xor         s6, a4, t5
                  sra         a5, t5, t6
                  add         sp, a6, s9
                  srai        a3, a7, 13
                  sltiu       t0, s1, -1102
                  and         zero, t5, t2
                  auipc       s10, 954665
                  xor         s3, a3, s10
                  srl         tp, gp, s10
                  srai        tp, t3, 12
                  sll         a1, t1, t5
                  and         t3, t0, s9
                  sra         s5, s10, t4
                  sltiu       s0, a7, 1696
                  srli        s10, a4, 25
                  slti        a0, s6, 490
                  sll         t1, gp, s9
                  srai        s6, a2, 30
                  auipc       t2, 396327
                  addi        s6, s6, -40
                  slti        zero, a4, -659
                  addi        s0, a1, -1674
                  auipc       a3, 1013435
                  sltiu       a5, t3, 1702
                  srl         ra, s8, t2
                  xor         s10, a3, s2
                  auipc       s1, 187319
                  auipc       t0, 134961
                  srl         t2, a4, zero
                  slti        a6, s10, -1257
                  and         ra, s5, t1
                  xor         s2, s4, t4
                  sll         s5, s2, a0
                  auipc       zero, 1043470
                  add         a1, s11, t6
                  sltiu       s7, a6, -1122
                  xor         gp, a5, s6
                  sltu        t0, ra, s10
                  srli        s0, t6, 21
                  auipc       s6, 311951
                  slti        s6, a4, 1688
                  srai        a0, s11, 21
                  add         a0, t4, s10
                  sub         a5, s8, s10
                  sltu        s9, s11, t1
                  xori        s5, a1, -1380
                  slli        a7, a2, 7
                  auipc       zero, 799182
                  sra         s0, t5, t3
                  lui         zero, 898619
                  nop
                  nop
                  srai        a6, sp, 1
                  sltu        s0, gp, t4
                  sltiu       s5, s0, 1426
                  srl         a1, a3, zero
                  or          a1, t3, t5
                  sra         zero, a5, s1
                  slt         tp, s1, t5
                  sltiu       s9, a7, 899
                  slt         zero, t2, s6
                  and         a3, a5, t1
                  slt         t0, s8, a2
                  ori         a1, a7, 200
                  or          zero, ra, t0
                  srai        zero, s8, 11
                  slti        s5, s9, 1025
                  slti        tp, t4, -1473
                  lui         a6, 927850
                  sub         a5, a1, zero
                  add         s10, t3, sp
                  auipc       a4, 100943
                  lui         s2, 630720
                  add         a5, s3, t1
                  xori        t0, s1, -420
                  slt         s6, tp, t3
                  lui         a5, 64670
                  or          s10, t0, s0
                  lui         s4, 408452
                  addi        a1, t2, -118
                  sub         t1, t3, t0
                  andi        s8, a7, -1035
                  nop
                  ori         s3, s6, 2028
                  sub         tp, a5, s8
                  nop
                  sub         s0, s10, tp
                  addi        zero, s4, -843
                  sub         t0, a7, a2
                  slt         zero, a2, t3
                  add         s4, s8, a7
                  xori        a4, s4, -284
                  sltu        zero, s5, ra
                  xor         a4, tp, a7
                  and         t0, a4, s8
                  ori         s9, s0, -422
                  ori         s2, t0, 7
                  srli        a0, t6, 19
                  srli        zero, zero, 16
                  auipc       s0, 246715
                  ori         t0, s6, 918
                  slt         zero, s7, sp
                  xori        s0, zero, 247
                  slti        s2, t4, -438
                  xori        s4, s1, -1276
                  auipc       s5, 748615
                  or          tp, s5, a4
                  xor         s10, s5, s2
                  sltiu       tp, s2, 1054
                  srli        s10, a6, 16
                  and         s3, a0, s10
                  srai        t0, a1, 2
                  auipc       s3, 11081
                  sra         a1, a5, t0
                  add         t5, s7, a5
                  srai        sp, ra, 22
                  sltiu       tp, s4, 1187
                  slt         a6, s7, s1
                  ori         ra, a4, 1992
                  sltiu       a0, sp, 1558
                  addi        zero, s7, -1150
                  or          s9, a4, ra
                  and         t3, s7, s0
                  slti        tp, t4, 804
                  auipc       t4, 224732
                  andi        zero, t1, -921
                  ori         a6, a3, 1158
                  sll         a0, a3, t5
                  slt         s4, t0, s4
                  sra         t0, t1, s6
                  slti        t0, t2, -1730
                  xor         a1, s10, s10
                  and         t2, s6, tp
                  sltiu       s4, s8, 1373
                  sll         t2, s4, s2
                  sll         s9, sp, t3
                  nop
                  sra         tp, s2, s7
                  slli        a5, s2, 4
                  slti        sp, s9, 1126
                  sltiu       t2, a6, 726
                  sub         a0, s3, t3
                  sub         s2, a0, a6
                  srli        s1, s8, 25
                  slt         a3, a3, s11
                  slti        s0, s0, -1012
                  nop
                  and         s10, a6, a4
                  or          s10, a4, t6
                  sltu        s7, t4, a5
                  xor         zero, a5, s4
                  nop
                  sub         s0, s8, gp
                  add         zero, zero, a7
                  addi        s5, s10, 1725
                  slti        a3, s6, -643
                  srl         s8, t0, s4
                  add         zero, s0, s10
                  xor         s10, s3, s0
                  srl         a3, sp, t1
                  auipc       s7, 633418
                  sltu        s6, a2, sp
                  sltiu       zero, a7, -690
                  srli        a4, a2, 3
                  ori         zero, s0, -2039
                  srl         ra, t2, a7
                  srai        t1, a6, 13
                  andi        a7, t4, -608
                  sub         a5, a7, s1
                  srai        a6, a6, 31
                  sltu        s0, gp, a0
                  or          a0, s9, t6
                  ori         t2, gp, 2007
                  sltiu       t4, s2, -1086
                  addi        s1, s7, -1871
                  add         t4, s10, t0
                  sll         s6, s10, s4
                  ori         t0, t2, 174
                  slt         a0, a7, a5
                  ori         zero, t1, -1777
                  slti        a0, a6, -236
                  slli        s5, gp, 31
                  add         a6, t1, s10
                  srl         s7, t2, gp
                  srli        s6, tp, 16
                  xor         t2, s1, a3
                  srli        s4, s2, 25
                  srl         s2, zero, s10
                  auipc       t0, 246845
                  sll         a4, t2, t1
                  ori         zero, t1, 35
                  slli        t5, gp, 20
                  xor         a0, s5, s3
                  and         sp, t1, s6
                  ori         t0, s11, -1565
                  sltu        t5, s8, zero
                  or          s2, a6, a7
                  andi        t2, s2, -466
                  xori        s3, t4, -1088
                  srli        zero, s5, 10
                  and         zero, t5, t5
                  auipc       s0, 482210
                  andi        s4, a3, -13
                  nop
                  sltu        s7, t3, ra
                  slti        s1, gp, -1908
                  slt         a7, gp, t3
                  slt         s3, t4, a2
                  or          zero, a4, s2
                  xori        a1, s5, 744
                  slli        a5, ra, 31
                  ori         a0, a0, -1047
                  add         gp, t6, t4
                  addi        a7, a3, -1802
                  andi        a7, s10, -997
                  nop
                  sll         a0, t6, t5
                  nop
                  addi        a3, a6, 1688
                  xori        zero, a5, -1402
                  sltu        s10, s4, t4
                  sra         tp, s10, ra
                  slli        a6, a3, 15
                  sll         zero, a0, t3
                  xori        s9, a2, 271
                  add         t2, zero, t4
                  add         s0, s6, s1
                  andi        s2, t4, 214
                  slt         s1, a5, t5
                  srai        t1, s1, 13
                  sub         zero, a5, t2
                  xor         zero, t5, s1
                  auipc       a3, 337230
                  sub         a3, s9, s9
                  slt         a0, s3, t6
                  slti        sp, t3, -1277
                  srli        a0, gp, 17
                  andi        s1, a4, 782
                  sra         tp, s6, a3
                  nop
                  sltiu       s8, t0, -2044
                  auipc       zero, 306590
                  sra         t4, a0, tp
                  srli        a1, a7, 1
                  and         t0, s0, zero
                  sll         s6, s10, s7
                  xori        zero, s10, 398
                  slli        t4, sp, 18
                  slli        s0, s11, 24
                  nop
                  srai        a3, a4, 13
                  lui         a0, 948554
                  nop
                  ori         s4, s1, 390
                  sub         t4, a1, s5
                  slti        a3, a7, 1525
                  sra         t3, s1, s10
                  or          a5, a0, s9
                  addi        a7, a3, 1191
                  sra         s10, t3, s4
                  sll         s9, s6, a5
                  srli        s6, s9, 27
                  addi        zero, s9, 191
                  auipc       t1, 44354
                  slti        zero, s1, 1074
                  slt         a6, s6, s6
                  sll         s9, ra, gp
                  ori         a6, s7, 351
                  and         zero, s9, s9
                  sra         zero, a1, a0
                  addi        s7, a0, 1374
                  and         tp, a3, s7
                  addi        a4, s3, -1770
                  and         a6, t1, s11
                  lui         a1, 849383
                  srli        s1, a2, 27
                  or          sp, gp, zero
                  sra         s2, a6, s5
                  lui         a4, 922651
                  slti        tp, ra, -652
                  srli        s1, t5, 17
                  sll         gp, t0, a3
                  slli        t0, a4, 30
                  and         s9, s3, sp
                  xor         tp, s3, t2
                  andi        s8, s7, -859
                  xor         a7, s11, s0
                  slti        t1, a2, 1294
                  slli        a7, a1, 2
                  add         a1, a6, s8
                  addi        s8, t1, -1808
                  srli        zero, t5, 1
                  xori        a0, s5, 370
                  and         t0, a3, tp
                  xor         t5, zero, t5
                  srli        a3, ra, 25
                  slt         a4, a3, ra
                  xori        t2, s9, -505
                  xori        zero, a3, -156
                  addi        a7, t6, -214
                  xor         s5, t6, t2
                  addi        zero, s9, 690
                  add         a3, s6, s11
                  srai        t3, t1, 25
                  xori        zero, t6, 1514
                  auipc       t5, 772295
                  nop
                  auipc       s1, 750770
                  and         a7, a6, t1
                  auipc       s7, 598622
                  sltiu       a3, t0, -1143
                  and         t4, s11, a4
                  lui         a3, 810651
                  srl         sp, a6, t4
                  srl         gp, a2, s1
                  slli        a5, sp, 27
                  sub         t2, s9, t6
                  lui         a0, 235940
                  add         t5, t4, gp
                  auipc       s1, 1030325
                  andi        s4, a1, -769
                  sub         s0, s8, s4
                  xor         s3, s7, s8
                  sltu        s8, s10, t2
                  sltu        a7, s0, s11
                  xori        s9, s0, 684
                  lui         s8, 697871
                  xor         s3, t1, s3
                  sltu        a3, a7, ra
                  andi        t5, s2, -1798
                  addi        t0, sp, -208
                  and         t3, s11, a6
                  srl         a4, sp, s1
                  xori        s7, a5, -1284
                  slt         s10, t0, ra
                  and         s8, t1, t1
                  sltu        a6, s2, a0
                  srl         s10, s5, zero
                  lui         tp, 318979
                  srli        a1, t4, 3
                  sub         t4, a1, a7
                  ori         t4, a5, -621
                  ori         s1, s9, 688
                  sll         s10, t2, s10
                  xor         s2, a0, t2
                  srai        t5, a3, 4
                  xor         a3, t0, s1
                  slli        ra, s5, 23
                  xor         zero, s6, t2
                  lui         s4, 176188
                  xori        s4, t5, -281
                  nop
                  lui         t0, 1016680
                  andi        s9, s8, 1215
                  auipc       t3, 592666
                  sra         s3, s7, a1
                  sra         s0, s4, s9
                  and         zero, a6, t1
                  sll         s9, s8, s1
                  sll         a0, t2, s8
                  xor         s6, a2, s11
                  srai        s7, a5, 27
                  addi        s5, t4, 1978
                  addi        t2, a3, 107
                  sll         tp, t6, t4
                  addi        a3, a1, -1993
                  sra         s0, s9, tp
                  xor         a4, t3, s2
                  and         s2, a6, a5
                  and         a7, s4, s4
                  slti        t2, s5, -1998
                  nop
                  addi        sp, s3, -669
                  sra         s8, s10, t5
                  sub         a0, a4, s1
                  or          zero, s0, a1
                  srai        s4, a3, 23
                  srl         t0, a4, s1
                  slti        a6, t6, 27
                  xor         a4, ra, s6
                  slli        a1, s9, 18
                  srl         a0, s5, a3
                  sll         s7, s2, a7
                  srl         s2, a7, zero
                  and         a7, s0, t0
                  add         t2, t4, tp
                  sub         a6, s9, t0
                  sltiu       ra, sp, -158
                  sra         s4, s5, s0
                  andi        a4, s8, 1280
                  sll         s5, gp, a7
                  addi        tp, zero, 1040
                  sltiu       zero, s10, -1634
                  sltu        t0, s9, t0
                  and         zero, a0, t0
                  sltu        a3, s6, a5
                  srli        gp, s3, 24
                  sll         sp, s3, sp
                  sltu        s1, t4, t5
                  auipc       a6, 580982
                  addi        zero, a2, -1678
                  or          s7, t6, s8
                  srli        t4, s9, 20
                  xori        a7, ra, -1406
                  ori         zero, s9, 1160
                  srl         a5, s1, a2
                  xor         s8, a3, a2
                  add         a1, t5, t6
                  srl         t0, ra, s2
                  sltiu       s10, s4, -959
                  srai        s9, tp, 1
                  slti        t0, s9, -1730
                  lui         a5, 513824
                  ori         s3, s0, -1181
                  srl         zero, s6, gp
                  sltiu       zero, a7, -1154
                  slti        t1, s11, -1511
                  xor         a7, t0, a6
                  xor         a7, t0, tp
                  auipc       t4, 31162
                  andi        s8, a1, -144
                  or          zero, a0, zero
                  sltiu       s6, s11, 1517
                  sub         a5, a3, gp
                  auipc       a1, 936781
                  addi        zero, sp, -310
                  lui         t0, 462083
                  or          t2, s8, t5
                  slli        s5, t3, 19
                  or          s8, s0, t0
                  slt         a7, a2, a3
                  xor         a4, s9, sp
                  nop
                  ori         tp, a5, -66
                  slti        zero, t0, -614
                  addi        a5, ra, -1496
                  srl         s10, ra, a1
                  andi        t3, s6, -1584
                  nop
                  srli        a3, t3, 10
                  sll         a4, a3, a3
                  nop
                  andi        s1, tp, 1386
                  nop
                  or          t0, s8, ra
                  add         s1, t0, s1
                  sra         sp, s10, s6
                  addi        t4, a2, 1847
                  andi        a1, zero, 1301
                  sra         a6, s6, gp
                  or          t3, t5, a1
                  sltiu       s2, a5, -982
                  and         a6, s1, t3
                  addi        a5, t5, -313
                  srl         s8, a3, sp
                  sra         s8, a6, s9
                  xori        a6, t5, 952
                  sra         s2, t5, a5
                  sub         s3, tp, s3
                  slti        s9, s1, 38
                  slti        zero, a7, -440
                  nop
                  sll         t5, a3, s9
                  auipc       a1, 788049
                  xor         zero, tp, zero
                  andi        s2, s11, -1844
                  srli        zero, t2, 25
                  sub         s1, s7, s10
                  sltiu       s5, tp, -27
                  add         t1, a1, a0
                  ori         zero, t6, -835
                  sltiu       a0, s8, 1256
                  addi        s8, a2, 1003
                  or          s4, t2, s11
                  ori         zero, gp, -1995
                  ori         s3, t0, -254
                  slli        ra, t0, 2
                  sltiu       s6, a2, 1596
                  sra         zero, s2, t2
                  addi        a4, s7, 554
                  slti        a7, t4, 691
                  slli        t5, t5, 11
                  slt         a4, s8, t6
                  slli        tp, s5, 16
                  ori         a4, s6, -1573
                  xori        a3, tp, 1873
                  srli        zero, a7, 14
                  xor         s7, gp, s4
                  sltu        a0, s4, sp
                  auipc       ra, 899327
                  nop
                  xori        t2, s10, 955
                  auipc       tp, 674581
                  srli        s3, t4, 6
                  sltu        a5, s9, s1
                  nop
                  and         s0, gp, s7
                  lui         t2, 381576
                  srli        a6, s0, 28
                  andi        s1, tp, 610
                  sll         gp, t1, s9
                  slt         ra, ra, a0
                  and         tp, ra, a7
                  sltiu       s0, tp, 2012
                  srl         zero, ra, t4
                  sub         a6, t0, a2
                  auipc       a7, 735422
                  or          t3, a3, s2
                  sra         s2, t0, s0
                  srai        zero, t6, 18
                  srli        s9, a6, 31
                  lui         s5, 928932
                  lui         tp, 773024
                  slt         t1, s3, a5
                  xori        zero, s1, -1252
                  xor         s2, a5, s6
                  xor         s10, tp, a6
                  sltu        a5, a6, s2
                  auipc       a3, 684757
                  slt         t3, t5, gp
                  srl         s9, s11, s10
                  sra         zero, s1, s8
                  sltiu       s0, s3, 1662
                  or          a3, s11, s7
                  slli        a1, t4, 24
                  auipc       a3, 142617
                  slt         zero, s1, tp
                  sll         s0, s11, s0
                  srl         a5, s7, s3
                  and         t3, s1, a2
                  ori         s6, s6, -826
                  ori         s9, t1, 1073
                  sub         gp, a2, tp
                  slli        s4, s1, 21
                  sra         gp, t4, t3
                  sub         ra, a3, s10
                  addi        a0, a5, -1599
                  sltu        s4, s6, a2
                  sltu        zero, s7, t5
                  slli        zero, s3, 25
                  srli        s10, sp, 4
                  slti        s10, a6, 2032
                  sub         s9, a0, a3
                  srli        a3, s5, 3
                  or          t2, t2, s6
                  lui         zero, 250772
                  srli        t4, t3, 31
                  and         zero, s8, s11
                  sltu        t5, s5, s9
                  andi        a6, t5, 1260
                  nop
                  sra         a1, s9, s2
                  slt         a3, a3, s7
                  sub         zero, t4, a1
                  slt         s4, s11, s6
                  sub         a6, a6, s10
                  or          s1, t3, a1
                  addi        s1, zero, 1117
                  add         s7, a7, a7
                  srli        s0, t1, 3
                  add         t3, s9, s11
                  nop
                  or          zero, a7, s10
                  sra         s6, t4, s6
                  sub         s3, s10, sp
                  ori         s3, s3, 812
                  or          s4, zero, a5
                  addi        a7, a5, -144
                  auipc       s0, 696724
                  srai        a0, s1, 12
                  auipc       t2, 190802
                  sub         zero, a4, s5
                  slt         s2, t2, tp
                  srl         a1, a3, s4
                  sra         zero, s0, ra
                  auipc       a3, 135478
                  addi        a4, sp, 1765
                  or          a5, s6, sp
                  sll         s5, t0, sp
                  xori        a3, t4, 449
                  srli        s9, s1, 17
                  nop
                  slli        a6, a2, 3
                  slt         ra, t4, s4
                  slti        a7, a6, -1009
                  srai        zero, t1, 9
                  auipc       a3, 657457
                  xori        tp, a6, 550
                  sub         s6, s10, t2
                  add         t0, t4, s3
                  slti        s10, a2, 822
                  or          a4, t1, a5
                  andi        a7, s6, 1641
                  srai        s9, a3, 14
                  xor         s8, sp, a4
                  sra         zero, t2, gp
                  slli        zero, a5, 28
                  ori         t3, s7, 397
                  xor         a3, s7, t4
                  sltiu       s5, s10, -1399
                  srai        a3, t4, 31
                  slt         t1, a5, a1
                  auipc       zero, 14794
                  slli        t1, zero, 16
                  andi        gp, s10, -1670
                  addi        t2, a1, 336
                  andi        s6, t3, -455
                  or          s5, s11, ra
                  nop
                  lui         t2, 32137
                  ori         a7, tp, -480
                  srl         t4, t4, tp
                  srl         a3, sp, a5
                  ori         a1, s8, 1914
                  ori         zero, gp, -660
                  add         s6, t0, t4
                  slt         t3, s10, s6
                  auipc       s9, 567363
                  srli        a1, ra, 28
                  add         s7, a1, tp
                  add         t3, gp, s8
                  nop
                  and         s3, sp, t5
                  andi        s5, t6, 1180
                  slli        a1, a1, 24
                  sltu        a6, s4, s9
                  nop
                  and         a5, s5, t3
                  nop
                  sll         zero, s11, s0
                  addi        a3, a6, -1198
                  sltiu       s10, gp, 806
                  sltu        t1, a2, s10
                  lui         zero, 242498
                  addi        t0, a7, -43
                  lui         zero, 355859
                  srl         t4, s10, s8
                  or          s4, a7, gp
                  sltiu       t2, t1, -1591
                  xori        a6, s5, -74
                  andi        t1, t5, 1173
                  srai        s4, a6, 30
                  and         s4, a0, a0
                  xor         t3, t6, s4
                  and         gp, s10, t3
                  addi        s2, zero, 1829
                  andi        a5, s3, 557
                  sll         ra, t0, gp
                  srli        s3, t5, 6
                  andi        s8, s0, -1741
                  srl         s2, zero, s4
                  sltiu       t4, s5, 1551
                  add         a4, s9, t4
                  sra         ra, zero, a2
                  srl         t1, a7, a6
                  xor         a5, a1, s3
                  slli        a7, t4, 2
                  sltiu       tp, sp, 2020
                  auipc       t2, 801861
                  slli        tp, t3, 22
                  sltiu       t4, a4, 459
                  andi        t2, tp, -1070
                  slti        t2, t4, 409
                  slli        a4, t3, 3
                  srl         s10, s9, s10
                  xori        t3, t1, -542
                  sub         a4, sp, sp
                  srli        zero, s11, 13
                  srai        tp, s5, 5
                  andi        s7, s10, -1970
                  xori        sp, a1, -1572
                  andi        s4, a3, 1537
                  xor         tp, s0, a0
                  xor         s0, s1, s6
                  slti        a7, zero, -788
                  nop
                  srli        s9, t2, 28
                  sub         s6, a3, t4
                  nop
                  xor         s5, t2, a2
                  xori        s0, a7, 1528
                  sltiu       tp, a2, 1225
                  slt         gp, a7, tp
                  andi        a4, s11, 1209
                  andi        s10, a1, -757
                  addi        t2, t5, -462
                  and         tp, t0, t2
                  and         s0, a1, s1
                  slli        sp, s9, 26
                  auipc       t0, 295950
                  srai        s8, a6, 10
                  slt         s3, s11, s3
                  srai        s10, s0, 15
                  slli        a3, s8, 11
                  sltiu       a6, s7, 841
                  and         ra, a6, s10
                  sltu        s7, s9, s5
                  srl         gp, s2, a3
                  addi        s10, t3, 1404
                  nop
                  slt         s7, s0, a0
                  xori        s0, zero, -1216
                  sltu        a6, a6, a3
                  xor         t4, s11, a1
                  slli        s9, s10, 28
                  slti        zero, t1, -256
                  auipc       s8, 354357
                  addi        a6, a5, -1497
                  sltu        zero, a1, t3
                  slli        t3, ra, 14
                  andi        s3, ra, -568
                  or          zero, s2, s5
                  add         s6, t2, tp
                  nop
                  srli        s5, s10, 28
                  srli        s9, a4, 26
                  slli        t0, zero, 17
                  sltu        a5, t5, zero
                  sra         zero, a5, s4
                  addi        t2, s7, 650
                  or          t3, s0, s6
                  srl         s3, gp, s10
                  lui         s1, 212233
                  ori         s1, gp, -671
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_10
                  li         t4, 0x0
                  li         t3, 0x0
                  li         s4, 0x1
                  li         s9, 0x0
                  li         a3, 0x1
                  li         tp, 0x0
                  li         s8, 0x22b04a4f
                  li         a6, 0x1
                  li         ra, 0x0
                  nop
                  addi        s9, ra, 1379
                  nop
                  nop
                  add         s9, t6, a1
                  sub         t5, s1, t6
                  nop
                  lui         a6, 108237
                  add         t5, s4, a0
                  addi        t4, t1, 1866
                  lui         s3, 401027
                  add         t3, t6, a4
                  lui         s9, 151357
                  addi        t5, gp, 577
                  addi        a5, s4, -1649
                  sub         s8, a4, s9
                  nop
                  sub         t5, t3, t3
                  addi        s4, t0, -163
                  addi        s9, t3, -1894
                  addi        s8, s4, 934
                  addi        s4, a3, 140 #end riscv_int_numeric_corner_stream_10
                  and         a4, a5, t5
                  srai        s6, a7, 31
                  slti        a3, s1, 1094
                  addi        s1, s7, -326
                  slti        s8, t0, 720
                  sra         gp, s7, s10
                  addi        s5, a0, -1003
                  nop
                  sub         a7, t5, tp
                  sll         s8, s4, sp
                  addi        s7, t6, 1283
                  sll         zero, tp, a0
                  srli        s0, sp, 7
                  add         a5, a2, a3
                  sltu        s0, s7, a3
                  addi        s8, zero, -271
                  xor         a4, t1, gp
                  sltiu       t1, s2, 2032
                  xor         a5, s1, a0
                  or          sp, s11, a3
                  slt         s1, a7, a5
                  srl         s10, s0, gp
                  sltiu       a4, t5, -1620
                  lui         tp, 861346
                  xori        a1, s7, 351
                  sll         ra, s2, s11
                  slli        a0, a7, 26
                  sltiu       zero, a0, 1053
                  nop
                  srli        s10, t5, 3
                  auipc       a4, 783258
                  nop
                  slti        t1, a5, 185
                  sltiu       zero, a2, 113
                  sll         zero, s0, s9
                  sra         ra, s1, s4
                  sltu        a5, t6, t3
                  slli        s1, a7, 5
                  slti        t2, a6, -649
                  xori        a7, zero, -909
                  sra         t3, s11, s8
                  sltu        zero, t4, s11
                  sltiu       t1, s11, -1605
                  sll         s4, t1, gp
                  slli        zero, t6, 9
                  srai        a1, sp, 11
                  srli        gp, a2, 20
                  lui         zero, 387378
                  andi        zero, t4, -1974
                  slt         t2, s8, sp
                  srai        s4, a7, 25
                  add         s8, zero, a5
                  srli        a4, gp, 18
                  and         sp, s0, zero
                  sub         s7, s11, t3
                  xor         tp, s9, t3
                  slti        zero, a5, 226
                  srli        s7, t3, 0
                  sltu        s1, s7, a6
                  srli        gp, s4, 6
                  lui         a0, 926644
                  srli        a0, t0, 27
                  and         s5, a4, a0
                  add         tp, a6, zero
                  xor         ra, a2, zero
                  sltiu       s1, t0, 1039
                  xori        s3, t4, 2046
                  and         gp, a1, sp
                  nop
                  sll         a1, gp, a6
                  addi        s6, s5, 667
                  sra         a3, s9, s8
                  nop
                  add         a3, s1, s6
                  xori        s3, t4, 601
                  slti        t2, s0, -1316
                  sltu        a0, ra, s7
                  slt         s0, t4, a0
                  or          t5, t4, s9
                  nop
                  xori        s5, t6, 1483
                  sltiu       ra, t3, -1436
                  sll         a6, zero, zero
                  xori        t1, a2, -238
                  sll         t0, gp, a3
                  andi        a0, s8, -72
                  and         t0, a3, a3
                  addi        a1, a2, -981
                  xori        t1, t6, 940
                  lui         t4, 358510
                  sll         s9, a0, s3
                  sub         a1, tp, s8
                  auipc       t0, 677927
                  srl         s4, a6, s2
                  nop
                  lui         gp, 45361
                  addi        t1, t6, -1385
                  sra         sp, s1, a1
                  slli        t1, s11, 29
                  or          a0, s10, a0
                  and         s4, a0, s2
                  slt         t5, s10, t1
                  srai        s3, zero, 4
                  slti        a4, gp, 1148
                  sll         zero, t2, ra
                  xori        gp, a7, 1949
                  auipc       t2, 903949
                  add         s3, s0, s5
                  slt         zero, a6, a5
                  auipc       s6, 369091
                  srli        s10, s4, 18
                  sltiu       a1, t1, -927
                  srl         gp, t0, t1
                  nop
                  auipc       t4, 967078
                  slti        s9, tp, 1728
                  or          t3, t6, s1
                  sltiu       zero, a4, -437
                  addi        s7, s11, 1883
                  slli        s7, t1, 26
                  or          s5, s6, s2
                  ori         a3, sp, 1898
                  sltu        sp, a0, s11
                  lui         t4, 719317
                  ori         s4, s2, 1698
                  la x12, test_done
                  jalr x0, x12, 0
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
                  csrrw x27, 0x340, x27
                  add x27, x31, zero
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
                  csrr x30, 0x300 # MSTATUS
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 31
                  bne x30, x0, mmode_intr_handler

mmode_exception_handler:
                  csrr x30, 0x341 # MEPC
                  csrr x30, 0x342 # MCAUSE
                  li x28, 0xb # ECALL_MMODE
                  beq x30, x28, ecall_handler
                  li x28, 0x2 # ILLEGAL_INSTRUCTION
                  beq x30, x28, illegal_instr_handler
                  csrr x28, 0x343 # MTVAL
                  1: la x12, test_done
                  jalr x1, x12, 0

ecall_handler:    
                  la x30, _start
                  sw x0, 0(x30)
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
                  la x12, write_tohost
                  jalr x0, x12, 0

illegal_instr_handler:
                  csrr  x30, 0x341
                  addi  x30, x30, 4
                  csrw  0x341, x30
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
                  add x31, x27, zero
                  csrrw x27, 0x340, x27
                  mret

pt_fault_handler: 

.align 2
mmode_intr_handler:
                  csrr  x30, 0x300 # MSTATUS;
                  csrr  x30, 0x304 # MIE;
                  csrr  x30, 0x344 # MIP;
                  csrrc x30, 0x344, x30 # MIP;
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
                  add x31, x27, zero
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
