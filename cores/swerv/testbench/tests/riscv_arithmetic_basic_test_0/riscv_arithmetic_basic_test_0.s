.globl _start
.section .text
_start:           
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x31, h0_start
jalr x0, x31, 0
h0_start:
                  li x30, 0x40001104
                  csrw 0x301, x30
kernel_sp:        
                  la x15, kernel_stack_end

trap_vec_init:    
                  la x30, mtvec_handler
                  ori x30, x30, 1
                  csrw 0x305, x30 # MTVEC

mepc_setup:       
                  la x30, init
                  csrw 0x341, x30

init_machine_mode:
                  li x30, 0x1c00
                  csrw 0x300, x30 # MSTATUS
                  li x30, 0x0
                  csrw 0x304, x30 # MIE
                  mret
init:             
                  li x0, 0xf5f2ac18
                  li x1, 0x375f2688
                  li x2, 0x80000000
                  li x3, 0x80000000
                  li x4, 0xa736d2d0
                  li x5, 0x80000000
                  li x6, 0xf95223b6
                  li x7, 0x4
                  li x8, 0xff2cfdf9
                  li x9, 0x4fe31841
                  li x10, 0xc8d1f8aa
                  li x11, 0x80000000
                  li x12, 0x2
                  li x13, 0xf07358bf
                  li x14, 0xa031799d
                  li x16, 0x6f6e6d9e
                  li x17, 0x80000000
                  li x18, 0xf91f3126
                  li x19, 0x6
                  li x20, 0x1
                  li x21, 0xe
                  li x22, 0xf52a295e
                  li x23, 0xd3d4db8a
                  li x24, 0x0
                  li x25, 0x0
                  li x26, 0x4
                  li x28, 0xfb5b7885
                  li x29, 0x0
                  li x30, 0xf6ed80ac
                  li x31, 0x0
                  la x27, user_stack_end
main:             li         t5, 0x1 #start riscv_int_numeric_corner_stream_2
                  li         s1, 0x0
                  li         t4, 0x1
                  li         a1, 0x0
                  li         t3, 0x1
                  li         s10, 0x6505834a
                  li         ra, 0x1
                  li         s8, 0x0
                  li         s9, 0x1
                  li         a0, 0x1
                  c.sub       a3, a3
                  c.addi      s5, -1
                  mulhu       s6, t3, a4
                  divu        a7, tp, s11
                  c.mv        s3, s1
                  c.nop
                  mulh        s9, t3, a6
                  lui         zero, 108057
                  nop
                  c.addi4spn  a3, sp, 320
                  c.add       sp, t0
                  div         zero, tp, a4
                  c.li        ra, 12
                  lui         zero, 1030622
                  c.lui       a3, 3
                  c.addi4spn  a3, sp, 576
                  auipc       a1, 590709
                  addi        t3, s8, -290
                  mul         a4, a3, gp
                  lui         zero, 396285
                  add         sp, a1, s1
                  c.sub       s1, a3
                  nop
                  c.nop
                  c.li        ra, 18
                  sltu        t3, t4, ra
                  xori        t1, a4, -1299
                  slt         sp, t5, s9
                  xori        t0, a7, 1201
                  c.addi4spn  a3, sp, 448
                  mulh        a1, tp, sp
                  c.xor       s0, a3
                  lui         ra, 186494
                  c.addi4spn  a0, sp, 224
                  rem         t3, s4, s1
                  nop
                  c.srai      a3, 20
                  ori         a6, a3, -1859
                  divu        tp, a0, gp
                  c.li        s7, 16
                  add         s4, t2, a2
                  c.sub       a3, a3
                  mulhu       s5, s8, sp
                  c.addi4spn  a3, sp, 192
                  add         t5, s8, s3
                  mul         t1, s5, t1
                  nop
                  srli        t5, sp, 9
                  slti        s3, s11, 136
                  c.srai      a0, 28
                  add         ra, a0, a5
                  or          s1, sp, ra
                  slt         zero, t4, a0
                  slti        ra, s4, 841
                  xori        s2, s6, 1581
                  c.addi      s5, 25
                  auipc       t5, 477381
                  slli        gp, a2, 21
                  c.addi16sp  sp, 128
                  srli        s8, a2, 10
                  c.srli      a2, 3
                  c.addi4spn  s0, sp, 832
                  srl         a7, a1, sp
                  c.addi16sp  sp, -16
                  divu        s7, t0, a7
                  c.srli      s0, 16
                  c.addi4spn  a3, sp, 128
                  mulhu       s1, s6, s2
                  srli        t4, s9, 16
                  c.addi4spn  a3, sp, 816
                  c.addi      a4, -1
                  c.or        a3, a3
                  c.add       tp, s1
                  sub         a7, s11, ra
                  lui         s7, 832976
                  sll         s8, gp, a0
                  c.srai      a3, 19
                  c.add       s5, a1
                  sra         s10, a0, a7
                  divu        ra, t4, s8
                  slli        zero, a2, 17
                  divu        a1, s0, zero
                  c.addi16sp  sp, 160
                  andi        t1, a4, -87
                  c.addi4spn  a0, sp, 608
                  c.mv        a6, s11
                  add         t5, a1, s5
                  sltu        a6, gp, a5
                  c.srai      a0, 28
                  c.xor       s0, a3
                  c.add       sp, s2
                  sra         s9, s5, s6
                  mul         s3, a1, s5
                  sltu        s7, s10, t0
                  ori         s8, s7, 1149
                  mul         t3, s10, t5
                  xori        sp, s6, -1976
                  xori        s7, s2, -1839
                  sub         s0, s1, a5
                  andi        sp, ra, 846
                  srai        ra, a4, 24
                  c.xor       a3, a3
                  xor         a2, a1, s10
                  c.addi16sp  sp, -16
                  sra         a0, t2, s4
                  c.srli      a3, 13
                  srai        s1, gp, 22
                  or          zero, a4, a2
                  auipc       s6, 141329
                  nop
                  c.srai      a3, 27
                  srai        s7, a3, 26
                  nop
                  c.add       s9, s10
                  lui         a7, 674366
                  c.andi      a3, -1
                  auipc       s6, 841113
                  srli        zero, gp, 26
                  c.addi4spn  a3, sp, 640
                  srai        s2, a4, 21
                  xor         tp, a1, s10
                  slli        t2, s10, 3
                  mulhu       s2, s3, a4
                  lui         a2, 745017
                  slli        a4, s0, 31
                  c.add       s5, s1
                  c.addi16sp  sp, 352
                  and         t1, s0, a0
                  sltu        a7, a0, s8
                  srli        a7, t2, 14
                  nop
                  c.sub       a3, a0
                  sll         s10, zero, sp
                  c.srai      a3, 16
                  srai        zero, t6, 5
                  or          t5, a4, s8
                  slli        s1, s0, 5
                  c.srai      s1, 7
                  srai        zero, s10, 22
                  slt         s3, s4, t5
                  c.srai      a3, 27
                  srai        s10, tp, 1
                  c.sub       a3, a3
                  c.addi16sp  sp, -16
                  and         s1, s10, a7
                  srai        a4, a6, 14
                  rem         gp, ra, s1
                  mulhsu      a7, a4, t5
                  sltu        a6, t5, s0
                  srli        s9, s5, 23
                  c.or        a3, a5
                  mulhsu      a4, a1, s5
                  nop
                  c.addi4spn  a3, sp, 688
                  c.slli      s0, 28
                  c.addi      ra, -1
                  sltiu       a3, s8, -608
                  or          s6, s10, s7
                  c.srli      a3, 27
                  c.mv        a4, s3
                  sll         t3, s3, tp
                  c.nop
                  addi        t5, a6, 777
                  sra         a2, s2, zero
                  mulh        t4, t3, a0
                  c.add       s5, s4
                  c.and       a3, a3
                  srli        s9, sp, 28
                  sra         t5, a1, s10
                  slti        s2, t6, -1487
                  xor         a3, a3, a5
                  sltu        s0, s2, a5
                  c.addi16sp  sp, -16
                  c.mv        a0, sp
                  and         s5, gp, t2
                  nop
                  c.slli      t0, 21
                  c.li        s9, 2
                  add         a6, ra, ra
                  add         t3, s9, s9
                  slt         a1, s10, t3
                  and         a1, a3, a7
                  slti        s4, s5, -470
                  slti        zero, a2, -1858
                  mul         s9, s8, s9
                  c.slli      s8, 25
                  lui         a7, 1047693
                  xori        t5, gp, -66
                  andi        s10, s1, 457
                  srl         s6, s2, ra
                  c.andi      a3, -1
                  slti        s2, s10, 745
                  mulhu       gp, t4, s1
                  xori        tp, t2, 866
                  divu        t4, s2, a4
                  add         s7, a6, s6
                  mulhu       s8, a7, a1
                  sra         t1, s10, s4
                  addi        zero, s0, -734
                  xor         a2, t2, s1
                  sra         s9, s4, zero
                  sll         s5, a0, t2
                  nop
                  c.andi      a3, -1
                  slt         ra, s9, s5
                  ori         s2, t4, -1625
                  srai        sp, t1, 16
                  srli        zero, s7, 28
                  mulh        ra, s8, zero
                  c.srai      a1, 5
                  c.lui       s1, 2
                  c.addi4spn  a3, sp, 64
                  c.srai      a3, 8
                  lui         zero, 689099
                  c.and       a3, a3
                  c.or        a3, a3
                  sll         gp, a0, a7
                  slli        s2, a3, 15
                  xor         zero, s4, s3
                  c.li        t1, -1
                  c.srai      a3, 22
                  srli        zero, a2, 14
                  c.xor       a3, a3
                  c.slli      s2, 18
                  c.srai      a3, 3
                  srli        s0, zero, 21
                  or          a4, a4, t5
                  srli        t1, s11, 10
                  c.nop
                  c.nop
                  auipc       a6, 814918
                  c.xor       a3, a3
                  c.li        s6, 18
                  xor         s2, s10, s7
                  srli        s3, s4, 10
                  sltu        s7, a2, s3
                  xori        a0, t1, -95
                  srli        t2, s3, 5
                  c.andi      a3, -1
                  srl         a1, s1, t1
                  c.sub       a3, a3
                  c.sub       a3, a3
                  c.addi4spn  a3, sp, 896
                  sltu        a2, zero, gp
                  c.lui       s2, 27
                  c.addi4spn  a3, sp, 128
                  addi        t0, ra, -657
                  ori         sp, t1, 188
                  c.slli      a0, 7
                  lui         s7, 395478
                  c.andi      a3, -1
                  sltiu       t2, t2, -1298
                  div         s0, tp, ra
                  c.addi      a0, -1
                  c.li        s7, -1
                  slt         s9, s11, tp
                  srl         s8, s8, t4
                  mul         t5, a0, a6
                  slli        t2, a4, 27
                  srli        s7, gp, 5
                  c.li        s4, -1
                  slti        ra, a7, 1509
                  xor         t2, s0, t0
                  c.add       t2, s4
                  c.sub       s1, a3
                  slti        zero, gp, 1346
                  c.lui       a7, 25
                  c.srli      a3, 14
                  or          a4, s10, a6
                  c.and       a3, s0
                  c.addi16sp  sp, 384
                  c.add       tp, s1
                  addi        s4, tp, 546
                  c.srai      a3, 1
                  c.slli      s1, 11
                  ori         gp, s9, -1791
                  sltiu       a7, a6, 1499
                  xor         s9, t6, s4
                  c.nop
                  c.sub       a3, s0
                  slt         s2, t0, a0
                  c.srli      a0, 3
                  c.mv        t2, a7
                  xor         tp, a2, gp
                  nop
                  c.addi      ra, 1
                  lui         s3, 121192
                  c.srai      s1, 13
                  mulh        s5, s5, tp
                  slli        s10, a1, 17
                  c.addi      ra, 20
                  addi        s0, t3, 1274
                  c.lui       s8, 4
                  c.and       a3, a3
                  c.xor       a4, a3
                  srl         s6, s1, t5
                  mulh        s2, zero, t4
                  c.mv        t3, sp
                  mulhsu      zero, a7, tp
                  xori        t5, a6, -827
                  sltiu       s4, a5, 1359
                  c.mv        s7, s8
                  c.sub       a2, a3
                  slti        a7, t6, 2040
                  slli        zero, t4, 15
                  slli        s1, s0, 12
                  and         s1, zero, t4
                  divu        a3, t3, a3
                  c.mv        s10, ra
                  slti        tp, a6, -863
                  c.addi      t5, -1
                  c.or        a3, a3
                  auipc       t3, 402082
                  divu        t4, t6, s9
                  and         a1, a3, s4
                  c.lui       a6, 22
                  c.slli      t2, 11
                  mulhu       t3, s0, tp
                  addi        zero, s5, -742
                  slti        t2, a0, -1945
                  mulhu       gp, t6, a2
                  mulhsu      s7, t3, s0
                  c.li        a4, 29
                  c.addi16sp  sp, -16
                  divu        a3, a0, a2
                  srl         s8, t4, a3
                  mulh        zero, s8, s5
                  mulh        a6, a5, s7
                  c.and       a4, a3
                  c.andi      a4, -1
                  mulh        zero, a3, s5
                  c.or        a3, a3
                  div         a6, s11, s1
                  c.nop
                  c.addi      ra, 10
                  slli        s8, t5, 25
                  c.addi16sp  sp, 304
                  c.add       t0, s3
                  sltiu       ra, a0, 1059
                  c.slli      s3, 22
                  sll         zero, zero, a6
                  add         s7, a1, s1
                  srli        zero, a0, 22
                  or          s10, s4, s11
                  sra         a6, s5, a4
                  ori         s5, s5, -610
                  nop
                  c.xor       a3, a3
                  c.addi      s1, -1
                  c.srli      a3, 4
                  addi        s5, s2, -1548
                  c.xor       a3, a3
                  srai        a3, s9, 16
                  lui         t3, 136798
                  addi        s9, s6, -1571
                  sltu        s2, s4, t4
                  sltiu       t0, t0, -1200
                  slli        tp, t1, 6
                  ori         gp, ra, -12
                  c.addi4spn  a3, sp, 576
                  c.srai      a3, 26
                  srl         s7, s7, t1
                  c.li        ra, 20
                  c.xor       a3, a3
                  c.addi4spn  a3, sp, 832
                  div         s2, a7, a2
                  mulh        s5, t5, s0
                  andi        s3, s7, 1045
                  c.or        a3, a5
                  rem         t0, a4, a2
                  add         s10, t4, t4
                  c.slli      s7, 11
                  sub         a6, s7, s2
                  sra         s3, s0, zero
                  slt         a4, a7, t4
                  xor         s6, s10, t4
                  add         a1, s3, tp
                  rem         a3, a1, s9
                  c.nop
                  c.or        a4, a3
                  slt         t0, s4, t2
                  srl         a4, s11, zero
                  add         s7, s3, s1
                  slti        a1, sp, 1962
                  lui         zero, 943792
                  c.lui       ra, 25
                  c.add       ra, s1
                  srai        zero, a7, 24
                  mulhu       a3, a7, s4
                  sra         s3, s0, s9
                  sll         s8, s6, tp
                  sltu        a4, s5, a4
                  c.or        a4, a3
                  c.xor       a3, s1
                  c.or        a3, a3
                  slli        s4, sp, 8
                  c.slli      s2, 12
                  c.nop
                  c.addi      s2, -1
                  slt         sp, gp, s4
                  c.andi      a3, 29
                  slti        a4, t5, -84
                  sll         sp, s1, a1
                  c.srai      a3, 31
                  c.sub       a3, a3
                  c.lui       ra, 19
                  c.add       t0, t1
                  c.add       s3, t2
                  ori         s10, a5, 960
                  c.or        a3, a3
                  c.add       t0, ra
                  c.xor       a3, a3
                  sll         s0, tp, s9
                  slli        zero, t6, 29
                  and         t1, tp, t5
                  c.nop
                  lui         s2, 823492
                  srli        gp, s5, 16
                  c.sub       a3, a3
                  srai        s6, s5, 3
                  and         s7, a5, s9
                  sltiu       s1, zero, 597
                  slli        zero, tp, 21
                  sltu        s3, s11, s8
                  mul         t1, a7, s9
                  sll         zero, s4, t1
                  sltu        ra, a6, ra
                  srl         s2, t5, a1
                  and         s8, a2, s11
                  and         s6, a1, s7
                  c.mv        t2, a1
                  mulh        s9, t5, a0
                  c.slli      s2, 24
                  mul         t0, a6, s8
                  c.srli      s1, 24
                  c.add       ra, s9
                  sub         t5, zero, s0
                  sll         ra, s10, a4
                  slt         sp, t3, s1
                  c.slli      a0, 1
                  sub         a4, s4, t4
                  srli        t0, t1, 16
                  c.slli      tp, 29
                  c.slli      ra, 26
                  mulh        zero, s3, t5
                  srai        a4, a3, 10
                  c.addi4spn  a3, sp, 608
                  c.addi16sp  sp, 320
                  nop
                  xori        a3, t5, -82
                  srli        s2, t1, 19
                  divu        zero, s7, t3
                  mulhu       sp, a0, s1
                  c.slli      s4, 16
                  sltu        a3, s4, t5
                  and         s0, s4, a4
                  sll         tp, s4, s9
                  c.mv        a2, s5
                  c.addi16sp  sp, 320
                  auipc       s1, 298562
                  c.mv        t4, t5
                  c.nop
                  c.addi16sp  sp, -16
                  c.addi      sp, 27
                  sll         s5, s10, a2
                  sltiu       a6, s2, 308
                  or          a6, s2, a5
                  div         ra, gp, t5
                  or          t1, s3, s5
                  xori        sp, a4, -36
                  sra         s7, sp, s3
                  c.nop
                  c.or        a3, a3
                  c.mv        a2, s0
                  andi        s3, a1, -351
                  addi        zero, s4, 512
                  lui         s6, 357724
                  c.slli      sp, 17
                  xori        zero, s1, 1377
                  srli        s5, t6, 4
                  c.addi      a1, -1
                  slt         t1, a5, t1
                  slt         s0, zero, t0
                  c.li        ra, -1
                  c.addi4spn  a2, sp, 192
                  c.add       s7, s10
                  c.add       t1, s7
                  mul         s6, a1, t1
                  slti        t5, a4, 1154
                  c.srli      a3, 12
                  c.and       a3, a3
                  mul         a3, s1, sp
                  andi        a6, t1, 848
                  sra         t1, t1, s5
                  add         s5, t4, a1
                  c.addi      ra, 18
                  c.sub       a3, a3
                  c.srai      a3, 6
                  c.nop
                  c.addi4spn  a3, sp, 192
                  c.lui       tp, 9
                  xori        s5, a1, -872
                  slli        zero, s9, 18
                  c.and       a3, a4
                  sltiu       s6, a7, 58
                  c.add       ra, a2
                  mulhu       s2, s7, sp
                  slli        t2, ra, 14
                  c.lui       a3, 14
                  sltiu       ra, t2, -1244
                  c.nop
                  c.and       a3, a1
                  sub         s0, t6, s10
                  sltiu       zero, t3, 160
                  auipc       s2, 338815
                  c.lui       a1, 28
                  sltu        a0, s10, a2
                  ori         a0, s8, 1253
                  slt         a6, t4, s5
                  auipc       zero, 159960
                  div         s5, a1, s7
                  divu        t4, a4, s8
                  c.addi      a0, 30
                  slli        s9, a1, 29
                  c.srai      a3, 29
                  c.xor       a3, a3
                  divu        s0, s8, s11
                  srli        s1, a0, 6
                  rem         s4, s7, a6
                  addi        s3, s7, 1312
                  xor         a3, s2, s11
                  c.or        a3, a3
                  srai        t3, a2, 0
                  and         s8, s5, s10
                  divu        s0, s11, s9
                  c.mv        ra, a3
                  andi        s3, s5, -434
                  or          t3, a0, s0
                  c.slli      s3, 29
                  srli        zero, s7, 2
                  mul         zero, s6, s4
                  c.or        a3, a3
                  c.nop
                  srli        a1, s5, 17
                  divu        s4, t6, tp
                  c.srli      a3, 26
                  c.sub       a3, a3
                  slli        a1, s6, 27
                  c.addi4spn  a3, sp, 576
                  xori        gp, s3, -593
                  c.addi4spn  a3, sp, 64
                  c.andi      a3, -1
                  c.li        a7, -1
                  mul         ra, t0, s6
                  slti        t3, t0, 573
                  c.and       a3, a3
                  mulh        t2, s11, s4
                  c.or        a3, a3
                  div         s5, a2, s0
                  sra         s1, s4, s5
                  c.or        a3, a3
                  mulhu       zero, t6, a6
                  c.add       sp, s8
                  sub         s10, a0, gp
                  c.lui       s3, 12
                  srai        t4, s5, 5
                  c.srai      s1, 22
                  c.slli      a4, 21
                  c.mv        tp, t1
                  lui         gp, 553546
                  srli        zero, sp, 27
                  srai        a6, t6, 12
                  c.andi      a3, -1
                  srl         s2, s7, s8
                  and         zero, s1, t6
                  sltiu       zero, s3, 42
                  xor         s10, s0, tp
                  rem         zero, a0, s8
                  srai        a6, s11, 8
                  auipc       zero, 654496
                  mulhsu      t5, s2, t2
                  or          t0, t2, a0
                  c.mv        ra, t2
                  srl         tp, t5, t4
                  div         sp, a2, ra
                  c.andi      a0, 18
                  c.sub       a4, a4
                  c.sub       a3, a3
                  xori        gp, t0, 907
                  c.lui       t2, 16
                  mulh        s7, a3, s10
                  c.li        t5, -1
                  c.add       sp, s5
                  c.addi      ra, -1
                  mulh        t5, t0, s0
                  mulhu       sp, a7, a1
                  rem         s2, a7, a1
                  slli        a1, s9, 7
                  c.lui       t0, 31
                  auipc       s7, 729569
                  c.andi      a0, 3
                  c.slli      t0, 6
                  mulhu       s3, a2, a7
                  c.srai      a3, 24
                  xor         zero, gp, a4
                  c.li        a7, -1
                  c.xor       a3, s0
                  c.slli      a0, 18
                  c.add       ra, s0
                  slli        zero, t5, 16
                  mulh        tp, a6, t1
                  c.xor       s1, a3
                  c.srli      a3, 14
                  xor         s2, gp, sp
                  andi        a7, s5, -1250
                  andi        zero, a6, 1510
                  ori         zero, s5, -143
                  add         a7, s3, t3
                  c.addi16sp  sp, -16
                  c.addi16sp  sp, -16
                  c.addi16sp  sp, 320
                  c.xor       a4, a3
                  andi        s4, a6, 928
                  srai        a3, a1, 2
                  srai        a6, a2, 29
                  srli        s7, zero, 23
                  srl         a4, a0, a5
                  lui         t1, 278683
                  c.nop
                  sll         a4, s5, s6
                  c.srli      a3, 11
                  auipc       a0, 231469
                  mulhu       s10, s4, s1
                  c.addi16sp  sp, -16
                  c.or        a3, a3
                  c.addi      t5, 3
                  li         t5, 0x71173906 #start riscv_int_numeric_corner_stream_0
                  li         a4, 0x0
                  li         s10, 0x0
                  li         s2, 0x4c02b8d5
                  li         sp, 0x1
                  li         t3, 0x1
                  li         t4, 0x0
                  li         ra, 0x0
                  li         a2, 0x0
                  li         a3, 0x0
                  lui         t5, 90941
                  c.add       a4, s2
                  mulhsu      s6, a0, s9
                  c.sub       a3, a3
                  lui         zero, 352671
                  c.li        gp, -1
                  sub         zero, t6, a4
                  mul         zero, a4, a5
                  rem         s9, t5, s2
                  c.addi4spn  a3, sp, 80
                  divu        a0, s8, a4
                  c.mv        s10, s5
                  nop
                  div         s5, s1, t5
                  c.add       a1, s8
                  addi        sp, t0, 1035
                  auipc       sp, 179028
                  c.lui       s3, 22
                  mulh        t1, a2, s3
                  c.addi4spn  a4, sp, 320
                  c.nop
                  c.add       s3, a2
                  c.addi16sp  sp, 480
                  auipc       s1, 362124
                  lui         t1, 991762
                  mulhsu      s10, s11, t4
                  addi        t2, s8, -1779 #end riscv_int_numeric_corner_stream_0
                  c.sub       a3, a3
                  or          t2, s6, ra
                  mulh        zero, a7, a1
                  sll         s4, t6, s1
                  c.srli      a3, 16
                  slli        a1, t5, 24
                  sltiu       a7, zero, 1085
                  xor         a4, gp, a7
                  add         s7, a5, t1
                  auipc       ra, 513025
                  li         t5, 0x7e031db4 #start riscv_int_numeric_corner_stream_1
                  li         t4, 0x0
                  li         a1, 0x0
                  li         s10, 0x0
                  li         t1, 0x1
                  li         s2, 0x1
                  li         t3, 0x0
                  li         s9, 0x1
                  li         s8, 0x0
                  li         s1, 0x1
                  mulhu       a1, a6, s8
                  addi        gp, tp, -1443
                  c.sub       a3, a3
                  mulh        t4, s7, s7
                  mul         s10, s8, a6
                  c.lui       a4, 20
                  c.lui       t5, 7
                  c.addi16sp  sp, 32
                  lui         a6, 1007566
                  mulhsu      s10, gp, a0
                  c.nop
                  div         a0, a2, a0
                  auipc       a3, 456131
                  mulhu       t1, a6, a6
                  c.nop
                  mulhsu      a2, zero, t1
                  mulhu       tp, t4, t6
                  c.li        ra, 17
                  add         s4, s10, t0
                  c.nop
                  c.addi      ra, -1
                  nop
                  c.nop
                  addi        s2, a3, -628
                  c.nop
                  c.mv        a7, s11
                  c.mv        ra, t4
                  c.addi4spn  a3, sp, 96
                  lui         a1, 10824 #end riscv_int_numeric_corner_stream_1
                  mulhu       s8, a3, t5
                  c.xor       a3, a3
                  srli        t2, s6, 10
                  c.andi      a3, -1
                  c.and       a3, a0
                  slli        t5, t3, 27
                  slt         zero, s2, tp
                  srli        a1, sp, 11
                  auipc       s2, 367663
                  srl         s9, s10, s4
                  addi        a7, t5, 1239
                  auipc       a4, 807325
                  c.xor       a3, a3
                  xor         t1, s5, a1
                  and         a6, t0, s11
                  auipc       sp, 601617
                  divu        zero, a1, sp
                  addi        t0, s10, -1600
                  div         t2, sp, s6
                  mulh        t5, s6, s0
                  slli        t2, t2, 22
                  c.and       a3, a3
                  c.srai      a3, 13
                  c.and       a3, a3
                  nop
                  or          gp, s2, s0
                  and         s2, s7, a0
                  c.nop
                  mulhu       sp, t3, ra
                  ori         s3, gp, 549
                  xori        s0, a7, 654
                  xori        s10, gp, -275
                  c.sub       a3, a3
                  c.addi      ra, -1
                  or          t1, t2, a2
                  srli        t5, s5, 7
                  div         t1, s7, t3
                  sll         s7, s11, s11
                  sra         t1, a6, t5
                  sll         s3, s2, s0
                  xor         a4, s0, s11
                  xori        t4, s0, 788
                  div         s1, ra, s6
                  c.nop
                  slt         t2, s4, s0
                  sll         zero, t2, s6
                  mulhsu      s10, t4, tp
                  sltiu       s7, zero, 678
                  slti        s5, s2, -1582
                  xori        zero, s10, -506
                  mul         s5, a4, a4
                  mulhu       ra, t6, s2
                  c.sub       a3, a3
                  mulhsu      a2, a6, sp
                  c.lui       tp, 4
                  xori        s6, t1, 1922
                  slli        zero, s1, 31
                  xor         t0, t6, zero
                  ori         t3, ra, 1564
                  rem         s6, a1, s7
                  mul         t3, t5, t2
                  ori         gp, t6, -1755
                  c.slli      t3, 23
                  addi        s4, t2, -260
                  c.addi4spn  a3, sp, 320
                  sltu        zero, s8, s2
                  sltu        t1, s7, t5
                  sll         t0, t0, s8
                  mulhu       a1, t6, tp
                  c.li        gp, -1
                  c.and       a3, a3
                  or          s4, s6, a7
                  c.slli      t0, 17
                  sra         s2, a2, a1
                  c.and       a3, a3
                  lui         s0, 190822
                  c.addi16sp  sp, -16
                  xor         s1, t3, a3
                  slt         s6, a0, s5
                  c.andi      a1, 10
                  c.add       ra, t3
                  xor         s10, s4, t4
                  sltiu       t0, a2, 308
                  rem         a3, s5, t0
                  c.srli      a3, 19
                  auipc       zero, 213160
                  c.sub       a3, s1
                  rem         s1, t3, a6
                  slti        sp, t1, -240
                  srli        s8, a4, 2
                  c.sub       a3, a3
                  slti        s3, t2, -1227
                  mul         t5, s2, zero
                  c.slli      t1, 27
                  c.lui       t0, 15
                  c.addi16sp  sp, -16
                  mulh        a4, a3, s4
                  c.addi4spn  a3, sp, 832
                  divu        s7, s3, t3
                  c.addi      ra, 25
                  c.lui       s10, 11
                  c.lui       s10, 24
                  auipc       zero, 146795
                  srai        s8, a2, 7
                  slti        s6, s3, -1874
                  srli        s7, s10, 30
                  c.and       a3, a3
                  or          s2, s0, t0
                  c.sub       a3, s1
                  sltiu       t1, t0, 877
                  sltiu       a1, s5, 843
                  srli        s1, t0, 22
                  xori        a4, s8, 1901
                  c.addi16sp  sp, -16
                  sll         t1, t5, s7
                  nop
                  sub         s7, t3, t3
                  c.slli      s5, 2
                  srai        s5, a3, 8
                  slti        s6, s3, 1960
                  c.xor       a3, s0
                  c.slli      s0, 4
                  c.addi      tp, -1
                  rem         s2, s7, t3
                  c.mv        a2, s2
                  mulhu       t4, s5, s5
                  or          a0, s11, t4
                  sra         tp, s11, s4
                  sltiu       a2, t6, 1851
                  srai        s2, s11, 5
                  ori         sp, s7, -298
                  c.srai      a3, 10
                  slt         s9, t0, s5
                  slt         a4, a1, t2
                  rem         a0, a3, s9
                  or          s5, sp, a1
                  srai        s2, s10, 16
                  nop
                  addi        zero, t2, 1840
                  mulhu       s7, gp, t1
                  xor         ra, a0, s7
                  c.or        a3, a3
                  c.andi      a3, 20
                  sltu        a0, t0, sp
                  add         s0, t1, s0
                  c.or        a3, s1
                  add         zero, s2, s1
                  c.and       s0, a3
                  and         t4, s7, t0
                  c.slli      s7, 25
                  mulhsu      t3, s2, tp
                  or          t0, zero, t5
                  c.xor       a3, a3
                  c.lui       s0, 25
                  or          a4, a7, t5
                  sltu        s3, gp, t6
                  addi        sp, ra, 1264
                  c.srai      a3, 19
                  c.addi16sp  sp, -16
                  c.xor       a3, a3
                  li         a2, 0x628b4758 #start riscv_int_numeric_corner_stream_3
                  li         t5, 0x0
                  li         t4, 0x0
                  li         t3, 0x1
                  li         s9, 0x0
                  li         s6, 0x550c2836
                  li         s8, 0x7532d42c
                  li         tp, 0x1
                  li         s4, 0x0
                  li         a4, 0x0
                  nop
                  nop
                  div         a1, ra, a3
                  c.addi4spn  s1, sp, 800
                  divu        tp, ra, tp
                  add         s8, a5, s10
                  divu        a0, a0, s2
                  div         s1, a5, s8
                  auipc       t5, 18250
                  addi        s0, a7, 569
                  div         s5, sp, a2
                  rem         s4, t5, s5
                  c.addi4spn  a3, sp, 704
                  c.addi      t3, 26
                  c.add       ra, gp
                  c.mv        t5, a4
                  c.lui       a6, 7
                  mul         a6, gp, a4 #end riscv_int_numeric_corner_stream_3
                  c.nop
                  c.andi      a3, -1
                  srl         a6, t3, t3
                  mulh        t2, s2, s8
                  c.xor       a3, a3
                  xori        t4, t1, 1559
                  mul         t3, sp, s7
                  c.addi      ra, 12
                  slti        a7, a5, -1032
                  or          sp, t3, a0
                  addi        s3, t5, 861
                  c.andi      a3, 19
                  slli        s4, s10, 3
                  slt         sp, t4, s0
                  c.addi16sp  sp, 352
                  slti        tp, t1, -658
                  c.mv        t0, s9
                  c.add       t4, a4
                  divu        tp, t0, zero
                  srl         zero, s8, s3
                  xori        a6, t3, 942
                  c.addi      s5, -1
                  c.sub       a3, a3
                  sltu        s3, s7, gp
                  mulhu       a6, a3, a5
                  c.sub       a3, a3
                  srli        a4, t5, 28
                  srai        a4, a4, 3
                  srl         s0, s4, t4
                  mulhsu      s9, s3, t1
                  rem         a6, t2, s0
                  srai        s5, a0, 10
                  mulhsu      t1, t0, s4
                  xori        a3, s9, 471
                  sra         t1, s6, s5
                  c.mv        s2, ra
                  srl         a1, gp, zero
                  c.srai      a1, 24
                  c.add       a1, t6
                  c.add       s10, sp
                  sub         a7, t0, s9
                  mulh        t3, a5, s11
                  mulhsu      t1, t5, gp
                  mul         zero, a7, s5
                  divu        t2, s0, s8
                  ori         gp, t2, -645
                  xori        zero, a2, -863
                  c.addi      s5, -1
                  c.srli      a3, 6
                  andi        s0, sp, 1620
                  c.add       s9, a0
                  mulh        a2, s4, ra
                  rem         a7, t4, s2
                  sltu        t1, t0, a6
                  c.and       a3, s0
                  c.li        s1, -1
                  sra         s5, tp, gp
                  lui         t5, 909261
                  c.xor       a3, a3
                  div         t2, t1, s3
                  sltiu       tp, t3, -1678
                  c.srai      a3, 18
                  c.andi      a3, 13
                  c.srai      a3, 21
                  c.or        a3, a3
                  c.lui       s7, 26
                  ori         s0, zero, -1690
                  mul         t4, a7, sp
                  slti        a7, t4, -35
                  srai        t2, sp, 5
                  ori         ra, s2, -793
                  or          s5, a3, t0
                  c.slli      s8, 18
                  mulhu       s5, a6, t0
                  c.or        a3, a3
                  c.mv        t4, a7
                  sll         zero, s3, a2
                  c.mv        a2, s9
                  c.addi4spn  a3, sp, 608
                  c.xor       a3, a3
                  add         s0, t2, s0
                  add         a4, t2, a6
                  c.addi16sp  sp, -16
                  mulh        a2, s3, tp
                  sra         t3, a4, s8
                  divu        zero, a3, s2
                  c.add       s8, t4
                  lui         t5, 581282
                  ori         s4, gp, -238
                  srai        a6, s2, 6
                  ori         zero, a2, 1176
                  c.srai      a4, 30
                  c.sub       a3, a3
                  c.addi16sp  sp, -16
                  c.xor       a3, a3
                  auipc       a2, 1006385
                  slti        s5, s8, 1515
                  slti        s1, a4, 1343
                  c.add       s10, a1
                  c.add       a2, t3
                  lui         s10, 355966
                  srli        s9, tp, 2
                  c.lui       s10, 27
                  c.srli      a0, 10
                  c.sub       a0, a3
                  c.mv        t2, s4
                  srai        s8, s4, 3
                  c.li        ra, 12
                  mul         a7, s11, s10
                  srl         zero, sp, t3
                  c.mv        ra, s7
                  xori        zero, t6, 1883
                  rem         tp, s3, t0
                  slti        zero, s4, 1705
                  sltiu       gp, s7, -836
                  c.srli      a2, 11
                  c.li        s0, -1
                  c.add       s10, t4
                  sra         a7, sp, a2
                  lui         s7, 216681
                  ori         t2, s8, 1410
                  c.nop
                  nop
                  c.nop
                  slti        s0, tp, 1316
                  c.sub       a4, a3
                  c.andi      a4, -1
                  sll         zero, a5, a7
                  nop
                  srli        s5, s4, 12
                  c.nop
                  sltiu       zero, a4, 687
                  mulhu       t1, s3, s5
                  slt         sp, a0, t1
                  sll         s3, t1, s6
                  c.srai      a3, 16
                  nop
                  c.srai      a1, 16
                  sll         zero, s3, t0
                  c.addi4spn  a3, sp, 176
                  c.addi      t2, -1
                  srl         t5, s3, a5
                  lui         s8, 541808
                  sll         s8, s9, s0
                  sra         s10, s4, ra
                  srli        ra, a7, 23
                  c.srai      a3, 31
                  sub         a4, tp, s1
                  c.nop
                  sra         a3, a3, s9
                  auipc       a1, 53683
                  xor         s4, s7, s1
                  sltu        a3, zero, a0
                  div         t2, s3, a2
                  mulhu       a4, s2, s3
                  c.nop
                  mulhu       t1, a4, a0
                  sltiu       s7, t0, -1109
                  slt         s0, s9, t2
                  xor         s5, s0, gp
                  c.and       a3, a3
                  add         t1, zero, t2
                  slti        a6, s9, -2002
                  rem         a7, zero, t2
                  mulh        s3, s1, a2
                  c.srli      a3, 29
                  c.slli      s6, 1
                  srai        a3, sp, 7
                  mul         zero, s5, s0
                  c.addi      s2, -1
                  mulh        s0, a7, a5
                  c.nop
                  ori         tp, s2, -1488
                  srli        s4, a0, 19
                  c.andi      a3, 28
                  mulh        gp, a6, a7
                  andi        zero, s11, -502
                  or          s9, a0, s1
                  c.nop
                  auipc       a6, 631180
                  c.xor       a2, a3
                  sll         ra, t4, s10
                  rem         a7, s1, s1
                  mulhsu      s2, s11, a4
                  c.slli      t0, 1
                  slt         sp, s2, s2
                  mul         t2, s7, s5
                  mulh        s3, a1, s11
                  c.sub       a0, a3
                  c.addi      s5, -1
                  rem         a1, s9, a4
                  sub         zero, t0, s2
                  andi        gp, ra, 225
                  c.mv        sp, ra
                  c.add       a0, a7
                  andi        t4, s6, -1498
                  c.add       a6, t5
                  addi        s4, t0, -718
                  slti        a3, zero, -1125
                  sltiu       s10, t1, 1268
                  slt         a4, sp, a6
                  addi        a1, s2, -1546
                  c.andi      a2, -1
                  div         s4, sp, gp
                  slti        s6, a6, -460
                  sltu        t2, t5, s4
                  mulhsu      t2, s2, s1
                  andi        t0, t0, -1985
                  andi        a7, ra, -1947
                  c.mv        ra, a0
                  auipc       t0, 327145
                  sub         a6, s2, s9
                  srl         s8, a7, s6
                  slt         t0, t3, gp
                  c.addi16sp  sp, 288
                  srli        a0, s2, 0
                  mulhu       t4, s11, a7
                  c.mv        a7, a5
                  c.nop
                  sltu        s7, t4, t2
                  slt         s2, a0, gp
                  rem         a4, s11, a0
                  c.or        a3, a3
                  c.xor       a3, a3
                  div         t2, s11, s1
                  or          s2, s2, a4
                  auipc       s2, 78163
                  srai        s2, t2, 16
                  c.mv        ra, s9
                  sub         zero, t3, t2
                  mulh        a0, a1, s2
                  sra         a2, s10, a0
                  c.lui       s4, 27
                  c.andi      a1, 24
                  nop
                  sll         a1, a3, t5
                  slli        s4, t2, 6
                  mulh        s3, tp, t4
                  c.sub       a3, a0
                  srai        ra, s0, 29
                  divu        s9, t1, s9
                  auipc       zero, 296141
                  xori        s8, s11, -1672
                  sltiu       s2, a0, 303
                  sltiu       zero, a6, -1773
                  c.addi4spn  a3, sp, 832
                  mulh        s2, t1, s4
                  ori         a7, a5, 1766
                  c.lui       t1, 3
                  c.addi16sp  sp, 64
                  c.addi      a0, -1
                  c.lui       ra, 8
                  divu        t0, ra, s10
                  lui         gp, 145763
                  xor         zero, s6, s11
                  c.srai      a3, 27
                  slt         a1, s9, s2
                  c.xor       a4, a3
                  c.addi16sp  sp, -16
                  div         t5, s10, a3
                  c.slli      s1, 22
                  divu        t4, t4, tp
                  mul         t0, s8, t6
                  auipc       s1, 422849
                  c.and       a3, a3
                  srai        s1, s1, 29
                  srli        a1, a0, 7
                  sltu        a1, s8, t4
                  c.li        s3, 23
                  c.addi16sp  sp, 448
                  c.addi16sp  sp, 368
                  c.nop
                  div         a6, s11, t3
                  sltiu       a7, sp, 1196
                  ori         tp, zero, -1513
                  mulhu       s2, tp, zero
                  mulh        s0, ra, s3
                  xor         a0, a6, t3
                  andi        zero, s9, 876
                  c.lui       ra, 19
                  c.and       a3, a3
                  sltu        s2, a1, s8
                  c.andi      a3, -1
                  c.andi      a4, 31
                  c.lui       s4, 5
                  c.sub       a3, a3
                  mulhsu      t3, t6, s6
                  mulhu       s2, t5, t2
                  divu        a1, s5, t1
                  srl         a3, a4, t2
                  sll         a0, s11, s1
                  andi        s0, t3, -1448
                  sra         t1, t6, a5
                  c.or        a1, a3
                  sub         zero, s2, a1
                  srli        s8, gp, 17
                  c.andi      a3, -1
                  sub         s7, s1, a6
                  or          a7, a3, a2
                  c.add       s5, t1
                  mul         t4, s3, a7
                  sltu        t1, s5, sp
                  sltiu       s5, t1, 515
                  mulhsu      ra, zero, ra
                  lui         t2, 31599
                  xori        t3, t4, -956
                  c.addi      s5, 28
                  sll         a7, t1, zero
                  c.addi4spn  a3, sp, 640
                  sra         s8, tp, s7
                  slt         s10, s5, t3
                  c.and       a3, a3
                  c.slli      ra, 13
                  c.srai      a3, 20
                  xori        a6, a5, -1716
                  slt         s7, sp, a4
                  srai        s6, a4, 13
                  c.add       ra, t0
                  c.add       a6, s2
                  c.and       a3, a3
                  add         sp, s2, a4
                  srai        zero, s0, 4
                  lui         s8, 591378
                  xor         s5, s9, t3
                  xori        s6, a1, -992
                  c.srli      a3, 4
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
mmode_intr_vector_1:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_2:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_3:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_4:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_5:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_6:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_7:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_8:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_9:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_10:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_11:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_12:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_13:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_14:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

mmode_intr_vector_15:
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
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
                  csrr x30, 0x342 # MCAUSE
                  srli x30, x30, 0x1f
                  beqz x30, 1f
                  j mmode_intr_handler
                  1: la x31, test_done
                  jalr x0, x31, 0

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
                  add x27, x15, zero
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
                  csrr x30, 0x341 # MEPC
                  csrr x30, 0x342 # MCAUSE
                  li x23, 0xb # ECALL_MMODE
                  beq x30, x23, ecall_handler
                  li x23, 0x2 # ILLEGAL_INSTRUCTION
                  beq x30, x23, illegal_instr_handler
                  csrr x23, 0x343 # MTVAL
                  1: la x31, test_done
                  jalr x1, x31, 0

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
                  la x31, write_tohost
                  jalr x0, x31, 0

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
                  add x15, x27, zero
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
                  add x15, x27, zero
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
