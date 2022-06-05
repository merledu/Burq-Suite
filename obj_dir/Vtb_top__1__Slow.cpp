// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"

void Vtb_top::_settle__TOP__2(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top::_settle__TOP__2\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp24[3];
    WData/*95:0*/ __Vtemp27[3];
    WData/*159:0*/ __Vtemp52[5];
    WData/*159:0*/ __Vtemp61[5];
    WData/*159:0*/ __Vtemp77[5];
    WData/*159:0*/ __Vtemp86[5];
    WData/*127:0*/ __Vtemp121[4];
    // Body
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
        = ((0xfff0U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ageff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
        = ((0xff0fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ageff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
        = ((0xf0ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ageff__dout) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
        = ((0xfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ageff__dout) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local 
        = (((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg 
                              >> 0x1cU))) | (0xeU == 
                                             (0xfU 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg 
                                                 >> 0x1cU)))) 
           | (0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg 
                               >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_valid 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_vld) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vld)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vld));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
            << 0x10U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xffffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
        = ((0xfffff8ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = ((0xfcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualtagff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_samedwff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag 
        = ((0xfcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = ((0xf3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualtagff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_samedwff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag 
        = ((0xf3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = ((0xcfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualtagff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_samedwff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag 
        = ((0xcfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualtagff__dout) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_samedwff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__dout) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualhiff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualhiff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualhiff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualhiff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_addrff__dout;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_addrff__dout;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_addrff__dout;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_addrff__dout;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[0U] 
        = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[1U] 
        = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[2U] 
        = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[3U] 
        = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[4U] 
        = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[5U] 
        = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[6U] 
        = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[7U] 
        = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[8U] 
        = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[9U] 
        = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_data_dff__dout 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr 
        = ((((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                           >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                       >> 1U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                       >> 3U))) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                     >> 2U))) 
           | ((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                            >> 3U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = ((0x3fcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = ((0x3f3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = ((0x3cfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = ((0x33fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error 
        = ((0xffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_error_dff__dout) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr 
        = ((((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                           >> 3U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
            | ((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                             >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                         >> 1U))) | 
           ((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                          >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                      >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
        = ((0x70000U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                            >> 0xdU)) << 0x10U)) | 
           ((0x1000U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int)) 
            | ((0xf80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int)) 
               | ((0x40U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                >> 6U)) << 6U)) | (0x3fU 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren 
        = (((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                          >> 3U))) << 2U) | (((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                   >> 3U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                    >> 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                  >> 0x18U) & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_fir_error))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_done_bus_dff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_write_dff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_dbg_dff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_valid_dff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ 
        = ((0xfff0U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_rspageff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ 
        = ((0xff0fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_rspageff__dout) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ 
        = ((0xf0ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_rspageff__dout) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ 
        = ((0xfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_rspageff__dout) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                   >> 3U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 6U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                               >> 0x17U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__force_halt 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdht) 
           & (0U != (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__force_halt_ctr_f 
                     & ((IData)(0xffffffffU) << (0x1fU 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdht) 
                                                    >> 1U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m 
        = ((0x3ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldmff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_debug_halt_req_sync 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                  >> 1U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                               >> 0x17U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff 
        = (((((0x300U == (0xfffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                    >> 9U))) | (0x304U 
                                                == 
                                                (0xfffU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                                    >> 9U)))) 
             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                >> 0x16U)) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r 
        = (0xfffU & ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                        >> 0x16U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout)))) 
                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                        >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_errorff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_errorff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_errorff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_errorff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_writeff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_writeff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_writeff__dout) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_writeff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
        = ((0xff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_state_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
        = ((0xfc7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_state_ff__dout) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
        = ((0xe3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_state_ff__dout) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
        = ((0x1ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_state_ff__dout) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_r)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_ld_data_corr_r);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r 
        = ((0x3ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data 
        = ((8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                  >> 4U)) | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                    >> 5U)) | ((2U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                   >> 6U)) 
                                               | (1U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                     >> 7U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled 
        = ((8U & (((0x1ffffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                   >> 3U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                              << 3U)) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
           | ((4U & (((0xffffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                     >> 4U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                << 2U)) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                        >> 1U))) | ((2U & (((0x7fffffeU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                >> 5U)) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                               << 1U)) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                              >> 2U))) 
                                    | (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               >> 6U) 
                                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                >> 3U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r 
        = ((0xfffffffffeULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r) 
           | (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_exc_valid_rff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r 
        = ((0xfffffffffdULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r) 
           | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_single_ecc_error_rff__dout)) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r 
        = ((3ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r) 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0x3fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0xc0000000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xefffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (0x10000000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                             << 0x1bU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xfffffffcU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                     << 1U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r 
        = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_t_in 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_r_ff__dout;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_t_in 
        = ((0x1f0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_t_in) 
           | (0xf00U & ((((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                             >> 3U) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                               >> 2U))))) 
                          << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                    << 4U)) | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_r_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_t_in 
        = ((0x1ffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_t_in) 
           | (0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                       << 1U)));
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_t_in = 0U;
    }
    vlTOPp->tb_top__DOT__rst_l = VL_LTS_III(1,32,32, 5U, vlTOPp->tb_top__DOT__cycleCnt);
    vlTOPp->tb_top__DOT__porst_l = VL_LTS_III(1,32,32, 2U, vlTOPp->tb_top__DOT__cycleCnt);
    vlTOPp->tb_top__DOT__lsu_axi_wstrb = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen) 
                                          & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write))));
    vlTOPp->tb_top__DOT__lsu_axi_araddr = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr
                                            : (0xfffffff8U 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__ifu_axi_rvalid)
            ? vlTOPp->tb_top__DOT__ifu_axi_rdata : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__forcehaltctr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdht))
            ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)
                ? ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__force_halt_ctr_f)
                : ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)
                    ? 0U : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__force_halt_ctr_f))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__force_halt_ctr_f);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((0xf00c3000U == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_waddr_ff) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff))
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 9U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                             >> 2U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                  >> 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                              >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__request_debug_mode_done 
        = (1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 3U)) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 6U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                    >> 8U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                   >> 3U)))) 
                 & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 6U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 6U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                               >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted 
        = (1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                               >> 8U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                          >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r 
        = (1U & (((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 0xdU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 3U)) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 0x11U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en 
        = ((IData)(vlTOPp->tb_top__DOT__ifu_axi_rvalid) 
           & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r 
        = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                  >> 2U)) != (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                    >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
           & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                  >> 0xfU) ^ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                              >> 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken 
        = (1U & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0x11U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                    >> 1U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                   >> 0x1aU))) 
                 | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0x10U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0xdU))) & 
                     (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                         >> 2U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                        >> 0xbU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns 
        = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                 & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 2U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                   >> 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_fir_type 
        = (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                >> 0xcU)) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                             >> 0x18U)) & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_fir_error)));
    vlTOPp->tb_top__DOT__ifu_axi_araddr = (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_f_ff__dout 
                                             << 6U) 
                                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_count) 
                                               << 3U)) 
                                           & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_m 
        = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                  >> 2U)) != (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                    >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[4U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[5U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[6U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[7U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
        = (0xffffU | (0xffff0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[4U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[5U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[6U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_id[7U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
        = (0xffffU | (0xffff0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__size_128__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__write_bypass_en_ff))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_data_raw_packed_pre
            : vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC1__DOT__size_128__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__size_128__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__write_bypass_en_ff))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_data_raw_packed_pre
            : vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC1__DOT__size_128__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pred_correct_npc_x 
        = ((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pred_correct_npc_x) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout) 
                                                               >> 0xbU) 
                                                              ^ ~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__ibradder_correct__DOT__cout))))) 
                                               << 0xcU) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout)) 
                              | (((- (IData)(((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout) 
                                                  >> 0xbU)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__ibradder_correct__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((1U & (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout) 
                                                    >> 0xbU) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__ibradder_correct__DOT__cout)))))) 
                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_addr_en 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__iccm_buf_correct_ecc));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_addr_en 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_lru) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__iccm_buf_correct_ecc));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_shift 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                 >> 0xdU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_out_mux__DOT__unnamedblk1__DOT__j = 0U;
    while ((0x80U > vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_out_mux__DOT__unnamedblk1__DOT__j)) {
        if (((0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                       >> 3U)) == (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_out_mux__DOT__unnamedblk1__DOT__j))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
                = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[
                         (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_out_mux__DOT__unnamedblk1__DOT__j 
                                >> 5U))] >> (0x1fU 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_out_mux__DOT__unnamedblk1__DOT__j)));
        }
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_out_mux__DOT__unnamedblk1__DOT__j 
            = ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_out_mux__DOT__unnamedblk1__DOT__j);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 
                        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                            >> 0x10U) & (0U == (7U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                   >> 0xcU))));
                }
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned 
        = ((((1U == (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                           >> 0x11U))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg) 
            | ((2U == (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                             >> 0x11U))) & (0U != (3U 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)))) 
           | ((3U == (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                            >> 0x11U))) & (0U != (7U 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_inc 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_inc) 
           | (0xffU & ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_inc 
        = ((0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_inc) 
           | (0xffffff00U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl 
                               >> 8U) + (1U & (((IData)(1U) 
                                                + (0xffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                               >> 8U))) 
                             << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_inc 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_inc) 
           | (0xffU & ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_inc 
        = ((0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_inc) 
           | (0xffffff00U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel 
                               >> 8U) + (1U & (((IData)(1U) 
                                                + (0xffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                               >> 8U))) 
                             << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr_in 
        = ((0xcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr_in)) 
           | ((1U == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr)))
               ? 0U : (3U & ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr_in 
        = ((3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr_in)) 
           | (((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr) 
                             >> 2U))) ? 0U : (3U & 
                                              ((IData)(1U) 
                                               + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__wrptr) 
                                                  >> 2U)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc) 
           | (0xffU & ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc 
        = ((0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc) 
           | (0xffffff00U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1 
                               >> 8U) + (1U & (((IData)(1U) 
                                                + (0xffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)) 
                                               >> 8U))) 
                             << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1 
           >= (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc) 
           | (0xffU & ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc 
        = ((0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc) 
           | (0xffffff00U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0 
                               >> 8U) + (1U & (((IData)(1U) 
                                                + (0xffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)) 
                                               >> 8U))) 
                             << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0 
           >= (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                  & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                   >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                               >> 1U)))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 1U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 2U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 3U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 4U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 5U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 6U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 7U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 8U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__8__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 9U) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                           >> 2U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__9__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xaU) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__10__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xbU) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__11__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xcU) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__12__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xdU) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__13__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xeU) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__14__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__way_status_clken) 
                   >> 0xfU) & ((7U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                             >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout) 
                                  >> 1U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_WAY_STATUS__BRA__15__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en = (1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                      | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                          >> 1U) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                             >> 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_during_sleep 
        = ((- (IData)((1U & (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                 >> 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                             >> 8U)))))) 
           & ((8U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                              >> 0x27U)) << 3U)) | 
              ((4U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                               >> 0x1dU)) << 2U)) | 
               ((2U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                >> 0x13U)) << 1U)) 
                | (1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                 >> 9U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_a_cls__DOT__cls_zeros 
        = (0x1fU & (((((((((((((((((((((((((((((((1U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                            >> 0x1eU))))))) 
                                                 | (2U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                              >> 0x1dU)))))))) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                             >> 0x1cU)))))))) 
                                               | (4U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                            >> 0x1bU)))))))) 
                                              | (5U 
                                                 & (- (IData)(
                                                              (1U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                           >> 0x1aU)))))))) 
                                             | (6U 
                                                & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                          >> 0x19U)))))))) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                       >> 0x18U)))))))) 
                                           | (8U & 
                                              (- (IData)(
                                                         (1U 
                                                          == 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                      >> 0x17U)))))))) 
                                          | (9U & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                          >> 0x16U)))))))) 
                                         | (0xaU & 
                                            (- (IData)(
                                                       (1U 
                                                        == 
                                                        (0x7ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                    >> 0x15U)))))))) 
                                        | (0xbU & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                          >> 0x14U)))))))) 
                                       | (0xcU & (- (IData)(
                                                            (1U 
                                                             == 
                                                             (0x1fffU 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                         >> 0x13U)))))))) 
                                      | (0xdU & (- (IData)(
                                                           (1U 
                                                            == 
                                                            (0x3fffU 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                        >> 0x12U)))))))) 
                                     | (0xeU & (- (IData)(
                                                          (1U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                       >> 0x11U)))))))) 
                                    | (0xfU & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                      >> 0x10U)))))))) 
                                   | (0x10U & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                      >> 0xfU)))))))) 
                                  | (0x11U & (- (IData)(
                                                        (1U 
                                                         == 
                                                         (0x3ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                     >> 0xeU)))))))) 
                                 | (0x12U & (- (IData)(
                                                       (1U 
                                                        == 
                                                        (0x7ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                    >> 0xdU)))))))) 
                                | (0x13U & (- (IData)(
                                                      (1U 
                                                       == 
                                                       (0xfffffU 
                                                        & (IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                   >> 0xcU)))))))) 
                               | (0x14U & (- (IData)(
                                                     (1U 
                                                      == 
                                                      (0x1fffffU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                  >> 0xbU)))))))) 
                              | (0x15U & (- (IData)(
                                                    (1U 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                 >> 0xaU)))))))) 
                             | (0x16U & (- (IData)(
                                                   (1U 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                >> 9U)))))))) 
                            | (0x17U & (- (IData)((1U 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                               >> 8U)))))))) 
                           | (0x18U & (- (IData)((1U 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                              >> 7U)))))))) 
                          | (0x19U & (- (IData)((1U 
                                                 == 
                                                 (0x3ffffffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                             >> 6U)))))))) 
                         | (0x1aU & (- (IData)((1U 
                                                == 
                                                (0x7ffffffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                            >> 5U)))))))) 
                        | (0x1bU & (- (IData)((1U == 
                                               (0xfffffffU 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                           >> 4U)))))))) 
                       | (0x1cU & (- (IData)((1U == 
                                              (0x1fffffffU 
                                               & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                          >> 3U)))))))) 
                      | (0x1dU & (- (IData)((1U == 
                                             (0x3fffffffU 
                                              & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                         >> 2U)))))))) 
                     | (0x1eU & (- (IData)((1U == (0x7fffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                              >> 1U)))))))) 
                    | (- (IData)((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_a_cls__DOT__cls_ones 
        = (0x1fU & (((((((((((((((((((((((((((((((1U 
                                                  & (- (IData)(
                                                               (6U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                            >> 0x1dU))))))) 
                                                 | (2U 
                                                    & (- (IData)(
                                                                 (0xeU 
                                                                  == 
                                                                  (0xfU 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                              >> 0x1cU)))))))) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0x1eU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                             >> 0x1bU)))))))) 
                                               | (4U 
                                                  & (- (IData)(
                                                               (0x3eU 
                                                                == 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                            >> 0x1aU)))))))) 
                                              | (5U 
                                                 & (- (IData)(
                                                              (0x7eU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                           >> 0x19U)))))))) 
                                             | (6U 
                                                & (- (IData)(
                                                             (0xfeU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                          >> 0x18U)))))))) 
                                            | (7U & 
                                               (- (IData)(
                                                          (0x1feU 
                                                           == 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                       >> 0x17U)))))))) 
                                           | (8U & 
                                              (- (IData)(
                                                         (0x3feU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                      >> 0x16U)))))))) 
                                          | (9U & (- (IData)(
                                                             (0x7feU 
                                                              == 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                          >> 0x15U)))))))) 
                                         | (0xaU & 
                                            (- (IData)(
                                                       (0xffeU 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                    >> 0x14U)))))))) 
                                        | (0xbU & (- (IData)(
                                                             (0x1ffeU 
                                                              == 
                                                              (0x1fffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                          >> 0x13U)))))))) 
                                       | (0xcU & (- (IData)(
                                                            (0x3ffeU 
                                                             == 
                                                             (0x3fffU 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                         >> 0x12U)))))))) 
                                      | (0xdU & (- (IData)(
                                                           (0x7ffeU 
                                                            == 
                                                            (0x7fffU 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                        >> 0x11U)))))))) 
                                     | (0xeU & (- (IData)(
                                                          (0xfffeU 
                                                           == 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                       >> 0x10U)))))))) 
                                    | (0xfU & (- (IData)(
                                                         (0x1fffeU 
                                                          == 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                      >> 0xfU)))))))) 
                                   | (0x10U & (- (IData)(
                                                         (0x3fffeU 
                                                          == 
                                                          (0x3ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                      >> 0xeU)))))))) 
                                  | (0x11U & (- (IData)(
                                                        (0x7fffeU 
                                                         == 
                                                         (0x7ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                     >> 0xdU)))))))) 
                                 | (0x12U & (- (IData)(
                                                       (0xffffeU 
                                                        == 
                                                        (0xfffffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                    >> 0xcU)))))))) 
                                | (0x13U & (- (IData)(
                                                      (0x1ffffeU 
                                                       == 
                                                       (0x1fffffU 
                                                        & (IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                   >> 0xbU)))))))) 
                               | (0x14U & (- (IData)(
                                                     (0x3ffffeU 
                                                      == 
                                                      (0x3fffffU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                  >> 0xaU)))))))) 
                              | (0x15U & (- (IData)(
                                                    (0x7ffffeU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                 >> 9U)))))))) 
                             | (0x16U & (- (IData)(
                                                   (0xfffffeU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                                >> 8U)))))))) 
                            | (0x17U & (- (IData)((0x1fffffeU 
                                                   == 
                                                   (0x1ffffffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                               >> 7U)))))))) 
                           | (0x18U & (- (IData)((0x3fffffeU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                              >> 6U)))))))) 
                          | (0x19U & (- (IData)((0x7fffffeU 
                                                 == 
                                                 (0x7ffffffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                             >> 5U)))))))) 
                         | (0x1aU & (- (IData)((0xffffffeU 
                                                == 
                                                (0xfffffffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                            >> 4U)))))))) 
                        | (0x1bU & (- (IData)((0x1ffffffeU 
                                               == (0x1fffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                              >> 3U)))))))) 
                       | (0x1cU & (- (IData)((0x3ffffffeU 
                                              == (0x3fffffffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                             >> 2U)))))))) 
                      | (0x1dU & (- (IData)((0x7ffffffeU 
                                             == (0x7fffffffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                                                            >> 1U)))))))) 
                     | (0x1eU & (- (IData)((0xfffffffeU 
                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend)))))) 
                    | (- (IData)((0xffffffffU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_hashed 
        = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predpipe_mp 
                     >> 5U) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predpipe_mp 
                               >> 0xdU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__9__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__10__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__11__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__12__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__13__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__14__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__15__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__16__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__17__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__18__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__19__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__20__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__21__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__22__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__23__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__24__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__25__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__26__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__27__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__28__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__29__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__30__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__31__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
        = ((0x1ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff) 
           | ((QData)((IData)(((0x10U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  >> 0x20U)) 
                                         << 4U)) | 
                               ((8U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                >> 0x20U)) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 0x20U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 0x20U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                   >> 0x20U))))))))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum 
        = ((8U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                    & ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   >> 3U))) << 3U)) 
                   & ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                  >> 2U))) << 3U)) 
                  & ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                 >> 1U))) << 3U))) 
           | ((4U & (((0x7ffffffcU & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                         >> 1U) & (
                                                   (~ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 3U))) 
                                                   << 2U)) 
                                       & ((~ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                      >> 2U))) 
                                          << 2U)) & 
                                      ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                       << 2U))) | (0xfffffffcU 
                                                   & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                        & ((~ (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                       >> 3U))) 
                                                           << 2U)) 
                                                       & ((~ (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 2U))) 
                                                          << 2U)) 
                                                      & ((~ (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                     >> 1U))) 
                                                         << 2U)))) 
                     | (0x7ffffffcU & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                          >> 1U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                        & ((~ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                       >> 3U))) 
                                           << 2U)) 
                                       & ((~ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                      >> 2U))) 
                                          << 2U))))) 
              | ((2U & (((((((((0x7ffffffeU & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                  >> 1U) 
                                                 & ((~ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                >> 3U))) 
                                                    << 1U)) 
                                                & ((~ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 2U))) 
                                                   << 1U)) 
                                               & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                                  << 1U))) 
                               | (0xfffffffeU & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   & ((~ (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 3U))) 
                                                      << 1U)) 
                                                  & ((~ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 2U))) 
                                                     << 1U)) 
                                                 & ((~ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                >> 1U))) 
                                                    << 1U)))) 
                              | (0x3ffffffeU & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 2U) 
                                                  & ((~ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 3U))) 
                                                     << 1U)) 
                                                 & ((~ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                >> 1U))) 
                                                    << 1U)) 
                                                & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                                   << 1U)))) 
                             | (0x3ffffffeU & (((((
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                    >> 2U) 
                                                   & ((~ 
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                        >> 2U)) 
                                                      << 1U)) 
                                                  & ((~ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 3U))) 
                                                     << 1U)) 
                                                 & ((~ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                >> 2U))) 
                                                    << 1U)) 
                                                & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                            >> 1U)) 
                                                   << 1U)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff) 
                                                  << 1U)))) 
                            | (0x7ffffffeU & ((((((~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                    >> 3U)) 
                                                  << 1U) 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                    >> 1U)) 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                               & ((~ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 3U))) 
                                                  << 1U)) 
                                              & ((~ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 2U))) 
                                                 << 1U)))) 
                           | (0x3ffffffeU & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                >> 2U) 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                  >> 1U)) 
                                              & ((~ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 3U))) 
                                                 << 1U)) 
                                             & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                                << 1U)))) 
                          | (0x3ffffffeU & (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                >> 2U) 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                  >> 1U)) 
                                              & ((~ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 3U))) 
                                                 << 1U)) 
                                             & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                         >> 2U)) 
                                                << 1U)) 
                                            & ((~ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                           >> 1U))) 
                                               << 1U)))) 
                         | (0x3ffffffeU & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                              >> 2U) 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                            & ((~ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                           >> 3U))) 
                                               << 1U)) 
                                           & ((~ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 1U))) 
                                              << 1U)))) 
                        | (0x3ffffffeU & (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                              >> 2U) 
                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                >> 1U)) 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                           & ((~ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 3U))) 
                                              << 1U)) 
                                          & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                      >> 2U)) 
                                             << 1U))))) 
                 | (1U & ((((((((((((((((((((((((((
                                                   ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                       >> 2U) 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                         >> 1U)) 
                                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 3U)))) 
                                                   & (~ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 1U)))) 
                                                  | ((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                          >> 3U) 
                                                         & (~ 
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                             >> 2U))) 
                                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                                       & (~ (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                     >> 3U)))) 
                                                      & (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 1U))) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))) 
                                                 | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                       >> 2U) 
                                                      & (~ (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                    >> 3U)))) 
                                                     & (~ (IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                   >> 1U)))) 
                                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                                | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                      >> 1U) 
                                                     & (~ (IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                   >> 3U)))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 2U)))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                               | (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                    & (~ (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 3U)))) 
                                                   & (~ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 2U)))) 
                                                  & (~ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                >> 1U))))) 
                                              | (((((((~ 
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                        >> 3U)) 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                         >> 2U)) 
                                                     & (~ 
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                         >> 1U))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 3U)))) 
                                                   & (~ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 2U)))) 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 1U))) 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))) 
                                             | (((((~ 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                     >> 3U)) 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                      >> 2U)) 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                     >> 1U)) 
                                                 & (~ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 3U)))) 
                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                            | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                  >> 3U) 
                                                 & (~ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 2U)))) 
                                                & (~ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 1U)))) 
                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                           | (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                  >> 3U) 
                                                 & (~ 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                     >> 2U))) 
                                                & (~ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 3U)))) 
                                               & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 2U))) 
                                              & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                         >> 1U)))) 
                                          | ((((((~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 3U)) 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                    >> 2U)) 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 1U)) 
                                               & (~ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 3U)))) 
                                              & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                         >> 2U))) 
                                             & (~ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                           >> 1U))))) 
                                         | (((((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 3U)) 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                  >> 2U)) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                             & (~ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                           >> 3U)))) 
                                            & (~ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 1U))))) 
                                        | ((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                >> 3U) 
                                               & (~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 2U))) 
                                              & (~ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                  >> 1U))) 
                                             & (~ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                           >> 3U)))) 
                                            & (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                       >> 2U))) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))) 
                                       | (((((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                 >> 2U)) 
                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                >> 1U)) 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                           & (~ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                         >> 3U)))) 
                                          & (~ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                        >> 2U))))) 
                                      | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                            >> 3U) 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                              >> 2U)) 
                                          & (~ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                        >> 1U)))) 
                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                     | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                           >> 3U) & 
                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                           >> 1U)) 
                                         & (~ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                       >> 2U)))) 
                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                                    | ((((((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                               >> 3U)) 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                              >> 2U)) 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                             >> 1U)) 
                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                        & (~ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                      >> 3U)))) 
                                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  >> 2U)))) 
                                   | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                         >> 3U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 2U)) 
                                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  >> 3U))) 
                                      & (~ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                    >> 2U))))) 
                                  | (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                         >> 3U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 1U)) 
                                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  >> 3U))) 
                                      & (~ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                    >> 2U)))) 
                                     & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                   >> 1U))))) 
                                 | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                       >> 3U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                     & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                   >> 2U)))) 
                                    & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  >> 1U))))) 
                                | ((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                        >> 3U) & (~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                   >> 1U))) 
                                      & (~ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                    >> 3U)))) 
                                     & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                >> 2U))) 
                                    & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                               >> 1U))) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))) 
                               | (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                      >> 3U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                >> 2U)) 
                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                       >> 1U)) & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 3U))) 
                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))) 
                              | (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                     >> 3U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                               >> 2U)) 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                      >> 1U)) & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                         >> 3U))) 
                                 & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                               >> 1U))))) 
                             | (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                    >> 3U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                              >> 2U)) 
                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                            >> 3U))) 
                                & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                              >> 1U))))) 
                            | (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                   >> 3U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                >> 2U))) 
                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                    >> 1U)) & (~ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 3U)))) 
                               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                          >> 1U)))) 
                           | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                 >> 3U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                           >> 1U)) 
                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                              & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                            >> 2U))))) 
                          | (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                 >> 3U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                           >> 2U)) 
                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                  >> 1U)) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                             & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                        >> 3U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
            >> 0x12U) & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_b_cls__DOT__cls_zeros 
        = (0x1fU & (((((((((((((((((((((((((((((((1U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                            >> 0x1eU))))))) 
                                                 | (2U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                              >> 0x1dU)))))))) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                             >> 0x1cU)))))))) 
                                               | (4U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                            >> 0x1bU)))))))) 
                                              | (5U 
                                                 & (- (IData)(
                                                              (1U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                           >> 0x1aU)))))))) 
                                             | (6U 
                                                & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                          >> 0x19U)))))))) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                       >> 0x18U)))))))) 
                                           | (8U & 
                                              (- (IData)(
                                                         (1U 
                                                          == 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 0x17U)))))))) 
                                          | (9U & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                          >> 0x16U)))))))) 
                                         | (0xaU & 
                                            (- (IData)(
                                                       (1U 
                                                        == 
                                                        (0x7ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                    >> 0x15U)))))))) 
                                        | (0xbU & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                          >> 0x14U)))))))) 
                                       | (0xcU & (- (IData)(
                                                            (1U 
                                                             == 
                                                             (0x1fffU 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                         >> 0x13U)))))))) 
                                      | (0xdU & (- (IData)(
                                                           (1U 
                                                            == 
                                                            (0x3fffU 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                        >> 0x12U)))))))) 
                                     | (0xeU & (- (IData)(
                                                          (1U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                       >> 0x11U)))))))) 
                                    | (0xfU & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 0x10U)))))))) 
                                   | (0x10U & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 0xfU)))))))) 
                                  | (0x11U & (- (IData)(
                                                        (1U 
                                                         == 
                                                         (0x3ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                     >> 0xeU)))))))) 
                                 | (0x12U & (- (IData)(
                                                       (1U 
                                                        == 
                                                        (0x7ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                    >> 0xdU)))))))) 
                                | (0x13U & (- (IData)(
                                                      (1U 
                                                       == 
                                                       (0xfffffU 
                                                        & (IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                   >> 0xcU)))))))) 
                               | (0x14U & (- (IData)(
                                                     (1U 
                                                      == 
                                                      (0x1fffffU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 0xbU)))))))) 
                              | (0x15U & (- (IData)(
                                                    (1U 
                                                     == 
                                                     (0x3fffffU 
                                                      & (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 0xaU)))))))) 
                             | (0x16U & (- (IData)(
                                                   (1U 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                >> 9U)))))))) 
                            | (0x17U & (- (IData)((1U 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 8U)))))))) 
                           | (0x18U & (- (IData)((1U 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 7U)))))))) 
                          | (0x19U & (- (IData)((1U 
                                                 == 
                                                 (0x3ffffffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 6U)))))))) 
                         | (0x1aU & (- (IData)((1U 
                                                == 
                                                (0x7ffffffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                            >> 5U)))))))) 
                        | (0x1bU & (- (IData)((1U == 
                                               (0xfffffffU 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                           >> 4U)))))))) 
                       | (0x1cU & (- (IData)((1U == 
                                              (0x1fffffffU 
                                               & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                          >> 3U)))))))) 
                      | (0x1dU & (- (IData)((1U == 
                                             (0x3fffffffU 
                                              & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                         >> 2U)))))))) 
                     | (0x1eU & (- (IData)((1U == (0x7fffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 1U)))))))) 
                    | (- (IData)((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_b_cls__DOT__cls_ones 
        = (0x1fU & (((((((((((((((((((((((((((((((1U 
                                                  & (- (IData)(
                                                               (6U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                            >> 0x1dU))))))) 
                                                 | (2U 
                                                    & (- (IData)(
                                                                 (0xeU 
                                                                  == 
                                                                  (0xfU 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                              >> 0x1cU)))))))) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (0x1eU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                             >> 0x1bU)))))))) 
                                               | (4U 
                                                  & (- (IData)(
                                                               (0x3eU 
                                                                == 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                            >> 0x1aU)))))))) 
                                              | (5U 
                                                 & (- (IData)(
                                                              (0x7eU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                           >> 0x19U)))))))) 
                                             | (6U 
                                                & (- (IData)(
                                                             (0xfeU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                          >> 0x18U)))))))) 
                                            | (7U & 
                                               (- (IData)(
                                                          (0x1feU 
                                                           == 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                       >> 0x17U)))))))) 
                                           | (8U & 
                                              (- (IData)(
                                                         (0x3feU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 0x16U)))))))) 
                                          | (9U & (- (IData)(
                                                             (0x7feU 
                                                              == 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                          >> 0x15U)))))))) 
                                         | (0xaU & 
                                            (- (IData)(
                                                       (0xffeU 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                    >> 0x14U)))))))) 
                                        | (0xbU & (- (IData)(
                                                             (0x1ffeU 
                                                              == 
                                                              (0x1fffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                          >> 0x13U)))))))) 
                                       | (0xcU & (- (IData)(
                                                            (0x3ffeU 
                                                             == 
                                                             (0x3fffU 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                         >> 0x12U)))))))) 
                                      | (0xdU & (- (IData)(
                                                           (0x7ffeU 
                                                            == 
                                                            (0x7fffU 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                        >> 0x11U)))))))) 
                                     | (0xeU & (- (IData)(
                                                          (0xfffeU 
                                                           == 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                       >> 0x10U)))))))) 
                                    | (0xfU & (- (IData)(
                                                         (0x1fffeU 
                                                          == 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 0xfU)))))))) 
                                   | (0x10U & (- (IData)(
                                                         (0x3fffeU 
                                                          == 
                                                          (0x3ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                      >> 0xeU)))))))) 
                                  | (0x11U & (- (IData)(
                                                        (0x7fffeU 
                                                         == 
                                                         (0x7ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                     >> 0xdU)))))))) 
                                 | (0x12U & (- (IData)(
                                                       (0xffffeU 
                                                        == 
                                                        (0xfffffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                    >> 0xcU)))))))) 
                                | (0x13U & (- (IData)(
                                                      (0x1ffffeU 
                                                       == 
                                                       (0x1fffffU 
                                                        & (IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                   >> 0xbU)))))))) 
                               | (0x14U & (- (IData)(
                                                     (0x3ffffeU 
                                                      == 
                                                      (0x3fffffU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                  >> 0xaU)))))))) 
                              | (0x15U & (- (IData)(
                                                    (0x7ffffeU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                 >> 9U)))))))) 
                             | (0x16U & (- (IData)(
                                                   (0xfffffeU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                                >> 8U)))))))) 
                            | (0x17U & (- (IData)((0x1fffffeU 
                                                   == 
                                                   (0x1ffffffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                               >> 7U)))))))) 
                           | (0x18U & (- (IData)((0x3fffffeU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 6U)))))))) 
                          | (0x19U & (- (IData)((0x7fffffeU 
                                                 == 
                                                 (0x7ffffffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 5U)))))))) 
                         | (0x1aU & (- (IData)((0xffffffeU 
                                                == 
                                                (0xfffffffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                            >> 4U)))))))) 
                        | (0x1bU & (- (IData)((0x1ffffffeU 
                                               == (0x1fffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 3U)))))))) 
                       | (0x1cU & (- (IData)((0x3ffffffeU 
                                              == (0x3fffffffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                             >> 2U)))))))) 
                      | (0x1dU & (- (IData)((0x7ffffffeU 
                                             == (0x7fffffffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                            >> 1U)))))))) 
                     | (0x1eU & (- (IData)((0xfffffffeU 
                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)))))) 
                    | (- (IData)((0xffffffffU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out 
        = (0x7ffffffffULL & ((((QData)((IData)((0x7fffffffU 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)))) 
                               << 4U) | (QData)((IData)(
                                                        (0xfU 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                            >> 0x1cU))))) 
                             + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out 
        = (0xfffffffffULL & ((((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)) 
                               << 4U) | (QData)((IData)(
                                                        (0xfU 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                            >> 0x1cU))))) 
                             + (0xffffffffeULL & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out 
        = (0x1fffffffffULL & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                 << 4U) | (QData)((IData)(
                                                          (0xfU 
                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                              >> 0x1cU))))) 
                               + (0x1ffffffffeULL & 
                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 1U))) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out 
        = (0x3fffffffffULL & ((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                            >> 0x20U))))) 
                                << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                              << 4U) 
                                             | (QData)((IData)(
                                                               (0xfU 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                   >> 0x1cU)))))) 
                              + (0x3ffffffffcULL & 
                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                  << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out 
        = (0x3fffffffffULL & (((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                             >> 0x20U))))) 
                                 << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                    >> 0x1cU)))))) 
                               + (0x3ffffffffcULL & 
                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 2U))) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out 
        = (0x3fffffffffULL & (((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                             >> 0x20U))))) 
                                 << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                    >> 0x1cU)))))) 
                               + (0x3ffffffffcULL & 
                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 2U))) + (0x3ffffffffeULL 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out 
        = (0x3fffffffffULL & ((((((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                              >> 0x20U))))) 
                                  << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                << 4U) 
                                               | (QData)((IData)(
                                                                 (0xfU 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                     >> 0x1cU)))))) 
                                + (0x3ffffffffcULL 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                      << 2U))) + (0x3ffffffffeULL 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                     << 1U))) 
                              + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out 
        = (0x3fffffffffULL & ((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                            >> 0x20U))))) 
                                << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                              << 4U) 
                                             | (QData)((IData)(
                                                               (0xfU 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                   >> 0x1cU)))))) 
                              + (0x3ffffffff8ULL & 
                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                  << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out 
        = (0x3fffffffffULL & (((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                             >> 0x20U))))) 
                                 << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                    >> 0x1cU)))))) 
                               + (0x3ffffffff8ULL & 
                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 3U))) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out 
        = (0x3fffffffffULL & (((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                             >> 0x20U))))) 
                                 << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                    >> 0x1cU)))))) 
                               + (0x3ffffffff8ULL & 
                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 3U))) + (0x3ffffffffeULL 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out 
        = (0x3fffffffffULL & ((((((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                              >> 0x20U))))) 
                                  << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                << 4U) 
                                               | (QData)((IData)(
                                                                 (0xfU 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                     >> 0x1cU)))))) 
                                + (0x3ffffffff8ULL 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                      << 3U))) + (0x3ffffffffeULL 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                     << 1U))) 
                              + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out 
        = (0x3fffffffffULL & (((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                             >> 0x20U))))) 
                                 << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                    >> 0x1cU)))))) 
                               + (0x3ffffffff8ULL & 
                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 3U))) + (0x3ffffffffcULL 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                  << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out 
        = (0x3fffffffffULL & ((((((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                              >> 0x20U))))) 
                                  << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                << 4U) 
                                               | (QData)((IData)(
                                                                 (0xfU 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                     >> 0x1cU)))))) 
                                + (0x3ffffffff8ULL 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                      << 3U))) + (0x3ffffffffcULL 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                     << 2U))) 
                              + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out 
        = (0x3fffffffffULL & ((((((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                              >> 0x20U))))) 
                                  << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                << 4U) 
                                               | (QData)((IData)(
                                                                 (0xfU 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                     >> 0x1cU)))))) 
                                + (0x3ffffffff8ULL 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                      << 3U))) + (0x3ffffffffcULL 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                     << 2U))) 
                              + (0x3ffffffffeULL & 
                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                  << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out 
        = (0x3fffffffffULL & (((((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                               >> 0x20U))))) 
                                   << 0x25U) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff 
                                                 << 4U) 
                                                | (QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                      >> 0x1cU)))))) 
                                 + (0x3ffffffff8ULL 
                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                       << 3U))) + (0x3ffffffffcULL 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                      << 2U))) 
                               + (0x3ffffffffeULL & 
                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                   << 1U))) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff) 
           | ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                 >> 0x12U) & (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                  >> 0x11U) 
                                                 ^ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                  >> 0x10U))))))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_debug_way = 
        (((1U == (3U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[1U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                      >> 0x10U)))) 
          << 1U) | (0U == (3U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[1U] 
                                  << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                               >> 0x10U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
        = ((0xffffdfffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predict_mp 
                                             >> 0x25U))))) 
              << 0x25U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
        = ((0xfffffeffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predict_mp 
                                             >> 0x20U))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
        = ((0x7fffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predict_mp 
                                             >> 0x37U))))) 
              << 0x37U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
        = ((0xfffff9ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt) 
           | ((QData)((IData)((3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predict_mp 
                                             >> 0x21U))))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
        = ((0xffffff7fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predict_mp 
                                             >> 0x1fU))))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
        = ((0x80003fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt) 
           | ((QData)((IData)((0x1ffffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predict_mp 
                                                   >> 0x26U))))) 
              << 0x26U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wren_reset_miss 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wren_reset_miss)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wren_reset_miss 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wren_reset_miss)) 
           | (0xfffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss) 
                                << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__line_wrap 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_next 
                  ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout) 
                 >> 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                  >> 4U) & (~ (IData)((0xffffffffU 
                                       == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                  >> 0xaU) & (~ (IData)((0xffffffffU 
                                         == ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              << 0x1aU) 
                                             | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                  >> 0x10U) & (~ (IData)((0xffffffffU 
                                          == ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                  >> 0x16U) & (~ (IData)((0xffffffffU 
                                          == ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                  >> 4U) & (~ (IData)((0xffffffffU 
                                       == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                  >> 0xaU) & (~ (IData)((0xffffffffU 
                                         == ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              << 0x1aU) 
                                             | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                  >> 0x10U) & (~ (IData)((0xffffffffU 
                                          == ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                  >> 0x16U) & (~ (IData)((0xffffffffU 
                                          == ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable 
        = (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                    >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                    >> 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                    >> 0x12U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[7U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[6U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error_ff 
        = (((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rresp_ff)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rvalid_ff)) 
           & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_wo_err 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rvalid_ff) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rvalid_ff) 
           & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
        = (((QData)((IData)((((0U == (0x1fU & (0x20U 
                                               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                  << 6U))))
                               ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                       ((IData)(1U) 
                                        + (0xfU & (1U 
                                                   | (0x7fffffeU 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                         << 1U)))))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & (0x20U 
                                                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                    << 6U)))))) 
                             | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                (0xfU & (1U | (0x7fffffeU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                  << 1U))))] 
                                >> (0x1fU & (0x20U 
                                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                << 6U))))))) 
            << 0x20U) | (QData)((IData)((((0U == (0x1fU 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                     << 6U)))
                                           ? 0U : (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xeU 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                        << 1U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                        << 6U))))) 
                                         | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                            (0xeU & 
                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                              << 1U))] 
                                            >> (0x1fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag) 
                                                   << 6U)))))));
    __Vtemp24[0U] = (IData)((((QData)((IData)((((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (0x20U 
                                                     | (0x1c0U 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                           << 4U)))))
                                                 ? 0U
                                                 : 
                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0xfU 
                                                   & (1U 
                                                      | (0xeU 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                            >> 1U)))))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (0x20U 
                                                      | (0x1c0U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                            << 4U))))))) 
                                               | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                  (0xfU 
                                                   & (1U 
                                                      | (0xeU 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                            >> 1U))))] 
                                                  >> 
                                                  (0x1fU 
                                                   & (0x20U 
                                                      | (0x1c0U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                            << 4U)))))))) 
                              << 0x20U) | (QData)((IData)(
                                                          vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                          (0xeU 
                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                              >> 1U))]))));
    __Vtemp24[1U] = (IData)(((((QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (0x20U 
                                                      | (0x1c0U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                            << 4U)))))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (1U 
                                                       | (0xeU 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                             >> 1U)))))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (0x20U 
                                                       | (0x1c0U 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                             << 4U))))))) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                   (0xfU 
                                                    & (1U 
                                                       | (0xeU 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                             >> 1U))))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (0x20U 
                                                       | (0x1c0U 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                             << 4U)))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                           (0xeU 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                               >> 1U))]))) 
                             >> 0x20U));
    __Vtemp27[0U] = (IData)((((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                              (0xeU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                    >> 2U)) 
                                                  << 1U))])) 
                              << 0x20U) | (QData)((IData)(
                                                          (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & (0x20U 
                                                                 | (0x1c0U 
                                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                       << 4U)))))
                                                             ? 0U
                                                             : 
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                             ((IData)(1U) 
                                                              + 
                                                              (0xfU 
                                                               & (1U 
                                                                  | (0xeU 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                        >> 1U)))))] 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & (0x20U 
                                                                  | (0x1c0U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                        << 4U))))))) 
                                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                              (0xfU 
                                                               & (1U 
                                                                  | (0xeU 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                        >> 1U))))] 
                                                              >> 
                                                              (0x1fU 
                                                               & (0x20U 
                                                                  | (0x1c0U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                        << 4U))))))))));
    __Vtemp27[1U] = (IData)(((((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                               (0xeU 
                                                & (((IData)(1U) 
                                                    + 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                     >> 2U)) 
                                                   << 1U))])) 
                               << 0x20U) | (QData)((IData)(
                                                           (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & (0x20U 
                                                                  | (0x1c0U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                        << 4U)))))
                                                              ? 0U
                                                              : 
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                              ((IData)(1U) 
                                                               + 
                                                               (0xfU 
                                                                & (1U 
                                                                   | (0xeU 
                                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                         >> 1U)))))] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & (0x20U 
                                                                   | (0x1c0U 
                                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                         << 4U))))))) 
                                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                                               (0xfU 
                                                                & (1U 
                                                                   | (0xeU 
                                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                         >> 1U))))] 
                                                               >> 
                                                               (0x1fU 
                                                                & (0x20U 
                                                                   | (0x1c0U 
                                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                         << 4U))))))))) 
                             >> 0x20U));
    __Vtemp27[2U] = (0xffffU & (((0U == (0x1fU & (0x20U 
                                                  | (0x1c0U 
                                                     & (((IData)(1U) 
                                                         + 
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                          >> 2U)) 
                                                        << 6U)))))
                                  ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                          ((IData)(1U) 
                                           + (0xfU 
                                              & (1U 
                                                 | (0xeU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                         >> 2U)) 
                                                       << 1U)))))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (0x20U 
                                                    | (0x1c0U 
                                                       & (((IData)(1U) 
                                                           + 
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                            >> 2U)) 
                                                          << 6U))))))) 
                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                                   (0xfU & (1U | (0xeU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                       >> 2U)) 
                                                     << 1U))))] 
                                   >> (0x1fU & (0x20U 
                                                | (0x1c0U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                        >> 2U)) 
                                                      << 6U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[0U] 
        = (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                 >> 1U))))) & __Vtemp24[0U]) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                >> 1U)))) & __Vtemp27[0U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[1U] 
        = (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                 >> 1U))))) & __Vtemp24[1U]) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                >> 1U)))) & __Vtemp27[1U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[2U] 
        = ((0xffffU & ((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                            >> 1U))))) 
                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data[
                       (0xeU & (((IData)(1U) + (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                >> 2U)) 
                                << 1U))])) | ((- (IData)(
                                                         (1U 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                             >> 1U)))) 
                                              & __Vtemp27[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[0U] 
        = (IData)((0x7fffffffffULL & ((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q))))) 
                                        & (((QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                              >> 7U))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q))))) 
                                          & (((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q)) 
                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q))))))) 
                                         & (((QData)((IData)(
                                                             vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[0U])))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[1U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[1U]) 
           | (IData)(((0x7fffffffffULL & ((((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q))))) 
                                            & (((QData)((IData)(
                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                  >> 7U))) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q))))) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q)) 
                                                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q))))))) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[0U])))))) 
                      >> 0x20U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[1U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[1U]) 
           | (0xffffff80U & ((IData)((0x7fffffffffULL 
                                      & ((((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                  >> 1U))))) 
                                           & (((QData)((IData)(
                                                               vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                 >> 7U))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                    >> 1U))))) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((~ 
                                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                     >> 1U)) 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                       >> 1U))))))) 
                                            & (((QData)((IData)(
                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[2U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[1U])) 
                                                     >> 7U))))))) 
                             << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[2U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[2U]) 
           | ((0x7fU & ((IData)((0x7fffffffffULL & 
                                 ((((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                           >> 1U))))) 
                                    & (((QData)((IData)(
                                                        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                        >> 7U))) | 
                                   ((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                           >> 1U))))) 
                                    & (((QData)((IData)(
                                                        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((~ 
                                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                              >> 1U)) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                >> 1U))))))) 
                                     & (((QData)((IData)(
                                                         vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                         << 0x39U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[2U])) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[1U])) 
                                              >> 7U))))))) 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & ((((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                             >> 1U))))) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                            >> 7U))) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                               >> 1U))))) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                                >> 1U)) 
                                                                              & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                                >> 1U))))))) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[2U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[1U])) 
                                                                >> 7U)))))) 
                                                >> 0x20U)) 
                                       << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[2U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[2U]) 
           | (0xffffc000U & ((IData)((0x7fffffffffULL 
                                      & ((((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                  >> 2U))))) 
                                           & (((QData)((IData)(
                                                               vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                 >> 7U))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                    >> 2U))))) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((~ 
                                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                     >> 2U)) 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                       >> 2U))))))) 
                                            & (((QData)((IData)(
                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[4U])) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[2U])) 
                                                     >> 0xeU))))))) 
                             << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[3U] 
        = ((0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[3U]) 
           | ((0x3fffU & ((IData)((0x7fffffffffULL 
                                   & ((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                               >> 2U))))) 
                                        & (((QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                              >> 7U))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                 >> 2U))))) 
                                          & (((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((~ 
                                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                  >> 2U)) 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                    >> 2U))))))) 
                                         & (((QData)((IData)(
                                                             vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[4U])) 
                                             << 0x32U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                                << 0x12U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[2U])) 
                                                  >> 0xeU))))))) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((0x7fffffffffULL 
                                                     & ((((- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                                >> 2U))))) 
                                                          & (((QData)((IData)(
                                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                                >> 7U))) 
                                                         | ((- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                                >> 2U))))) 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                                        | ((- (QData)((IData)(
                                                                              (1U 
                                                                               & ((~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                                >> 2U)) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                                >> 2U))))))) 
                                                           & (((QData)((IData)(
                                                                               vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[4U])) 
                                                               << 0x32U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                                                  << 0x12U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[2U])) 
                                                                    >> 0xeU)))))) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[3U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[3U]) 
           | (0xffe00000U & ((IData)((0x7fffffffffULL 
                                      & ((((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                  >> 3U))))) 
                                           & (((QData)((IData)(
                                                               vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                 >> 7U))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                    >> 3U))))) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((~ 
                                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                     >> 3U)) 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                       >> 3U))))))) 
                                            & (((QData)((IData)(
                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[4U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                                  >> 0x15U)))))) 
                             << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[4U] 
        = ((0x1fffffU & ((IData)((0x7fffffffffULL & 
                                  ((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                            >> 3U))))) 
                                     & (((QData)((IData)(
                                                         vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                           >> 7U))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                              >> 3U))))) 
                                       & (((QData)((IData)(
                                                           vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((~ 
                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                               >> 3U)) 
                                                             & (~ 
                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                 >> 3U))))))) 
                                      & (((QData)((IData)(
                                                          vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[4U])) 
                                          << 0xbU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                            >> 0x15U)))))) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & ((((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                             >> 3U))))) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[2U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                            >> 7U))) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                               >> 3U))))) 
                                                        & (((QData)((IData)(
                                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__redundant_data[0U]))))) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red0_q) 
                                                                                >> 3U)) 
                                                                              & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__sel_red1_q) 
                                                                                >> 3U))))))) 
                                                       & (((QData)((IData)(
                                                                           vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[4U])) 
                                                           << 0xbU) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout[3U])) 
                                                             >> 0x15U))))) 
                                                >> 0x20U)) 
                                       << 0x15U)));
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__write_bypass_en_ff))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[3U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[4U]);
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[3U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[4U]);
    }
    if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__write_bypass_en_ff))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[3U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[4U]);
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[3U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[4U]);
    }
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__write_bypass_en_ff))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[4U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[8U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[8U] 
                          >> 0xeU));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[3U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__0__KET____DOT__rd_data_hold_ff__dout[4U]);
    }
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__write_bypass_en_ff))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[4U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[8U] 
                << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                             >> 0xeU));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[8U] 
                          >> 0xeU));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[3U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__size_512__DOT__WAYS__DOT__genblk1__DOT__BYPASS__BRA__1__KET____DOT__rd_data_hold_ff__dout[4U]);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass 
        = (2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[0U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[1U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[2U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[3U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
        = (0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))));
    __Vtemp52[1U] = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[1U] 
                     | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[1U]
                         : 0U));
    __Vtemp52[2U] = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[2U] 
                     | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[2U]
                         : 0U));
    __Vtemp52[3U] = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[3U] 
                     | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[3U]
                         : 0U));
    __Vtemp52[4U] = (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
                                | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                    ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[4U]
                                    : 0U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[0U] 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[0U] 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
               ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[0U]
               : 0U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[1U] 
        = __Vtemp52[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[2U] 
        = __Vtemp52[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[3U] 
        = __Vtemp52[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]) 
           | __Vtemp52[4U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff) 
                       >> 1U))));
    __Vtemp61[1U] = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[1U] 
                     | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                         ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[6U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[5U] 
                                          >> 0xeU))
                         : 0U));
    __Vtemp61[2U] = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[2U] 
                     | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                         ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[7U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[6U] 
                                          >> 0xeU))
                         : 0U));
    __Vtemp61[3U] = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[3U] 
                     | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                         ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[8U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[7U] 
                                          >> 0xeU))
                         : 0U));
    __Vtemp61[4U] = (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
                                | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                    ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[9U] 
                                        << 0x12U) | 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[8U] 
                                        >> 0xeU)) : 0U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[0U] 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[0U] 
           | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
               ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[5U] 
                   << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_hold[4U] 
                                >> 0xeU)) : 0U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[1U] 
        = __Vtemp61[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[2U] 
        = __Vtemp61[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[3U] 
        = __Vtemp61[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]) 
           | __Vtemp61[4U]);
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[3U];
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[3U];
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[4U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[4U]) 
           | (0x3fffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                          ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]
                          : vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout_pre[4U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass 
        = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
        = (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass)) 
                    | (0x7ffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff) 
                                      >> 1U)))));
    __Vtemp77[0U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
                                    >> 0xeU)) | ((4U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[9U] 
                                                   << 4U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[8U] 
                                                     >> 0x1cU))
                                                  : 0U));
    __Vtemp77[1U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                                    >> 0xeU)) | ((4U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xaU] 
                                                   << 4U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[9U] 
                                                     >> 0x1cU))
                                                  : 0U));
    __Vtemp77[2U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                                    >> 0xeU)) | ((4U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xbU] 
                                                   << 4U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xaU] 
                                                     >> 0x1cU))
                                                  : 0U));
    __Vtemp77[3U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                                    >> 0xeU)) | ((4U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xcU] 
                                                   << 4U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xbU] 
                                                     >> 0x1cU))
                                                  : 0U));
    __Vtemp77[4U] = (0x3fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
                                 >> 0xeU) | ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                              ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xdU] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xcU] 
                                                    >> 0x1cU))
                                              : 0U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]) 
           | (0xffffc000U & ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]) 
                             | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                  ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[9U] 
                                      << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[8U] 
                                                >> 0x1cU))
                                  : 0U) << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
        = ((0x3fffU & (__Vtemp77[0U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp77[1U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
        = ((0x3fffU & (__Vtemp77[1U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp77[2U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
        = ((0x3fffU & (__Vtemp77[2U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp77[3U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
        = ((0x3fffU & (__Vtemp77[3U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp77[4U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass)) 
                    | (0x3ffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff) 
                                      >> 2U)))));
    __Vtemp86[0U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
                                    >> 0xeU)) | ((8U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xeU] 
                                                   << 0x16U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xdU] 
                                                     >> 0xaU))
                                                  : 0U));
    __Vtemp86[1U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                                    >> 0xeU)) | ((8U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xfU] 
                                                   << 0x16U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xeU] 
                                                     >> 0xaU))
                                                  : 0U));
    __Vtemp86[2U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                                    >> 0xeU)) | ((8U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0x10U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xfU] 
                                                     >> 0xaU))
                                                  : 0U));
    __Vtemp86[3U] = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
                       << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                                    >> 0xeU)) | ((8U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                                  ? 
                                                 ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0x11U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0x10U] 
                                                     >> 0xaU))
                                                  : 0U));
    __Vtemp86[4U] = (0x3fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
                                 >> 0xeU) | ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                              ? (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0x11U] 
                                                 >> 0xaU)
                                              : 0U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]) 
           | (0xffffc000U & ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U]) 
                             | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                  ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xeU] 
                                      << 0x16U) | (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_hold[0xdU] 
                                                   >> 0xaU))
                                  : 0U) << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
        = ((0x3fffU & (__Vtemp86[0U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp86[1U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
        = ((0x3fffU & (__Vtemp86[1U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp86[2U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
        = ((0x3fffU & (__Vtemp86[2U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp86[3U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
        = ((0x3fffU & (__Vtemp86[3U] >> 0x12U)) | (0xffffc000U 
                                                   & (__Vtemp86[4U] 
                                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[4U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[4U]) 
           | (0xffffc000U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                               ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                                   << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
                                                >> 0xeU))
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                                   << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[4U] 
                                                >> 0xeU))) 
                             << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[5U] 
        = ((0x3fffU & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                         ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[4U] 
                                          >> 0xeU))
                         : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[4U] 
                                          >> 0xeU))) 
                       >> 0x12U)) | (0xffffc000U & 
                                     (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                                        ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                                            << 0x12U) 
                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                                              >> 0xeU))
                                        : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                                            << 0x12U) 
                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[6U] 
        = ((0x3fffU & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                         ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[5U] 
                                          >> 0xeU))
                         : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[5U] 
                                          >> 0xeU))) 
                       >> 0x12U)) | (0xffffc000U & 
                                     (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                                        ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                                            << 0x12U) 
                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                                              >> 0xeU))
                                        : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                                            << 0x12U) 
                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[7U] 
        = ((0x3fffU & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                         ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[6U] 
                                          >> 0xeU))
                         : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[6U] 
                                          >> 0xeU))) 
                       >> 0x12U)) | (0xffffc000U & 
                                     (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                                        ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
                                            << 0x12U) 
                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                                              >> 0xeU))
                                        : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[8U] 
                                            << 0x12U) 
                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[8U] 
        = ((0x3fffU & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                         ? ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[7U] 
                                          >> 0xeU))
                         : ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[8U] 
                             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[7U] 
                                          >> 0xeU))) 
                       >> 0x12U)) | (0xfffc000U & (
                                                   ((2U 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__any_bypass))
                                                     ? 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__sel_bypass_data[8U] 
                                                     >> 0xeU)
                                                     : 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout_pre[8U] 
                                                     >> 0xeU)) 
                                                   << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_buff_hit_unq_f 
        = (1U & ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                 >> 2U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                >> 1U))) 
                     & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)) 
                    | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                         >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                   >> 2U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                  >> 1U))) 
                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)) 
                   | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                        >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                  >> 2U))) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                              >> 1U)) 
                      & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout))) 
                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                        >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                  >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                                              >> (7U 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                      >> 2U))))) 
                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                         >> 1U)) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)) 
                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                     >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                               >> 2U))) & (7U == (7U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                     >> 2U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j = 0U;
    while ((0x80U > vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j)) {
        if (((0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                       >> 3U)) == (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
                = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq)) 
                   | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__ic_tag_valid_out[
                               (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j 
                                      >> 5U))] >> (0x1fU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j)))));
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
                = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq)) 
                   | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq)) 
                            | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__ic_tag_valid_out[
                                (7U & (((IData)(0x80U) 
                                        + (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x80U) 
                                          + (0x7fU 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j)))) 
                               << 1U))));
        }
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j 
            = ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_out_mux__DOT__unnamedblk2__DOT__j);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_bypass 
        = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_data 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
            ? (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__wb_packeddout_hold[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__wb_packeddout_hold[0U]))))
            : 0ULL);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_bypass 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_bypass) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_ff) 
                    >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_data 
        = (0xfffffffffffffULL & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_data 
                                 | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_ff))
                                     ? (((QData)((IData)(
                                                         vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__wb_packeddout_hold[3U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__wb_packeddout_hold[2U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__wb_packeddout_hold[1U])) 
                                              >> 0x14U)))
                                     : 0ULL)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_data_raw_packed 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_bypass)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_data_raw_packed_pre);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_p1_f = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_p1_f = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j = 0U;
    while ((0x100U > vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j)) {
        if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f) 
             == (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j))) {
            if ((0x15ffU >= (0x1fffU & ((IData)(0x16U) 
                                        * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_p1_f 
                    = (0x3fffffU & (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j)))
                                      ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_out[
                                              ((IData)(1U) 
                                               + (0xffU 
                                                  & (((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j))))) 
                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_out[
                                       (0xffU & (((IData)(0x16U) 
                                                  * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j)))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_p1_f 
                    = (0x3fffffU & (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j)))
                                      ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_out[
                                              ((IData)(1U) 
                                               + (0xffU 
                                                  & (((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j))))) 
                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_out[
                                       (0xffU & (((IData)(0x16U) 
                                                  * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j)))));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_p1_f = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_p1_f = 0U;
            }
        }
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j 
            = ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk2__DOT__j);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank0_rd_data_f = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank1_rd_data_f = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank0_rd_data_p1_f = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j = 0U;
    while ((0x100U > vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j)) {
        if (((0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_f) 
                       ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout))) 
             == (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank0_rd_data_f 
                = (3U & (((0U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                           << 1U)))
                           ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank_rd_data_out[
                                   ((IData)(1U) + (0xfU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                      >> 4U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                   << 1U))))) 
                         | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank_rd_data_out[
                            (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                     >> 4U))] >> (0x1fU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                     << 1U)))));
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank1_rd_data_f 
                = (3U & (((0U == (0x1fU & ((IData)(0x200U) 
                                           + (0x1ffU 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                 << 1U)))))
                           ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank_rd_data_out[
                                   ((IData)(1U) + (0x1fU 
                                                   & (((IData)(0x200U) 
                                                       + 
                                                       (0x1ffU 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                           << 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x200U) 
                                                   + 
                                                   (0x1ffU 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                       << 1U))))))) 
                         | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank_rd_data_out[
                            (0x1fU & (((IData)(0x200U) 
                                       + (0x1ffU & 
                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                           << 1U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                          << 1U)))))));
        }
        if (((0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f) 
                       ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout))) 
             == (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank0_rd_data_p1_f 
                = (3U & (((0U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                           << 1U)))
                           ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank_rd_data_out[
                                   ((IData)(1U) + (0xfU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                      >> 4U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                   << 1U))))) 
                         | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank_rd_data_out[
                            (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                     >> 4U))] >> (0x1fU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
                                                     << 1U)))));
        }
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j 
            = ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BHT_rd_mux__DOT__unnamedblk5__DOT__j);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j = 0U;
    while ((0x100U > vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j)) {
        if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_f) 
             == (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j))) {
            if ((0x15ffU >= (0x1fffU & ((IData)(0x16U) 
                                        * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f 
                    = (0x3fffffU & (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j)))
                                      ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_out[
                                              ((IData)(1U) 
                                               + (0xffU 
                                                  & (((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j))))) 
                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_out[
                                       (0xffU & (((IData)(0x16U) 
                                                  * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j)))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f 
                    = (0x3fffffU & (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j)))
                                      ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_out[
                                              ((IData)(1U) 
                                               + (0xffU 
                                                  & (((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j))))) 
                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_out[
                                       (0xffU & (((IData)(0x16U) 
                                                  * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j)))));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f = 0U;
            }
        }
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j 
            = ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_rd_mux__DOT__unnamedblk1__DOT__j);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_i0_result_x 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_misc_ff__dout))
            ? ((((- (IData)((1U & ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT____Vcellout__i_bitmanip_ff__dout 
                                               >> 0x20U))) 
                                   & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT____Vcellout__i_a_x_ff__dout 
                                                 >> 0x21U))))))) 
                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__prod_x[1U]) 
                | ((- (IData)((1U & ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT____Vcellout__i_bitmanip_ff__dout 
                                                 >> 0x20U))) 
                                     & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT____Vcellout__i_a_x_ff__dout 
                                                >> 0x21U)))))) 
                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__prod_x[0U])) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT____Vcellout__i_bitmanip_ff__dout))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__alu_result_x);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen 
        = ((0x27U >= (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                               << 3U))) ? (0xffU & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_byteen 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                                << 3U)))))
            : 0U);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz 
        = ((0xeU >= (0xfU & ((IData)(3U) * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))))
            ? (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)))))
            : 0U);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int 
        = ((0xeU >= (0xfU & ((IData)(3U) * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))
            ? (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))
            : 0U);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out = 0U;
    if ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg);
    }
    if ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 1U));
    }
    if ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 2U));
    }
    if ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 3U));
    }
    if ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 4U));
    }
    if ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 5U));
    }
    if ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 6U));
    }
    if ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 7U));
    }
    if ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 8U));
    }
    if ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 9U));
    }
    if ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0xaU));
    }
    if ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0xbU));
    }
    if ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0xcU));
    }
    if ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0xdU));
    }
    if ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0xeU));
    }
    if ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0xfU));
    }
    if ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x10U));
    }
    if ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x11U));
    }
    if ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x12U));
    }
    if ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x13U));
    }
    if ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x14U));
    }
    if ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x15U));
    }
    if ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x16U));
    }
    if ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x17U));
    }
    if ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x18U));
    }
    if ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x19U));
    }
    if ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x1aU));
    }
    if ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x1bU));
    }
    if ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x1cU));
    }
    if ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x1dU));
    }
    if ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x1eU));
    }
    if ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg 
                     >> 0x1fU));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out = 0U;
    if ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U]);
    }
    if ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                     >> 4U)));
    }
    if ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                     >> 8U)));
    }
    if ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                     >> 0xcU)));
    }
    if ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                     >> 0x10U)));
    }
    if ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                    >> 0x14U)));
    }
    if ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                  >> 0x18U)));
    }
    if ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                  >> 0x1cU)));
    }
    if ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U]);
    }
    if ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                     >> 4U)));
    }
    if ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                     >> 8U)));
    }
    if ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                     >> 0xcU)));
    }
    if ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                     >> 0x10U)));
    }
    if ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                    >> 0x14U)));
    }
    if ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                  >> 0x18U)));
    }
    if ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                  >> 0x1cU)));
    }
    if ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U]);
    }
    if ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                     >> 4U)));
    }
    if ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                     >> 8U)));
    }
    if ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                     >> 0xcU)));
    }
    if ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                     >> 0x10U)));
    }
    if ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                    >> 0x14U)));
    }
    if ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                  >> 0x18U)));
    }
    if ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                  >> 0x1cU)));
    }
    if ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U]);
    }
    if ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                       >> 4U));
    }
    if ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                       >> 8U));
    }
    if ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                       >> 0xcU));
    }
    if ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                       >> 0x10U));
    }
    if ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                       >> 0x14U));
    }
    if ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                       >> 0x18U));
    }
    if ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                       >> 0x1cU));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                       ? (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U])
                       : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xf0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                         ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                             >> 4U)))
                         : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                             << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                          >> 4U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xf00U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                          ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                 << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                              >> 8U)))
                          : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                              << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                           >> 8U))) 
                        << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xf000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                           ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                  << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                               >> 0xcU)))
                           : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                               << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                            >> 0xcU))) 
                         << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xf0000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                            ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                   << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                                >> 0x10U)))
                            : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                             >> 0x10U))) 
                          << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xf00000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                             ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                    << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                                >> 0x14U)))
                             : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                 << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                             >> 0x14U))) 
                           << 0x14U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xf000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                              ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                               >> 0x18U)))
                              : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                  << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                            >> 0x18U))) 
                            << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U]) 
           | (0xf0000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                               ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                      << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                                >> 0x1cU)))
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                   << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[0U] 
                                             >> 0x1cU))) 
                             << 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                       ? (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U])
                       : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xf0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                         ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                             >> 4U)))
                         : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                             << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                          >> 4U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xf00U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                          ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                 << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                              >> 8U)))
                          : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                              << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                           >> 8U))) 
                        << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xf000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                           ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                  << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                               >> 0xcU)))
                           : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                               << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                            >> 0xcU))) 
                         << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xf0000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                            ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                   << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                                >> 0x10U)))
                            : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                             >> 0x10U))) 
                          << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xf00000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                             ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                    << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                                >> 0x14U)))
                             : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                 << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                             >> 0x14U))) 
                           << 0x14U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xf000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                              ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                               >> 0x18U)))
                              : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                  << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                            >> 0x18U))) 
                            << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U]) 
           | (0xf0000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                               ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                      << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                                >> 0x1cU)))
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                   << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[1U] 
                                             >> 0x1cU))) 
                             << 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                       ? (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U])
                       : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xf0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                         ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                             >> 4U)))
                         : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                             << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                          >> 4U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xf00U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                          ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                 << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                              >> 8U)))
                          : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                              << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                           >> 8U))) 
                        << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xf000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                           ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                  << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                               >> 0xcU)))
                           : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                               << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                            >> 0xcU))) 
                         << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xf0000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                            ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                   << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                                >> 0x10U)))
                            : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                             >> 0x10U))) 
                          << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xf00000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                             ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                    << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                                >> 0x14U)))
                             : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                 << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                             >> 0x14U))) 
                           << 0x14U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xf000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                              ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                               >> 0x18U)))
                              : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                  << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                            >> 0x18U))) 
                            << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U]) 
           | (0xf0000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                               ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                      << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                                >> 0x1cU)))
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                   << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[2U] 
                                             >> 0x1cU))) 
                             << 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                       ? (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U])
                       : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xf0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                         ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                               >> 4U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                          >> 4U)) << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xf00U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                          ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                >> 8U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                           >> 8U)) 
                        << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xf000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                           ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                 >> 0xcU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                              >> 0xcU)) 
                         << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xf0000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                            ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                  >> 0x10U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                                >> 0x10U)) 
                          << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xf00000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                             ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                   >> 0x14U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                                 >> 0x14U)) 
                           << 0x14U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xf000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                              ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                    >> 0x18U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                                  >> 0x18U)) 
                            << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U]) 
           | (0xf0000000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                               ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                     >> 0x1cU)) : (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg[3U] 
                                                   >> 0x1cU)) 
                             << 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr 
        = ((0x9fU >= (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                               << 5U))) ? (3U & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                       << 5U)))
                                                   ? 0U
                                                   : 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                        << 5U))))) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                                                    (7U 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                        << 5U)))))
            : 0U);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
        = ((0x9fU >= (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                               << 5U))) ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                 << 5U)))
                                             ? 0U : 
                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                     << 5U))))) 
                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                                              (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                     << 5U))))
            : 0U);
    vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
        = ((0x9bU >= (0xffU & ((IData)(0x27U) * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
            ? (0x7fffffffffULL & (((0U == (0x1fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                              ((IData)(2U) 
                                                               + 
                                                               (7U 
                                                                & (((IData)(0x27U) 
                                                                    * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                   >> 5U)))])) 
                                              << ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                  | (((QData)((IData)(
                                                      vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                      ((IData)(1U) 
                                                       + 
                                                       (7U 
                                                        & (((IData)(0x27U) 
                                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                           >> 5U)))])) 
                                      << ((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                           ? 0x20U : 
                                          ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                     | ((QData)((IData)(
                                                        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                        (7U 
                                                         & (((IData)(0x27U) 
                                                             * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))))
            : 0ULL);
    vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
        = ((0x9bU >= (0xffU & ((IData)(0x27U) * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
            ? (0x7fffffffffULL & (((0U == (0x1fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                              ((IData)(2U) 
                                                               + 
                                                               (7U 
                                                                & (((IData)(0x27U) 
                                                                    * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                   >> 5U)))])) 
                                              << ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                  | (((QData)((IData)(
                                                      vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                      ((IData)(1U) 
                                                       + 
                                                       (7U 
                                                        & (((IData)(0x27U) 
                                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                           >> 5U)))])) 
                                      << ((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                           ? 0x20U : 
                                          ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                     | ((QData)((IData)(
                                                        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                        (7U 
                                                         & (((IData)(0x27U) 
                                                             * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))))
            : 0ULL);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
        = (((0U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                             << 5U))) ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                      << 5U))))) 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[
              (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))] 
              >> (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                           << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any 
        = (0xffffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                              >> (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                           << 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill)) 
                 >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (2U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                >> 3U)) << 1U) | (0xfffffffeU 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                     | (0xfffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                    | (0xfffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (4U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                >> 5U)) << 2U) | (0xfffffffcU 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                     | (0xfffffffcU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                    | (0xfffffffcU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (8U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                >> 7U)) << 3U) | (0xfffffff8U 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                     | (0xfffffff8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                    | (0xfffffff8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x10U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                   >> 9U)) << 4U) | 
                         (0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                        | (0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                       | (0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x20U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                   >> 0xbU)) << 5U) 
                         | (0xffffffe0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                        | (0xffffffe0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                       | (0xffffffe0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x40U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                   >> 0xdU)) << 6U) 
                         | (0xffffffc0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                        | (0xffffffc0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                       | (0xffffffc0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x80U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                   >> 0xfU)) << 7U) 
                         | (0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                        | (0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                       | (0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x100U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 0x11U)) << 8U) 
                          | (0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                         | (0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                        | (0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x200U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 0x13U)) << 9U) 
                          | (0xfffffe00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                         | (0xfffffe00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                        | (0xfffffe00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x400U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 0x15U)) << 0xaU) 
                          | (0xfffffc00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                         | (0xfffffc00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                        | (0xfffffc00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x800U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 0x17U)) << 0xbU) 
                          | (0xfffff800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                         | (0xfffff800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                        | (0xfffff800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x1000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 0x19U)) << 0xcU) 
                           | (0xfffff000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                          | (0xfffff000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                         | (0xfffff000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x2000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 0x1bU)) << 0xdU) 
                           | (0xffffe000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                          | (0xffffe000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                         | (0xffffe000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x4000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 0x1dU)) << 0xeU) 
                           | (0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                          | (0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                         | (0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x8000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 0x1fU)) << 0xfU) 
                           | (0xffff8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                          | (0xffff8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                         | (0xffff8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x10000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                      >> 0x21U)) << 0x10U) 
                            | (0xffff0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                           | (0xffff0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                          | (0xffff0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x20000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                      >> 0x23U)) << 0x11U) 
                            | (0xfffe0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                           | (0xfffe0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                          | (0xfffe0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x40000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                      >> 0x25U)) << 0x12U) 
                            | (0xfffc0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                           | (0xfffc0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                          | (0xfffc0000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x80000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                      >> 0x27U)) << 0x13U) 
                            | (0xfff80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                           | (0xfff80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                          | (0xfff80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x100000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0x29U)) << 0x14U) 
                             | (0xfff00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                            | (0xfff00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                           | (0xfff00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x200000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0x2bU)) << 0x15U) 
                             | (0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                            | (0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                           | (0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xffbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x400000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0x2dU)) << 0x16U) 
                             | (0xffc00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                            | (0xffc00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                           | (0xffc00000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xff7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x800000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0x2fU)) << 0x17U) 
                             | (0xff800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                            | (0xff800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                           | (0xff800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfeffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x1000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x31U)) 
                               << 0x18U) | (0xff000000U 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                             | (0xff000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                            | (0xff000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfdffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x2000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x33U)) 
                               << 0x19U) | (0xfe000000U 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                             | (0xfe000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                            | (0xfe000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xfbffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x4000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x35U)) 
                               << 0x1aU) | (0xfc000000U 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                             | (0xfc000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                            | (0xfc000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xf7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x8000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x37U)) 
                               << 0x1bU) | (0xf8000000U 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                             | (0xf8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                            | (0xf8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xefffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x10000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x39U)) 
                                << 0x1cU) | (0xf0000000U 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                              | (0xf0000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                             | (0xf0000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xdfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x20000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x3bU)) 
                                << 0x1dU) | (0xe0000000U 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                              | (0xe0000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                             | (0xe0000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0xbfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x40000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x3dU)) 
                                << 0x1eU) | (0xc0000000U 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                              | (0xc0000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                             | (0xc0000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
        = ((0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable) 
           | (0x80000000U & (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x3fU)) 
                                << 0x1fU) | (0x80000000U 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we)) 
                              | (0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)) 
                             | (0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out = 0U;
    if ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg));
    }
    if ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 2U)));
    }
    if ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 4U)));
    }
    if ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 6U)));
    }
    if ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 8U)));
    }
    if ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0xaU)));
    }
    if ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0xcU)));
    }
    if ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0xeU)));
    }
    if ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x10U)));
    }
    if ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x12U)));
    }
    if ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x14U)));
    }
    if ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x16U)));
    }
    if ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x18U)));
    }
    if ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x1aU)));
    }
    if ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x1cU)));
    }
    if ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x1eU)));
    }
    if ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x20U)));
    }
    if ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x22U)));
    }
    if ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x24U)));
    }
    if ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x26U)));
    }
    if ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x28U)));
    }
    if ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x2aU)));
    }
    if ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x2cU)));
    }
    if ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x2eU)));
    }
    if ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x30U)));
    }
    if ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x32U)));
    }
    if ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x34U)));
    }
    if ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x36U)));
    }
    if ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x38U)));
    }
    if ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x3aU)));
    }
    if ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x3cU)));
    }
    if ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x3eU)));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (2U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 3U))) ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                                            >> 2U))) 
                                                | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                      : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 2U)))) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (4U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 5U))) ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                                            >> 4U))) 
                                                | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                      : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 4U)))) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (8U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 7U))) ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                                            >> 6U))) 
                                                | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                      : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 6U)))) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x10U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 9U))) ? (
                                                   ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                                    ^ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                                               >> 8U))) 
                                                   | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__gw_int_pending))
                         : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 8U)))) << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x20U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xbU))) ? 
                        (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                          ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 0xaU))) | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                         : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xaU)))) 
                       << 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x40U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xdU))) ? 
                        (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                          ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 0xcU))) | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                         : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xcU)))) 
                       << 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x80U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xfU))) ? 
                        (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                          ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 0xeU))) | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                         : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xeU)))) 
                       << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x100U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x11U)))
                          ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x10U))) 
                             | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__gw_int_pending))
                          : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x10U)))) 
                        << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x200U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x13U)))
                          ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x12U))) 
                             | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                          : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x12U)))) 
                        << 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x400U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x15U)))
                          ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x14U))) 
                             | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                          : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x14U)))) 
                        << 0xaU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x800U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x17U)))
                          ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x16U))) 
                             | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                          : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x16U)))) 
                        << 0xbU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x1000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x19U)))
                           ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x18U))) 
                              | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__gw_int_pending))
                           : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x18U)))) 
                         << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x2000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x1bU)))
                           ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x1aU))) 
                              | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                           : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x1aU)))) 
                         << 0xdU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x4000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x1dU)))
                           ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x1cU))) 
                              | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                           : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x1cU)))) 
                         << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x8000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x1fU)))
                           ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x1eU))) 
                              | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                           : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x1eU)))) 
                         << 0xfU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x10000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x21U)))
                            ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x20U))) 
                               | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__gw_int_pending))
                            : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x20U)))) 
                          << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x20000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x23U)))
                            ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x22U))) 
                               | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                            : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x22U)))) 
                          << 0x11U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x40000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x25U)))
                            ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x24U))) 
                               | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                            : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x24U)))) 
                          << 0x12U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x80000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x27U)))
                            ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x26U))) 
                               | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                            : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                          >> 0x26U)))) 
                          << 0x13U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x100000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x29U)))
                             ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x28U))) 
                                | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__gw_int_pending))
                             : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x28U)))) 
                           << 0x14U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x200000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x2bU)))
                             ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x2aU))) 
                                | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                             : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x2aU)))) 
                           << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x400000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x2dU)))
                             ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x2cU))) 
                                | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                             : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x2cU)))) 
                           << 0x16U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xff7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x800000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x2fU)))
                             ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x2eU))) 
                                | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                             : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                           >> 0x2eU)))) 
                           << 0x17U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfeffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x1000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x31U)))
                              ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x30U))) 
                                 | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__gw_int_pending))
                              : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x30U)))) 
                            << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfdffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x2000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x33U)))
                              ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x32U))) 
                                 | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                              : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x32U)))) 
                            << 0x19U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xfbffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x4000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x35U)))
                              ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x34U))) 
                                 | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                              : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x34U)))) 
                            << 0x1aU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xf7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x8000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x37U)))
                              ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x36U))) 
                                 | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                              : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                            >> 0x36U)))) 
                            << 0x1bU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xefffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x10000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x39U)))
                               ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                              >> 0x38U))) 
                                  | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__gw_int_pending))
                               : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x38U)))) 
                             << 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xdfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x20000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x3bU)))
                               ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                              >> 0x3aU))) 
                                  | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__gw_int_pending))
                               : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x3aU)))) 
                             << 0x1dU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xbfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x40000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x3dU)))
                               ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                              >> 0x3cU))) 
                                  | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__gw_int_pending))
                               : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x3cU)))) 
                             << 0x1eU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw) 
           | (0x80000000U & (((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x3fU)))
                               ? (((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                              >> 0x3eU))) 
                                  | (IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__gw_int_pending))
                               : ((IData)(vlSymsp->TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst.__PVT__extintsrc_req_sync) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                             >> 0x3eU)))) 
                             << 0x1fU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_valid) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_full_spec_bus) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_bus))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr 
        = (((2U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                             >> 0x18U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg
             : (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg)) 
           + ((2U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                               >> 0x18U))) ? (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                     >> 0x14U))))
               : 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend 
        = ((7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata 
        = ((((- (IData)((0U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x14U))))) 
             & ((0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                << 0x18U)) | ((0xff0000U 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg))))) 
            | ((- (IData)((1U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                        >> 0x14U))))) 
               & ((0xffff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                  << 0x10U)) | (0xffffU 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg)))) 
           | ((- (IData)((2U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                       >> 0x14U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid 
        = ((((6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x10U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid 
        = (((6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid 
        = (((6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    if ((2U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                         >> 0x18U)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_addr 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type = 2U;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_addr 
            = (0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type 
            = (0U == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                              >> 0xcU)));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1 
        = ((((8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (2U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                >> 0x18U)))) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x13U)) 
           & (~ (IData)((0U != (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                      >> 8U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_dma_bubble 
        = (((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (IData)((0U != (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                       >> 8U)))))) 
           | (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
        = (((0x9fU >= (0xffU & ((IData)(2U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                               << 5U)))) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
               (7U & (((IData)(2U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                      << 5U)) >> 5U))] 
               >> (0x1fU & ((IData)(2U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                           << 5U)))))
            ? ((0x13fU >= (0x1ffU & ((IData)(0x20U) 
                                     + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                        << 6U)))) ? 
               (((0U == (0x1fU & ((IData)(0x20U) + 
                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                   << 6U)))) ? 0U : 
                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                  ((IData)(1U) + (0xfU & (((IData)(0x20U) 
                                           + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                              << 6U)) 
                                          >> 5U)))] 
                  << ((IData)(0x20U) - (0x1fU & ((IData)(0x20U) 
                                                 + 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                  << 6U)))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                   (0xfU & (((IData)(0x20U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                               << 6U)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U)))))
                : 0U) : ((0x13fU >= (0x1ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                               << 6U)))
                          ? (((0U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                               << 6U)))
                               ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                       ((IData)(1U) 
                                        + (0xeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 1U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                 << 6U))))) 
                             | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                (0xeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                         << 1U))] >> 
                                (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                          << 6U))))
                          : 0U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
        = ((0x13fU >= (0x1ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                 << 6U))) ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                   << 6U)))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xeU 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                                       << 1U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                       << 6U))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xeU 
                                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                                      << 1U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                       << 6U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                       << 6U))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                                   (0xeU 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                                       << 1U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                       << 6U)))))
            : 0ULL);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1sel 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr) 
            << 1U) | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_error 
        = (((9U >= (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                            << 1U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                        >> (0xfU & 
                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                             << 1U))))
            ? 2U : (((9U >= (0xfU & ((IData)(1U) + 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                      << 1U)))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                        << 1U)))))
                     ? 3U : 0U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr) 
            << 1U) | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_exc_cause_wb1_raw 
        = (0x1fU & (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                          >> 0xcU))))) 
                     >> 1U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__en 
        = ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
               >> 8U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_rd_en_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__en 
        = ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
               >> 8U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_rd_en_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_exc_valid_wb1 
        = (1U & (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                       >> 0xcU))))) 
                  >> 6U) & (((0x3fffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                           >> 0xaU)) 
                             | (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                         >> 0x1bU))) 
                            | (0x3ffffffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                              >> 2U) 
                                             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                   >> 9U)))))));
    __Vtemp121[1U] = ((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                        & ((0xffe00000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1) 
                                           << 0x15U)) 
                           | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                      >> 0x20U)))) 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                            >> 1U)))) 
                          & ((0xffe00000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2) 
                                             << 0x15U)) 
                             | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                        >> 0x20U))))) 
                      | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                           >> 2U)))) 
                         & ((0xffe00000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
                                            << 0x15U)) 
                            | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                       >> 0x20U)))));
    __Vtemp121[2U] = ((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                        & ((0x1fffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1) 
                                         >> 0xbU)) 
                           | (0xffe00000U & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                                      >> 0x20U)) 
                                             << 0x15U)))) 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                            >> 1U)))) 
                          & ((0x1fffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2) 
                                           >> 0xbU)) 
                             | (0xffe00000U & ((IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                                        >> 0x20U)) 
                                               << 0x15U))))) 
                      | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                           >> 2U)))) 
                         & ((0x1fffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
                                          >> 0xbU)) 
                            | (0xffe00000U & ((IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                                       >> 0x20U)) 
                                              << 0x15U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   (0x1fffffU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                                                         & ((IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                                                     >> 0x20U)) 
                                                            >> 0xbU)) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                          >> 1U)))) 
                                                           & ((IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                                                       >> 0x20U)) 
                                                              >> 0xbU))) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                         >> 2U)))) 
                                                          & ((IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                                                      >> 0x20U)) 
                                                             >> 0xbU)))))) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 __Vtemp121[2U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   __Vtemp121[1U])) 
                                                   >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
        = ((((((QData)((IData)((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))))) 
               << 0x20U) | (QData)((IData)((- (IData)(
                                                      (1U 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren))))))) 
             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
            | ((((QData)((IData)((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                   >> 1U)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                            >> 1U))))))) 
               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1)) 
           | ((((QData)((IData)((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                  >> 2U)))))) 
                << 0x20U) | (QData)((IData)((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                           >> 2U))))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pceff 
        = ((((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren))))))) 
             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q0pcff__dout) 
            | ((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                       >> 1U))))))) 
               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q1pcff__dout)) 
           | ((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                      >> 2U))))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q2pcff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
        = (0xffffU & (((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                         >> 0x10U) & ((0xffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1)) 
                                      | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0) 
                                         >> 0x10U))) 
                       | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                             >> 1U)))) 
                           >> 0x10U) & ((0xffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2)) 
                                        | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1) 
                                           >> 0x10U)))) 
                      | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                            >> 2U)))) 
                          >> 0x10U) & ((0xffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2) 
                                          >> 0x10U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
        = ((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0)) 
            | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1))) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff 
        = (IData)((((((- (QData)((IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren))))) 
                      >> 0x20U) & ((0xffffffffULL & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1))) 
                                   | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0)) 
                                      >> 0x20U))) | 
                    (((- (QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                >> 1U))))) 
                      >> 0x20U) & ((0xffffffffULL & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2))) 
                                   | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1)) 
                                      >> 0x20U)))) 
                   | (((- (QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                 >> 2U))))) 
                       >> 0x20U) & ((0xffffffffULL 
                                     & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0))) 
                                    | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2)) 
                                       >> 0x20U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff 
        = ((((IData)((- (QData)((IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))))) 
             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0) 
            | ((IData)((- (QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                 >> 1U)))))) 
               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1)) 
           | ((IData)((- (QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                >> 2U)))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_write 
        = ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
              >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write 
        = ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
              >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dbg_cmd_done 
        = ((((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))) 
            & ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg) 
                  >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)))) 
           & ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                 >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_valid 
        = ((((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))) 
            & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg) 
                     >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))))) 
           & ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus) 
                 >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                     >> 7U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_m 
        = (0xfU & (((1U & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                            >> 0xbU))))) 
                    | (3U & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                              >> 0xaU)))))) 
                   | (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                       >> 9U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_m 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
             & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                 >> 7U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                           >> 6U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_dccm_rden_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__isdccmst_m 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m)) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                 >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
           & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_external_m) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m 
        = (0xffU & ((0xfU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 6U)))) 
                             & (((1U & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                      >> 0xbU))))) 
                                 | (3U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                        >> 0xaU)))))) 
                                | (- (IData)((1U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 9U))))))) 
                    << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (((((0x3fffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                     >> 2U))) == (0x3fffU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                                     >> 2U))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (((((0x3fffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                     >> 2U))) == (0x3fffU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                                     >> 2U))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                        >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                   >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (2U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                      << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (2U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                      << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (4U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                      << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (4U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                      << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                      << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                      << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                       << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (0xfffffffeU & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x12U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                                >> 2U))) 
                                << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 1U)) << 1U)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (0xfffffffeU & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x12U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                                >> 2U))) 
                                << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 1U)) << 1U)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (2U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                         << 1U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                    >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x10U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x10U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x20U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 4U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                     >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x20U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 4U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                     >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x40U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 5U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                     >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x40U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 5U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                     >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x80U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                         << 6U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                     >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x80U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                         << 6U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                          << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                     >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (0xfffffffcU & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x22U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                                >> 2U))) 
                                << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 2U)) << 2U)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (0xfffffffcU & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x22U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                                >> 2U))) 
                                << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 2U)) << 2U)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (4U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                         << 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                    >> 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x100U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 6U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                       >> 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x100U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 6U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                       >> 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x200U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 7U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xfffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                    >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x200U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 7U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xfffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                    >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x400U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 8U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xfffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                    >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x400U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 8U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xfffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                    >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x800U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                          << 9U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xfffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                    >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x800U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                          << 9U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                           << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xfffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                    >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)) 
           | (0xfffffff8U & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x32U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                                >> 2U))) 
                                << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 3U)) << 3U)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
           | (0xfffffff8U & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x32U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                                >> 2U))) 
                                << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 3U)) << 3U)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m) 
                                << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en)) 
           | (8U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)) 
                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                         << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                    >> 1U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x1000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                           << 9U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                       >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x1000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                           << 9U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                       >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x2000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                           << 0xaU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                   >> 0xcU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x2000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                           << 0xaU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                   >> 0xcU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x4000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                           << 0xbU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                   >> 0xcU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x4000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                           << 0xbU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                   >> 0xcU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)) 
           | (0x8000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                           << 0xcU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)) 
                    | (0xffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
                                   >> 0xcU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)) 
           | (0x8000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                           << 0xcU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                            << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
           | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)) 
                    | (0xffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
                                   >> 0xcU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
           & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_external_m) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 7U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_debug_halt_req_sync) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                   >> 9U)))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = (1U & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                >> 1U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                           >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
           | (2U & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                              >> 2U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
           | (3U & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                              >> 3U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
        = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (1U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
        = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
    if ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 3U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    } else {
        if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 3U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (2U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
        = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
    if ((0x100U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 6U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    } else {
        if ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 6U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (4U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
        = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
    if ((0x800U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x400U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 9U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 9U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in 
                    = (8U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
           | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))));
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
        = (0xfcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in));
    if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
                    = ((0xfcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in)) 
                       | (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 1U)));
    if ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (2U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 3U)) << 1U)));
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
        = (0xf3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in));
    if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 3U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
                    = ((0xf3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in)) 
                       | (0xcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag) 
                                  << 2U)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 2U)));
    if ((0x100U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (4U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 6U)) << 2U)));
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
        = (0xcfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in));
    if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                  >> 8U)))) {
        if ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 6U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
                    = ((0xcfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in)) 
                       | (0x30U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag) 
                                   << 4U)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 3U)));
    if ((0x800U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x400U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                   | (8U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 9U)) << 3U)));
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
        = (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in));
    if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                          >> 9U)))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in 
                    = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in)) 
                       | (0xc0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag) 
                                   << 6U)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state 
        = (5U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state) 
           | (5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                           >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state) 
           | (5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                           >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__any_done_wait_state) 
           | (5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                           >> 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)) 
           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
              >> 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | (((3U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect)) 
              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | (((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                                         >> 1U)) & 
              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
               >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | (((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 6U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                                         >> 2U)) & 
              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
               >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend) 
           | (((3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 9U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                                         >> 3U)) & 
              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
               >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                     & (~ ((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                           | (0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))))) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                     & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 3U))) 
                            | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 3U))))) 
                        << 1U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                   << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                     & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 6U))) 
                            | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 6U))))) 
                        << 2U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                   << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                     & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 9U))))) 
                        << 3U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                   << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x10U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                        & ((~ ((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                               | (0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                           << 4U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                      << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x20U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                        & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))))) 
                           << 5U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                      << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x40U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                        & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))))) 
                           << 6U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                      << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x80U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                        & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))))) 
                           << 7U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                      << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                         & ((~ ((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                | (0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                            << 8U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                       << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x200U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                         & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 3U))) 
                                | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 3U))))) 
                            << 9U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                       << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x400U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                         & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 6U))))) 
                            << 0xaU)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                         << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x800U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                         & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 9U))))) 
                            << 0xbU)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                         << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x1000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                          & ((~ ((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                 | (0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                             << 0xcU)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                          << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x2000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                          & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                 >> 3U))))) 
                             << 0xdU)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                          << 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x4000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                          & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                 >> 6U))))) 
                             << 0xeU)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                          << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage)) 
           | (0x8000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                          & ((~ ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 | (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                 >> 9U))))) 
                             << 0xfU)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                          << 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
           & (- (IData)((((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
                            | (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
              & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U))) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                   >> 1U))) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                   >> 1U)) 
                                               | (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 1U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
              & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 6U))) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                   >> 2U))) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                   >> 2U)) 
                                               | (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 2U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
              & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 9U))) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                   >> 3U))) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                   >> 3U)) 
                                               | (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 3U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
           & (- (IData)((((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
              & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U))) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                   >> 1U))) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                               >> 1U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
              & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 6U))) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                   >> 2U))) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                               >> 2U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
              & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 9U))) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                   >> 3U))) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                               >> 3U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready 
        = ((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready) 
           | ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                            >> 3U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                           >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready) 
           | ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                            >> 6U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                           >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready) 
           | ((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                            >> 9U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                           >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = (1U & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U))) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                   >> 1U))) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                   >> 1U)) 
                                               | (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                   >> 1U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (2U & (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 2U))) & ((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                    >> 2U)) 
                                                  | (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                      >> 2U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                 | (- (IData)((((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                      >> 3U))) & ((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                    >> 3U)) 
                                                  | (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                      >> 3U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
              & (5U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 3U))) 
                                << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffffff0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xffffffe0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 3U))) 
                                << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xffffffc0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xffffff80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xffffff00U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffffe00U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 3U))) 
                                << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffffc00U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffff800U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xfffff000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xffffe000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 3U))) 
                                << 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xffffc000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage)) 
           | (0xffff8000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspageQ) 
                             & ((5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                << 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_empty_any 
        = (1U & (((~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error 
        = (((6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error) 
           | (((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                         >> 1U)) & 
              (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                  >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error) 
           | (((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 6U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                         >> 2U)) & 
              (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                  >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error) 
           | (((6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 9U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                         >> 3U)) & 
              (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                  >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
             & (6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 3U)))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                             >> 1U)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                 >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 6U)))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                             >> 2U)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                 >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (6U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 9U)))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                             >> 3U)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                 >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
             & ((0x1fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                >> 3U)) == (0x1fffffffU 
                                            & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                                                  >> 3U))))) 
            & (3U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
           & (~ ((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                    & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & ((0x1fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                   >> 3U)) == (0x1fffffffU 
                                               & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                     >> 3U))))) 
               & (3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                               >> 3U)))) & (~ ((1U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                  & (1U 
                                                     == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & ((0x1fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                   >> 3U)) == (0x1fffffffU 
                                               & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                                     >> 3U))))) 
               & (3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                               >> 6U)))) & (~ ((2U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                  & (2U 
                                                     == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                & ((0x1fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                   >> 3U)) == (0x1fffffffU 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                                  >> 3U)))) 
               & (3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                               >> 9U)))) & (~ ((3U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                                               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                                  & (3U 
                                                     == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__isdccmst_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_r)) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                 >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_r 
        = (0xffU & ((((1U & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                              >> 0xbU))))) 
                      | (3U & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                >> 0xaU)))))) 
                     | (0xfU & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                 >> 9U)))))) 
                    | (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                        >> 8U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_r 
        = (0xfU & (((1U & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                            >> 0xbU))))) 
                    | (3U & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                              >> 0xaU)))))) 
                   | (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                       >> 9U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_r 
        = (0xfU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                     >> 6U)))) & ((
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                     >> 0xbU))))) 
                                                   | (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                       >> 0xaU)))))) 
                                                  | (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                   >> 9U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
             >> 7U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__single_ecc_error_lo_r)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellout__lsu_raw_fwd_r_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
             >> 7U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__single_ecc_error_hi_r)) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellout__lsu_raw_fwd_r_ff__dout) 
                 >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r 
        = ((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                   >> 1U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                             >> 3U))) ? (((((0xffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                >> 5U) 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                  >> 0xbU))))) 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r)) 
                                            | (0xffffU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                  >> 5U) 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                    >> 0xaU))))) 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r))) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((~ 
                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                               >> 5U)) 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                                >> 0xbU))))) 
                                              & ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r 
                                                                    >> 7U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r)))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & ((~ 
                                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                              >> 5U)) 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                               >> 0xaU))))) 
                                             & ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r 
                                                                   >> 0xfU)))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r)))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                                           >> 9U)))) 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_corr_r))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_r_raw);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi 
        = (((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                             >> 2U))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
               >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                             >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_lo 
        = (((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                             >> 2U))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
               >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                             >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlTOPp->tb_top__DOT__porst_l) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__resumereq 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
             >> 0x1eU) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                             >> 0x1fU))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                  >> 1U) | (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__rst_l_sync))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_halt_req 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q) 
           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
              >> 0x1fU));
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_halt_req = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_halt_req = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_halt_req 
                        = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                 >> 0x1fU));
                }
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l = ((IData)(vlTOPp->tb_top__DOT__rst_l) 
                                                   & (~ 
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                       >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt)) 
           | (((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                          >> 0x25U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                      >> 3U))) & ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                              >> 0x37U))) 
                                  | (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                >> 0x36U))))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_r 
        = (((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                     >> 0x24U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_r 
        = (((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                     >> 0x23U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r)) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_r 
        = ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
               >> 0xdU)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r) 
           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
              >> 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r 
        = (((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0xdU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 3U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_t_in;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
        = ((0x1ffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r) 
           | (0x40U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                        >> 0x11U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                     << 6U))));
    vlTOPp->tb_top__DOT__bridge__DOT__w_slave_select 
        = (1U & ((1U & ((0U == (IData)(vlTOPp->tb_top__DOT__bridge__DOT__wsel_count)) 
                        | ((IData)(vlTOPp->tb_top__DOT__bridge__DOT__wsel_count) 
                           >> 2U))) ? (0xee00U == (0xffffU 
                                                   & (vlTOPp->tb_top__DOT__lsu_axi_araddr 
                                                      >> 0x10U)))
                  : ((IData)(vlTOPp->tb_top__DOT__bridge__DOT__wsel) 
                     >> (IData)(vlTOPp->tb_top__DOT__bridge__DOT__wsel_optr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xfeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
              & (0U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xfdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (1U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xfbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (2U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xf7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (3U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (4U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (5U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0xbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (6U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en) 
               & (7U == (IData)(vlTOPp->tb_top__DOT__ifu_axi_rid))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
        = ((0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_rff__dout
                             : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                >> 3U)) << 3U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_lo_rff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r 
        = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                  >> 3U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                                    >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r 
        = (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_r) 
                    << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_new_rd_addr_count 
        = (7U & ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                  ? ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))
                      ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout 
                         >> 2U) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent)
                                    ? ((IData)(1U) 
                                       + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_count))
                                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_rd_addr_count)))
                  : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                     >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
        = ((0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_m)
                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_mff__dout
                             : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                >> 3U)) << 3U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_lo_mff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x1fffffffU & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_m)) 
                                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                    >> 4U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                                >> 3U)
                           : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_rff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_valid__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r0_addr_en) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r0_valid__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_valid__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__r1_addr_en) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__r1_valid__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                            ? 3U : 4U);
                }
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                    = (7U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                              ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                                  ? 3U : 4U) : ((~ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0xeU))) 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                   >> 0xcU))));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_haveresetn_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((((0x10U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                           >> 0x22U)))) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                          >> 0x1eU))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_haveresetn));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0x18U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x22U))))) 
                  & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                        >> 0xcU))) ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x39U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (5U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren 
        = (((0x10U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (4U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_wren 
        = (((0x17U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbdata0wr_access 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x3cU == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_wren 
        = ((((0x38U == (0x7fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_a_enc 
        = ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_a_enc)) 
           | ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_dividend 
                             >> 0x20U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_a_cls__DOT__cls_ones)
               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_a_cls__DOT__cls_zeros)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_b_enc 
        = ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_b_enc)) 
           | ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                             >> 0x20U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_b_cls__DOT__cls_ones)
               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_b_cls__DOT__cls_zeros)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (1U & (((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out 
                                 >> 0x22U))) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                >> 0x11U)) 
                    | ((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                       & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7ffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (2U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out 
                                  >> 0x23U))) << 1U) 
                     ^ (0xfffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                   >> 0x10U))) | ((
                                                   (0U 
                                                    == 
                                                    (0xfffffffU 
                                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                   & (0ULL 
                                                      == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out)) 
                                                  << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7ffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (4U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out 
                                  >> 0x24U))) << 2U) 
                     ^ (0x1fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0xfU))) | ((
                                                   (0U 
                                                    == 
                                                    (0xfffffffU 
                                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                   & (0ULL 
                                                      == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out)) 
                                                  << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7ff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (8U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out 
                                  >> 0x25U))) << 3U) 
                     ^ (0x3fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0xeU))) | ((
                                                   (0U 
                                                    == 
                                                    (0xfffffffU 
                                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                                                   & (0ULL 
                                                      == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out)) 
                                                  << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7fefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x10U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out 
                                     >> 0x25U))) << 4U) 
                        ^ (0x7fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                       >> 0xdU))) | 
                       (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                         & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out)) 
                        << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7fdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x20U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out 
                                     >> 0x25U))) << 5U) 
                        ^ (0xfffe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                       >> 0xcU))) | 
                       (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                         & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out)) 
                        << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7fbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x40U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out 
                                     >> 0x25U))) << 6U) 
                        ^ (0x1fffc0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                        >> 0xbU))) 
                       | (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                           & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out)) 
                          << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7f7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x80U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out 
                                     >> 0x25U))) << 7U) 
                        ^ (0x3fff80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                        >> 0xaU))) 
                       | (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                           & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out)) 
                          << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7effU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x100U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out 
                                      >> 0x25U))) << 8U) 
                         ^ (0x7fff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                         >> 9U))) | 
                        (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                          & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out)) 
                         << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7dffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x200U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out 
                                      >> 0x25U))) << 9U) 
                         ^ (0xfffe00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                         >> 8U))) | 
                        (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                          & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out)) 
                         << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x7bffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x400U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out 
                                      >> 0x25U))) << 0xaU) 
                         ^ (0x1fffc00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                          >> 7U))) 
                        | (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                            & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out)) 
                           << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x77ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x800U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out 
                                      >> 0x25U))) << 0xbU) 
                         ^ (0x3fff800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                          >> 6U))) 
                        | (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                            & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out)) 
                           << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x6fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x1000U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out 
                                       >> 0x25U))) 
                           << 0xcU) ^ (0x7fff000U & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                        >> 5U))) | 
                         (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                           & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out)) 
                          << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x5fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x2000U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out 
                                       >> 0x25U))) 
                           << 0xdU) ^ (0xfffe000U & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                        >> 4U))) | 
                         (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                           & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out)) 
                          << 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw 
        = ((0x3fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
           | (0x4000U & ((((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out 
                                       >> 0x25U))) 
                           << 0xeU) ^ (0x1fffc000U 
                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                          >> 3U))) 
                         | (((0U == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)) 
                             & (0ULL == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out)) 
                            << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (1U & ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in)
                     ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                           >> 1U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                      >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (2U & (((0U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                      ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                            >> 2U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                       >> 2U)) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (4U & (((0U != (7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                      ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                            >> 3U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                       >> 3U)) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                      ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                            >> 4U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                       >> 4U)) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                         ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                               >> 5U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                          >> 5U)) << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                         ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                               >> 6U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                          >> 6U)) << 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                         ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                               >> 7U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                          >> 7U)) << 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                         ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                               >> 8U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                          >> 8U)) << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                          ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                >> 9U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                           >> 9U)) 
                        << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                          ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                >> 0xaU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                             >> 0xaU)) 
                        << 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                          ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                >> 0xbU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                             >> 0xbU)) 
                        << 0xaU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                          ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                >> 0xcU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                             >> 0xcU)) 
                        << 0xbU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                           ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                 >> 0xdU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                              >> 0xdU)) 
                         << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                           ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                 >> 0xeU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                              >> 0xeU)) 
                         << 0xdU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                           ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                 >> 0xfU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                              >> 0xfU)) 
                         << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                           ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                 >> 0x10U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                               >> 0x10U)) 
                         << 0xfU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                            ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                  >> 0x11U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                >> 0x11U)) 
                          << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                            ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                  >> 0x12U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                >> 0x12U)) 
                          << 0x11U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                            ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                  >> 0x13U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                >> 0x13U)) 
                          << 0x12U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7ff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                            ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                  >> 0x14U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                >> 0x14U)) 
                          << 0x13U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                             ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                   >> 0x15U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                 >> 0x15U)) 
                           << 0x14U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                             ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                   >> 0x16U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                 >> 0x16U)) 
                           << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7fbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                             ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                   >> 0x17U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                 >> 0x17U)) 
                           << 0x16U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7f7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                             ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                   >> 0x18U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                 >> 0x18U)) 
                           << 0x17U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7effffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                              ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                    >> 0x19U)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                  >> 0x19U)) 
                            << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7dffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                              ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                    >> 0x1aU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                  >> 0x1aU)) 
                            << 0x19U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x7bffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                              ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                    >> 0x1bU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                  >> 0x1bU)) 
                            << 0x1aU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x77ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                              ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                    >> 0x1cU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                  >> 0x1cU)) 
                            << 0x1bU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x6fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                               ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                     >> 0x1dU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                   >> 0x1dU)) 
                             << 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x5fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                               ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                     >> 0x1eU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                   >> 0x1eU)) 
                             << 0x1dU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
        = ((0x3fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in))
                               ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                     >> 0x1fU)) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in 
                                                   >> 0x1fU)) 
                             << 0x1eU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_sel_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                   >> 1U) | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U]))
            ? ((4U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                       << 1U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                 >> 0x10U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_debug_way))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_wr_way_en 
        = ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                >> 0x12U))))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_debug_way));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en 
        = ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                              >> 1U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                        >> 0x12U))))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_debug_way));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en 
        = ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                   >> 0x12U)))))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_debug_way));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__middle_of_bank 
        = (1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                          >> 0x34U)) ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                >> 0x35U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
           & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err_data 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error_ff) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                    >> 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren_last 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren_last)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_wo_err) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)) 
               & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren_last 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren_last)) 
           | (0xfffffffeU & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_wo_err) 
                                << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)) 
                              & ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                 << 1U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat) 
                                            << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_data_beat_cnt 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_addr_bits_hi_3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rid_ff) 
           & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff))));
}
