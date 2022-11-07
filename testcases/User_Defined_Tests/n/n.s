.globl _start
.section .text
_start:           
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x15, h0_start
jalr x0, x15, 0
h0_start:
                  li x31, 0x40001104
                  csrw 0x301, x31
kernel_sp:        
                  la x28, kernel_stack_end

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
                  li x0, 0x78b618a8
                  li x1, 0x4
                  li x2, 0x4d7b9536
                  li x3, 0x80000000
                  li x4, 0xffa7b58f
                  li x5, 0x0
                  li x6, 0xc0058af8
                  li x7, 0x0
                  li x8, 0xc
                  li x9, 0x80000000
                  li x10, 0x3491f4e0
                  li x11, 0xf4cbf6e5
                  li x12, 0xf13426cb
                  li x13, 0x0
                  li x14, 0xf7e5a496
                  li x15, 0x8e711f5
                  li x16, 0x80000000
                  li x17, 0x0
                  li x18, 0x7632863a
                  li x19, 0x0
                  li x20, 0x80000000
                  li x21, 0x1b4694bb
                  li x22, 0x80000000
                  li x23, 0x80000000
                  li x24, 0x0
                  li x25, 0x0
                  li x26, 0x4
                  li x29, 0x0
                  li x30, 0x5
                  li x31, 0x80000000
                  la x27, user_stack_end
main:             li         t2, 0x1 #start riscv_int_numeric_corner_stream_1
                  li         ra, 0x0
                  li         s9, 0x1
                  li         t6, 0x16c37c3
                  li         t5, 0x1
                  li         a4, 0x72cddc89
                  li         s10, 0x62de4461
                  li         t1, 0x1
                  li         t4, 0x0
                  li         a2, 0x0
                  lui         gp, 629986
                  c.mv        ra, s2
                  lui         a1, 698956
                  mul         ra, sp, a4
                  c.addi4spn  a3, sp, 560
                  mulhu       sp, a2, s9
                  mulh        zero, a1, s7
                  mulhu       ra, a5, a4
                  sub         tp, s1, t5
                  lui         s7, 376913
                  addi        a1, a1, 720
                  add         s7, a2, s10
                  c.addi16sp  sp, 208
                  lui         s8, 959526
                  c.mv        a7, ra
                  c.sub       s1, a3
                  c.li        s1, -1
                  mulhu       s9, t6, t6
                  c.sub       s1, a3
                  nop
                  c.add       s4, s5
                  mulh        a2, a1, s10
                  mul         zero, t4, t2
                  addi        tp, t1, -2031 #end riscv_int_numeric_corner_stream_1
                  rem         s0, a7, t3
                  slli        tp, a4, 30
                  lui         s6, 985427
                  mulh        a2, t5, t3
                  lui         s9, 6916
                  mul         s4, t5, s10
                  c.and       a3, a3
                  srai        s1, gp, 2
                  xor         s2, s0, s10
                  addi        t1, s3, -1259
                  sub         a1, s8, s6
                  c.srli      a3, 6
                  mulh        a7, s4, a2
                  rem         zero, a0, s8
                  c.or        a3, a3
                  c.srai      a3, 13
                  mulh        s3, zero, a2
                  add         s5, gp, gp
                  mulhsu      zero, s1, a2
                  ori         a7, t5, 1997
                  mulhsu      tp, s5, s2
                  c.andi      a3, -1
                  c.or        a3, a3
                  sub         s8, t6, s5
                  mulhu       s4, a5, s6
                  nop
                  add         zero, s1, s4
                  mulhu       gp, t5, t2
                  slt         a0, a1, a7
                  ori         t6, s1, -822
                  mulhu       ra, t1, a3
                  sltiu       ra, t2, -1626
                  mulhu       s2, tp, t5
                  slli        t5, t2, 26
                  ori         a3, s8, 1801
                  c.addi4spn  a3, sp, 576
                  lui         gp, 745808
                  sra         ra, s9, ra
                  sub         a0, sp, s9
                  c.xor       a3, a3
                  slt         s8, s1, ra
                  div         t4, t6, s2
                  slt         s3, ra, t6
                  srai        zero, s1, 14
                  srai        s2, a2, 1
                  slt         a6, gp, s2
                  sra         s4, zero, s9
                  c.add       s8, a1
                  slt         a2, s4, t4
                  slti        s0, s3, 588
                  and         t1, sp, tp
                  div         s8, s1, s7
                  c.nop
                  addi        s0, a0, -2021
                  c.and       a3, a3
                  c.andi      a3, -1
                  sub         t1, a4, a5
                  sltu        a0, s6, sp
                  c.nop
                  ori         s0, a7, -1001
                  mulh        sp, s11, a0
                  sub         ra, a3, s7
                  auipc       t1, 424070
                  c.addi      a4, -1
                  c.sub       a3, a3
                  srl         s6, s3, s2
                  xor         zero, a6, ra
                  div         ra, tp, s8
                  c.xor       a3, a3
                  andi        s0, tp, -1088
                  c.nop
                  c.addi      a7, -1
                  mulhu       zero, t1, s7
                  c.mv        ra, s2
                  add         t6, t4, a2
                  and         s8, sp, s9
                  sltiu       s6, t0, 333
                  div         t6, t1, a4
                  mulhu       a2, s1, a1
                  sltu        a2, a2, t5
                  and         a7, s3, s8
                  and         s4, t2, a0
                  c.li        s1, 30
                  c.and       a3, a3
                  c.add       a7, a5
                  c.and       s1, a3
                  addi        zero, s10, 1272
                  c.slli      ra, 19
                  li         t6, 0x6ae8e8c8 #start riscv_int_numeric_corner_stream_0
                  li         a4, 0x1
                  li         t5, 0x0
                  li         t4, 0x0
                  li         a2, 0x0
                  li         a3, 0x0
                  li         a1, 0x1
                  li         s4, 0x1
                  li         s9, 0x37e79f94
                  li         s1, 0x8755692
                  lui         s1, 991535
                  rem         a2, a1, a0
                  c.li        s4, -1
                  c.sub       a3, a5
                  c.sub       a0, a3
                  c.addi16sp  sp, -16
                  c.sub       a3, a3
                  mulh        sp, t6, a3
                  auipc       s9, 608284
                  rem         s9, a6, s7
                  add         t1, s0, a5
                  rem         t4, zero, a0
                  lui         a6, 302277
                  c.nop
                  mulhsu      s1, a0, zero
                  c.li        tp, -1
                  mul         t6, zero, s10
                  addi        a6, t2, -45 #end riscv_int_numeric_corner_stream_0
                  srl         gp, tp, s0
                  xor         t2, a1, t4
                  add         t6, a6, zero
                  srli        t6, s2, 29
                  c.xor       a3, a3
                  mulh        s4, s2, t4
                  lui         zero, 776420
                  c.xor       a3, a3
                  c.addi16sp  sp, 240
                  c.or        a3, a3
                  srli        s0, t4, 17
                  srl         s5, s3, a1
                  srl         t1, s6, ra
                  c.addi16sp  sp, -16
                  div         sp, a3, ra
                  divu        s6, s2, tp
                  lui         a4, 366594
                  sltiu       s6, t6, 980
                  srl         zero, t5, gp
                  mulhu       a1, s7, s10
                  c.sub       a3, a1
                  xori        t0, t2, 405
                  slti        a1, s10, -668
                  sltiu       t6, s7, 1791
                  addi        s1, a1, -1001
                  c.addi      s3, 4
                  slli        s6, s7, 5
                  c.mv        s3, gp
                  srai        t0, s2, 30
                  c.li        s9, 16
                  c.addi4spn  a3, sp, 832
                  or          zero, t2, t6
                  c.or        a2, a3
                  mul         t1, gp, s5
                  c.srai      a3, 29
                  auipc       s0, 732430
                  sltiu       t0, t4, -44
                  c.lui       s8, 7
                  c.addi      ra, -1
                  slli        s5, s8, 0
                  sll         t2, a0, s1
                  c.add       a7, s11
                  sub         s9, s6, s0
                  c.xor       s0, a3
                  c.mv        a3, a5
                  div         t1, s11, s0
                  ori         zero, a0, 1275
                  c.mv        a6, t1
                  c.or        a3, a1
                  mul         s1, a0, a0
                  nop
                  slt         s4, s3, a3
                  c.mv        t1, a6
                  addi        s4, s7, 807
                  c.nop
                  c.andi      a3, 17
                  add         t5, t5, a7
                  mulhsu      t1, a1, tp
                  srl         a7, a3, s9
                  rem         s2, t6, gp
                  and         a1, s3, s0
                  slli        sp, a4, 29
                  slli        sp, a6, 15
                  addi        gp, s10, 1606
                  rem         ra, s0, t4
                  lui         a4, 359771
                  slt         zero, a7, a0
                  c.addi4spn  a3, sp, 832
                  slt         t2, t0, a4
                  srai        t6, s0, 29
                  c.add       a6, s1
                  slt         s3, s9, s2
                  c.li        a6, 15
                  div         s3, s3, a7
                  sub         a2, s8, a2
                  c.add       s10, t0
                  div         t5, s10, t1
                  or          t5, t1, s9
                  addi        a1, sp, -906
                  slli        s5, a1, 7
                  rem         t2, tp, a0
                  sub         s10, s10, s4
                  c.addi      s10, 13
                  slti        s7, s4, 1828
                  sltu        t5, t0, t4
                  sub         s0, s3, a0
                  rem         s6, a5, a6
                  sub         zero, gp, t2
                  or          t6, t0, tp
                  srl         t2, t3, t6
                  c.xor       a3, a0
                  addi        t4, s10, -548
                  slti        t4, t5, 1706
                  nop
                  c.slli      t2, 13
                  c.addi16sp  sp, -16
                  sll         a0, a3, t1
                  c.mv        tp, s4
                  mulh        s5, s10, t5
                  slti        s10, s3, -1362
                  c.mv        a1, t4
                  auipc       s1, 1045400
                  nop
                  auipc       zero, 253285
                  addi        t0, gp, -629
                  c.or        a2, a4
                  xori        zero, t3, 1451
                  or          t6, s10, s7
                  mulh        s7, s9, sp
                  slti        t5, tp, -436
                  srli        s8, t5, 28
                  c.sub       a3, a3
                  c.addi16sp  sp, -16
                  mulh        a6, s2, t3
                  mulhu       t4, s3, sp
                  add         tp, gp, s2
                  c.li        a6, 12
                  sltiu       t2, s9, -1543
                  mulhu       s2, sp, s6
                  c.sub       a3, a3
                  c.or        a3, a3
                  and         a6, s1, a0
                  nop
                  mulhsu      zero, s6, s1
                  mulh        zero, tp, a4
                  c.addi4spn  a3, sp, 64
                  c.addi4spn  s0, sp, 832
                  slli        s6, a5, 7
                  sra         ra, s7, ra
                  c.or        a3, a3
                  c.srai      a3, 19
                  rem         a7, a2, t3
                  or          t6, s6, a3
                  c.or        a3, a2
                  mulhsu      ra, t2, s10
                  c.addi16sp  sp, -16
                  c.add       tp, a7
                  add         t0, sp, a7
                  c.and       a3, a3
                  mul         t2, s7, a3
                  c.and       a3, a1
                  slli        a7, t1, 26
                  addi        t0, a7, 2013
                  c.nop
                  auipc       s4, 171844
                  c.andi      a3, -1
                  andi        zero, zero, 1342
                  xori        s6, t2, -1729
                  xor         t1, t0, ra
                  add         zero, s4, s6
                  c.li        s9, 10
                  c.addi4spn  a3, sp, 16
                  srli        s10, s2, 17
                  addi        a2, a5, -525
                  c.slli      s0, 16
                  and         t5, t1, t3
                  divu        a4, s1, t3
                  c.sub       a3, a3
                  slt         a4, t1, s4
                  auipc       s7, 696525
                  c.mv        ra, a1
                  srl         tp, s4, t2
                  add         t2, s11, s4
                  slli        s1, gp, 12
                  c.srli      a3, 12
                  c.add       tp, gp
                  c.andi      a3, -1
                  sra         tp, t6, a2
                  sll         zero, a5, s0
                  srli        t2, ra, 15
                  addi        a4, s4, -233
                  srli        zero, tp, 25
                  c.nop
                  c.addi      s8, 26
                  c.xor       a1, a3
                  c.addi16sp  sp, 400
                  sll         zero, a5, s11
                  c.lui       s3, 1
                  mulh        t4, s11, gp
                  sltu        s0, a1, gp
                  div         a2, t3, gp
                  c.lui       s10, 20
                  nop
                  andi        s10, ra, 99
                  sltu        t1, s9, a2
                  ori         s1, a7, -1602
                  slt         a2, a3, s1
                  srai        tp, s10, 7
                  mul         a7, s4, s5
                  divu        t4, s0, s2
                  slt         zero, sp, s3
                  c.nop
                  c.sub       a3, a3
                  xor         zero, s2, t3
                  c.sub       a3, a3
                  c.nop
                  c.addi16sp  sp, -16
                  andi        s4, a5, -1393
                  auipc       t5, 218865
                  mulh        zero, s9, sp
                  xori        a4, t5, 1131
                  c.mv        t6, s10
                  c.or        a3, a3
                  c.addi4spn  a2, sp, 640
                  c.sub       a4, a3
                  ori         t5, a7, -1903
                  c.nop
                  andi        t0, a5, -1777
                  mul         s4, s7, s5
                  mul         s7, t4, s0
                  c.srli      a3, 26
                  divu        a1, s8, a7
                  nop
                  xori        t1, s3, -1154
                  or          t6, s9, a4
                  ori         t0, s6, 1311
                  sra         t5, s6, s7
                  slti        s2, s7, -100
                  c.mv        sp, tp
                  c.lui       a1, 7
                  srai        zero, tp, 7
                  c.xor       a3, a3
                  c.xor       a4, a2
                  or          t1, t5, s0
                  c.nop
                  slti        s10, tp, -127
                  srli        t5, a7, 13
                  c.lui       ra, 23
                  c.sub       a3, a3
                  c.xor       a3, a3
                  c.srli      a3, 16
                  nop
                  c.add       s8, s6
                  srl         t2, a7, t3
                  nop
                  sltu        zero, ra, t6
                  c.or        a3, a3
                  mul         sp, t2, tp
                  srai        s1, s6, 11
                  c.slli      sp, 8
                  c.srai      a3, 25
                  c.add       s5, s8
                  c.add       ra, ra
                  c.andi      a3, 5
                  c.addi4spn  a3, sp, 448
                  c.srli      a3, 4
                  divu        t1, zero, sp
                  c.li        s10, -1
                  mulhsu      s4, s2, s11
                  srai        zero, a4, 10
                  c.nop
                  add         ra, s4, s7
                  sltu        s5, a1, a6
                  sll         sp, ra, t0
                  c.lui       a4, 16
                  mulhu       t5, s1, t2
                  c.xor       a3, a3
                  or          a4, a3, gp
                  c.and       a3, a3
                  c.xor       a3, a3
                  mulh        s10, zero, s5
                  srl         s0, gp, ra
                  c.srai      a3, 8
                  add         s1, t2, a2
                  nop
                  c.nop
                  c.lui       s5, 3
                  sub         t1, s9, t6
                  c.andi      a3, 27
                  mul         gp, s1, t2
                  and         a4, s8, s3
                  c.sub       a3, a3
                  or          t2, a5, a7
                  andi        t6, s3, 764
                  srai        zero, t4, 30
                  c.nop
                  c.add       s10, t6
                  sub         t0, s1, tp
                  c.addi4spn  a3, sp, 576
                  c.lui       s7, 28
                  mulhu       s8, a4, ra
                  add         t0, tp, s8
                  xor         a4, gp, gp
                  c.slli      t4, 11
                  xori        t1, a1, -1560
                  auipc       s8, 129902
                  slti        a2, a4, 248
                  mulh        t6, s11, zero
                  li         a3, 0x0 #start riscv_int_numeric_corner_stream_4
                  li         t0, 0x0
                  li         t6, 0x0
                  li         t5, 0x0
                  li         s10, 0x0
                  li         t4, 0x5ccf0a07
                  li         s9, 0x0
                  li         a2, 0x189528e4
                  li         s8, 0x0
                  li         a6, 0x383a668e
                  div         tp, s7, a5
                  add         sp, a2, a5
                  add         s4, s7, s5
                  c.add       a3, s3
                  add         t1, s1, t0
                  c.addi      ra, -1
                  c.add       a7, t6
                  lui         a0, 538847
                  c.addi16sp  sp, 432
                  auipc       t4, 203044
                  nop
                  mulhu       zero, a1, s3
                  add         t5, s0, s8
                  c.addi16sp  sp, 192
                  c.sub       a3, a4
                  nop
                  sub         s5, a1, s8
                  nop
                  mulhu       s6, t6, a4
                  add         s0, tp, t1
                  mulhsu      s4, s9, a2
                  sub         a4, ra, t5 #end riscv_int_numeric_corner_stream_4
                  sub         s10, s1, s4
                  c.lui       a6, 9
                  xori        t0, s7, -914
                  addi        sp, s1, -324
                  c.srai      a3, 14
                  divu        tp, a0, t5
                  addi        t2, a4, -1665
                  and         ra, t4, t3
                  srli        s6, s0, 14
                  addi        s6, a0, -1920
                  andi        tp, t5, -1479
                  c.li        t2, -1
                  c.slli      s6, 23
                  add         t4, s5, s9
                  c.lui       s8, 22
                  mul         t0, t4, a1
                  sll         gp, a2, s9
                  divu        sp, s3, zero
                  srai        a2, s9, 3
                  srai        a4, t4, 30
                  c.lui       ra, 13
                  c.addi      s0, -1
                  c.li        a6, 20
                  auipc       a7, 728403
                  c.addi      t6, 4
                  mulhu       t4, s7, sp
                  c.lui       a4, 24
                  or          a2, s7, a2
                  slti        a3, zero, -1042
                  sltu        s6, s7, a3
                  c.mv        sp, t3
                  c.sub       a3, a3
                  c.srai      a3, 25
                  slli        t6, a2, 19
                  or          zero, s0, s11
                  mulh        zero, sp, s8
                  andi        a4, s8, 750
                  mulh        a6, a3, t5
                  nop
                  c.addi      s2, 18
                  and         a7, s0, s3
                  slli        a7, t0, 14
                  c.srli      a3, 26
                  c.xor       a3, s1
                  divu        t2, s10, a0
                  ori         a2, s6, 1595
                  andi        a6, ra, 1359
                  c.sub       a3, a3
                  sra         t4, t1, a6
                  c.slli      s9, 21
                  c.slli      ra, 5
                  auipc       a2, 192598
                  c.xor       a3, a3
                  c.addi      ra, 6
                  c.li        t4, 12
                  xor         s1, t4, t0
                  auipc       a6, 126571
                  c.mv        t6, gp
                  c.nop
                  slt         t1, t5, s9
                  rem         zero, s10, t2
                  and         t4, a7, s7
                  divu        a2, a7, s8
                  c.xor       a3, a3
                  andi        gp, s8, 74
                  mul         s2, t2, t5
                  lui         s8, 600190
                  and         t0, t2, s4
                  sra         gp, a7, s5
                  slli        sp, a3, 15
                  and         s8, a1, t5
                  c.srli      a3, 8
                  sltu        s2, s2, t6
                  sltu        s6, a1, a1
                  sll         ra, s1, s2
                  div         sp, s4, s0
                  andi        a3, s8, 1715
                  c.nop
                  c.srli      s0, 16
                  add         s0, s9, a4
                  mul         a7, a2, a5
                  mulh        t1, a3, sp
                  sltiu       a1, a6, 1058
                  c.srli      a3, 10
                  or          ra, a2, s3
                  xori        sp, t3, 1009
                  sra         tp, s7, a4
                  sra         s4, s7, s5
                  c.or        a3, a3
                  sra         s4, t0, s6
                  andi        zero, s4, -429
                  c.srli      a3, 12
                  slt         s3, sp, a6
                  sltu        tp, s6, s4
                  and         zero, s1, s4
                  addi        tp, a0, 154
                  c.and       a3, a3
                  slli        a0, s10, 14
                  srl         t4, s3, s7
                  c.and       a3, a3
                  rem         s9, s6, ra
                  or          s2, sp, tp
                  slt         t6, s0, s1
                  rem         t2, a0, a4
                  andi        s8, a1, 1047
                  c.add       t4, tp
                  c.addi16sp  sp, 480
                  c.addi      t5, -1
                  mulh        a2, s11, t6
                  c.addi16sp  sp, 80
                  divu        s0, s6, ra
                  nop
                  addi        tp, t0, -1343
                  srli        t4, s6, 5
                  c.addi4spn  a3, sp, 896
                  slt         s3, s6, t5
                  c.srai      a3, 20
                  sub         a4, a3, s4
                  c.addi4spn  a3, sp, 80
                  c.xor       a3, a2
                  lui         s0, 986061
                  mulhsu      a4, s6, zero
                  xor         t0, s10, t0
                  slt         t0, s2, s0
                  andi        tp, s0, -702
                  sub         tp, t0, t6
                  c.andi      a3, 20
                  ori         a2, a6, -1218
                  sltiu       a6, a0, -1752
                  div         s7, t6, a4
                  or          sp, s5, s4
                  c.sub       a3, a3
                  c.li        sp, 25
                  c.li        a4, 23
                  c.slli      t1, 18
                  xor         gp, s4, a0
                  xor         a1, s11, a7
                  rem         s3, a3, s8
                  or          zero, s0, t5
                  mulhsu      sp, tp, t1
                  and         zero, s3, s4
                  rem         t5, zero, s0
                  c.and       a3, s1
                  c.andi      a3, -1
                  div         t2, sp, s11
                  c.andi      a3, -1
                  xor         a2, s10, s4
                  or          s9, t4, t1
                  rem         a7, sp, ra
                  sltiu       a1, gp, -262
                  or          gp, t3, s8
                  andi        s6, t5, -551
                  add         tp, a0, a4
                  add         t5, t1, s3
                  c.nop
                  slli        a6, t0, 14
                  div         s3, a5, a1
                  div         t0, t0, t1
                  mulhu       a1, t4, s8
                  c.addi4spn  a3, sp, 128
                  rem         t6, s7, a6
                  and         a6, t4, ra
                  c.lui       a6, 20
                  c.add       s7, a4
                  or          s1, t5, s4
                  srai        s6, s0, 17
                  ori         s3, t0, 1367
                  c.sub       s0, a3
                  nop
                  c.andi      a3, -1
                  xori        s1, s11, -1441
                  mulhu       t6, a2, s2
                  mul         a4, a5, a6
                  rem         s0, s4, s5
                  c.andi      a4, -1
                  ori         zero, s0, 1184
                  xori        a3, t2, -1477
                  div         s6, t4, t2
                  sub         t2, t3, t3
                  and         a4, s5, a5
                  add         s2, ra, ra
                  c.addi4spn  a3, sp, 640
                  c.mv        t4, s5
                  c.sub       a3, a3
                  xori        t1, s0, 501
                  addi        s0, s10, 425
                  c.addi16sp  sp, 432
                  add         s10, zero, s5
                  c.sub       a2, a3
                  nop
                  mulhu       s8, t0, a6
                  c.slli      t1, 31
                  addi        zero, t2, -153
                  c.slli      s0, 20
                  and         s0, t2, s4
                  srl         s3, t0, a0
                  c.addi4spn  a3, sp, 608
                  ori         s6, a6, 2007
                  c.srli      a3, 24
                  sltu        s4, s9, zero
                  xor         zero, s4, s5
                  c.srai      a3, 1
                  c.or        a3, a3
                  mulhu       zero, t1, t5
                  slt         t2, s0, t3
                  c.mv        gp, s0
                  add         a2, t2, s1
                  mulhsu      t4, t0, t1
                  c.srli      a3, 28
                  c.slli      s9, 22
                  mulhsu      t5, s11, a4
                  auipc       zero, 275068
                  slli        zero, s10, 5
                  mul         s3, s5, a2
                  rem         ra, t3, sp
                  c.addi16sp  sp, 192
                  c.srai      a3, 10
                  c.slli      t2, 30
                  div         sp, s8, a2
                  slt         s8, s1, a6
                  add         s0, gp, t2
                  c.addi4spn  a0, sp, 576
                  slli        zero, zero, 3
                  sltiu       s9, a5, 1540
                  srl         s3, s5, a7
                  slti        s2, s0, -1503
                  c.mv        gp, t4
                  srl         s2, a3, t3
                  or          zero, t5, s10
                  c.addi4spn  a3, sp, 640
                  mul         a1, s11, t0
                  c.addi16sp  sp, 176
                  c.addi      tp, -1
                  c.andi      a3, -1
                  sltu        s1, a1, a0
                  mulhsu      a2, zero, a2
                  xori        a2, a2, -609
                  c.addi16sp  sp, 192
                  mul         tp, t5, ra
                  c.slli      a0, 25
                  c.srli      s0, 28
                  divu        a0, zero, s0
                  c.nop
                  c.nop
                  c.sub       a3, a3
                  slli        t2, a2, 1
                  sll         s1, s4, a4
                  c.andi      a3, -1
                  sll         t0, a1, t6
                  slt         tp, s1, t4
                  xori        zero, s2, 2012
                  divu        t4, t5, t1
                  c.srli      a4, 16
                  srl         gp, t3, s2
                  c.slli      a2, 27
                  addi        sp, t0, -1103
                  andi        s4, sp, -1775
                  c.and       a3, s1
                  sltiu       sp, t0, 1767
                  rem         s6, s5, a4
                  ori         s1, t0, -414
                  nop
                  srl         t2, s8, t0
                  c.li        ra, 2
                  c.lui       t0, 14
                  slti        s4, s6, 674
                  c.xor       a3, a3
                  and         s2, sp, s8
                  slli        s0, s5, 0
                  c.and       a3, a3
                  c.li        a0, 5
                  rem         zero, ra, s2
                  sub         t1, a5, t3
                  sltu        s1, a6, a5
                  srai        sp, t6, 20
                  sra         s2, s8, gp
                  addi        t4, s2, -1921
                  c.andi      a3, -1
                  c.addi4spn  a3, sp, 880
                  nop
                  c.srai      a3, 29
                  sra         gp, ra, a1
                  sll         t4, s2, a5
                  addi        s1, s4, 1253
                  slti        a4, a6, 1283
                  c.addi4spn  s0, sp, 128
                  auipc       s6, 1029008
                  sltiu       s10, t4, 322
                  slti        s10, a5, -425
                  mulhu       t1, tp, gp
                  c.addi16sp  sp, -16
                  rem         a1, s11, t2
                  and         zero, t0, s8
                  slt         s8, s6, zero
                  sltiu       t2, a5, 1533
                  mul         s2, s3, s4
                  srai        s1, a0, 0
                  srl         t0, s2, s8
                  sll         zero, tp, t0
                  c.add       a3, s9
                  mulhsu      s4, s7, s11
                  c.mv        a2, s7
                  mulhu       a4, s10, ra
                  c.addi4spn  a3, sp, 896
                  mulhsu      zero, t3, gp
                  c.or        a1, a3
                  mulhu       s1, t0, s8
                  mulhu       s6, a1, a4
                  slli        ra, a2, 20
                  rem         tp, tp, a3
                  c.andi      s1, -1
                  sltu        t1, s7, s4
                  c.andi      a3, 20
                  mul         s1, a5, s0
                  c.andi      a3, 5
                  c.srai      a3, 13
                  c.addi4spn  a4, sp, 640
                  sltiu       s3, s8, 138
                  c.and       a3, a3
                  xor         s7, t1, t2
                  auipc       s2, 719564
                  c.and       a3, a3
                  slli        a1, a0, 14
                  xor         sp, a5, sp
                  srai        s1, s11, 1
                  sltiu       s1, s2, 984
                  c.andi      a3, -1
                  sll         t6, s7, t2
                  c.li        s2, -1
                  lui         t4, 606769
                  xor         t2, gp, a5
                  c.sub       a3, a3
                  sra         s1, t4, s2
                  c.addi16sp  sp, 352
                  c.and       a3, a0
                  mul         a3, s6, gp
                  rem         a2, t3, zero
                  c.mv        a3, tp
                  c.mv        t1, s2
                  slti        s10, t0, 808
                  sll         s2, a6, gp
                  slli        a1, a1, 4
                  rem         a3, ra, s4
                  c.lui       ra, 16
                  c.srai      a3, 24
                  c.addi4spn  a3, sp, 128
                  slti        tp, t2, -945
                  rem         a0, t6, a0
                  c.nop
                  c.addi4spn  a0, sp, 320
                  sltiu       s2, sp, -297
                  auipc       s9, 263656
                  auipc       a7, 936292
                  slti        s0, t4, -27
                  sltu        a4, s10, s0
                  c.addi16sp  sp, 160
                  c.srli      a3, 22
                  c.slli      tp, 3
                  mulhu       a3, s8, t4
                  c.mv        s8, s9
                  sra         tp, t5, s4
                  andi        a4, tp, -1087
                  mul         a2, s9, a3
                  c.addi16sp  sp, -16
                  c.nop
                  mulh        tp, t2, s4
                  or          t2, s5, ra
                  sll         t4, sp, s5
                  mul         t0, a5, t3
                  mulh        t6, a2, t1
                  ori         a0, a1, -1816
                  c.or        s1, a3
                  c.sub       a3, a3
                  c.or        a3, a3
                  divu        s1, zero, s10
                  srli        s9, t3, 25
                  divu        a7, t6, s7
                  mulhu       zero, sp, t3
                  sltiu       a3, a0, 269
                  and         a6, s1, a3
                  and         tp, ra, zero
                  c.add       tp, s7
                  lui         a0, 761155
                  mulhu       zero, s1, s2
                  sra         s5, a7, a6
                  c.andi      a3, 13
                  divu        a4, s9, a5
                  c.lui       ra, 16
                  slti        gp, s2, -1304
                  xori        t2, t0, 360
                  sub         sp, t2, s9
                  sra         s9, a0, s8
                  mulhu       t1, t0, a4
                  ori         a0, sp, 65
                  nop
                  c.li        a4, -1
                  mulhsu      s2, t3, a2
                  xor         t5, s1, s4
                  c.addi4spn  a3, sp, 832
                  slt         gp, s6, ra
                  slti        a6, a6, 1758
                  srai        t0, gp, 0
                  rem         s3, a6, t0
                  xori        a6, s4, 1870
                  nop
                  c.addi      ra, -1
                  li         t6, 0x1 #start riscv_int_numeric_corner_stream_2
                  li         t5, 0x0
                  li         s6, 0x0
                  li         s10, 0x6443a5e4
                  li         t1, 0x1
                  li         a4, 0x0
                  li         a0, 0x0
                  li         s4, 0x0
                  li         tp, 0x0
                  li         t4, 0x13a44ea4
                  mulhu       sp, gp, t4
                  mulh        s1, s8, sp
                  c.add       sp, ra
                  c.nop
                  nop
                  c.sub       a3, a3
                  c.addi4spn  a3, sp, 896
                  c.li        a7, -1
                  c.li        s1, 3
                  div         zero, t5, t3
                  c.mv        ra, gp
                  divu        a1, s8, ra
                  auipc       zero, 633531
                  nop
                  c.addi4spn  a3, sp, 896
                  c.addi16sp  sp, -16
                  sub         a6, s2, s6
                  nop
                  addi        zero, t5, 800
                  c.addi16sp  sp, -16
                  c.andi      a3, -1
                  c.srai      a3, 30
                  c.mv        ra, s4
                  or          s7, a7, a0
                  div         s1, sp, s10
                  c.sub       a3, a3
                  rem         tp, t4, s6
                  or          t2, a6, a3
                  srl         t5, s11, sp
                  c.srli      a3, 6
                  xor         t1, a2, t6
                  xor         t2, tp, t5
                  mulhsu      a1, a0, t4
                  c.li        gp, 12
                  andi        s6, t5, -1432
                  mulh        t0, a0, t3
                  sll         a3, s3, a2
                  c.nop
                  mulhu       s8, s4, s10
                  c.lui       t0, 7
                  c.mv        ra, s10
                  c.xor       a3, a3
                  c.addi      t4, -1
                  auipc       s8, 520167
                  lui         zero, 870718
                  mulh        zero, t5, s3
                  slt         zero, t4, sp
                  auipc       t2, 938508
                  sltu        a4, t6, t1
                  mulh        a0, s4, s10
                  c.and       s0, s1
                  srl         s1, s0, s8
                  c.and       a3, a4
                  srli        t0, a1, 15
                  c.and       a3, a3
                  c.slli      a6, 28
                  sub         t5, t5, tp
                  c.mv        ra, s7
                  c.slli      ra, 4
                  c.addi      ra, -1
                  mulhsu      t2, t2, a7
                  sltiu       t1, s9, -180
                  c.addi      a0, 18
                  sra         s5, s11, s11
                  mulhsu      zero, a6, t4
                  xor         s9, tp, a0
                  or          s6, s9, s7
                  and         s3, a5, s5
                  lui         t0, 659726
                  auipc       s9, 684615
                  mul         s2, a4, s9
                  mulhu       s1, t2, t1
                  sll         ra, t5, a0
                  c.andi      a3, 27
                  slli        a2, t6, 9
                  srai        s9, a0, 3
                  xori        s6, a3, -734
                  c.addi16sp  sp, -16
                  lui         s2, 375986
                  divu        s0, s6, s8
                  c.sub       s1, a3
                  sltiu       a6, tp, -510
                  c.or        a3, a3
                  slti        a7, s2, 883
                  and         s3, s5, s5
                  srl         t4, t1, t4
                  c.slli      t6, 25
                  lui         s5, 563528
                  c.nop
                  lui         t2, 970596
                  lui         t1, 577945
                  sltiu       s6, a6, -1275
                  add         a6, a6, sp
                  sub         t6, zero, a5
                  auipc       zero, 1047374
                  sub         t1, t2, s2
                  c.srai      a3, 5
                  auipc       gp, 974664
                  mul         s9, t0, t0
                  slt         s5, ra, sp
                  c.li        s1, 11
                  mulhu       t6, a7, a4
                  ori         a7, s4, -1670
                  ori         t1, s0, -1884
                  xori        s5, s3, 400
                  sll         a7, a0, s11
                  c.slli      t1, 1
                  sltu        t0, s11, sp
                  c.lui       s10, 23
                  c.addi      a3, 17
                  c.addi16sp  sp, -16
                  xori        t1, s3, 193
                  slli        sp, t2, 18
                  c.li        a4, -1
                  auipc       zero, 819371
                  slt         s7, a0, s7
                  c.addi4spn  a3, sp, 320
                  c.mv        s10, t2
                  auipc       zero, 694295
                  divu        a7, s5, s0
                  c.add       s3, a5
                  c.addi      a1, 22
                  xori        s6, t2, -1979
                  div         s6, zero, s9
                  addi        s9, a6, 1326
                  ori         zero, t6, 1835
                  div         s9, s7, s5
                  c.addi      s9, -1
                  srai        s6, t1, 10
                  sra         s10, gp, a1
                  c.addi16sp  sp, -16
                  ori         s7, a3, -692
                  andi        s1, t2, 1119
                  mulhu       zero, a0, ra
                  mulh        s1, s4, a4
                  sltu        a4, t3, sp
                  c.srai      a2, 29
                  c.addi4spn  a3, sp, 64
                  xori        tp, a1, 795
                  c.li        ra, 13
                  c.addi      a2, -1
                  addi        s6, s3, 587
                  c.addi16sp  sp, 128
                  slti        zero, t4, -1715
                  c.addi16sp  sp, -16
                  sra         gp, s2, t6
                  xor         s4, s0, s6
                  sra         s1, t1, t4
                  div         zero, a5, sp
                  c.srai      a3, 6
                  xor         a1, s0, s1
                  c.add       ra, sp
                  mul         zero, a2, ra
                  c.addi      ra, 25
                  c.addi4spn  a1, sp, 400
                  sltiu       s7, tp, 1961
                  andi        s9, t5, -221
                  andi        a4, s1, -1110
                  sub         sp, s11, zero
                  mulhu       t4, t2, t5
                  addi        sp, t0, 248
                  sltu        zero, s1, s11
                  slli        a7, a4, 7
                  ori         s8, a6, -213
                  rem         s6, gp, t2
                  or          s2, s2, s7
                  slt         t6, s10, t0
                  rem         a4, a1, gp
                  div         tp, s0, a1
                  srai        a2, sp, 13
                  c.mv        t0, s9
                  c.nop
                  nop
                  c.srli      a3, 13
                  div         a3, s8, s5
                  rem         s5, t1, ra
                  c.add       a7, a2
                  srai        s0, sp, 3
                  c.addi4spn  a0, sp, 720
                  c.and       a3, a3
                  mulhsu      zero, a4, ra
                  slli        s9, s5, 11
                  c.nop
                  c.li        s3, 24
                  c.and       a3, a3
                  slt         a3, a3, a4
                  mulhu       s7, t6, s0
                  mulhu       t5, t2, a5
                  c.and       a3, a3
                  c.andi      a3, -1
                  c.slli      s1, 31
                  mulh        s0, s7, a7
                  rem         a3, t1, a6
                  auipc       s8, 900342
                  c.andi      a3, 29
                  lui         s3, 146307
                  mulhsu      s9, s1, a3
                  xor         ra, s9, t6
                  and         a6, s3, a7
                  mulh        zero, sp, s9
                  xor         ra, t1, s4
                  c.xor       a1, a3
                  srl         tp, a7, s5
                  add         t2, t0, tp
                  ori         zero, s7, 945
                  srai        t5, t1, 1
                  mulhu       s8, s3, t2
                  mulhsu      zero, s11, a6
                  slti        s5, a3, 1149
                  div         t6, t4, s4
                  ori         zero, t5, 836
                  c.andi      a3, 24
                  sltiu       t6, t5, 1405
                  andi        s6, a1, 1387
                  slt         t1, a1, zero
                  sltu        t4, t6, s9
                  c.lui       ra, 24
                  div         s4, s9, a4
                  c.srli      a3, 13
                  xori        s3, s8, 261
                  c.nop
                  slt         a2, a0, s4
                  div         a1, a2, s0
                  srli        t0, t2, 12
                  xori        s4, a4, -438
                  and         zero, s9, a5
                  c.nop
                  c.addi      s8, 27
                  div         s5, t0, zero
                  nop
                  nop
                  mulhsu      t2, sp, s5
                  srai        zero, s8, 0
                  mul         t0, a4, s11
                  sll         a6, a5, s7
                  c.or        a3, a3
                  andi        a1, s9, -1612
                  and         ra, a0, s11
                  sub         a0, a4, a7
                  srai        zero, t1, 20
                  rem         zero, s11, s3
                  c.addi      a6, 10
                  mulhsu      s4, t6, s7
                  c.addi4spn  a3, sp, 816
                  div         s5, s6, sp
                  c.add       t1, sp
                  c.or        a3, a3
                  srl         a2, a3, sp
                  slt         a1, s10, t4
                  c.li        s10, -1
                  div         t6, s5, t6
                  and         s10, s3, t6
                  xori        s4, s4, -891
                  c.andi      a3, -1
                  c.slli      s7, 1
                  c.li        t1, -1
                  mulh        s9, tp, a6
                  add         t4, ra, t6
                  sub         s4, s10, a6
                  c.li        s1, 14
                  ori         a1, s11, 1504
                  mul         s6, tp, zero
                  div         a3, s1, s1
                  nop
                  div         s7, s7, t1
                  rem         t6, a2, s7
                  auipc       a7, 788925
                  lui         a6, 295856
                  divu        ra, s6, s10
                  nop
                  mul         a7, s2, s11
                  sltu        s8, gp, s5
                  c.add       tp, a1
                  c.addi      t6, -1
                  c.or        a3, a3
                  auipc       zero, 593863
                  slti        gp, s0, -832
                  sub         s2, t3, t4
                  slti        zero, a7, 329
                  andi        s10, a1, -638
                  c.nop
                  sll         a7, t1, a4
                  divu        s8, t4, s2
                  c.mv        t4, sp
                  c.srai      a3, 22
                  divu        a7, tp, a2
                  c.mv        gp, a3
                  c.li        s6, 16
                  srai        t1, a4, 7
                  and         a7, a6, a6
                  lui         t0, 804830
                  or          s3, a3, zero
                  c.nop
                  c.mv        t0, a7
                  c.li        ra, 18
                  srai        a3, a7, 10
                  srai        t4, a7, 11
                  c.xor       a3, a3
                  c.srai      a3, 2
                  c.srli      a3, 8
                  c.nop
                  c.andi      a3, -1
                  mul         s1, sp, a6
                  c.xor       a3, s1
                  nop
                  lui         ra, 826756
                  srli        s9, s6, 4
                  mulh        t5, a3, s5
                  sltiu       a7, a7, 660
                  sub         t2, a3, sp
                  c.addi16sp  sp, 32
                  andi        s4, a1, -1671
                  c.xor       a3, a1
                  divu        s10, s2, t2
                  c.andi      a0, -1
                  xor         a3, a7, t4
                  c.addi      a7, -1
                  andi        t5, s10, -349
                  sub         ra, a6, a2
                  c.mv        ra, a3
                  sltiu       s0, s0, -1065
                  c.andi      a3, 24
                  c.add       ra, gp
                  c.slli      a2, 3
                  c.xor       a3, a1
                  add         t2, a4, zero
                  add         ra, ra, sp
                  rem         s4, sp, s1
                  mulhu       t0, a4, t0
                  nop
                  c.slli      s2, 22
                  auipc       a7, 975067
                  sll         t1, t0, s6
                  c.srli      a3, 1
                  c.nop
                  sltiu       s5, a2, 1244
                  c.srli      a3, 20
                  c.sub       s1, a3
                  c.slli      ra, 8
                  add         s5, s11, a7
                  c.addi      t1, 1
                  c.srai      a3, 17
                  xori        s4, a1, 1786
                  mulhsu      s6, a6, a7
                  c.addi4spn  a3, sp, 192
                  nop
                  c.or        s1, a3
                  mulh        s6, s7, t4
                  mul         s1, s11, gp
                  c.srli      a3, 12
                  c.add       t2, sp
                  c.nop
                  c.lui       ra, 27
                  slt         s8, a2, a4
                  c.andi      a3, -1
                  srai        s5, a6, 22
                  mul         t1, t6, t1
                  sltiu       a1, tp, 1242
                  srai        a2, a4, 5
                  slt         t1, s2, zero
                  mulhu       t2, a3, s7
                  c.addi16sp  sp, -16
                  srai        s2, a0, 20
                  c.nop
                  slti        zero, s9, -186
                  andi        sp, a4, 1589
                  c.addi      sp, -1
                  nop
                  rem         a3, a6, t5
                  c.mv        ra, s11
                  c.andi      a0, -1
                  and         t1, a1, a5
                  c.or        a3, a3
                  c.addi      ra, 3
                  c.mv        a4, a3
                  slti        a3, t1, 33
                  slli        t2, ra, 12
                  srai        ra, a2, 30
                  slt         zero, a6, a5
                  rem         s8, t1, t5
                  c.srai      a0, 13
                  c.addi4spn  a3, sp, 800
                  srai        zero, s6, 2
                  sltiu       gp, a5, -771
                  c.and       a3, a0
                  rem         s4, gp, a4
                  rem         s5, sp, a0
                  lui         t2, 497979
                  c.sub       a3, a3
                  and         s5, t6, s0
                  c.mv        ra, s6
                  c.mv        s9, a3
                  mulhsu      t6, a1, t2
                  c.srli      a3, 27
                  c.srai      a3, 2
                  mul         sp, s5, s10
                  srai        s3, s11, 3
                  ori         a6, a4, 1550
                  c.and       a3, a3
                  auipc       zero, 461425
                  srl         t5, t6, a1
                  c.add       s6, s0
                  c.andi      a3, 4
                  sltiu       sp, s5, 2004
                  c.xor       a3, a3
                  c.srai      a3, 1
                  slli        a0, s2, 14
                  c.addi      ra, -1
                  slt         tp, t4, s4
                  xori        a7, s2, -1938
                  c.sub       a3, a3
                  sltiu       a2, t3, 1590
                  c.and       a3, a3
                  c.mv        a2, a0
                  sub         s1, a1, s11
                  auipc       s8, 776650
                  c.lui       a6, 24
                  c.mv        t5, a4
                  sltiu       s3, gp, 2004
                  rem         sp, s6, s0
                  mul         s9, s8, a5
                  or          t5, s5, a2
                  mulh        ra, sp, s5
                  c.li        a7, 21
                  c.addi4spn  s0, sp, 160
                  c.addi16sp  sp, -16
                  andi        a6, s4, 15
                  c.srai      a1, 31
                  slti        t5, s8, -1743
                  mulhu       s3, t4, t4
                  sub         t0, s5, s4
                  divu        t5, s2, t6
                  c.addi4spn  a3, sp, 576
                  ori         s1, s3, -2034
                  slli        s8, s11, 2
                  c.srai      a3, 31
                  mulhu       t5, t5, s6
                  sub         s10, s1, t4
                  c.addi      gp, 25
                  slli        tp, s10, 22
                  c.lui       a0, 9
                  sra         s5, gp, a4
                  nop
                  div         s6, a3, t2
                  nop
                  c.nop
                  sub         zero, a3, a0
                  add         s3, gp, s6
                  c.xor       a3, s1
                  sub         zero, s8, s7
                  c.srli      a2, 26
                  c.slli      tp, 13
                  mulhu       zero, ra, t4
                  sltu        sp, s5, s10
                  sltu        s9, a0, s0
                  c.srai      a3, 12
                  sltu        t5, t1, s8
                  mulhsu      t0, t4, t0
                  add         s8, s0, s2
                  sltiu       s1, a6, -653
                  sltiu       s1, a0, 1002
                  srli        tp, a0, 7
                  rem         s9, s3, a6
                  and         t1, sp, sp
                  lui         zero, 561650
                  c.lui       t0, 3
                  srli        gp, s3, 6
                  c.sub       a3, a3
                  addi        a2, s10, -969
                  sub         t1, a0, s8
                  c.addi16sp  sp, -16
                  srai        a2, t4, 31
                  slti        s0, s2, 884
                  nop
                  addi        a6, sp, -1219
                  srli        sp, s11, 31
                  nop
                  c.slli      tp, 26
                  c.li        s3, 1
                  c.xor       a3, a3
                  c.mv        s7, s8
                  c.nop
                  slli        a0, t4, 7
                  rem         t2, a0, s8
                  c.slli      t4, 19
                  c.lui       s7, 21
                  sltiu       s3, t5, 886
                  auipc       s5, 457021
                  auipc       a1, 694977
                  li         t6, 0x0 #start riscv_int_numeric_corner_stream_3
                  li         a0, 0x28437485
                  li         s2, 0x0
                  li         a7, 0x238224d0
                  li         t5, 0x19b11f0b
                  li         t4, 0x0
                  li         s10, 0x145e848a
                  li         s8, 0x0
                  li         tp, 0x1
                  li         s0, 0x0
                  c.li        s2, -1
                  c.addi16sp  sp, 16
                  c.nop
                  rem         a6, a7, a7
                  mulhu       a2, s0, a7
                  sub         s7, a2, s0
                  c.nop
                  c.mv        s6, t0
                  sub         t1, a2, s7
                  mul         s2, tp, s0
                  c.lui       s7, 7
                  c.addi4spn  a3, sp, 320
                  c.addi      s0, 20
                  mulhsu      t0, a0, s1
                  c.li        s3, 28
                  c.slli      a3, 17
                  c.srai      a3, 8
                  c.addi      s5, -1
                  rem         s0, t4, s3
                  c.or        a3, a3
                  xori        s8, zero, -1145
                  andi        a1, t5, 1441
                  c.addi4spn  s0, sp, 320
                  c.andi      a3, 16
                  sub         s6, zero, s4
                  c.mv        a0, s3
                  nop
                  nop
                  li         t6, 0xb798f35 #start riscv_int_numeric_corner_stream_5
                  li         t4, 0x0
                  li         s5, 0x0
                  li         sp, 0x0
                  li         a7, 0x5eb40c1f
                  li         t5, 0x5cfb72fa
                  li         a3, 0x459c9601
                  li         s1, 0x1
                  li         s7, 0x3c64ffbf
                  li         s4, 0x1
                  div         a4, s11, s11
                  c.lui       s9, 19
                  auipc       s7, 880088
                  nop
                  lui         a3, 771999
                  c.addi      a7, 26
                  mulhsu      tp, s7, a1
                  nop
                  c.lui       t2, 13
                  divu        t2, t4, a2
                  nop
                  mulh        a0, s2, zero
                  mul         s4, s10, s8
                  c.li        gp, 7
                  mulh        s8, s7, t3
                  c.addi4spn  a3, sp, 560
                  lui         a7, 914786
                  div         a6, a5, ra
                  mulh        t6, s4, a1
                  mulhsu      s1, tp, s6
                  c.mv        s0, ra
                  nop
                  add         t1, t1, s5
                  c.li        t6, -1
                  c.addi4spn  a3, sp, 672
                  c.addi4spn  a2, sp, 320
                  add         s8, a0, t1
                  c.lui       t1, 16
                  nop
                  c.add       a7, s0
                  c.srai      a3, 23
                  sltiu       zero, a4, 1500
                  sra         a2, s7, t3
                  auipc       zero, 60568
                  c.addi4spn  a3, sp, 576
                  slli        zero, t5, 26
                  c.addi      ra, -1
                  lui         s0, 612069
                  slli        s5, a3, 20
                  mulhu       t2, tp, s7
                  slt         a1, s11, a2
                  sll         s8, t5, s8
                  srai        a4, s2, 7
                  auipc       s1, 794365
                  add         sp, s11, a3
                  sltiu       s3, a3, 1954
                  ori         zero, zero, -502
                  c.add       t5, t0
                  c.and       a3, a3
                  mulhu       t0, s2, a5
                  andi        s0, a0, 1511
                  c.and       a3, a3
                  c.sub       a3, a3
                  div         t2, s4, s6
                  xor         ra, a1, gp
                  c.nop
                  addi        ra, a0, 1305
                  sub         t6, t1, t1
                  sub         t5, t3, s7
                  xor         a7, t4, s1
                  lui         t0, 1021131
                  c.li        ra, 23
                  or          tp, a4, a2
                  xor         s9, ra, t2
                  srli        s8, a5, 18
                  c.or        a3, a3
                  mulhsu      zero, tp, t0
                  slt         zero, t4, a6
                  slti        zero, s1, -1493
                  mul         zero, a7, t6
                  ori         s4, gp, -1591
                  addi        s4, s3, -114
                  slt         sp, s6, sp
                  c.lui       ra, 5
                  c.li        a2, 14
                  c.srai      a3, 28
                  nop
                  c.add       s2, a1
                  c.li        a4, -1
                  or          a2, sp, t4
                  mulh        tp, s2, a4
                  mulhsu      sp, s5, ra
                  mulhu       zero, a3, a7
                  addi        a7, tp, 554
                  xori        s7, s8, 1153
                  xori        a0, a7, -1488
                  slt         zero, zero, a0
                  slli        zero, s8, 20
                  c.srli      a0, 22
                  sub         s5, t1, t3
                  c.sub       a3, a3
                  srai        ra, sp, 0
                  srai        a2, s4, 5
                  add         t1, t2, s10
                  mulhu       a4, a4, s3
                  c.xor       a3, a5
                  addi        s4, s11, 534
                  sra         s0, a2, gp
                  c.nop
                  slli        a4, t5, 30
                  ori         t6, ra, 1047
                  rem         s6, a1, a2
                  ori         a1, a7, -746
                  c.slli      ra, 24
                  sub         tp, s6, s11
                  sltiu       a0, a3, 933
                  xor         s5, a6, t5
                  c.li        a7, 22
                  mulhsu      tp, a5, tp
                  c.or        a3, a3
                  slt         tp, a0, s6
                  c.nop
                  rem         a3, a3, gp
                  c.add       ra, a0
                  c.and       a3, a3
                  c.and       a3, a3
                  and         s6, t4, s8
                  c.sub       a3, a3
                  slli        t1, a4, 12
                  divu        zero, a1, tp
                  sub         zero, t5, s8
                  c.mv        s8, s0
                  or          a4, s2, t2
                  c.nop
                  mulh        a6, s8, t4
                  ori         t5, s1, 1896
                  addi        s9, a3, -210
                  c.xor       a3, a3
                  c.andi      a3, 12
                  auipc       a0, 662117
                  slli        tp, t6, 9
                  c.or        a3, a4
                  sltiu       a7, s6, -143
                  c.add       a1, s3
                  auipc       t6, 903862
                  divu        t1, tp, t3
                  c.srai      a3, 17
                  c.srli      a3, 28
                  c.srli      a3, 6
                  c.nop
                  sltiu       s10, s1, -1919
                  c.andi      a3, 13
                  c.andi      a3, -1
                  c.li        s3, -1
                  sltiu       s4, a4, 1182
                  c.lui       s10, 16
                  c.nop
                  c.addi4spn  a1, sp, 896
                  andi        t6, s6, 755
                  mulhu       t4, zero, a5
                  add         t5, a3, zero
                  c.and       a3, a3
                  or          s3, t0, t4
                  srai        s10, s5, 21
                  lui         s9, 90444
                  mulh        s9, a1, tp
                  c.srli      a3, 22
                  slti        tp, zero, -2016
                  c.mv        s9, a5
                  andi        s2, a0, -756
                  c.srli      a3, 28
                  div         s9, a0, t3
                  srl         s8, s9, t1
                  c.li        s2, 23
                  sra         s8, a6, s5
                  nop
                  slti        s1, a5, -1891
                  c.slli      s1, 11
                  c.or        a3, a3
                  sltiu       t1, t2, -512
                  c.or        a3, a1
                  c.or        a3, a3
                  c.nop
                  srai        s5, t1, 2
                  sltiu       s7, t4, 307
                  sll         s7, s3, tp
                  mul         t1, s4, t4
                  divu        a1, t6, ra
                  srl         a6, a3, a5
                  c.mv        a0, s6
                  mul         t0, gp, a7
                  c.or        a3, s0
                  addi        a3, s3, -2009
                  ori         ra, a6, -1909
                  sub         s3, a4, s11
                  mulhsu      a7, ra, a5
                  c.lui       t1, 24
                  and         zero, s0, gp
                  srli        a3, s2, 28
                  c.or        a3, a1
                  xori        ra, t5, 959
                  c.add       s0, s2
                  sll         tp, a6, a6
                  sub         t0, s7, zero
                  c.andi      a3, 24
                  c.or        a3, a3
                  ori         a3, sp, 1501
                  or          s1, a7, a1
                  c.andi      a3, -1
                  add         a3, a1, a1
                  or          s6, a0, t6
                  c.li        ra, 11
                  mulhsu      t0, s10, t1
                  div         a7, a5, s7
                  andi        zero, s3, 1197
                  c.slli      a3, 3
                  mul         a4, s6, tp
                  c.and       a3, a3
                  c.xor       a3, a3
                  c.add       a3, tp
                  c.addi4spn  a3, sp, 400
                  ori         s10, a1, -1413
                  divu        a2, t5, gp
                  andi        s3, s10, -167
                  or          zero, s5, a4
                  addi        tp, t3, 773
                  addi        s4, tp, 1777
                  c.xor       a3, a3
                  c.add       a2, t6
                  c.and       a3, a3
                  sltu        s10, t3, s3
                  ori         zero, s11, 314
                  c.srli      a3, 6
                  srli        a4, sp, 21
                  sltu        s10, a6, ra
                  slli        t0, t3, 18
                  c.andi      a3, -1
                  srl         s1, a6, t5
                  c.mv        t1, s11
                  mulhu       t6, s11, s0
                  mulhu       s9, s5, a6
                  rem         zero, s1, s0
                  sub         s4, a5, s3
                  and         s3, t2, s2
                  slt         s6, a1, gp
                  divu        a3, ra, s8
                  c.addi4spn  a3, sp, 864
                  ori         a3, zero, -259
                  c.add       t6, s3
                  rem         s2, t6, s8
                  rem         a3, s1, s2
                  sltiu       a2, s11, 956
                  c.nop
                  slli        zero, s11, 29
                  rem         s9, s0, s5
                  c.slli      ra, 2
                  srl         t4, a5, s11
                  andi        s5, t4, -1350
                  sub         a2, a7, s0
                  c.addi16sp  sp, 128
                  mulhu       a2, a1, a0
                  srl         t4, s9, ra
                  c.and       a3, a5
                  sll         t1, s9, a2
                  c.addi      s1, 6
                  xor         zero, a0, s1
                  mulh        sp, t4, s0
                  srai        t4, t6, 25
                  srai        s2, a2, 1
                  xori        t1, s7, -669
                  c.mv        ra, t0
                  c.srai      a3, 18
                  slli        s8, s3, 20
                  c.addi4spn  a3, sp, 640
                  sltu        s3, t2, s9
                  sltu        t1, t4, a2
                  addi        t5, s7, 552
                  slti        s3, gp, -505
                  mul         s6, s2, s4
                  srl         tp, sp, zero
                  c.or        a3, a5
                  srl         a2, s4, s9
                  c.and       a1, a3
                  div         s7, a5, a5
                  c.addi      t1, 6
                  slli        a4, t6, 5
                  xor         tp, s10, t1
                  c.addi4spn  a3, sp, 128
                  c.add       s0, t4
                  andi        a4, s1, 1333
                  mul         t6, s7, s7
                  c.andi      a1, -1
                  mulhsu      a7, s8, a4
                  mulhu       zero, a4, s5
                  c.or        a3, a3
                  c.andi      a3, 26
                  c.and       a3, a3
                  nop
                  c.and       a3, a3
                  sltu        t0, s11, t6
                  c.sub       a3, s0
                  c.li        gp, 28
                  srli        s10, t1, 22
                  c.li        s4, 2
                  c.andi      s1, 22
                  c.sub       a3, a3
                  mulhu       t1, a3, t4
                  sltu        s3, s3, s3
                  srai        ra, t5, 16
                  mulhu       a0, gp, a2
                  divu        tp, a5, a5
                  divu        a2, a0, s11
                  mulhu       zero, a2, s7
                  auipc       t2, 656237
                  c.xor       a3, a3
                  auipc       s9, 440016
                  auipc       s3, 233705
                  slti        a0, t2, -27
                  addi        t6, s5, 297
                  mulhu       a7, t4, t6
                  xori        s1, t1, 837
                  c.addi      s5, -1
                  divu        a3, a0, s1
                  c.addi      s10, -1
                  mulhsu      gp, t5, s7
                  c.xor       a3, a3
                  sltiu       a3, a6, -1201
                  add         zero, a5, a6
                  mulhu       s9, s6, s2
                  c.addi      s7, 16
                  add         a1, t6, s11
                  c.li        ra, -1
                  mulh        s0, t6, s8
                  div         s4, s1, gp
                  divu        t5, a7, gp
                  lui         a1, 197036
                  mulhsu      s4, s9, s3
                  c.mv        a1, s0
                  c.addi16sp  sp, 304
                  srli        s10, zero, 3
                  c.li        t1, -1
                  divu        a2, a7, tp
                  add         s7, a6, t5
                  c.addi16sp  sp, 96
                  xori        gp, s3, 680
                  add         sp, s8, s6
                  slti        ra, t1, 1443
                  srl         a6, s3, a4
                  c.mv        ra, a0
                  ori         a7, s3, -1263
                  c.addi4spn  a3, sp, 640
                  div         s1, s4, s4
                  sub         t0, s9, s5
                  rem         t6, t6, s3
                  c.andi      a3, 30
                  rem         s2, s6, a4
                  sltiu       t6, t0, -1831
                  c.mv        a4, tp
                  srl         s0, s0, t6
                  c.addi      a6, -1
                  c.andi      a0, 7
                  sltu        a6, s10, zero
                  slti        a3, s6, -1168
                  sll         tp, gp, s10
                  c.xor       a3, a3
                  sltu        t5, t5, s7
                  mulh        a4, tp, gp
                  lui         s3, 314875
                  andi        s9, ra, 1355
                  ori         t1, a5, 147
                  c.lui       s7, 12
                  c.and       a3, a3
                  c.addi      a2, 29
                  slti        s5, a6, -829
                  c.addi16sp  sp, -16
                  sll         a7, s7, ra
                  andi        t4, a1, 994
                  add         s0, s3, a4
                  slt         s10, t2, t3
                  mulhu       zero, s6, s1
                  srl         a0, s7, s1
                  srl         zero, s0, t4
                  slli        s9, s6, 14
                  c.addi      s2, 1
                  c.or        a3, a3
                  c.and       a3, a3
                  sltu        ra, s3, s7
                  lui         s3, 1040943
                  rem         gp, tp, t6
                  srai        a6, t1, 27
                  c.add       t5, t4
                  sra         a1, gp, a0
                  sub         s1, sp, a6
                  c.addi      t0, 2
                  mulhsu      ra, ra, gp
                  c.andi      a3, -1
                  auipc       s2, 411317
                  divu        a6, s1, tp
                  and         zero, s1, t6
                  c.srai      a3, 22
                  sub         t5, t0, a5
                  sltiu       a3, zero, -534
                  slt         a7, t0, s3
                  c.andi      a3, 20
                  sra         gp, t2, s4
                  sltu        a3, sp, a3
                  srli        s10, s4, 17
                  c.nop
                  addi        a4, s3, 571
                  c.li        ra, -1
                  c.addi      s0, 8
                  sub         a3, t1, s10
                  sltiu       zero, s0, -1020
                  sll         a7, a1, t1
                  srli        gp, a2, 28
                  andi        a6, sp, 383
                  la x15, test_done
                  jalr x0, x15, 0
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
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_2:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_3:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_4:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_5:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_6:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_7:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_8:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_9:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_10:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_11:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_12:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_13:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_14:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

mmode_intr_vector_15:
                  csrrw x27, 0x340, x27
                  add x27, x28, zero
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
                  1: la x15, test_done
                  jalr x0, x15, 0

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
                  add x27, x28, zero
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
                  li x23, 0xb # ECALL_MMODE
                  beq x31, x23, ecall_handler
                  li x23, 0x2 # ILLEGAL_INSTRUCTION
                  beq x31, x23, illegal_instr_handler
                  csrr x23, 0x343 # MTVAL
                  1: la x15, test_done
                  jalr x1, x15, 0

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
                  la x15, write_tohost
                  jalr x0, x15, 0

illegal_instr_handler:
                  csrr  x31, 0x341
                  addi  x31, x31, 4
                  csrw  0x341, x31
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
                  add x28, x27, zero
                  csrrw x27, 0x340, x27
                  mret

pt_fault_handler: 

.align 2
mmode_intr_handler:
                  csrr  x31, 0x300 # MSTATUS;
                  csrr  x31, 0x304 # MIE;
                  csrr  x31, 0x344 # MIP;
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
                  add x28, x27, zero
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