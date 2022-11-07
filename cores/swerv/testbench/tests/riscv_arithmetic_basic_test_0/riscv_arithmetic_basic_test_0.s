.globl _start
.section .text
_start:           
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x31, h0_start
jalr x0, x31, 0
h0_start:
                  li x29, 0x40001104
                  csrw 0x301, x29
kernel_sp:        
                  la x28, kernel_stack_end

trap_vec_init:    
                  la x29, mtvec_handler
                  ori x29, x29, 0
                  csrw 0x305, x29 # MTVEC

mepc_setup:       
                  la x29, init
                  csrw 0x341, x29

init_machine_mode:
                  li x29, 0x1a00
                  csrw 0x300, x29 # MSTATUS
                  li x29, 0x0
                  csrw 0x304, x29 # MIE
                  mret
init:             
                  li x0, 0x6d7d4539
                  li x1, 0xf56afd20
                  li x2, 0x0
                  li x3, 0x0
                  li x4, 0x80000000
                  li x5, 0x0
                  li x6, 0x8
                  li x7, 0xf2b76d60
                  li x8, 0x0
                  li x9, 0x7
                  li x10, 0xfafe5daa
                  li x11, 0x80000000
                  li x12, 0x80000000
                  li x13, 0x80000000
                  li x14, 0x3
                  li x15, 0x0
                  li x16, 0x80000000
                  li x17, 0x80000000
                  li x18, 0xf1ff9196
                  li x19, 0x0
                  li x20, 0xf53b5efb
                  li x21, 0xffbdaec0
                  li x22, 0x7d753a2a
                  li x23, 0xa
                  li x24, 0x9794eb75
                  li x25, 0x0
                  li x26, 0xf19e1541
                  li x29, 0xc006708e
                  li x30, 0x9
                  li x31, 0x0
                  la x27, user_stack_end
main:             li         s7, 0x0 #start riscv_int_numeric_corner_stream_0
                  li         t5, 0x0
                  li         t4, 0x0
                  li         t1, 0x1
                  li         s10, 0x2297ecc6
                  li         a1, 0x592851f7
                  li         ra, 0x1
                  li         s2, 0x1
                  li         a0, 0x1
                  li         s8, 0x1
                  c.sub       a3, a3
                  c.li        s5, 2
                  c.sub       s1, a3
                  rem         zero, s8, t4
                  mulhu       zero, t3, t4
                  auipc       a5, 457700
                  nop
                  mulh        gp, s5, s7
                  c.sub       a0, s0
                  c.nop
                  rem         sp, s2, s8
                  c.li        ra, -1
                  mul         s1, s2, a0
                  mul         a6, a7, s9
                  mulh        s10, s4, t4 #end riscv_int_numeric_corner_stream_0
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_6
                  li         a6, 0x439ac511
                  li         t4, 0x1
                  li         gp, 0x44a70f10
                  li         s10, 0x1
                  li         s8, 0x0
                  li         s9, 0x707ecd58
                  li         a0, 0x5d287c8c
                  li         a1, 0x0
                  li         s4, 0x0
                  mulhsu      s9, s10, t5
                  add         s0, a7, a7
                  c.mv        gp, s2
                  sub         a7, a2, t1
                  c.addi      a1, 10
                  auipc       s0, 558917
                  auipc       tp, 938823
                  auipc       zero, 56735
                  divu        gp, t5, sp
                  nop
                  div         tp, s2, s4
                  c.nop
                  c.nop
                  c.addi4spn  a3, sp, 224
                  nop
                  div         s2, a5, s1
                  c.sub       a3, a3
                  li         t5, 0x1 #start riscv_int_numeric_corner_stream_8
                  li         a3, 0x45d2d41c
                  li         t4, 0x1
                  li         s10, 0x1
                  li         s9, 0x0
                  li         a4, 0x0
                  li         gp, 0x1
                  li         sp, 0x70544943
                  li         s1, 0x0
                  li         s8, 0x1
                  c.sub       a3, s1
                  c.add       t0, s1
                  divu        a4, t3, s2
                  c.li        a7, 15
                  sub         a4, t4, a4
                  rem         s0, s1, a2
                  auipc       zero, 195884
                  c.add       s10, s1
                  nop
                  c.sub       a5, a3
                  add         a4, s1, ra
                  auipc       t0, 691596
                  c.sub       a3, a3
                  c.add       ra, a5
                  addi        s9, s8, -630
                  mulh        t5, a1, a0
                  mul         s7, a4, s5
                  divu        tp, sp, s1
                  c.addi      a3, 27
                  c.nop
                  div         zero, s9, t0 #end riscv_int_numeric_corner_stream_8
                  li         t4, 0x67f04461 #start riscv_int_numeric_corner_stream_2
                  li         a3, 0x1f27c312
                  li         sp, 0x42946ff2
                  li         t5, 0x1
                  li         s5, 0x7583cca5
                  li         s1, 0x7e2b2298
                  li         a2, 0x0
                  li         a4, 0x5ae79143
                  li         a5, 0x0
                  li         s9, 0x0
                  c.add       s9, s10
                  mulh        s7, s5, a6
                  c.addi16sp  sp, 32
                  c.li        ra, 18
                  mulhsu      s0, a5, s4
                  mulhsu      sp, a0, s8
                  mul         zero, s0, a2
                  c.lui       ra, 27
                  mulh        zero, tp, a2
                  nop
                  mul         a7, ra, a2
                  c.sub       a3, a0
                  c.addi16sp  sp, -16
                  mul         ra, a2, a1
                  c.addi16sp  sp, -16
                  c.nop
                  c.addi4spn  a3, sp, 608
                  c.li        ra, 11
                  addi        zero, a4, -2016
                  divu        a7, t1, t4
                  c.addi      s4, 17
                  divu        s0, s4, s6
                  c.addi      ra, -1
                  c.lui       ra, 4
                  div         a1, t3, zero
                  add         a1, s6, s2
                  rem         sp, s6, a1
                  c.addi16sp  sp, -16
                  c.addi4spn  a3, sp, 896
                  or          s5, t1, s7
                  andi        zero, a4, -838
                  c.or        a2, a3
                  or          t5, s0, ra
                  mulh        s10, s1, a2
                  c.li        a2, 27
                  mulh        a7, zero, s0
                  lui         sp, 852798
                  slti        a4, a1, 438
                  auipc       s0, 864356
                  srl         gp, s1, a0
                  xori        a3, s5, 1032
                  addi        zero, t1, 112
                  c.lui       a1, 22
                  xori        s8, a1, -445
                  c.addi      a5, 4
                  srai        s1, a2, 15
                  sub         s4, ra, s2
                  xor         a3, t4, s0
                  slti        s4, a0, 1209
                  div         s7, s7, t3
                  sltu        t0, a5, a4
                  andi        t0, s8, 759
                  srai        a5, s11, 26
                  c.sub       a3, a0
                  sltu        a7, s2, s0
                  c.nop
                  c.lui       a3, 29
                  ori         s3, a3, 1145
                  mul         t1, s1, t3
                  c.srai      a3, 2
                  c.srli      a3, 10
                  mulhsu      t4, gp, ra
                  addi        tp, a1, 351
                  mulhsu      zero, s1, t1
                  c.xor       a2, a3
                  c.add       s6, s10
                  auipc       t0, 177878
                  c.addi16sp  sp, -16
                  slli        zero, t0, 22
                  mul         s2, s2, s9
                  mulh        a2, s4, s7
                  c.add       a3, s1
                  or          a0, s9, a0
                  slt         a0, a0, tp
                  xori        tp, s2, 1650
                  c.xor       a3, a3
                  srai        t4, a2, 17
                  auipc       s0, 399705
                  c.or        a3, a3
                  mulhsu      zero, zero, a2
                  c.addi      s8, -1
                  c.addi      a0, -1
                  rem         tp, a2, s11
                  mulhsu      s5, t1, s4
                  sub         a4, a4, s8
                  nop
                  c.and       a3, a3
                  c.or        a5, a3
                  c.sub       a3, a0
                  srl         gp, t1, a1
                  slti        gp, gp, -1967
                  c.mv        sp, s9
                  c.addi      ra, 29
                  or          a3, a6, t3
                  divu        s6, zero, t1
                  add         zero, a2, a3
                  xor         t1, s2, a6
                  srai        s4, a7, 23
                  c.and       a3, a3
                  c.addi4spn  a3, sp, 688
                  c.slli      a0, 2
                  c.addi16sp  sp, -16
                  add         ra, tp, t3
                  c.xor       a3, a3
                  sub         a0, gp, s11
                  c.and       a3, a3
                  mulhsu      a0, a6, t5
                  sra         a7, a0, a2
                  slti        a3, t5, 1251
                  c.li        s7, 23
                  c.andi      a4, 16
                  c.nop
                  addi        s10, s9, -101
                  xor         a5, s0, zero
                  srli        s10, a4, 4
                  slt         zero, s10, a6
                  c.srli      a2, 28
                  lui         ra, 815316
                  nop
                  ori         a4, t0, 1048
                  srli        ra, t1, 24
                  sub         t0, tp, s10
                  c.add       t4, s8
                  andi        t1, tp, 1375
                  c.mv        ra, ra
                  c.mv        s2, a7
                  sll         t0, a6, a5
                  c.lui       s6, 20
                  and         a6, s11, t5
                  c.add       t1, s0
                  sra         t4, a1, ra
                  mulhsu      s2, t5, sp
                  auipc       a2, 829064
                  nop
                  srl         s9, sp, t4
                  c.addi16sp  sp, 48
                  xori        gp, s8, 589
                  c.nop
                  mul         tp, zero, s11
                  c.li        s0, -1
                  srl         a2, a2, t3
                  c.add       a0, s7
                  sll         t2, a1, a1
                  div         tp, t3, a6
                  sra         zero, s10, tp
                  divu        a3, t5, s2
                  c.addi16sp  sp, -16
                  slt         s9, ra, s8
                  slli        s6, s2, 30
                  c.addi16sp  sp, -16
                  c.mv        a0, gp
                  c.nop
                  srl         zero, t2, a4
                  c.addi16sp  sp, 480
                  nop
                  and         t0, s2, s2
                  slli        a4, s3, 8
                  c.add       tp, t2
                  c.srli      a3, 18
                  c.li        a1, 19
                  slti        s1, a3, -619
                  c.srli      a3, 28
                  or          t1, a1, a1
                  xori        t0, a3, 472
                  c.sub       a3, s1
                  c.li        gp, -1
                  srai        a4, t5, 8
                  c.nop
                  add         s0, a6, a5
                  addi        zero, a5, 588
                  c.srli      a3, 16
                  c.nop
                  div         s5, a1, a5
                  srai        a4, s6, 2
                  xor         a7, a2, sp
                  add         t1, a7, a4
                  c.sub       a3, a3
                  srli        t5, tp, 27
                  sll         s8, s6, s5
                  c.and       a3, a3
                  c.addi      t2, 24
                  sub         s8, a4, t2
                  srli        s2, t3, 0
                  c.mv        t1, tp
                  divu        gp, s4, s9
                  c.add       s8, s2
                  rem         s9, t5, t6
                  c.nop
                  divu        sp, a7, a4
                  c.addi16sp  sp, 416
                  c.nop
                  and         a1, a2, sp
                  c.sub       a3, a3
                  c.addi16sp  sp, -16
                  slli        s7, tp, 1
                  c.slli      s6, 23
                  mulhsu      sp, zero, s6
                  c.slli      a4, 9
                  c.or        a3, a2
                  srli        a6, a2, 28
                  xori        a1, s8, -631
                  c.addi      s8, 23
                  c.mv        s7, ra
                  rem         a5, s4, s4
                  c.lui       a7, 18
                  c.andi      a3, -1
                  c.or        a3, a3
                  c.srai      a3, 9
                  c.addi4spn  a5, sp, 576
                  c.and       a3, a3
                  srl         a3, t4, s4
                  slli        t1, t1, 13
                  andi        s9, ra, -1386
                  div         s5, s7, s2
                  c.mv        s3, s6
                  srl         a2, gp, t5
                  mul         a2, t1, gp
                  c.lui       s2, 31
                  xori        s7, a4, 1887
                  c.lui       ra, 8
                  c.slli      a1, 28
                  srai        a6, a2, 22
                  c.add       t0, t1
                  ori         s1, zero, 173
                  c.or        a0, a3
                  c.addi4spn  a3, sp, 560
                  add         s9, s6, a1
                  c.li        a4, -1
                  c.andi      a3, -1
                  and         zero, a7, s2
                  xori        sp, s6, -233
                  c.lui       s5, 26
                  c.li        a1, 2
                  srai        s0, s8, 23
                  mul         t2, s4, s7
                  c.or        a3, a3
                  or          ra, t5, a5
                  andi        zero, a4, -946
                  and         t5, a3, s6
                  srli        s5, s1, 15
                  c.srli      a3, 3
                  c.mv        a4, t5
                  sub         s6, s5, t6
                  sltu        t4, a2, gp
                  or          s6, s8, a2
                  mulh        zero, t4, t4
                  or          t5, t2, s3
                  c.andi      a3, -1
                  sll         a2, a5, t4
                  c.nop
                  slt         s4, a2, s5
                  c.lui       s6, 30
                  c.mv        a4, s8
                  mul         s1, s2, s0
                  c.or        a3, a3
                  srai        a0, s3, 1
                  c.lui       a1, 21
                  c.li        a3, -1
                  c.slli      ra, 1
                  c.and       a3, a3
                  sll         zero, sp, gp
                  and         tp, s0, t2
                  sra         s9, s2, t4
                  mul         a7, ra, sp
                  c.mv        gp, gp
                  slti        ra, t1, 355
                  c.slli      a7, 12
                  mul         a5, s1, t0
                  mulhu       t2, s5, a5
                  c.xor       a3, a3
                  c.lui       s0, 12
                  c.li        s5, 16
                  sltu        s6, a7, tp
                  c.lui       t5, 1
                  c.slli      a7, 9
                  addi        zero, a3, 901
                  andi        sp, s10, -921
                  addi        s4, s2, 616
                  srl         zero, t5, s7
                  c.srai      a0, 18
                  slli        zero, sp, 10
                  mulh        a5, a6, s2
                  slti        s0, a7, -978
                  srli        t2, t5, 20
                  ori         a4, sp, -88
                  and         s2, t4, t6
                  addi        s6, s5, 817
                  and         a1, a4, a5
                  mul         s6, s8, a2
                  auipc       t1, 547224
                  rem         a1, s2, zero
                  c.addi16sp  sp, -16
                  slt         a4, s6, t3
                  slt         s7, s10, t5
                  xor         zero, t5, a3
                  li         t5, 0x636f2ee1 #start riscv_int_numeric_corner_stream_1
                  li         t4, 0x0
                  li         s10, 0x0
                  li         s8, 0x4a0a3b02
                  li         s9, 0x0
                  li         s2, 0x1
                  li         a3, 0x0
                  li         a0, 0x1
                  li         t1, 0x1
                  li         a6, 0x0
                  sub         s9, s2, s7
                  auipc       s0, 141937
                  c.lui       gp, 24
                  c.nop
                  add         zero, a6, s4
                  c.add       ra, t2
                  addi        s5, a4, 1025
                  c.lui       a5, 14
                  mul         zero, t3, a3
                  mul         s9, a0, sp
                  lui         a6, 233760
                  nop
                  c.add       s3, t4
                  c.nop
                  auipc       zero, 993937
                  add         a6, s1, ra
                  c.mv        tp, t6
                  add         sp, t6, t5
                  c.mv        a3, s11
                  divu        zero, t3, zero
                  c.lui       tp, 21
                  slli        zero, s9, 10
                  ori         tp, t4, 1629
                  xor         tp, s3, t5
                  slti        t0, t0, -536
                  slt         sp, s6, a7
                  xori        a0, s10, 1730
                  c.srli      a3, 5
                  c.and       a3, a3
                  mulhu       zero, s3, s7
                  c.nop
                  c.or        a3, a3
                  sltu        s4, a7, a4
                  srai        s6, ra, 9
                  c.or        a3, a3
                  c.sub       a2, a3
                  mulhsu      a4, s3, a6
                  c.addi4spn  a3, sp, 896
                  mulhsu      t0, a5, ra
                  c.or        a3, a3
                  rem         a0, s3, s10
                  slti        s2, s1, -1469
                  c.xor       a3, a3
                  addi        a3, t2, 1740
                  sub         s2, gp, s11
                  c.srli      a3, 8
                  c.slli      a6, 1
                  and         t5, a5, a0
                  c.lui       a0, 19
                  auipc       t2, 914277
                  c.srai      a3, 11
                  c.mv        s10, a4
                  sra         a5, s3, s9
                  divu        t5, t2, t4
                  divu        gp, t5, a5
                  div         a7, a4, a5
                  nop
                  and         a5, t0, s11
                  rem         s0, a5, t2
                  slli        a2, a1, 17
                  div         zero, t4, t1
                  sra         t1, a0, a4
                  c.mv        ra, s4
                  slt         a3, s4, t4
                  sub         s4, a4, s9
                  sltu        s10, t0, gp
                  and         ra, s0, a7
                  srl         s5, s5, t6
                  add         t5, s9, a3
                  slti        zero, ra, 1398
                  c.addi      ra, -1
                  lui         a0, 99443
                  mulhu       s6, t1, s2
                  sll         s1, a7, a5
                  nop
                  addi        t2, s4, -472
                  c.slli      s2, 27
                  c.mv        s4, a2
                  c.li        s10, -1
                  c.sub       a3, a3
                  c.srai      a5, 15
                  c.addi      s6, -1
                  and         a5, a1, a3
                  addi        t4, s11, -1665
                  mulhu       s2, s8, a0
                  c.slli      ra, 20
                  c.srai      a3, 27
                  nop
                  c.xor       a3, a3
                  c.addi      s4, 16
                  divu        s6, s6, t2
                  c.add       a6, a2
                  and         t2, a6, s7
                  c.or        a3, a3
                  c.srai      a0, 18
                  c.nop
                  c.srli      a3, 25
                  c.srli      a0, 30
                  sub         gp, a5, t3
                  divu        zero, t1, s10
                  nop
                  c.slli      tp, 20
                  slti        s5, t5, -1298
                  c.addi16sp  sp, -16
                  c.addi      ra, 17
                  c.addi4spn  a3, sp, 704
                  mulhsu      s2, s0, s3
                  c.li        t4, 8
                  xori        s8, zero, -1931
                  c.lui       s1, 30
                  andi        a7, s0, 497
                  c.andi      a3, 27
                  c.srai      a3, 26
                  xor         s7, s0, t2
                  xori        s9, t0, 387
                  slti        s6, t1, -409
                  div         zero, t1, gp
                  sll         s8, sp, s10
                  sub         t0, a1, s4
                  or          zero, a3, a1
                  lui         t2, 472100
                  c.and       a0, a3
                  mulh        t0, a1, a2
                  c.addi16sp  sp, 144
                  add         zero, s3, tp
                  c.lui       s9, 9
                  rem         a7, t5, ra
                  srl         s5, t2, s8
                  ori         s10, s8, 1483
                  c.srai      a3, 16
                  c.slli      s4, 19
                  xori        zero, t1, -552
                  c.andi      a1, -1
                  mulhsu      s7, s1, s8
                  lui         zero, 733031
                  and         zero, s9, a0
                  lui         zero, 485514
                  sll         s0, t4, a5
                  mulhu       s8, t2, s7
                  c.addi4spn  a3, sp, 576
                  c.mv        ra, gp
                  c.or        a3, a4
                  mulh        a1, t3, s0
                  c.addi16sp  sp, 160
                  addi        s0, t3, 1176
                  divu        t1, s2, s8
                  sll         t4, a4, t5
                  c.slli      a7, 26
                  srli        t2, t3, 24
                  or          a1, s9, t5
                  auipc       zero, 928189
                  mul         s7, zero, a6
                  sll         tp, t3, gp
                  c.srli      a3, 14
                  c.or        a3, s0
                  lui         a2, 115447
                  c.srai      a3, 18
                  mulhsu      a4, a2, a1
                  c.and       s1, a2
                  c.nop
                  mul         a0, t3, a2
                  slli        s3, sp, 17
                  auipc       s8, 380959
                  c.add       t4, a0
                  c.mv        a6, t4
                  c.mv        t2, t4
                  sltu        ra, sp, tp
                  ori         s3, s3, 414
                  auipc       t4, 619112
                  slli        tp, a1, 8
                  c.srli      a0, 26
                  c.xor       a3, a3
                  xor         a6, a6, t4
                  sub         s10, s8, t0
                  andi        a1, t1, 475
                  c.xor       a3, a3
                  c.and       a3, a3
                  and         a5, a7, t2
                  and         a0, zero, t3
                  c.and       a3, s1
                  xor         zero, t6, sp
                  srli        a0, t2, 8
                  mulh        tp, sp, s2
                  divu        s4, a2, s10
                  slt         s8, a2, s9
                  divu        a5, s6, t0
                  slli        ra, t3, 0
                  c.addi4spn  a3, sp, 128
                  mulh        s9, s0, t0
                  sltu        t4, a3, s10
                  addi        s2, t6, 1827
                  add         a0, s10, a0
                  c.li        a6, 10
                  divu        zero, s6, zero
                  xori        a2, a6, -1445
                  c.addi      a1, -1
                  srl         zero, s4, s6
                  and         tp, a5, a1
                  c.lui       a3, 4
                  sll         s4, a3, a4
                  c.add       sp, s7
                  mul         t1, t1, a2
                  c.sub       a3, a0
                  c.li        ra, 5
                  c.addi      tp, 18
                  c.addi16sp  sp, 416
                  c.mv        ra, tp
                  c.or        a3, a3
                  c.addi4spn  a3, sp, 352
                  c.and       a3, a3
                  c.mv        a5, s1
                  lui         t4, 1042525
                  c.xor       a4, a3
                  slt         tp, t4, ra
                  c.add       s10, s10
                  c.or        a3, a3
                  slti        s7, s10, -154
                  or          zero, s2, t3
                  ori         s8, a0, -1202
                  div         a3, t6, a5
                  mulhsu      t1, a2, ra
                  c.addi4spn  a3, sp, 896
                  xor         zero, s11, zero
                  srli        ra, t0, 5
                  c.addi      a7, 4
                  c.li        s4, -1
                  c.slli      gp, 10
                  or          zero, t4, s9
                  c.mv        a6, a6
                  c.srli      a0, 3
                  andi        zero, t4, 1191
                  c.li        s0, 5
                  add         t5, s10, t2
                  slti        s9, zero, -182
                  andi        ra, s9, -698
                  sltu        a4, s10, t6
                  addi        zero, s8, 1818
                  xori        s7, t1, -145
                  mulh        tp, a1, s5
                  sra         zero, s0, t3
                  c.slli      t4, 21
                  mulh        s3, a3, s5
                  andi        sp, s4, -314
                  c.addi      s6, 30
                  mul         zero, t4, a6
                  mul         s0, t1, s4
                  c.li        a5, -1
                  c.srai      a3, 30
                  and         s10, a1, a1
                  rem         zero, tp, t2
                  and         s9, a4, a2
                  c.mv        a0, s1
                  divu        gp, t2, a3
                  c.sub       a2, a2
                  c.srli      a3, 28
                  c.addi4spn  a3, sp, 160
                  mul         s9, s2, t5
                  c.or        a3, a2
                  c.addi16sp  sp, -16
                  rem         t1, a7, s10
                  c.sub       s1, a3
                  c.nop
                  div         s1, a0, s0
                  mulh        sp, t4, sp
                  sub         zero, gp, a3
                  sltu        t2, t5, a4
                  mul         gp, s4, sp
                  sll         s8, s11, a7
                  slti        a2, a2, -400
                  c.addi      a2, -1
                  c.sub       a3, a3
                  c.and       a3, a3
                  sltu        t4, gp, sp
                  div         ra, a6, a2
                  sll         s6, sp, s9
                  srl         s2, s2, a4
                  andi        s7, ra, 2030
                  mul         zero, sp, a4
                  c.addi      s3, 3
                  c.addi      ra, -1
                  sltu        s10, s1, s9
                  ori         zero, a1, -1777
                  sub         a4, s9, t6
                  c.andi      a3, 20
                  lui         s9, 899064
                  c.xor       s0, a3
                  addi        s6, a7, -1711
                  div         a3, t3, a5
                  c.lui       s1, 7
                  sltu        s1, a7, t6
                  c.andi      a3, -1
                  c.li        s8, -1
                  sll         a1, ra, a6
                  c.addi16sp  sp, 240
                  slt         zero, s11, t3
                  slti        t1, a3, 1705
                  c.addi16sp  sp, 480
                  sub         s3, t5, s9
                  div         a0, t6, a1
                  divu        zero, t0, s3
                  sltu        zero, t1, a4
                  c.addi      ra, -1
                  c.lui       a5, 2
                  mulh        tp, s10, s8
                  c.addi16sp  sp, 176
                  c.lui       gp, 14
                  sltu        a4, t0, t4
                  sra         s3, zero, tp
                  xor         t1, s7, gp
                  slt         s7, gp, t3
                  andi        a3, s7, -1866
                  c.li        a0, -1
                  c.sub       a3, a3
                  c.srai      a3, 9
                  c.add       a0, a4
                  slti        sp, a0, 516
                  lui         zero, 302472
                  slti        a4, s3, -83
                  slli        s9, s11, 13
                  lui         s1, 866968
                  c.and       a4, a3
                  and         a1, s1, a4
                  and         s0, s8, s6
                  sub         t5, s4, t6
                  c.andi      a3, 28
                  c.addi      s3, -1
                  and         s4, a2, s0
                  xori        zero, s10, -522
                  slli        s0, s6, 3
                  c.addi      a7, 21
                  c.sub       a3, a0
                  mulh        zero, s10, a5
                  c.srai      a3, 3
                  c.add       a7, tp
                  mulhsu      s4, tp, t6
                  add         s10, t5, s8
                  srl         t4, sp, a2
                  c.addi      a4, 11
                  sltu        s2, s9, t2
                  srl         a7, t4, t6
                  sub         zero, a0, t1
                  or          a1, a3, s4
                  divu        s0, s10, s8
                  add         s8, s5, t3
                  c.addi16sp  sp, 384
                  c.add       s6, sp
                  and         s10, s8, a7
                  slli        s3, gp, 30
                  c.sub       a3, a3
                  nop
                  andi        s8, s1, 180
                  add         t2, t4, a5
                  ori         t4, a1, -1508
                  c.or        a3, a3
                  c.or        a3, a3
                  c.srai      a3, 28
                  nop
                  c.nop
                  xori        s5, s4, 1002
                  c.and       a3, a3
                  sra         t5, s0, s11
                  c.mv        t4, s7
                  sra         s3, t4, a5
                  c.addi      s3, -1
                  c.srli      a4, 5
                  sltu        a4, s3, zero
                  ori         a4, t5, -1944
                  c.lui       ra, 5
                  or          zero, s5, s7
                  c.lui       s3, 11
                  div         s4, s0, s2
                  c.addi      a0, -1
                  slli        t2, tp, 3
                  c.and       a3, a3
                  rem         t1, s8, a3
                  c.addi16sp  sp, 480
                  mulh        a3, t3, sp
                  add         gp, a1, s4
                  c.srai      a3, 4
                  sra         s0, gp, gp
                  sll         a5, zero, s8
                  mul         a1, a7, t4
                  andi        s1, s2, -1283
                  div         zero, s10, a1
                  c.addi16sp  sp, -16
                  nop
                  mulh        a0, s8, s3
                  and         t0, t2, a3
                  srl         zero, s5, s8
                  srl         a7, s0, s9
                  srli        a5, s11, 20
                  c.addi4spn  a3, sp, 832
                  c.nop
                  c.addi16sp  sp, 384
                  c.slli      t0, 11
                  sub         zero, s10, a3
                  c.li        s3, -1
                  c.xor       a3, a3
                  c.sub       a3, a3
                  c.addi16sp  sp, -16
                  c.lui       ra, 28
                  sll         s1, s3, s7
                  mulh        s1, t2, tp
                  slti        a1, s4, -503
                  sll         s9, a0, s3
                  lui         t0, 467385
                  sub         s0, s5, t5
                  add         zero, a0, s6
                  c.addi16sp  sp, -16
                  slt         s3, a0, t1
                  rem         s9, t3, a3
                  c.addi      s7, 29
                  sll         a2, ra, s4
                  c.andi      a3, 16
                  sra         zero, tp, gp
                  c.or        a3, a3
                  c.xor       a3, a3
                  xor         s9, zero, t4
                  srli        a3, a7, 27
                  add         a7, t1, t3
                  andi        s7, t6, -592
                  addi        a5, s2, 1866
                  sub         s4, s8, a5
                  or          s9, tp, a2
                  andi        s5, a2, -764
                  c.or        a3, a3
                  c.sub       a3, a3
                  slti        gp, s5, -1710
                  c.xor       a3, a1
                  c.addi      s5, 22
                  c.li        s10, 1
                  sub         s4, s11, a2
                  add         zero, a3, s2
                  sra         sp, tp, a0
                  c.addi      s0, 8
                  c.xor       a3, a3
                  c.slli      s3, 2
                  c.addi      s4, -1
                  mulhu       a5, s2, a6
                  xor         s5, s7, zero
                  c.srai      a3, 1
                  c.xor       a3, a3
                  slli        a4, sp, 10
                  andi        zero, t5, 220
                  c.nop
                  xori        s7, t4, -672
                  andi        a7, a0, 291
                  divu        s4, t5, a0
                  divu        s9, t3, t3
                  slt         s2, s6, t6
                  srai        gp, a6, 9
                  c.mv        sp, gp
                  c.lui       a7, 12
                  mulh        ra, a2, a7
                  auipc       sp, 820996
                  c.and       a3, a4
                  c.xor       a3, a3
                  c.slli      a4, 4
                  add         zero, a4, s8
                  mul         t0, t5, a0
                  c.and       s0, s0
                  c.li        ra, 17
                  c.srai      a3, 30
                  c.or        a3, a3
                  c.addi      s6, -1
                  c.srli      a3, 31
                  div         t0, a0, a6
                  c.xor       a3, a3
                  c.srai      a3, 24
                  c.srli      a3, 15
                  xor         t2, a4, a1
                  divu        zero, t5, a2
                  c.xor       a3, a3
                  andi        a5, s3, -1279
                  slt         a5, s11, sp
                  slli        zero, t4, 1
                  xori        a3, a4, -1954
                  ori         s3, s0, -994
                  c.andi      a3, 20
                  xor         zero, a6, s5
                  lui         gp, 31495
                  c.or        a3, a3
                  c.srli      a3, 9
                  xor         s4, s5, s9
                  mulh        s8, a0, ra
                  slti        s2, s7, -922
                  xori        a2, s7, 200
                  rem         s6, s2, t5
                  or          a3, a6, t1
                  lui         t0, 689378
                  c.xor       a3, a3
                  addi        a2, a5, 482
                  c.xor       a3, a3
                  srli        t4, s1, 12
                  nop
                  addi        s9, t5, -310
                  c.addi      s4, -1
                  c.slli      s3, 28
                  srai        s3, t3, 10
                  srl         s4, gp, s2
                  slli        s10, a1, 22
                  c.and       a3, a3
                  c.and       a4, a3
                  c.mv        ra, a6
                  c.srai      a4, 24
                  c.andi      a3, -1
                  c.addi      a0, -1
                  c.add       sp, s5
                  srli        s3, ra, 30
                  c.xor       a3, a3
                  andi        t5, s0, -129
                  mul         s9, a4, s5
                  c.addi16sp  sp, 432
                  c.addi4spn  a3, sp, 320
                  srai        zero, a2, 11
                  slti        t1, a0, 678
                  mul         a6, a4, a6
                  slt         t4, t2, s3
                  srl         t0, a5, s11
                  mulh        zero, zero, ra
                  c.li        s3, -1
                  c.mv        s9, ra
                  rem         t2, sp, a7
                  mul         a3, gp, ra
                  add         t0, gp, t3
                  c.add       gp, s0
                  c.lui       s1, 7
                  c.srai      a3, 6
                  srli        t4, gp, 15
                  slti        t2, sp, -1930
                  xori        zero, s2, 1255
                  sltu        s7, ra, t6
                  srl         s6, s9, t5
                  auipc       a5, 985577
                  c.and       a4, a3
                  c.or        a3, a0
                  nop
                  c.add       tp, t5
                  c.and       a3, a3
                  c.nop
                  c.addi4spn  a3, sp, 624
                  divu        t0, s10, t1
                  c.li        a3, 15
                  addi        sp, s10, 1740
                  and         gp, a1, a4
                  xor         t5, a4, tp
                  c.srli      a3, 29
                  c.add       a7, a3
                  c.li        ra, 30
                  c.andi      a3, 29
                  slti        t2, a7, 585
                  c.srli      a3, 14
                  c.addi16sp  sp, -16
                  slt         zero, a4, s11
                  c.slli      s10, 4
                  c.addi      a3, 1
                  xor         s5, t1, a7
                  c.xor       a3, a3
                  c.slli      ra, 21
                  c.srli      a3, 3
                  mulhu       s1, s1, s0
                  ori         t1, s2, 840
                  c.slli      ra, 30
                  mulh        s4, s8, a5
                  c.srli      a3, 20
                  c.and       a3, a3
                  lui         s4, 887163
                  srai        a6, s2, 22
                  c.add       a0, a6
                  or          a4, a5, a3
                  xori        s8, a5, 1381
                  slt         s8, tp, t1
                  srli        s1, t0, 27
                  xori        s9, s0, 71
                  c.or        a3, a3
                  mulh        s7, s5, a3
                  c.sub       a3, a0
                  c.xor       s0, a3
                  mulh        s3, s1, s6
                  xori        a5, t0, -299
                  and         s1, a3, s0
                  c.or        a3, a3
                  addi        s8, s9, -1323
                  auipc       s3, 943740
                  nop
                  c.addi16sp  sp, 112
                  divu        s2, gp, s5
                  auipc       s9, 157313
                  sltu        gp, a2, s0
                  add         a2, t4, a7
                  sra         sp, t5, zero
                  divu        t5, s2, a0
                  c.lui       t2, 24
                  or          s2, a6, s2
                  xor         s10, a6, zero
                  mulhsu      t5, s4, t4
                  sra         tp, a2, t1
                  sltu        t2, s6, a7
                  c.srai      a3, 9
                  c.addi4spn  a5, sp, 832
                  c.addi4spn  a3, sp, 64
                  andi        s3, a1, 1669
                  c.nop
                  xori        sp, s9, 266
                  srli        zero, a0, 13
                  c.mv        s2, a5
                  sltu        a5, a0, a4
                  xor         t1, s6, zero
                  c.sub       a3, a2
                  mulhsu      zero, s9, s8
                  mulh        s4, a5, a3
                  sub         zero, t5, s9
                  c.andi      a3, -1
                  addi        t0, s2, 1674
                  div         s8, s10, s3
                  addi        a7, a5, 1336
                  addi        a5, s3, 11
                  andi        s3, t3, 388
                  sll         sp, s5, a2
                  c.addi      t5, 31
                  c.xor       a3, a4
                  lui         zero, 781262
                  auipc       a7, 379507
                  divu        a4, a5, t4
                  c.slli      t5, 30
                  mulh        sp, a5, ra
                  c.srli      a3, 13
                  c.srli      a3, 1
                  sll         s4, zero, s2
                  c.lui       t5, 2
                  c.add       s5, t5
                  c.srai      a3, 24
                  sra         ra, s2, t2
                  srli        a2, a6, 6
                  srai        s10, s11, 22
                  c.mv        t2, t3
                  andi        s3, s11, 386
                  ori         t2, zero, -1170
                  sub         a0, sp, s10
                  mulhsu      zero, a5, tp
                  or          zero, s3, s6
                  ori         s10, a3, 480
                  c.slli      s3, 8
                  xor         s10, gp, zero
                  slti        t4, a4, 738
                  c.addi4spn  a3, sp, 832
                  c.or        a3, a3
                  div         t4, s7, s11
                  mulhu       a1, a0, s11
                  srl         sp, a2, a2
                  c.slli      s0, 30
                  addi        zero, a0, 1931
                  srai        t0, t0, 1
                  c.and       a3, a3
                  c.srai      a3, 16
                  addi        a5, s8, 816
                  c.srli      s0, 29
                  slti        gp, t2, 772
                  slli        t1, a3, 17
                  srl         s9, a0, a6
                  sub         s0, s6, t1
                  c.and       a3, a3
                  c.li        a5, 21
                  xori        s10, s9, 61
                  srl         s8, a3, s9
                  and         gp, a5, s11
                  c.mv        a1, a7
                  rem         s9, s2, s8
                  nop
                  addi        gp, a6, 1045
                  c.srai      a3, 28
                  c.addi      s3, -1
                  sll         a1, t0, s8
                  c.xor       a2, a1
                  mulhu       zero, a7, a0
                  sra         t1, s7, s6
                  srl         sp, zero, a3
                  c.xor       s0, a3
                  mulh        a7, s1, s1
                  sra         s5, gp, s9
                  rem         zero, t0, zero
                  xori        s5, t6, 1790
                  slli        a6, a6, 19
                  c.or        a3, a3
                  slt         s7, a1, a5
                  and         zero, zero, a7
                  rem         a2, ra, gp
                  c.lui       t2, 16
                  c.andi      a3, -1
                  auipc       t5, 32336
                  c.add       s0, a3
                  or          s2, a0, a2
                  c.addi16sp  sp, -16
                  c.addi      s5, 29
                  c.mv        ra, tp
                  mulhu       s9, s2, ra
                  auipc       t2, 829108
                  c.slli      t5, 22
                  add         t2, a1, s7
                  c.slli      ra, 26
                  c.mv        a3, a3
                  c.slli      s1, 20
                  c.li        s6, 7
                  div         t1, a6, t0
                  c.addi16sp  sp, 192
                  add         a7, t3, s9
                  sra         s4, t0, a0
                  c.add       t1, a7
                  sub         s2, a2, a6
                  c.mv        t1, s4
                  li         t4, 0x19f2e3d1 #start riscv_int_numeric_corner_stream_4
                  li         a7, 0x0
                  li         s9, 0x0
                  li         a0, 0x1
                  li         s7, 0x4ba0121e
                  li         a3, 0x0
                  li         s6, 0x1
                  li         s5, 0x0
                  li         t5, 0x1
                  li         s10, 0x0
                  nop
                  add         s9, a4, a7
                  c.sub       a3, a3
                  c.addi4spn  a3, sp, 128
                  divu        s5, tp, t5
                  c.nop
                  c.add       a7, t3
                  c.add       a6, a7
                  c.li        a0, 25
                  c.li        s6, -1
                  mulh        t1, t4, t0
                  mul         s1, s8, s8
                  add         zero, s8, a6
                  mul         ra, s2, a6
                  c.mv        s6, s7
                  mulhsu      t5, s6, a0
                  nop
                  c.sub       a3, s0
                  xor         a6, t4, a3
                  c.slli      a2, 5
                  nop
                  c.sub       a3, a3
                  slti        s10, t0, -960
                  slt         a6, s7, s8
                  ori         a3, s2, 1646
                  slli        a7, t5, 30
                  slti        t1, a3, 1202
                  c.andi      a3, -1
                  divu        zero, s6, s8
                  c.addi16sp  sp, 304
                  lui         t4, 618794
                  sltu        zero, t0, t5
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_7
                  li         s8, 0x0
                  li         s4, 0x0
                  li         t4, 0x1
                  li         s10, 0x19c0fa1e
                  li         s2, 0x0
                  li         s0, 0x6cf160b
                  li         a7, 0x0
                  li         a0, 0x0
                  li         a6, 0x0
                  addi        zero, s10, 954
                  mulhu       zero, a3, s4
                  auipc       s8, 266593
                  c.addi4spn  a3, sp, 608
                  c.add       s0, a6
                  mul         zero, s5, a2
                  add         tp, s10, s0
                  sub         zero, s3, t5
                  c.lui       t2, 27
                  c.li        a2, -1
                  c.addi4spn  a3, sp, 272
                  mul         gp, zero, sp
                  c.add       s6, a7
                  mulhu       s0, sp, a3
                  addi        a5, t6, -319
                  div         zero, a6, s11
                  c.sub       a4, a3
                  rem         s2, tp, t0
                  nop
                  c.addi      t5, 19
                  add         t5, a2, s6
                  c.nop
                  auipc       ra, 601205
                  addi        s5, t1, -756
                  c.addi16sp  sp, 128
                  c.sub       a3, a3
                  c.nop
                  add         s5, a1, s2
                  c.nop
                  sltu        a0, s0, s8
                  srl         t2, s9, ra
                  c.addi4spn  a3, sp, 640
                  c.or        a3, a3
                  sll         t2, s11, t1
                  xor         s10, s4, sp
                  lui         t1, 297008
                  mulhsu      a4, a2, s7
                  c.add       s4, s9
                  c.mv        t4, t5
                  slli        s1, gp, 10
                  c.or        a3, a3
                  c.slli      s8, 17
                  c.andi      s1, 28
                  c.li        s0, 16
                  and         zero, s4, s5
                  c.addi      a6, -1
                  ori         zero, a6, -1330
                  slt         t2, a4, gp
                  c.srli      a4, 5
                  c.nop
                  addi        s5, zero, 1275
                  c.li        s0, -1
                  mulh        s5, ra, t5
                  slt         a0, gp, a7
                  c.lui       s9, 25
                  c.slli      t2, 15
                  xori        a1, t6, -362
                  c.and       a3, a3
                  srli        ra, a6, 2
                  c.slli      s9, 5
                  mulh        s3, s8, t4
                  c.xor       a3, a3
                  sra         s10, a1, tp
                  div         s1, a2, a6
                  c.addi16sp  sp, -16
                  c.lui       s1, 29
                  auipc       a3, 439707
                  slli        tp, s9, 13
                  sll         s10, s6, t4
                  auipc       sp, 993492
                  c.or        a3, s1
                  c.nop
                  c.srai      s1, 25
                  c.li        a4, -1
                  lui         tp, 873770
                  lui         a3, 715115
                  sra         t2, t4, t6
                  c.addi16sp  sp, 384
                  mulhu       zero, a2, a2
                  c.xor       a3, a3
                  sra         s9, a4, s2
                  c.addi4spn  a0, sp, 624
                  add         s8, s11, s5
                  c.addi      a2, 29
                  xor         s3, a1, a4
                  sll         a3, s3, a3
                  mulh        a6, sp, a3
                  slt         t0, s9, t6
                  or          a5, t6, s10
                  addi        t2, s7, -485
                  or          zero, s0, t5
                  c.xor       a3, a5
                  slli        a6, t2, 0
                  sltu        a4, s2, s4
                  c.andi      s1, 20
                  addi        t2, s11, -90
                  sra         zero, a6, a7
                  c.addi16sp  sp, -16
                  addi        a2, a6, 692
                  andi        zero, s0, 127
                  xor         s6, s11, s6
                  div         s1, s5, t0
                  mul         t0, a2, a7
                  c.mv        t2, a3
                  xor         s6, s9, ra
                  sltu        t5, s6, zero
                  xor         s4, s0, t3
                  c.slli      s8, 22
                  andi        s3, s9, -1684
                  c.srli      a3, 26
                  mulh        s10, s7, s8
                  c.or        a3, a3
                  slti        a5, t3, -432
                  c.addi4spn  a3, sp, 320
                  lui         zero, 101548
                  xor         a3, a0, a1
                  mulhsu      s4, a2, s11
                  sub         t4, s6, a1
                  c.lui       a6, 17
                  addi        zero, s8, 879
                  c.mv        a2, a7
                  sub         s5, s9, gp
                  andi        s6, t4, -651
                  c.nop
                  mulh        s4, t4, t2
                  divu        t4, s5, a5
                  xori        tp, s10, 737
                  srli        s7, a5, 19
                  sll         s1, s10, s0
                  c.and       a4, a3
                  c.addi      a2, 20
                  c.li        s6, 7
                  mulhsu      a5, t0, s8
                  slti        s9, s6, 1885
                  c.xor       a0, a3
                  sub         s9, ra, s11
                  c.nop
                  c.xor       a4, a3
                  ori         s2, t4, 476
                  ori         t5, a2, -1574
                  andi        a1, a7, -1648
                  addi        gp, s9, -1433
                  divu        a0, a6, a6
                  c.srai      a3, 27
                  slti        a0, ra, 868
                  sltu        tp, t0, a2
                  mulhsu      t2, t3, s4
                  sll         zero, s3, gp
                  mulhsu      a2, t5, s6
                  c.li        t0, -1
                  c.lui       a1, 8
                  lui         s3, 625692
                  mulh        t1, sp, a7
                  c.andi      a3, 26
                  mulh        zero, s9, ra
                  srai        tp, s3, 28
                  c.or        a3, a3
                  divu        zero, s4, t6
                  c.andi      a3, 0
                  c.srli      a3, 19
                  add         zero, a6, t3
                  c.slli      s6, 7
                  slt         a7, t2, a0
                  xori        a0, s1, 794
                  auipc       s5, 821349
                  srli        t2, t6, 26
                  addi        zero, a0, 1447
                  andi        s9, s2, 583
                  c.slli      ra, 9
                  c.addi4spn  a3, sp, 832
                  xori        s4, s9, 141
                  c.nop
                  c.andi      a3, 9
                  c.or        a1, a3
                  lui         t1, 1029613
                  c.srli      a3, 12
                  andi        t5, s6, -1170
                  slli        a5, a5, 21
                  c.srli      a3, 30
                  add         a1, s5, s5
                  sltu        a3, s8, t1
                  sltu        t4, a1, s11
                  xori        s2, s2, 1499
                  xor         t5, s9, s1
                  c.addi4spn  a3, sp, 640
                  mul         s5, s8, s10
                  srl         s0, s2, a6
                  c.addi16sp  sp, -16
                  c.andi      a3, -1
                  c.li        gp, -1
                  c.add       gp, s11
                  c.addi4spn  a3, sp, 640
                  sra         s6, t6, t1
                  c.srai      a3, 16
                  sub         t4, zero, a6
                  slli        s6, a1, 10
                  ori         t4, t5, -276
                  mulhsu      a7, t6, t2
                  c.li        s4, 31
                  srli        t5, a1, 13
                  sra         a6, ra, s9
                  srli        s6, a0, 24
                  xori        sp, sp, -1937
                  lui         a7, 714620
                  srai        s1, s5, 21
                  xor         gp, t1, a4
                  auipc       t4, 839206
                  slt         a4, t5, zero
                  sub         s6, s10, s9
                  ori         s7, t5, 428
                  mulhsu      t0, t1, a2
                  xor         t4, t1, a3
                  srai        zero, a6, 18
                  c.srli      a3, 3
                  srli        s6, ra, 23
                  c.andi      a3, 31
                  c.addi16sp  sp, -16
                  sub         sp, tp, a2
                  c.mv        ra, s3
                  c.srli      a3, 1
                  mulh        t0, s0, gp
                  sub         s3, a5, s7
                  auipc       s1, 260465
                  sltu        s9, a0, s2
                  c.slli      s5, 30
                  and         zero, a6, s0
                  c.lui       a0, 26
                  mul         s6, t6, s10
                  sll         a4, sp, s8
                  slti        s5, ra, 1629
                  c.addi      ra, 9
                  mul         zero, a2, a5
                  c.addi      t2, -1
                  lui         a1, 447869
                  c.addi      t4, -1
                  c.srai      a3, 16
                  c.and       a0, a3
                  add         a1, a3, s2
                  c.addi16sp  sp, 384
                  c.mv        s5, t6
                  c.slli      s6, 22
                  c.or        a3, a3
                  srai        s3, t2, 17
                  mulhu       s2, tp, gp
                  andi        a6, s6, 291
                  xori        s2, s10, -1852
                  xor         a2, sp, s6
                  c.addi4spn  a3, sp, 640
                  lui         zero, 313018
                  c.lui       a6, 22
                  sra         t5, tp, sp
                  divu        zero, s2, gp
                  c.or        a3, a3
                  c.addi      s3, -1
                  slli        sp, sp, 17
                  divu        ra, t2, t2
                  mul         zero, s6, s5
                  mulhu       s6, a7, a5
                  sra         a4, a1, s7
                  c.or        a3, a3
                  divu        s2, s2, s6
                  mul         s5, s10, a4
                  sra         t2, s9, a5
                  xor         a6, s3, t5
                  c.srai      a3, 10
                  sub         s10, a0, s3
                  c.addi16sp  sp, -16
                  rem         s0, s4, s5
                  c.srli      a2, 5
                  c.srli      a3, 1
                  mulhu       s2, sp, a7
                  c.srli      a3, 25
                  or          s7, gp, a7
                  slti        zero, s3, 1621
                  slt         tp, s11, sp
                  sub         a1, s6, t2
                  c.srai      a3, 28
                  xor         zero, s9, t2
                  srli        zero, sp, 29
                  xori        s9, a6, -1854
                  and         a3, a4, s10
                  c.lui       a7, 26
                  c.li        s0, -1
                  add         a7, t2, zero
                  rem         a7, a3, s0
                  srli        a4, s1, 1
                  c.addi16sp  sp, 224
                  c.slli      a4, 7
                  c.nop
                  or          t2, t4, t1
                  xor         a2, s1, a7
                  mulhu       t1, t1, ra
                  c.addi4spn  a3, sp, 320
                  xori        tp, a6, 1498
                  mulh        t5, t5, a5
                  sub         zero, a2, a7
                  ori         a6, s7, 96
                  c.lui       s6, 28
                  c.lui       a0, 11
                  srai        s2, a0, 13
                  andi        s8, ra, -560
                  c.xor       a3, a1
                  ori         a2, zero, 763
                  c.andi      a3, 16
                  sltu        s1, t6, a6
                  sub         a1, s6, a2
                  auipc       s4, 157817
                  sub         zero, s10, t4
                  c.srli      a3, 23
                  divu        a1, a4, t1
                  c.lui       a4, 14
                  c.xor       a3, a3
                  srai        s3, t2, 22
                  mulh        s9, zero, s6
                  slli        ra, a0, 1
                  nop
                  c.mv        t4, a4
                  mulhu       a3, a7, a1
                  c.sub       a4, a3
                  c.lui       gp, 23
                  c.add       a5, ra
                  c.andi      a3, 21
                  nop
                  c.addi4spn  a3, sp, 128
                  c.addi16sp  sp, -16
                  div         t1, sp, a0
                  lui         sp, 73626
                  lui         a5, 555114
                  c.mv        s0, t4
                  divu        a2, t2, s7
                  mul         s6, tp, s8
                  c.srli      a3, 2
                  xori        a4, a2, 36
                  slli        ra, s1, 15
                  c.add       a6, a4
                  mulhu       t5, s11, s10
                  c.mv        ra, t5
                  c.addi4spn  a3, sp, 128
                  c.srli      a3, 1
                  c.lui       s6, 17
                  xori        zero, a2, -618
                  srl         ra, a1, a4
                  xori        t4, a6, 438
                  c.li        s0, -1
                  srli        t4, a6, 22
                  mul         t5, a5, a5
                  c.srai      a1, 10
                  nop
                  c.slli      t5, 5
                  xor         a2, s3, t1
                  rem         s1, s5, s9
                  mulhu       s3, t2, s2
                  sltu        s10, s6, s7
                  c.srai      a3, 1
                  nop
                  c.or        a3, a3
                  div         s0, tp, zero
                  srai        s8, a1, 26
                  c.slli      s8, 30
                  mulhu       t5, s8, s6
                  slt         s0, gp, t0
                  div         a5, s10, t1
                  mulhsu      a2, s1, a5
                  c.nop
                  andi        zero, a1, 378
                  divu        s10, s5, zero
                  srli        a0, s3, 6
                  sll         s4, s6, a3
                  c.addi      ra, 22
                  or          zero, a4, t3
                  c.sub       a3, a1
                  add         t4, s0, a4
                  divu        s6, zero, s0
                  sra         gp, s3, a5
                  lui         t0, 470418
                  sll         s9, a1, a2
                  c.sub       a4, a3
                  divu        zero, t4, s2
                  c.add       ra, t2
                  c.srli      a2, 7
                  div         s9, s6, ra
                  div         a5, s1, t3
                  c.mv        a0, s8
                  lui         a2, 1000592
                  lui         t1, 601685
                  srai        a6, ra, 21
                  c.nop
                  or          tp, a1, s11
                  sltu        s5, a7, s4
                  c.mv        s3, s11
                  c.slli      s9, 1
                  slli        s5, tp, 2
                  c.srli      s1, 2
                  slt         s6, s9, a7
                  lui         s8, 650580
                  srai        s7, s11, 3
                  c.srai      a3, 17
                  slt         s1, a4, s10
                  mulhu       a7, zero, gp
                  lui         zero, 159795
                  and         zero, zero, a0
                  srli        a2, s5, 28
                  xori        a3, t2, -1632
                  c.sub       a3, a0
                  divu        a5, a4, zero
                  sltu        s2, zero, s9
                  c.addi      a7, 4
                  slli        s3, t1, 22
                  c.or        s1, a3
                  div         t5, sp, a6
                  xor         s8, t1, s9
                  mulh        t2, s2, sp
                  add         t1, s4, s5
                  c.slli      s3, 7
                  c.lui       s5, 20
                  and         s7, gp, s6
                  c.and       a3, a3
                  divu        s2, s11, ra
                  sltu        s5, s5, a5
                  srai        s5, s4, 24
                  or          t2, a1, s0
                  sltu        gp, s5, a6
                  c.addi4spn  a3, sp, 64
                  sub         zero, a3, t3
                  c.addi16sp  sp, 208
                  rem         sp, s11, gp
                  c.srli      a3, 16
                  add         s6, ra, s1
                  div         a0, t0, a6
                  lui         a0, 399903
                  c.and       a3, a3
                  srli        s4, ra, 21
                  c.andi      a3, -1
                  nop
                  c.and       a3, a3
                  lui         s6, 964339
                  nop
                  add         a3, zero, s9
                  c.addi16sp  sp, 368
                  rem         a4, ra, a1
                  c.li        s5, 25
                  srli        s6, s8, 13
                  slti        a1, sp, -1134
                  xori        s5, t6, -1387
                  c.addi16sp  sp, 368
                  mul         a0, zero, a0
                  auipc       a3, 515324
                  c.srai      s0, 1
                  sll         a2, t4, sp
                  or          sp, s8, s11
                  andi        a2, a3, -1030
                  mulhsu      zero, s4, a7
                  c.lui       s1, 13
                  c.lui       a0, 21
                  c.addi4spn  a3, sp, 640
                  c.mv        tp, t5
                  divu        s0, a1, a1
                  rem         s1, s8, s2
                  addi        a5, t6, -991
                  andi        zero, t1, -100
                  sltu        zero, t0, sp
                  sll         zero, s11, a0
                  c.xor       a3, a3
                  c.nop
                  srli        t0, a2, 5
                  ori         a3, a2, -1735
                  mulhsu      t0, t1, t3
                  slt         s5, s0, s8
                  sltu        sp, sp, tp
                  c.lui       s4, 2
                  c.srli      a3, 14
                  c.srli      a3, 13
                  mulhu       t2, s4, t1
                  c.addi      t5, -1
                  sra         a3, a0, s11
                  lui         ra, 623554
                  c.sub       a3, a5
                  c.mv        s2, t4
                  c.or        s1, a3
                  c.srai      a3, 30
                  or          sp, s10, a0
                  c.li        a7, 3
                  rem         s7, s2, s3
                  nop
                  addi        s1, zero, -76
                  mulhsu      s5, tp, t6
                  nop
                  lui         t4, 398162
                  srai        zero, t0, 12
                  c.and       a3, a3
                  nop
                  mulh        a2, a2, tp
                  c.sub       a3, a3
                  sltu        s1, gp, s10
                  srl         gp, t3, ra
                  c.addi16sp  sp, -16
                  srl         s5, s4, a5
                  div         sp, t6, gp
                  add         s10, s11, t0
                  rem         s4, t5, s6
                  c.srai      a3, 27
                  c.srli      a3, 8
                  slli        s10, t5, 20
                  srai        a7, t5, 28
                  c.addi16sp  sp, -16
                  c.addi16sp  sp, 160
                  xori        s5, s11, 1400
                  c.nop
                  sub         a5, s9, s1
                  nop
                  srli        t2, s6, 3
                  nop
                  slli        t1, a6, 27
                  slli        a6, tp, 25
                  srli        t5, a6, 2
                  c.srai      a3, 18
                  addi        s2, s6, 641
                  div         a4, t4, zero
                  xori        t0, s8, -1438
                  rem         t4, s6, ra
                  c.addi      a2, 15
                  mulh        t2, s9, a6
                  c.addi4spn  a3, sp, 352
                  or          t4, s10, s1
                  c.addi      ra, 13
                  c.addi4spn  a0, sp, 864
                  c.li        ra, -1
                  c.nop
                  c.nop
                  and         s9, ra, ra
                  c.nop
                  c.and       a3, a2
                  ori         s10, s10, -740
                  c.nop
                  c.li        a7, -1
                  xori        tp, gp, -1407
                  c.srli      a3, 3
                  auipc       a1, 17053
                  addi        t5, t1, 666
                  srai        t4, zero, 1
                  c.xor       a3, a3
                  c.xor       a4, a3
                  sltu        t1, a1, zero
                  divu        a2, a7, a6
                  slt         tp, t0, t5
                  slli        s9, s1, 12
                  c.nop
                  srl         zero, a2, a2
                  c.slli      ra, 27
                  c.li        s3, -1
                  sltu        a4, s11, a2
                  c.addi4spn  a3, sp, 448
                  andi        gp, t1, 401
                  c.lui       s3, 26
                  divu        zero, s6, a7
                  mulhu       a1, s6, s9
                  mulhsu      t0, a3, a4
                  divu        t1, a1, a2
                  c.addi16sp  sp, -16
                  srai        a5, sp, 5
                  c.addi4spn  a3, sp, 576
                  xor         s5, ra, t4
                  c.addi      s7, -1
                  xor         tp, t2, t1
                  sub         a2, t5, gp
                  c.andi      a3, -1
                  c.addi16sp  sp, -16
                  mul         a1, a2, s0
                  srli        t2, s8, 10
                  auipc       s6, 837749
                  c.or        a3, a3
                  mul         a4, s4, s10
                  srli        a5, a4, 19
                  mul         a6, s9, s7
                  addi        a4, s7, 1272
                  auipc       s9, 12890
                  c.srai      a3, 18
                  c.xor       a3, a3
                  slli        t2, sp, 31
                  srai        s10, t0, 15
                  c.and       a3, a3
                  sll         tp, s5, s1
                  andi        gp, a3, -1929
                  slti        zero, s5, 578
                  slti        a3, s3, -1071
                  mulh        s10, tp, tp
                  c.add       s1, t5
                  addi        s10, s8, -960
                  c.or        a3, a3
                  mulhsu      s2, s3, s2
                  and         a2, a7, t4
                  c.xor       a3, s1
                  addi        s6, t5, 2006
                  or          t4, t4, gp
                  xori        a7, gp, 760
                  and         a2, t1, a7
                  c.srli      a3, 30
                  c.mv        ra, s1
                  sub         s0, sp, ra
                  xori        s5, t4, -358
                  slti        s7, t5, -1937
                  auipc       a7, 819261
                  xori        s6, gp, 299
                  ori         t5, t4, 722
                  or          a2, a5, t4
                  rem         zero, gp, gp
                  xori        s5, gp, 176
                  nop
                  c.lui       ra, 26
                  ori         zero, s7, 1997
                  sll         zero, s11, s9
                  add         zero, s4, s2
                  sll         gp, s1, a6
                  c.and       a3, a3
                  c.slli      ra, 18
                  slt         a5, a6, s5
                  ori         t1, a7, 131
                  c.addi16sp  sp, -16
                  srli        a0, ra, 3
                  slli        gp, s11, 26
                  addi        zero, a7, -86
                  divu        s4, gp, a1
                  sll         sp, zero, t2
                  sltu        s8, s1, s7
                  lui         s6, 215937
                  add         s0, t2, t5
                  slti        s10, a2, 535
                  xor         a4, s7, s4
                  srli        s8, a1, 27
                  c.andi      a3, -1
                  c.add       s7, a2
                  mulh        a3, t2, t1
                  mulhu       a7, t2, sp
                  c.addi      ra, -1
                  c.li        ra, -1
                  slt         a6, t1, a6
                  slt         a7, s9, a4
                  xor         s6, t3, t4
                  mulh        s3, s4, s1
                  c.xor       a3, a4
                  div         zero, s9, a1
                  mulh        t5, s11, a7
                  sltu        t2, s2, s4
                  c.add       s7, t3
                  divu        ra, s0, s5
                  c.add       a0, gp
                  c.li        sp, 10
                  mul         a5, s4, a4
                  c.li        a0, -1
                  addi        a0, gp, -738
                  sltu        zero, s5, t1
                  mulhsu      zero, s10, a5
                  xor         zero, a5, s1
                  add         gp, s1, s5
                  c.xor       a3, a3
                  slt         a3, s10, s4
                  auipc       t4, 969270
                  mulh        t2, s9, s6
                  c.mv        ra, a7
                  andi        zero, a0, -248
                  and         zero, a7, t4
                  c.and       a3, a3
                  add         a6, s0, a6
                  c.lui       ra, 27
                  sub         a0, s6, s9
                  sll         t2, t6, s3
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_9
                  li         t4, 0x1
                  li         s9, 0x70a6ea92
                  li         s2, 0x0
                  li         a3, 0x0
                  li         s6, 0x5cb4551b
                  li         a2, 0x7a23e8ce
                  li         sp, 0x0
                  li         a4, 0x0
                  li         a7, 0x0
                  auipc       a3, 871438
                  mulh        s8, s2, t2
                  c.addi16sp  sp, -16
                  c.li        a3, -1
                  mulhsu      a0, s11, s8
                  mulhu       tp, s2, s11
                  addi        s2, s3, 999
                  addi        s6, s3, -1381
                  sub         sp, t5, s6
                  sub         zero, s2, a1
                  sub         t0, t4, a2
                  mulhsu      zero, t4, s11
                  c.nop
                  nop
                  nop #end riscv_int_numeric_corner_stream_9
                  add         s0, a5, a0
                  c.srli      a3, 10
                  c.and       a3, a3
                  mulhsu      s5, tp, a3
                  or          s7, t1, s3
                  lui         gp, 817552
                  c.slli      ra, 28
                  auipc       s0, 941271
                  c.andi      a3, 6
                  c.srai      a3, 23
                  c.add       ra, a6
                  c.addi16sp  sp, -16
                  sltu        s10, s10, s6
                  sra         s10, s6, a1
                  c.or        s0, a5
                  or          zero, t6, sp
                  sub         s7, t2, s9
                  xori        s5, s4, -1858
                  c.lui       s6, 10
                  c.srli      s1, 4
                  div         t1, s8, t6
                  ori         s10, sp, 698
                  slt         s10, s10, a0
                  nop
                  c.sub       a5, a3
                  c.mv        tp, s8
                  rem         zero, a1, s6
                  slt         s5, a5, gp
                  mulhu       t2, t5, a6
                  ori         s2, s2, -519
                  nop
                  sra         s0, s9, s4
                  rem         a3, s1, s1
                  c.xor       a3, a3
                  mulhu       s1, a7, s4
                  sltu        zero, ra, s9
                  srai        a5, a2, 0
                  add         s4, t0, s9
                  srli        s6, a5, 1
                  c.slli      a1, 1
                  c.nop
                  addi        a2, s5, 1305
                  c.slli      t2, 7
                  lui         s2, 874596
                  xori        t5, t3, -1114
                  c.li        ra, 13
                  c.addi4spn  a3, sp, 832
                  c.lui       ra, 28
                  c.xor       a1, a3
                  xori        a0, s8, -72
                  sub         t0, s7, s11
                  sll         s4, s2, s7
                  c.or        a2, a5
                  and         s9, a6, a1
                  c.mv        gp, sp
                  slti        t5, s7, 153
                  sub         tp, sp, tp
                  nop
                  c.mv        s8, s2
                  c.lui       ra, 22
                  div         s7, s7, zero
                  xori        s3, s5, 1847
                  xori        zero, s6, 2006
                  mulhu       a5, t5, s7
                  div         s5, t1, s10
                  slli        s2, zero, 30
                  xori        a3, a2, 664
                  andi        s2, s2, 328
                  or          t4, a5, tp
                  sub         zero, t3, t6
                  c.li        t4, 0
                  ori         zero, sp, 1293
                  or          ra, s4, s9
                  mulhsu      a4, a4, t2
                  andi        t5, s9, 852
                  or          a3, zero, s10
                  c.mv        s6, s7
                  or          t5, t6, s9
                  c.addi4spn  a0, sp, 384
                  nop
                  c.addi      s0, -1
                  slti        s0, sp, 1457
                  c.addi16sp  sp, 240
                  xor         zero, ra, s3
                  c.srli      a3, 25
                  c.and       a3, a4
                  sra         s10, tp, t4
                  lui         a7, 392299
                  c.add       ra, sp
                  andi        s9, a4, -919
                  c.srai      a3, 11
                  or          zero, a0, s0
                  c.slli      a6, 10
                  andi        s2, s10, -1880
                  andi        s8, s1, -120
                  sll         s3, s11, s5
                  sll         zero, a0, s3
                  divu        s7, s2, t0
                  c.li        t1, -1
                  rem         zero, s7, s11
                  ori         s8, tp, -1991
                  c.sub       a2, a3
                  mulhu       sp, a7, t0
                  divu        t1, tp, s5
                  c.sub       a3, a3
                  and         s4, s9, a3
                  c.lui       a0, 1
                  slli        t5, t0, 17
                  c.srai      a3, 1
                  ori         a3, zero, -634
                  xor         gp, a5, a7
                  srl         zero, s1, s11
                  c.nop
                  srai        s9, tp, 3
                  c.xor       a3, a3
                  mulhu       s1, a1, t3
                  add         s8, zero, s1
                  c.mv        a6, a4
                  c.srai      a3, 14
                  c.lui       s3, 12
                  div         a0, a1, a3
                  c.addi4spn  a3, sp, 896
                  c.nop
                  mul         a7, a2, t0
                  mulhsu      s3, a7, s7
                  sltu        s7, a6, s3
                  add         a3, zero, s6
                  lui         a2, 893423
                  sll         ra, s0, s6
                  c.mv        s2, s3
                  srli        a2, t5, 30
                  slt         zero, a5, t6
                  addi        zero, a3, 1445
                  sra         zero, s10, t6
                  srl         s3, s7, t3
                  andi        a2, s6, 1873
                  c.sub       a3, a3
                  nop
                  slli        a6, a5, 26
                  lui         zero, 301528
                  ori         t1, s3, 806
                  slt         a6, t5, gp
                  c.sub       a3, a3
                  or          tp, a5, a1
                  c.srai      a3, 5
                  ori         a0, a7, 1607
                  mulh        a0, t6, a7
                  c.and       a5, a3
                  c.slli      ra, 2
                  slti        t1, t6, 1525
                  addi        zero, t2, -1465
                  or          t2, s5, s9
                  xor         s8, gp, tp
                  and         s8, s9, s7
                  c.addi4spn  a3, sp, 192
                  c.andi      a3, 4
                  div         a0, s2, a5
                  andi        s6, gp, 1105
                  sub         s3, s1, t3
                  or          zero, s8, s0
                  mulhu       s7, t1, s10
                  c.or        a3, a3
                  or          t1, s4, a3
                  rem         s5, gp, t4
                  mulhu       gp, s9, s5
                  divu        zero, t6, s3
                  andi        a6, gp, 290
                  c.addi4spn  a3, sp, 832
                  srai        s5, t1, 0
                  srai        s0, s4, 1
                  c.srli      a0, 16
                  add         t4, s0, a6
                  srai        s5, s10, 1
                  c.add       ra, s0
                  sra         a0, a5, s4
                  c.slli      ra, 4
                  nop
                  addi        a2, a0, 1783
                  mulhu       a2, s4, s0
                  c.and       a3, a3
                  c.xor       a3, a3
                  divu        a3, ra, s2
                  srli        t5, s10, 24
                  mul         a5, a7, t3
                  divu        zero, s1, s11
                  lui         t2, 682239
                  slli        ra, a0, 10
                  c.xor       a3, a3
                  c.lui       t4, 24
                  c.add       s8, tp
                  mulhu       s9, zero, sp
                  srl         sp, sp, s0
                  c.addi      sp, 23
                  c.andi      a3, 31
                  srli        s5, a0, 19
                  slti        t5, a4, -930
                  c.li        a7, -1
                  c.add       ra, s9
                  rem         a1, s4, s1
                  divu        ra, t2, s1
                  sub         s5, a0, s2
                  c.addi      sp, -1
                  c.srai      a2, 2
                  c.xor       a3, a3
                  c.li        s9, -1
                  mulh        s9, a6, t4
                  or          t2, s0, s1
                  auipc       s0, 164791
                  rem         sp, t4, a6
                  c.add       t1, s11
                  c.slli      s9, 23
                  c.lui       a6, 28
                  sub         zero, tp, a7
                  c.addi      a7, -1
                  sll         s4, s1, t5
                  c.and       a3, a3
                  c.li        s1, 23
                  c.addi16sp  sp, 336
                  c.addi4spn  a3, sp, 64
                  c.add       t1, ra
                  sub         s6, a7, a6
                  mulhu       a2, a3, t6
                  c.srai      a3, 13
                  c.and       a3, a3
                  divu        s9, a0, t3
                  sub         ra, a4, a0
                  c.li        a5, -1
                  c.mv        s8, ra
                  slt         s1, s2, s8
                  c.addi      s2, 22
                  c.and       a3, a3
                  andi        a3, s1, -1742
                  c.li        ra, 29
                  c.addi      t2, -1
                  addi        t4, s6, 1455
                  c.sub       a3, a3
                  c.nop
                  c.or        a3, a3
                  div         a6, s6, s6
                  c.lui       ra, 10
                  xor         a5, a4, t0
                  xor         a0, s2, gp
                  c.add       a5, t0
                  c.lui       s1, 1
                  c.srai      a3, 2
                  c.xor       a3, a3
                  auipc       tp, 681141
                  c.add       tp, a6
                  nop
                  srl         s0, s10, a5
                  c.xor       a3, a1
                  c.li        a4, 7
                  c.addi4spn  a3, sp, 576
                  xor         sp, t1, ra
                  srli        zero, sp, 1
                  c.xor       a3, a3
                  c.addi4spn  a4, sp, 912
                  c.andi      a3, 5
                  xor         s6, t0, s10
                  divu        zero, a7, tp
                  mul         s5, s4, s3
                  lui         s3, 703035
                  sub         a2, a1, s4
                  slt         a6, s3, a3
                  c.xor       a3, a3
                  sll         s0, t6, sp
                  sra         t2, t6, a2
                  sra         s10, t1, a7
                  andi        s6, t6, 141
                  mul         a1, s5, s10
                  c.andi      a3, -1
                  and         sp, ra, s1
                  srli        ra, t3, 3
                  nop
                  sltu        s10, zero, a3
                  c.andi      a3, 27
                  c.sub       s0, a3
                  andi        s2, s5, -153
                  c.lui       s10, 27
                  ori         a3, s10, 349
                  nop
                  c.sub       a3, a3
                  xor         s8, s10, s6
                  mulhsu      t2, s2, s3
                  c.andi      a3, -1
                  c.nop
                  c.add       t5, s5
                  c.addi      t2, 12
                  mulh        s8, s4, t3
                  c.and       a3, a3
                  c.addi4spn  a3, sp, 608
                  c.srli      a3, 30
                  c.addi16sp  sp, 112
                  c.and       a3, a1
                  xor         zero, a6, s4
                  c.addi4spn  a3, sp, 384
                  c.mv        ra, a2
                  add         s8, t5, a7
                  c.add       a6, sp
                  c.addi4spn  a3, sp, 576
                  sltu        s10, ra, ra
                  div         t5, s8, s6
                  c.lui       s5, 1
                  sll         a1, a5, a4
                  div         t5, t3, a5
                  div         t5, ra, a4
                  and         a0, s6, s2
                  c.li        s3, 25
                  add         t4, a3, s5
                  mulhu       s7, a1, t5
                  slli        zero, s3, 0
                  slli        a7, a5, 7
                  sub         a0, t5, sp
                  mul         zero, t1, t0
                  slti        a5, a2, -351
                  nop
                  andi        s3, sp, -1717
                  rem         zero, sp, t0
                  divu        t5, a1, s11
                  nop
                  c.srai      a3, 11
                  c.li        ra, 26
                  divu        zero, tp, t2
                  c.li        t1, -1
                  ori         t4, a6, -500
                  c.andi      a3, 13
                  srai        t2, sp, 18
                  nop
                  c.addi      s9, 28
                  andi        a2, s1, 1520
                  slli        a7, s1, 28
                  mul         s0, sp, s5
                  c.srli      a3, 26
                  ori         ra, s7, 1039
                  srl         t4, s6, a5
                  slt         t5, zero, tp
                  c.mv        s4, s5
                  mul         zero, a0, a7
                  lui         s7, 579772
                  srl         tp, a5, a7
                  add         zero, s6, a1
                  slli        a7, t6, 19
                  sltu        tp, t3, s11
                  c.xor       a3, a0
                  slli        s5, s11, 1
                  c.addi16sp  sp, -16
                  xori        a7, s7, 140
                  divu        s8, t1, a4
                  sra         s6, t3, s10
                  sra         tp, t2, t6
                  srai        tp, s8, 4
                  srli        zero, a1, 27
                  c.and       a4, a3
                  srli        ra, ra, 25
                  c.mv        s0, s11
                  div         sp, sp, a7
                  sltu        zero, t1, a5
                  c.add       t0, tp
                  c.mv        sp, a3
                  auipc       s6, 978328
                  nop
                  divu        s9, a6, zero
                  c.addi16sp  sp, 448
                  c.lui       s4, 27
                  srl         a4, t6, s6
                  srai        a1, s8, 28
                  mulhsu      a7, s9, a4
                  c.addi4spn  a3, sp, 832
                  c.and       a3, a3
                  srl         a2, s1, t4
                  c.srai      a3, 11
                  mulhu       zero, gp, t3
                  c.li        s8, 8
                  auipc       zero, 766739
                  slti        sp, s1, -887
                  slti        a4, s10, 1295
                  c.lui       s1, 27
                  ori         s9, s4, 665
                  c.mv        sp, a4
                  c.andi      a3, -1
                  or          s8, t2, t2
                  c.andi      a3, -1
                  c.or        a3, a3
                  c.add       a3, s10
                  srai        s6, t6, 11
                  div         s0, a7, a6
                  c.mv        s6, s3
                  andi        gp, t4, 1629
                  c.sub       a3, a3
                  add         s0, s8, t2
                  c.sub       a4, a3
                  div         a1, t6, s9
                  ori         a1, s11, 1691
                  xori        t5, t6, -950
                  c.li        a2, 24
                  mulhu       s5, s3, t3
                  c.sub       a3, a3
                  ori         zero, s1, 743
                  c.nop
                  ori         zero, s7, -901
                  c.sub       a3, s0
                  c.srli      a3, 3
                  c.addi      a6, -1
                  c.li        tp, -1
                  srl         s5, s0, s3
                  addi        t2, t1, 1077
                  c.add       s5, s10
                  c.srli      a3, 19
                  mulh        a1, a0, s9
                  c.li        a1, -1
                  and         s9, t0, s2
                  c.addi16sp  sp, 112
                  c.xor       a3, a3
                  c.andi      a3, -1
                  ori         s4, s7, 127
                  andi        zero, t2, 783
                  c.or        a3, a3
                  andi        t1, s5, 532
                  c.or        a3, a3
                  nop
                  c.sub       a3, a3
                  addi        t1, s7, 280
                  c.mv        s0, s11
                  and         s0, s7, a3
                  nop
                  addi        s10, s7, -180
                  slt         zero, t6, a6
                  lui         a6, 697063
                  c.mv        s5, a6
                  srli        gp, a3, 14
                  ori         zero, t4, -1913
                  add         s5, s4, tp
                  c.or        a2, a3
                  c.lui       t2, 31
                  c.lui       s0, 18
                  slti        s9, a7, -23
                  c.slli      ra, 30
                  lui         t0, 1037987
                  srli        s6, t3, 17
                  c.or        a3, a1
                  c.mv        t2, ra
                  c.andi      a3, -1
                  c.nop
                  c.sub       a3, a3
                  and         zero, a1, s4
                  mulhsu      s5, s5, t2
                  divu        t1, sp, t0
                  auipc       t4, 619348
                  c.addi16sp  sp, -16
                  c.or        a3, a3
                  add         t2, t5, s5
                  addi        s0, t3, 1838
                  and         s4, s8, a2
                  c.addi4spn  a0, sp, 320
                  xor         s7, a0, s10
                  srli        s0, a3, 24
                  c.addi      ra, 12
                  c.and       a1, a3
                  div         ra, a5, t6
                  c.or        a3, a3
                  sra         zero, s7, s8
                  lui         a3, 80166
                  srl         t2, tp, t6
                  rem         a3, s9, s1
                  c.add       s10, s5
                  slt         t5, s2, a1
                  mulh        s4, s3, s10
                  srai        s9, s7, 4
                  divu        a1, s11, s10
                  slli        sp, s5, 14
                  addi        a1, s5, 55
                  or          s10, s3, a7
                  c.nop
                  c.addi      sp, 19
                  divu        s7, s1, a4
                  c.mv        ra, s7
                  rem         s3, s1, s3
                  ori         t1, s2, -233
                  c.and       a3, a3
                  mul         a1, a5, a7
                  c.xor       a3, a3
                  slti        gp, t3, -350
                  c.mv        ra, s0
                  add         s9, s6, s1
                  divu        s1, a7, s11
                  lui         s10, 381965
                  addi        sp, s4, -1924
                  slt         t4, ra, t2
                  c.addi4spn  a3, sp, 128
                  ori         a0, a3, 324
                  c.addi16sp  sp, 80
                  c.srli      a3, 14
                  mulhu       a2, s10, s3
                  c.addi16sp  sp, 256
                  c.sub       a3, a3
                  divu        s10, ra, s7
                  or          t5, s10, s10
                  c.sub       a3, a3
                  mul         a5, a4, a4
                  c.slli      ra, 24
                  c.xor       a3, a2
                  c.srli      a3, 8
                  sll         t5, s2, t6
                  c.addi      t1, -1
                  c.and       a3, a3
                  mul         a3, s1, a7
                  mulhsu      s4, a5, t2
                  slt         s8, gp, a3
                  c.mv        ra, s3
                  slti        t1, t3, 880
                  c.add       s10, a5
                  c.mv        s10, a2
                  andi        zero, t2, 711
                  mulhu       t0, a5, zero
                  srli        s2, s0, 12
                  lui         zero, 790424
                  srli        a0, a7, 23
                  add         ra, s2, a2
                  sub         s6, zero, t4
                  c.mv        a5, a0
                  and         s1, t4, s9
                  c.slli      gp, 15
                  c.sub       a3, a0
                  c.addi      t5, 19
                  lui         s9, 733578
                  slli        a6, t6, 28
                  c.add       t0, s0
                  sll         t5, a4, s11
                  c.andi      a3, 13
                  c.srai      a3, 25
                  c.lui       a3, 2
                  c.or        a4, a0
                  c.addi      a1, 13
                  mulhu       t5, ra, s11
                  slt         s3, a0, t5
                  c.srai      a3, 7
                  slli        a4, t3, 0
                  nop
                  add         tp, s1, s10
                  c.lui       s2, 2
                  c.addi4spn  a3, sp, 880
                  c.lui       s2, 1
                  c.xor       a4, a3
                  sra         zero, s6, s5
                  c.srai      a3, 22
                  mulhsu      s3, gp, t1
                  c.slli      t2, 16
                  mulhsu      a1, a7, s9
                  srl         a6, a5, s5
                  srai        s0, t5, 5
                  c.lui       t2, 27
                  c.addi      a6, -1
                  c.li        a2, 29
                  or          s5, a5, gp
                  and         a7, zero, sp
                  c.addi4spn  a3, sp, 64
                  srli        s9, s3, 21
                  sll         s10, t0, s11
                  sltu        tp, s1, s7
                  xori        a6, a5, 1761
                  xori        s1, s3, 983
                  c.mv        ra, s1
                  andi        zero, s7, 1024
                  mulhsu      s10, t5, zero
                  mulh        a0, a3, t2
                  andi        a3, t6, -2033
                  c.add       s1, s1
                  c.sub       a3, s0
                  c.xor       a3, a3
                  xor         tp, a5, ra
                  c.andi      a3, -1
                  c.slli      a2, 17
                  c.addi16sp  sp, 336
                  c.li        a4, -1
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_5
                  li         t4, 0x1
                  li         s10, 0x93a2fee
                  li         sp, 0x5bc45d3f
                  li         s1, 0x1
                  li         a1, 0x187b7045
                  li         s8, 0x1
                  li         s9, 0x0
                  li         a0, 0x0
                  li         s2, 0x0
                  mulhsu      t2, s10, a2
                  mulh        s5, gp, a5
                  mul         zero, s8, a5
                  c.addi      a3, 16
                  mulhsu      zero, s6, s0
                  c.addi16sp  sp, 352
                  add         a6, s10, t4
                  div         a6, t3, t0
                  mul         tp, t3, ra
                  c.addi      ra, -1
                  nop
                  c.lui       ra, 2
                  addi        s4, s0, 736
                  lui         s5, 164535
                  add         s1, s2, t6
                  addi        a5, tp, -428
                  lui         zero, 736784
                  c.addi4spn  a3, sp, 192
                  c.sub       a3, a3
                  div         s4, s10, sp
                  mul         zero, s11, sp
                  rem         t2, t3, a3
                  nop
                  div         s6, s3, t6 #end riscv_int_numeric_corner_stream_5
                  andi        s8, s4, -436
                  c.lui       a7, 21
                  sub         s6, ra, s2
                  c.addi4spn  a3, sp, 832
                  c.srli      a3, 22
                  c.andi      a3, -1
                  divu        s10, t1, s9
                  slli        s9, a3, 21
                  addi        tp, s5, -90
                  c.or        a3, a3
                  auipc       a7, 634480
                  sra         s5, s9, t6
                  c.slli      ra, 15
                  c.andi      a3, -1
                  ori         s5, s2, 842
                  slti        s9, t4, -1111
                  sll         tp, s6, a3
                  slli        s9, s7, 15
                  c.srai      a3, 4
                  c.nop
                  addi        s4, s4, -1358
                  c.slli      ra, 12
                  sll         t0, tp, zero
                  div         s6, a2, s11
                  c.li        t5, 0
                  c.srli      a3, 29
                  addi        t4, a2, 349
                  c.sub       a3, a3
                  slti        a2, s9, -445
                  c.nop
                  c.slli      s6, 30
                  div         a6, s2, zero
                  divu        sp, a4, s11
                  c.and       a3, a3
                  sltu        s0, a6, tp
                  c.xor       a2, a2
                  c.mv        ra, s2
                  srai        s7, s11, 22
                  andi        zero, sp, 409
                  c.nop
                  xori        a5, s5, -1111
                  auipc       s4, 393076
                  and         s4, s3, ra
                  c.srai      a3, 21
                  or          a4, s2, s4
                  lui         s1, 518600
                  lui         t4, 720676
                  c.sub       a3, a3
                  mulhsu      s3, sp, s11
                  c.addi4spn  a3, sp, 384
                  lui         a0, 911068
                  xor         a4, s6, s9
                  c.add       s9, t1
                  mul         tp, t5, a2
                  srai        s0, t0, 12
                  divu        zero, s4, s6
                  c.srai      a3, 12
                  auipc       s5, 675915
                  add         a3, s11, s10
                  sll         s3, t5, a0
                  sra         s1, a4, s9
                  c.srai      a3, 20
                  c.sub       a2, a3
                  add         a4, s5, gp
                  sub         ra, s11, sp
                  mulhsu      s0, s2, s1
                  slti        s7, s7, -1056
                  slti        s5, a2, 846
                  c.mv        gp, sp
                  c.srli      a3, 13
                  slt         ra, a0, t0
                  c.andi      a3, -1
                  nop
                  c.addi16sp  sp, -16
                  auipc       a5, 119229
                  c.srli      a3, 18
                  sub         t2, a6, a0
                  srai        zero, s9, 4
                  xor         t1, a5, a1
                  div         t2, t3, t1
                  auipc       s10, 18677
                  c.mv        s8, s2
                  c.xor       a1, a3
                  lui         a5, 1008374
                  slt         sp, tp, a2
                  xori        s6, s2, -636
                  c.addi16sp  sp, 32
                  and         ra, s6, s2
                  c.xor       a3, a3
                  addi        a6, t5, -707
                  c.addi16sp  sp, 160
                  or          s5, a7, s8
                  c.mv        s2, ra
                  mulhu       t0, zero, s6
                  nop
                  mul         sp, a5, s9
                  srai        zero, t2, 8
                  div         s6, s2, s1
                  c.srai      a3, 26
                  xor         s7, a6, t3
                  srli        t4, s9, 16
                  mulh        a3, a5, t2
                  c.nop
                  c.li        a3, 1
                  mulh        t2, a0, gp
                  mul         ra, s4, s1
                  c.slli      t2, 22
                  c.lui       t5, 1
                  mulhu       s7, t2, a3
                  c.and       a3, a0
                  srl         s0, s6, t3
                  c.add       s3, s9
                  c.addi      s4, 1
                  ori         a2, s10, -1480
                  auipc       a6, 235224
                  c.or        a3, a3
                  c.slli      sp, 4
                  c.addi16sp  sp, 64
                  lui         s9, 791403
                  ori         t0, t4, -310
                  nop
                  c.or        a3, a1
                  c.li        gp, 20
                  c.andi      a2, 27
                  c.sub       a3, a2
                  mulh        sp, t0, a3
                  nop
                  c.srli      a3, 17
                  c.add       s7, s10
                  c.lui       t0, 31
                  c.srli      a2, 5
                  slti        s5, a2, -1099
                  sltu        s3, sp, sp
                  xor         s4, t1, t0
                  lui         a7, 506660
                  mul         a5, s1, a3
                  auipc       a0, 532995
                  slti        zero, a0, -1190
                  srai        s6, t6, 18
                  xor         a2, s8, a1
                  c.addi      s10, -1
                  c.li        s0, 25
                  c.slli      a5, 27
                  srl         a1, t1, s8
                  mulhu       a2, s6, a1
                  lui         zero, 959620
                  auipc       s1, 93280
                  sll         s8, s0, zero
                  c.xor       a3, a3
                  sra         s6, t3, s2
                  divu        t4, t5, s5
                  c.srai      a5, 8
                  c.andi      a3, 17
                  sra         sp, s10, sp
                  mulhsu      zero, t0, t3
                  auipc       zero, 244124
                  div         s0, t6, s7
                  divu        gp, t2, s2
                  auipc       s2, 353703
                  c.add       a7, t1
                  xori        t2, tp, 438
                  c.or        a3, a3
                  nop
                  divu        a5, s0, zero
                  ori         s8, t2, -1599
                  srai        a7, a6, 15
                  c.srli      a3, 13
                  or          s10, gp, t6
                  srli        s2, a3, 2
                  add         a6, s2, zero
                  ori         s6, t0, -1254
                  c.nop
                  c.addi16sp  sp, -16
                  ori         s4, s5, -1735
                  li         t5, 0x0 #start riscv_int_numeric_corner_stream_3
                  li         t4, 0x1
                  li         a2, 0x0
                  li         a5, 0x0
                  li         s5, 0x2e15d63c
                  li         a3, 0x0
                  li         a4, 0x0
                  li         t2, 0x0
                  li         a1, 0x0
                  li         s9, 0x0
                  mul         zero, a4, a4
                  sub         sp, s7, ra
                  c.sub       a3, a3
                  c.addi4spn  a3, sp, 464
                  mulhsu      s2, t1, ra
                  addi        s8, gp, -1612
                  mulh        zero, s10, a6
                  c.addi      a0, -1
                  divu        sp, s11, s3
                  c.li        s2, -1
                  c.addi      ra, -1
                  c.add       s5, s5
                  c.add       s6, t6
                  c.li        s7, -1
                  c.addi16sp  sp, -16
                  c.sub       a3, a3
                  c.addi16sp  sp, -16
                  c.addi16sp  sp, 112
                  c.li        s9, 10
                  mulh        s0, a3, a3
                  auipc       s0, 619458
                  divu        s10, t6, s2
                  c.mv        t1, t2
                  mulhu       s8, s6, t3
                  mulhsu      zero, a6, t1
                  mul         s5, gp, zero
                  mulhsu      s8, s4, s0
                  c.add       ra, tp
                  nop #end riscv_int_numeric_corner_stream_3
                  div         a4, a3, t6
                  c.mv        a0, a7
                  srli        ra, sp, 18
                  sub         s1, s5, t0
                  srai        tp, a3, 13
                  sra         zero, s11, a2
                  c.mv        a5, t2
                  sltu        a3, a1, sp
                  slt         a5, t4, t4
                  c.addi4spn  a0, sp, 576
                  sra         s7, t0, s5
                  and         zero, t5, ra
                  mulh        s3, a0, gp
                  srai        zero, a3, 26
                  c.srli      a3, 11
                  c.sub       a3, a3
                  nop
                  c.nop
                  xor         s9, s4, zero
                  c.mv        s4, sp
                  c.mv        ra, s10
                  sll         a5, s11, s10
                  c.and       a3, s1
                  srli        s9, a5, 10
                  slli        a3, a3, 7
                  and         t4, t4, tp
                  c.add       s4, ra
                  c.andi      a4, -1
                  div         a3, t3, t2
                  c.andi      a3, -1
                  c.lui       tp, 27
                  srai        zero, s4, 19
                  c.lui       ra, 31
                  srai        a3, s11, 2
                  c.nop
                  c.or        a3, a3
                  c.addi16sp  sp, -16
                  and         s10, t3, zero
                  c.nop
                  and         a1, a2, a2
                  sltu        tp, t1, s4
                  sll         s3, a1, s8
                  c.nop
                  c.addi4spn  a3, sp, 896
                  sll         gp, a4, s9
                  xor         s5, s11, s4
                  srai        s1, t2, 14
                  sll         sp, a3, a6
                  mulh        sp, s9, a1
                  mulhu       ra, s9, s1
                  sra         s6, a5, a5
                  and         s4, a3, a3
                  c.addi      s3, -1
                  c.lui       t2, 11
                  mulhu       t1, tp, tp
                  c.andi      a3, -1
                  auipc       s10, 682055
                  nop
                  c.lui       t4, 3
                  c.srai      s0, 25
                  c.srai      a3, 8
                  divu        s6, s9, ra
                  mulhsu      sp, s3, s5
                  srli        zero, gp, 14
                  and         ra, s8, s0
                  mulhsu      t0, gp, sp
                  srai        t4, tp, 23
                  c.li        t1, 7
                  lui         a5, 972306
                  mulh        a1, ra, a7
                  or          a1, sp, a3
                  and         s1, t1, t0
                  srli        zero, s2, 23
                  sll         a0, a7, a4
                  c.add       s5, s2
                  addi        s3, tp, -1316
                  c.addi      ra, -1
                  c.and       a3, a3
                  c.addi4spn  a4, sp, 864
                  lui         zero, 281442
                  slli        zero, t4, 25
                  slti        t2, t1, -1765
                  srl         a3, s5, t5
                  add         s10, s9, sp
                  c.srai      s0, 5
                  c.li        a1, -1
                  c.srai      a3, 15
                  and         s9, gp, s5
                  ori         t5, s11, 1002
                  sub         a5, s5, s2
                  sll         zero, t2, t3
                  rem         a1, a6, t3
                  mulhu       a3, s3, s10
                  andi        zero, t0, 356
                  sll         t5, a6, s3
                  srli        s3, a0, 1
                  xor         a2, a5, s6
                  c.mv        t4, a7
                  xori        ra, a2, -1633
                  srli        zero, s1, 30
                  div         a0, a3, a4
                  c.li        a4, 23
                  lui         a0, 579024
                  c.sub       a3, a3
                  c.mv        a5, t3
                  mulhsu      s4, zero, s4
                  divu        s9, t0, ra
                  mulhsu      a4, t6, a7
                  slt         a1, t4, a6
                  c.lui       t2, 27
                  sltu        s3, a4, s5
                  andi        ra, a7, 553
                  mulh        a6, a6, s5
                  c.and       a3, a0
                  srai        a4, s3, 23
                  c.add       ra, t2
                  c.addi4spn  a3, sp, 896
                  sra         s2, s11, a5
                  sll         a0, t6, s8
                  addi        zero, t0, -992
                  ori         zero, t1, -1180
                  mul         sp, gp, t2
                  c.mv        t0, a3
                  div         gp, s0, a7
                  c.slli      a4, 3
                  c.addi16sp  sp, -16
                  srai        t2, t2, 9
                  c.or        s0, a3
                  c.nop
                  sub         t5, s1, s6
                  or          s4, a6, s2
                  sltu        t1, a4, t1
                  c.and       a3, a3
                  c.mv        ra, a1
                  mulhu       zero, s5, t4
                  xori        s7, s5, 1547
                  c.andi      a3, -1
                  c.addi16sp  sp, 320
                  sltu        t4, s1, s10
                  c.li        t5, -1
                  rem         a4, s2, tp
                  c.and       a3, a3
                  srl         s10, a3, a6
                  div         a5, t3, a7
                  divu        a7, t6, sp
                  mulhsu      t4, t6, gp
                  sra         zero, a5, s1
                  sll         a2, a3, zero
                  c.or        s1, s1
                  divu        zero, a6, s8
                  c.addi4spn  a3, sp, 320
                  sra         s0, a6, a4
                  c.and       a3, a3
                  divu        t0, s2, a3
                  mulhu       a7, gp, sp
                  c.sub       a3, a2
                  c.mv        gp, a5
                  sub         s0, t3, s10
                  c.add       s5, t2
                  c.addi4spn  a3, sp, 320
                  and         t4, tp, t4
                  c.slli      t5, 15
                  div         a7, t1, a4
                  div         a4, a5, sp
                  c.srli      a3, 11
                  mulhsu      s5, a0, a2
                  auipc       s9, 212374
                  srl         ra, ra, s2
                  add         t4, s3, t6
                  c.xor       a3, a3
                  mul         a3, a3, s5
                  mulhsu      s5, t3, t5
                  or          s4, s2, t4
                  sltu        s0, a4, sp
                  divu        s8, s1, s4
                  auipc       s0, 320674
                  lui         t0, 52290
                  c.slli      s1, 12
                  ori         s9, t1, 636
                  addi        zero, s8, -1012
                  rem         zero, s11, s5
                  srl         s5, a0, s8
                  andi        a2, s3, -1839
                  xori        a2, t1, 1426
                  c.add       ra, s3
                  c.or        a3, a3
                  slli        s3, s3, 4
                  c.mv        tp, ra
                  lui         t0, 278813
                  auipc       s0, 850209
                  xor         t1, s7, s10
                  c.sub       a4, a3
                  c.srli      a3, 20
                  c.xor       a3, a2
                  c.nop
                  c.or        a3, a3
                  slli        s6, t3, 2
                  mulhu       s9, t2, t6
                  mul         a3, s3, s2
                  rem         ra, t6, t6
                  c.mv        s9, a2
                  c.add       s5, t4
                  slti        s9, s10, 1497
                  div         a3, t6, t2
                  div         zero, a3, zero
                  add         s5, a1, t1
                  c.mv        gp, t4
                  mul         s2, sp, t5
                  c.nop
                  sltu        zero, s9, s2
                  c.xor       a3, a3
                  slti        s3, t0, 561
                  c.addi16sp  sp, -16
                  divu        a3, gp, sp
                  slli        s6, ra, 12
                  c.xor       a2, a3
                  mul         a0, a6, a1
                  slti        gp, s7, 1438
                  add         s2, a6, tp
                  mulhsu      a7, s6, s7
                  addi        t2, t6, -821
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
                  csrr x29, 0x300 # MSTATUS
                  csrr x29, 0x342 # MCAUSE
                  srli x29, x29, 31
                  bne x29, x0, mmode_intr_handler

mmode_exception_handler:
                  csrr x29, 0x341 # MEPC
                  csrr x29, 0x342 # MCAUSE
                  li x14, 0xb # ECALL_MMODE
                  beq x29, x14, ecall_handler
                  li x14, 0x2 # ILLEGAL_INSTRUCTION
                  beq x29, x14, illegal_instr_handler
                  csrr x14, 0x343 # MTVAL
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
                  csrr  x29, 0x341
                  addi  x29, x29, 4
                  csrw  0x341, x29
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
                  csrr  x29, 0x300 # MSTATUS;
                  csrr  x29, 0x304 # MIE;
                  csrr  x29, 0x344 # MIP;
                  csrrc x29, 0x344, x29 # MIP;
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
