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

0: la x14, h0_start
jalr x0, x14, 0
h0_start:
                  li x20, 0x40001104
                  csrw 0x301, x20
kernel_sp:
                  la x30, kernel_stack_end

trap_vec_init:
                  la x20, mtvec_handler
                  ori x20, x20, 0
                  csrw 0x305, x20 # MTVEC

mepc_setup:
                  la x20, init
                  csrw 0x341, x20

init_machine_mode:
                  li x20, 0x1a00
                  csrw 0x300, x20 # MSTATUS
                  li x20, 0x0
                  csrw 0x304, x20 # MIE
                  mret
init:
                  li x0, 0xdf60ef8a
                  li x1, 0x80000000
                  li x2, 0x5
                  li x3, 0xff3f1dd4
                  li x4, 0x1e1d229e
                  li x5, 0xc
                  li x6, 0x80000000
                  li x7, 0x0
                  li x8, 0x8
                  li x9, 0x80000000
                  li x10, 0xf44055a4
                  li x11, 0xf0ef6be6
                  li x12, 0x0
                  li x13, 0xf9c7fe18
                  li x14, 0xfa367581
                  li x15, 0x80000000
                  li x16, 0xf31f9db3
                  li x17, 0x80000000
                  li x18, 0xb
                  li x19, 0x80000000
                  li x20, 0x9fb3d468
                  li x21, 0xa616f728
                  li x22, 0xf8e4c038
                  li x23, 0x3810ce16
                  li x24, 0x80000000
                  li x25, 0x0
                  li x26, 0xfac4a8e4
                  li x28, 0x80000000
                  li x29, 0x80000000
                  li x31, 0x952a9057
                  la x27, user_stack_end
main: mulhu a5, s5, tp
                  c.srai a2, 19
                  auipc a3, 830514
                  slli a6, a6, 4
                  c.srli a3, 8
                  and zero, s1, s8
                  slli sp, t0, 11
                  c.slli t0, 18
                  li a5, 0x41d3a39a #start riscv_int_numeric_corner_stream_0
                  li t4, 0x1
                  li ra, 0x7b616f8e
                  li sp, 0x1
                  li s6, 0x64ad6ff8
                  li s5, 0x0
                  li s0, 0x1
                  li s1, 0x0
                  li a6, 0x45bf3e8c
                  li gp, 0x0
                  mulhu a1, t1, t4
                  c.addi16sp sp, -16
                  divu s1, t0, a0
                  c.addi4spn a3, sp, 864
                  c.mv t3, s9
                  sub s5, zero, s6
                  divu s8, t1, s8
                  add s6, s5, a4
                  c.sub a3, a3
                  c.addi4spn a3, sp, 96
                  rem a2, a0, s7
                  lui a6, 782886
                  rem s1, s4, t3
                  auipc s8, 647187
                  mulh gp, a7, s4
                  div a1, a5, t0
                  c.li t0, 27
                  c.add sp, a6
                  addi a1, a0, 715
                  auipc s8, 656088
                  mulhu s1, s11, s7
                  c.li ra, 7
                  c.sub a2, a3
                  c.addi4spn a3, sp, 896
                  c.sub a1, a3
                  add s1, s2, s11
                  c.addi s5, -1
                  nop
                  c.lui t4, 22
                  xori zero, ra, -296
                  c.or s0, a3
                  auipc s8, 398455
                  c.xor a3, a3
                  mul a6, a3, s6
                  c.li a3, 21
                  srl s4, a3, s2
                  c.srli a0, 21
                  slt t3, t0, s1
                  la x14, test_done
                  jalr x0, x14, 0
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
                  add x27, x30, zero
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
                  csrr x20, 0x300 # MSTATUS
                  csrr x20, 0x342 # MCAUSE
                  srli x20, x20, 31
                  bne x20, x0, mmode_intr_handler

mmode_exception_handler:
                  csrr x20, 0x341 # MEPC
                  csrr x20, 0x342 # MCAUSE
                  li x31, 0xb # ECALL_MMODE
                  beq x20, x31, ecall_handler
                  li x31, 0x2 # ILLEGAL_INSTRUCTION
                  beq x20, x31, illegal_instr_handler
                  csrr x31, 0x343 # MTVAL
                  1: la x14, test_done
                  jalr x1, x14, 0

ecall_handler:
                  la x20, _start
                  sw x0, 0(x20)
                  sw x1, 4(x20)
                  sw x2, 8(x20)
                  sw x3, 12(x20)
                  sw x4, 16(x20)
                  sw x5, 20(x20)
                  sw x6, 24(x20)
                  sw x7, 28(x20)
                  sw x8, 32(x20)
                  sw x9, 36(x20)
                  sw x10, 40(x20)
                  sw x11, 44(x20)
                  sw x12, 48(x20)
                  sw x13, 52(x20)
                  sw x14, 56(x20)
                  sw x15, 60(x20)
                  sw x16, 64(x20)
                  sw x17, 68(x20)
                  sw x18, 72(x20)
                  sw x19, 76(x20)
                  sw x20, 80(x20)
                  sw x21, 84(x20)
                  sw x22, 88(x20)
                  sw x23, 92(x20)
                  sw x24, 96(x20)
                  sw x25, 100(x20)
                  sw x26, 104(x20)
                  sw x27, 108(x20)
                  sw x28, 112(x20)
                  sw x29, 116(x20)
                  sw x30, 120(x20)
                  sw x31, 124(x20)
                  la x14, write_tohost
                  jalr x0, x14, 0

illegal_instr_handler:
                  csrr x20, 0x341
                  addi x20, x20, 4
                  csrw 0x341, x20
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
                  add x30, x27, zero
                  csrrw x27, 0x340, x27
                  mret

pt_fault_handler:

.align 2
mmode_intr_handler:
                  csrr x20, 0x300 # MSTATUS;
                  csrr x20, 0x304 # MIE;
                  csrr x20, 0x344 # MIP;
                  csrrc x20, 0x344, x20 # MIP;
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
                  add x30, x27, zero
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
