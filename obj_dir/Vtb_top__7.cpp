// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"

VL_INLINE_OPT void Vtb_top::_combo__TOP__34(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top::_combo__TOP__34\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l = ((IData)(vlTOPp->tb_top__DOT__rst_l) 
                                                   & (~ 
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                       >> 1U)));
    vlTOPp->tb_top__DOT__lmem__DOT__mailbox_write = 
        (((IData)(vlTOPp->tb_top__DOT__lmem_axi_awvalid) 
          & (0xd0580000U == vlTOPp->tb_top__DOT__lsu_axi_araddr)) 
         & (IData)(vlTOPp->tb_top__DOT__rst_l));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset))))) 
                 & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                     ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 1U))))) & 
                 ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 2U))))) & 
                 ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 4U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 3U))))) & 
                 ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 6U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 4U))))) & 
                 ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 8U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_error_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_valid) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write))) 
           & (~ (((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                            >> 4U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_misaligned 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_inv_r) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                  == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                    >> 5U))))) & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_inv_r) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                   == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                     >> 0xfU))))) & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                             >> 0x13U))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_inv_r) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                   == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                     >> 0x19U))))) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_inv_r) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
                   == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                     >> 0x23U))))) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)))
                        ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff00U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)))
                           ? ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                               ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                  >> 8U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                               ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r 
                                  >> 8U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                            >> 8U))) 
                         << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff0000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)))
                             ? ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                 ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                    >> 0x10U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                                 ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r 
                                    >> 0x10U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in) 
           | (0xff000000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)))
                               ? ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                      >> 0x18U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                   >> 0x18U))
                               : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r 
                                      >> 0x18U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                     ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (2U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                      ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)) 
                         >> 1U) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 1U)) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (4U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                      ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)) 
                         >> 2U) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 2U)) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)) 
           | (8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                      ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)) 
                         >> 3U) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 3U)) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                        ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff00U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                           ? ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                               ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                  >> 8U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                            >> 8U))
                           : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                              >> 8U)) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff0000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                             ? ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                 ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                    >> 0x10U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                 >> 0x10U))
                             : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                >> 0x10U)) << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out) 
           | (0xff000000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))
                               ? ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
                                      >> 0x18U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                   >> 0x18U))
                               : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                  >> 0x18U)) << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
        = ((0xfffffffffeULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
           | (IData)((IData)((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m) 
                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m)) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)) 
                                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                      >> 4U))) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 0xdU))) 
                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_enable 
        = ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
              >> 0x12U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq) 
                              >> 5U))) & (7U != (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq) 
                                                    >> 2U)))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case 
        = (((((((0U == (0xfffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                      >> 4U))) & (0U 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff 
                                                              >> 4U))))) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case))) 
              & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                    >> 0xfU))) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                  >> 0x12U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel))) 
           | (((((0U == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case))) 
                & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                      >> 0xfU))) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0x12U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
        = ((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                  & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 1U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 3U))) & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                             & (1U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((1U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (1U 
                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 2U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 6U))) & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                             & (2U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((2U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (2U 
                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 3U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 9U))) & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                             & (3U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((3U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (3U 
                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
        = ((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                   & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                     & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 1U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 3U))) & (~ ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                              & (1U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                                                & (1U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((1U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (1U 
                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 2U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 6U))) & (~ ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                              & (2U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                                                & (2U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((2U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (2U 
                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    if ((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 3U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                             >> 9U))) & (~ ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                                              & (3U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                                                & (3U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                                               & ((3U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
                                                     & (3U 
                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
               >> 7U) | (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                     << (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_m)) 
                    + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                       << (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                   + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 6U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 9U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi 
        = ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                              >> 2U))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo 
        = ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi 
        = ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi 
        = (((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                             >> 2U))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                 >> 2U)) == (0x3fffffffU 
                                             & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                                                   >> 2U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
               & (0U != (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffffeU & ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       << 0x1eU) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                       >> 2U)))) << 1U) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 << 1U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffffcU & ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                       << 0x1eU) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U] 
                                       >> 2U)))) << 2U) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 << 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi)) 
           | (0xfffffff8U & ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                      >> 2U))) << 3U) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
            & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 7U) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)) 
                          & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                              >> 7U) | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m) 
                                           & (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                                  ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m) 
                                                 >> 2U)))))))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result 
        = ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren))) 
           & ((((- (IData)((1U & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                      >> 0xfU)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel)))))) 
                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff) 
               | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0xfU)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff))) 
              | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel))) 
                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d 
        = ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen)) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                   == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                >> 5U)))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass))) 
              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                    >> 1U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                   >> 2U))) << 3U) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d 
        = ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen)) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                   == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                >> 0xaU)))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass))) 
              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                    >> 1U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                   >> 2U))) << 3U) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo 
        = ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                              >> 4U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi 
        = ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                              >> 2U))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                              >> 4U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
        = ((0xfffffffffdULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
           | ((QData)((IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_m) 
                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m))) 
                               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                     >> 4U))))) << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U_Plus1_0__DOT__lsu_error_pkt_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffffffffULL & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
                                      | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                                                 >> 1U))) 
                                     | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                        >> 4U))) ? 
                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
                               >> 2U) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__L2U_Plus1_0__DOT__lsu_error_pkt_rff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__finish 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case)) 
            | (0x20U == (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
                              << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
                              << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
                              << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                  >> 4U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
                              << 1U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
                              << 2U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
                              << 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                  >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                             >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
                              << 1U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                   >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
                              << 2U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                   >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
                              << 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
                                        >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                   >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
           | (0xffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
                              << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                               >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x10U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x20U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x40U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x80U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                         << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x100U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x200U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x400U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                           << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x800U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                          << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x1000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x2000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x4000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi)) 
           | (0x8000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_hi) 
                           << 0xcU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (1U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v))) 
             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v))) 
               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (2U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (3U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 2U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 2U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 2U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (4U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 3U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 3U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 3U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (5U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 4U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 4U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 4U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (6U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 5U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 5U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 5U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (7U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 6U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 6U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 6U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (8U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 7U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 7U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 7U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (9U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                              >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 8U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 8U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 8U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xaU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0xaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 9U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 9U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 9U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xbU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0xbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xaU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xaU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xaU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xcU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0xcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xbU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xbU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xbU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xdU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0xdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xcU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xcU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xcU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xeU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0xeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xdU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xdU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xdU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0xfU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0xfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xeU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xeU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xeU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x10U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x10U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x10U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xfU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xfU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xfU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x11U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x11U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x11U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x10U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x10U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x10U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x12U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x12U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x12U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x11U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x11U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x11U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x13U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x13U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x13U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x12U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x12U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x12U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x14U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x14U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x14U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x13U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x13U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x13U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x15U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x15U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x15U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x14U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x14U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x14U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x16U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x16U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x16U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x15U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x15U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x15U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x17U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x17U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x17U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x16U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x16U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x16U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x18U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7f7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x18U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7f7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x18U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7f7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x17U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x17U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x17U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x19U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7effffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x19U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7effffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x19U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7effffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x18U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x18U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x18U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1aU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7dffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7dffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x1aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7dffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x19U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x19U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x19U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1bU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7bffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7bffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x1bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7bffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1aU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1aU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1aU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1cU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x77ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x77ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x1cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x77ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1bU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1bU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1bU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1dU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x6fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x6fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x1dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x6fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1cU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1cU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1cU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1eU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x5fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x5fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x1eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x5fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1dU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1dU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1dU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r) 
           & (0x1fU == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                 >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x3fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x3fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren) 
           & (0x1fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x3fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1eU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r) 
            | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1eU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data)) 
           | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1eU)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_bypass_en_d 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d) 
                      >> 1U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d) 
                                 >> 2U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d) 
                                            >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d) 
                      >> 1U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d) 
                                 >> 2U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d) 
                                            >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                 >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
                             << 1U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
                             << 2U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)) 
           | (0xffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
                             << 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                 >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
                             << 1U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
                             << 2U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)) 
           | (0xffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
                             << 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r) 
                                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)))) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r)) 
                       | ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)))) 
                          & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                     >> 0x20U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                                                 >> 3U)))) 
                               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo) 
                                                   >> 3U)))) 
                                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                            >> 0x38U)))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi)))) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r)) 
                       | ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)))) 
                          & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                     >> 0x20U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                                                 >> 3U)))) 
                               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi) 
                                                   >> 3U)))) 
                                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
                                            >> 0x38U)))) 
                             << 0x18U)));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in = 0U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                     >> 5U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                     >> 6U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                      >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                       >> 0xaU)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)
                : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)))
                ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))
                : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in 
            = (7U & ((7U > (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      ? ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))
                      : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
           & ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
                    | (7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))) 
                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en) 
                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))))) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain)) 
                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)) 
               | (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write))) 
              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo)))) 
                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                       | ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                                             >> 1U)))) 
                           << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo) 
                                               >> 1U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                                               >> 2U)))) 
                             << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo) 
                                                 >> 2U)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                                                 >> 3U)))) 
                               << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo) 
                                                   >> 3U)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi)))) 
                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                       | ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                                             >> 1U)))) 
                           << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi) 
                                               >> 1U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                                               >> 2U)))) 
                             << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi) 
                                                 >> 2U)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                                                 >> 3U)))) 
                               << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r) 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi) 
                                                   >> 3U)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid_ff__DOT__din_new 
        = ((~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en))) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
              & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
               & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (1U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & (((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                    & ((3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag)) 
                                       == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)))) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                          & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                              == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))) 
                             | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                 >> (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))) 
                                & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                   == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                             >> (6U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                    << 1U)))))))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | (((IData)(vlTOPp->tb_top__DOT__lsu_axi_bvalid) 
                           & (0U == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))) 
                          | ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                             & (((0U == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid)) 
                                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                    & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                       == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag))))) 
                                | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                   & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                      == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag))))))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                          & (IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                          & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                               & (0U == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid))) 
                              | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                 & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                    == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag))))) 
                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                & (0U == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))))
                        ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata))
                        : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | ((((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                               & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write))) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                          & (IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend)) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)
                        : ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)));
            }
        } else {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (1U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
                           & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                               & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                          | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                             & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U] 
                    = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 1U)));
    if ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (2U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                  << 1U) | (0xfffffffeU 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                               & (((3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 2U)) 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                                  << 1U)))) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                           & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                               == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                         >> 2U))) | 
                              (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                >> (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                          >> 2U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                  == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                            >> (6U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                   >> 1U)))))))) 
                          << 1U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlTOPp->tb_top__DOT__lsu_axi_bvalid) 
                            & (1U == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))) 
                           << 1U) | (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                      << 1U) & ((((1U 
                                                   == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid)) 
                                                  << 1U) 
                                                 | (0xfffffffeU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                               >> 2U))) 
                                                          << 1U)))) 
                                                | (0xfffffffeU 
                                                   & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 1U)) 
                                                           << 1U)) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 2U))) 
                                                         << 1U)))))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                            << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               & (1U 
                                                  == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid))) 
                                              << 1U) 
                                             | (0xfffffffeU 
                                                & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                                     << 1U) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                                   & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                           >> 2U))) 
                                                      << 1U)))) 
                                            | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (1U 
                                                   == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))) 
                                               << 1U)))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 1U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 1U))))
                        ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata))
                        : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 1U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (0xfffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                  >> 1U)) 
                                              << 1U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 1U)) 
                                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                            << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 1U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                            << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 1U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                            << 1U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)
                        : ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)));
            }
        } else {
            if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (2U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
                            & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                  & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 1U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U] 
                    = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 2U)));
    if ((0x100U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (4U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                  << 2U) | (0xfffffffcU 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                               & (((3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 4U)) 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                                  << 2U)))) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                           & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                               == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                         >> 4U))) | 
                              (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                >> (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                          >> 4U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                  == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                            >> (6U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                   >> 3U)))))))) 
                          << 2U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlTOPp->tb_top__DOT__lsu_axi_bvalid) 
                            & (2U == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))) 
                           << 2U) | (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                      << 2U) & ((((2U 
                                                   == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid)) 
                                                  << 2U) 
                                                 | (0xfffffffcU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                               >> 4U))) 
                                                          << 2U)))) 
                                                | (0xfffffffcU 
                                                   & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 2U)) 
                                                           << 2U)) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 4U))) 
                                                         << 2U)))))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                            << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               & (2U 
                                                  == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid))) 
                                              << 2U) 
                                             | (0xfffffffcU 
                                                & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                                     << 2U) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                                   & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                           >> 4U))) 
                                                      << 2U)))) 
                                            | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (2U 
                                                   == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))) 
                                               << 2U)))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 2U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 2U))))
                        ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata))
                        : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 2U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (0xfffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                  >> 2U)) 
                                              << 2U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 2U)) 
                                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                            << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 2U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                            << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 2U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                            << 2U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)
                        : ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[2U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)));
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (4U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
                            & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                  & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 2U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U] 
                    = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    << 3U)));
    if ((0x800U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
        if ((0x400U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (8U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                  << 3U) | (0xfffffff8U 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                               & (((3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                       >> 6U)) 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr)) 
                                                  << 3U)))) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                           & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                               == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                         >> 6U))) | 
                              (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                >> (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                          >> 6U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                  == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                            >> (6U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                   >> 5U)))))))) 
                          << 3U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
            if ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlTOPp->tb_top__DOT__lsu_axi_bvalid) 
                            & (3U == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))) 
                           << 3U) | (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                      << 3U) & ((((3U 
                                                   == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid)) 
                                                  << 3U) 
                                                 | (0xfffffff8U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd) 
                                                       & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                               >> 6U))) 
                                                          << 3U)))) 
                                                | (0xfffffff8U 
                                                   & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 3U)) 
                                                           << 3U)) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag) 
                                                              >> 6U))) 
                                                         << 3U)))))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                            << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                               & (3U 
                                                  == (IData)(vlTOPp->tb_top__DOT__lsu_axi_rid))) 
                                              << 3U) 
                                             | (0xfffffff8U 
                                                & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                                     << 3U) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd)) 
                                                   & (((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag) 
                                                           >> 6U))) 
                                                      << 3U)))) 
                                            | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (3U 
                                                   == (IData)(vlTOPp->tb_top__DOT__lsu_axi_bid))) 
                                               << 3U)))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 3U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 3U))))
                        ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata))
                        : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 3U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en)) 
                       | (0xfffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                  >> 3U)) 
                                              << 3U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 3U)) 
                                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                            << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 3U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                            << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend) 
                                             << 3U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                            << 3U))));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en))
                        ? (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)
                        : ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U])
                            ? (IData)((vlTOPp->tb_top__DOT__lsu_axi_rdata 
                                       >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__lsu_axi_rdata)));
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (8U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
                            & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                  & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 3U));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U] 
                    = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r);
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__1__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__1__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__2__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__2__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__3__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__3__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__4__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__4__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__5__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__5__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__6__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__6__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__7__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__7__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__8__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__8__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__9__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__9__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__10__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__10__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__11__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__11__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__12__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__12__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__13__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__13__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__14__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__14__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__15__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__15__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__16__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__16__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__17__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__17__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__18__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__18__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__19__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__19__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__20__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__20__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__21__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__21__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__22__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__22__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__23__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__23__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__24__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__24__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__25__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__25__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__26__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__26__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__27__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__27__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__28__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__29__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__30__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr__BRA__31__KET____DOT__gprff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xff00U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                           ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
                              >> 8U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                                        >> 8U)) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xff0000U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
                                >> 0x10U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m) 
           | (0xff000000U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo))
                               ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_lo 
                                  >> 0x18U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                                               >> 0x18U)) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_lo) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xff00U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                           ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
                              >> 8U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                                        >> 8U)) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xff0000U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
                                >> 0x10U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m) 
           | (0xff000000U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_hi))
                               ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_fwddata_rpipe_hi 
                                  >> 0x18U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                                               >> 0x18U)) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_hit_hi) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                     : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                        >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
               : ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                          >> 0xaU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                     : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                        >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (2U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 5U)) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xf3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                           >> 0xaU)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (2U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 6U)) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (4U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 5U)) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xcfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                           >> 0xaU)))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (4U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 6U)) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (8U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 5U)) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                           >> 0xaU)))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (8U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                         >> 6U)) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                  & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                   & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                   & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
               : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                   & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                   ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                   : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xf3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                    & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xcfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                    & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                    & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfff0U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
               : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                   & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                   ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                   : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U] 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xff0fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                    & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U] 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xf0ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                    & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U] 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)) 
           | (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                    & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U] 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dataff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dataff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dataff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dataff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_errorff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_errorff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_errorff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 3U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_errorff__dout))));
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdff__dout));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 1U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 2U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdff__dout));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 2U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 4U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdff__dout));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_ldfwdtagff__dout));
    }
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwd_in) 
                     >> 3U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ldfwdtag_in) 
                     >> 6U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdff__dout));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_ldfwdtagff__dout));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 6U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate) 
                     >> 9U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
              & (((~ ((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                      | (6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                      & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                     & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                     & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                    & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | ((((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               & (((~ ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                     >> 3U))) | (6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 3U))))) 
                   | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                       & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                      & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                      & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                     & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | ((((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               & (((~ ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                     >> 6U))) | (6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 6U))))) 
                   | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                       & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                      & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                      & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                     & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | ((((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
               & (((~ ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                     >> 9U))) | (6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 9U))))) 
                   | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                       & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                      & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                      & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                     & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffffff0U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 3U)) & 
                             ((((~ ((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                    | (6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                                | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffffe0U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 5U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 4U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 3U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))))) 
                                | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffffc0U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 6U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 5U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 6U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))))) 
                                | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffff80U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               << 7U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 6U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 9U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))))) 
                                | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffff00U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 6U)) & 
                             ((((~ ((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                    | (6U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                                | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffffe00U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 9U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                         << 7U)) & 
                             ((((~ ((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                  >> 3U))) 
                                    | (6U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))))) 
                                | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                    & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                               | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                   & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                  & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                              << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffffc00U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 0xaU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 8U)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 6U))))) 
                                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffff800U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               << 0xbU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 9U)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 9U))))) 
                                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xfffff000U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 9U)) 
                             & ((((~ ((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                      | (6U == (7U 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))))) 
                                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffe000U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 0xaU)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 3U))))) 
                                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffffc000U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xeU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 0xbU)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 6U))))) 
                                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set)) 
           | (0xffff8000U & ((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               << 0xfU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                           << 0xcU)) 
                             & ((((~ ((0U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                      | (6U == (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 9U))))) 
                                  | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                      & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                     & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                     & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                    & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                << 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
            & (2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 1U) & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U)))) 
                      & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 2U) & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U)))) 
                      & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 3U) & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U)))) 
                      & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = ((2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 3U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 6U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 9U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = ((1U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           | ((2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 3U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 1U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 6U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 2U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> 9U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 9U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 3U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & (~ ((2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 3U))) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                               >> 1U))) << 1U)) & (
                                                   (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                   << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 6U))) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                               >> 2U))) << 2U)) & (
                                                   (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                   << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                     & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                               >> 3U))) << 3U)) & (
                                                   (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                   << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x10U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))) 
                           << 4U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                      << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x20U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 1U))) << 5U)) 
                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                          << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x40U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 2U))) << 6U)) 
                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                          << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x80U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                        & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 3U))) << 7U)) 
                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                          << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))) 
                            << 8U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                       << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x200U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 3U))) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                   >> 1U))) << 9U)) 
                        & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                           << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x400U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 6U))) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                   >> 2U))) << 0xaU)) 
                        & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                           << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x800U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                         & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                              >> 9U))) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                   >> 3U))) << 0xbU)) 
                        & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                           << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x1000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))) 
                             << 0xcU)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                          << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x2000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                    >> 1U))) << 0xdU)) 
                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                            << 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x4000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                    >> 2U))) << 0xeU)) 
                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                            << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)) 
           | (0x8000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                          & ((~ ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                    >> 3U))) << 0xfU)) 
                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                            << 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
        = (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m)) 
            << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m) 
            << 4U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_samedwff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_samedwff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_samedwff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_samedwff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_sideeffectff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_sideeffectff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_sideeffectff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_sideeffectff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_unsignff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_unsignff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_unsignff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_unsignff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_szff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_szff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 4U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_szff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 6U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_szff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_writeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_writeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_writeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_writeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_nomergeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_nomergeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_nomergeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_nomergeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualhiff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualhiff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualhiff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualhiff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in)
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualtagff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
                     >> 2U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualtagff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
                     >> 4U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualtagff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
                     >> 6U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualtagff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in)
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_byteenff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
                       >> 4U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_byteenff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
                       >> 8U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_byteenff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xfU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
                       >> 0xcU) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_byteenff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_addrff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_addrff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_addrff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_addrff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x20U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x40U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x100U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x200U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x400U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x800U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x1000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x2000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x4000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_in)) 
           | (0x8000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage_set) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rspage))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_obuf_c1_clken 
        = (1U & (((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
            & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any))) 
           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                  >> 6U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (1U & ((((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                     & ((((1U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                          | ((2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                             & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                            & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                        | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                            & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                           & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (2U & (((((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                      & ((((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 3U))) | 
                           ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 3U))) 
                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 1U)))) | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                                & (0U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                               & (1U 
                                                  == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                             & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (4U & (((((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                      & ((((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) | 
                           ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 6U))) 
                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 2U)))) | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                                & (0U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                               & (2U 
                                                  == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                             & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                            & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                     << 2U) | (0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (8U & (((((0U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                      & ((((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 9U))) | 
                           ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                  >> 3U)))) | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                                & (0U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                               & (3U 
                                                  == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                             & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                            & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))))) 
                     << 3U) | (0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x10U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 4U) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 3U)) & (((((1U == (7U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                          | ((2U == 
                                              (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 4U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x20U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 5U) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 4U)) & (((((1U == (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 3U))) 
                                          | ((2U == 
                                              (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 3U))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 1U)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 5U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x40U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 6U) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 5U)) & (((((1U == (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 6U))) 
                                          | ((2U == 
                                              (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 6U))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 2U)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 6U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x80U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                        >> 3U))) << 7U) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                            << 6U)) & (((((1U == (7U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                     >> 9U))) 
                                          | ((2U == 
                                              (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 9U))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 3U)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                             & (1U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                            & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                           & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                       << 7U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x100U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 8U) 
                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 6U)) & (((((1U == (7U 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                           | ((2U == 
                                               (7U 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                          | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (0U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 8U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x200U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 9U) 
                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 7U)) & (((((1U == (7U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 3U))) 
                                           | ((2U == 
                                               (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 1U)))) 
                                          | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (1U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 9U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x400U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 0xaU) 
                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 8U)) & (((((1U == (7U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 6U))) 
                                           | ((2U == 
                                               (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 6U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 2U)))) 
                                          | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (2U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 0xaU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x800U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                         >> 6U))) << 0xbU) 
                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                             << 9U)) & (((((1U == (7U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                      >> 9U))) 
                                           | ((2U == 
                                               (7U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                   >> 9U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 3U)))) 
                                          | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                              & (2U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                             & (3U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                             & (2U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                            & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                        << 0xbU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x1000U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 9U)) & (
                                                   ((((1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                                      | ((2U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                                     | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                                                         & (3U 
                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                                                        & (0U 
                                                           == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                                    | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                                        & (3U 
                                                           == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                                                   << 0xcU)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x2000U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 0xaU)) & 
                          (((((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 3U))) 
                              | ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 3U))) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                       >> 1U)))) | 
                             (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                               & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                            | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                               & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                           << 0xdU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x4000U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xeU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 0xbU)) & 
                          (((((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 6U))) 
                              | ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 6U))) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                       >> 2U)))) | 
                             (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                               & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                            | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                               & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                           << 0xeU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in)) 
           | (0x8000U & (((((0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                          >> 9U))) 
                            << 0xfU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                                        << 0xcU)) & 
                          (((((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                            >> 9U))) 
                              | ((2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                       >> 3U)))) | 
                             (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))) 
                               & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))) 
                              & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                            | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))) 
                               & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)))) 
                           << 0xfU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | (((~ (IData)((0U != (0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))))) 
               & (2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           >> 4U))))) 
                & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 3U)))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                >> 1U))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           >> 8U))))) 
                & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 6U)))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                >> 2U))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           >> 0xcU))))) 
                & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                >> 9U)))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                >> 3U))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 1U)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U)))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 2U)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 6U)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 3U)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 9U)))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 4U)) & (0U != (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 6U)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 6U)))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 7U)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 9U)))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 8U)) & (0U != (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 9U)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                           >> 3U)))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xbU)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 9U)))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xcU)) & (0U != (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xdU)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 3U)))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                   >> 0xeU)) & (0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                             >> 6U)))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffffffff00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                        ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m)
                                        : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data
                                            : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffffff00ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 8U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 8U)))))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffff00ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x10U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x10U)))))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffff00ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x18U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x18U)))))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffff00ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x20U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x20U)))))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffff00ffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x28U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x28U)))))))) 
              << 0x28U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xff00ffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x30U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x30U)))))))) 
              << 0x30U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = ((0xffffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m) 
           | ((QData)((IData)((0xffU & ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x38U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_corr_m 
                                                           >> 0x38U)))))))) 
              << 0x38U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffffffff00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                        ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m)
                                        : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data
                                            : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffffff00ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 8U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 8U)))))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffff00ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x10U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x10U)))))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffff00ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x18U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x18U)))))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffff00ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x20U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x20U)))))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffff00ffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x28U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 8U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x28U)))))))) 
              << 0x28U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xff00ffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x30U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x30U)))))))) 
              << 0x30U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = ((0xffffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m) 
           | ((QData)((IData)((0xffU & ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
                                                    >> 0x38U))
                                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
                                                >> 0x18U)
                                             : ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
                                                           >> 0x38U)))))))) 
              << 0x38U));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec;
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Enc_value 
        = ((6U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Enc_value)) 
           | (1U & (((((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                       >> 1U) | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                 >> 3U)) | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                            >> 5U)) 
                    | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                       >> 7U))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Enc_value 
        = ((5U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Enc_value)) 
           | (2U & ((((0x7ffffffeU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                      >> 1U)) | (0x3ffffffeU 
                                                 & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                                    >> 2U))) 
                     | (0x7fffffeU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                      >> 5U))) | (0x3fffffeU 
                                                  & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                                     >> 6U)))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Enc_value 
        = ((3U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Enc_value)) 
           | (4U & ((((0x3ffffffcU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                      >> 2U)) | (0x1ffffffcU 
                                                 & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                                    >> 3U))) 
                     | (0xffffffcU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                      >> 4U))) | (0x7fffffcU 
                                                  & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Dec_value) 
                                                     >> 5U)))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Vfuncout 
        = vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Enc_value;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0 
        = (3U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__65__Vfuncout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | ((((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
               & (2U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                             >> 4U) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 1U))) & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 3U)))) 
               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 1U))) << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                             >> 8U) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 2U))) & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 6U)))) 
               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 2U))) << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                             >> 0xcU) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 3U))) & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                >> 9U)))) 
               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 3U))) << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & (~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger))))))) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & (~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger))))))) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                        << 1U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                        << 1U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                        << 2U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                        << 2U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 0xcU)))))) 
                        << 3U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                     & ((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 0xcU)))))) 
                        << 3U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x10U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                           << 4U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x10U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  >> 4U) 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                           << 4U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x20U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                 >> 4U))))) 
                           << 5U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x20U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                 >> 4U))))) 
                           << 5U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x40U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  >> 4U) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 8U)))))) 
                           << 6U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x40U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  >> 4U) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 8U)))))) 
                           << 6U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x80U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                  >> 4U) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 0xcU)))))) 
                           << 7U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                          >> 1U)) << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x80U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                        & ((~ (IData)((0U != (0xfU 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                  >> 4U) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                    >> 0xcU)))))) 
                           << 7U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                          >> 1U)) << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   >> 8U) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                            << 8U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                           >> 2U)) 
                                       << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   >> 8U) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                            << 8U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                           >> 2U)) 
                                       << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x200U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   >> 8U) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 4U)))))) 
                            << 9U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                           >> 2U)) 
                                       << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x200U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   >> 8U) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 4U)))))) 
                            << 9U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                           >> 2U)) 
                                       << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x400U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                  >> 8U))))) 
                            << 0xaU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                             >> 2U)) 
                                         << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x400U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                  >> 8U))))) 
                            << 0xaU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                             >> 2U)) 
                                         << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x800U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                   >> 8U) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 0xcU)))))) 
                            << 0xbU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                             >> 2U)) 
                                         << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x800U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                         & ((~ (IData)((0U != (0xfU 
                                               & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                   >> 8U) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                     >> 0xcU)))))) 
                            << 0xbU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                             >> 2U)) 
                                         << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x1000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    >> 0xcU) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                             << 0xcU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x1000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    >> 0xcU) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                             << 0xcU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x2000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                             << 0xdU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x2000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 4U)))))) 
                             << 0xdU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x4000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                             << 0xeU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x4000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger) 
                                                      >> 8U)))))) 
                             << 0xeU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
           | (0x8000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                   >> 0xcU))))) 
                             << 0xfU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)) 
                                          << 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
           | (0x8000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                          & ((~ (IData)((0U != (0xfU 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)) 
                                                   >> 0xcU))))) 
                             << 0xfU)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)) 
                                          << 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_ld_data_corr_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                       >> 7U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m))) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U))) ? (IData)(((0x3fU >= 
                                          (0x18U & 
                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                            << 3U)))
                                          ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
                                             >> (0x18U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                                    << 3U)))
                                          : 0ULL)) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_ld_data_corr_r);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_m)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m
            : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m)) 
                << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m))));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                     >> 6U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in 
            = (3U & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                            >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                             >> 0xaU))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)
                ? ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r)) 
                   << 0x20U) : (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)
                ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r) 
                   << 4U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
            = (((0U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                 << 5U))) ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U))))) 
               | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                  (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                  >> (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                               << 5U))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                     >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in 
            = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                     >> (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                               << 1U))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U)))))
                ? ((QData)((IData)((((0U == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                << 5U)))
                                      ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U))))) 
                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                       (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                                       >> (0x1fU & 
                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                            << 5U)))))) 
                   << 0x20U) : (QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U))))) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U)))))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U)))))
                ? (0xf0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                             >> (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                         << 2U))) << 4U))
                : (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                           >> (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                       << 2U)))));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid))) 
            & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
           & ((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                              >> 2U)) != (0x3fffffffU 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U))))
                                               ? 0U
                                               : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (((IData)(2U) 
                                                        + 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                         << 5U)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                        << 5U)))))) 
                                             | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                (3U 
                                                 & (((IData)(2U) 
                                                     + 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                     << 5U))))))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec;
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Enc_value 
        = ((6U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Enc_value)) 
           | (1U & (((((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                       >> 1U) | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                 >> 3U)) | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                            >> 5U)) 
                    | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                       >> 7U))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Enc_value 
        = ((5U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Enc_value)) 
           | (2U & ((((0x7ffffffeU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                      >> 1U)) | (0x3ffffffeU 
                                                 & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                                    >> 2U))) 
                     | (0x7fffffeU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                      >> 5U))) | (0x3fffffeU 
                                                  & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                                     >> 6U)))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Enc_value 
        = ((3U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Enc_value)) 
           | (4U & ((((0x3ffffffcU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                      >> 2U)) | (0x1ffffffcU 
                                                 & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                                    >> 3U))) 
                     | (0xffffffcU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                      >> 4U))) | (0x7fffffcU 
                                                  & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Dec_value) 
                                                     >> 5U)))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Vfuncout 
        = vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Enc_value;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1 
        = (3U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__66__Vfuncout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = (((0xff000000U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)))) 
                            << 0x18U)) | ((0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                             >> 2U)))) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)))))))) 
           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 4U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 8U)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xcU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 1U)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 5U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 9U)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xdU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 2U)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 6U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 0xaU)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xeU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                            >> 3U)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                               >> 7U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                 >> 0xbU)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                                   >> 0xfU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (1U & ((0U != (0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo))) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (2U & (((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                     >> 4U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 1U)) 
                    << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (4U & (((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                     >> 8U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 2U)) 
                    << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (8U & (((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
                                     >> 0xcU))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                   >> 3U)) 
                    << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = (((0xff000000U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)))) 
                            << 0x18U)) | ((0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                             >> 2U)))) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)))))))) 
           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 4U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 8U)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xcU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 1U)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 5U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 9U)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xdU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 2U)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 6U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 0xaU)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xeU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                            >> 3U)))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                               >> 7U)))) 
                             << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                 >> 0xbU)))) 
                               << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                                   >> 0xfU)))) 
                                 << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (1U & ((0U != (0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi))) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (2U & (((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                     >> 4U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 1U)) 
                    << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (4U & (((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                     >> 8U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 2U)) 
                    << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (8U & (((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
                                     >> 0xcU))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                   >> 3U)) 
                    << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U] 
        = (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                    & (0U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                    ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U]))
                    : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                        : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                             >> 1U) & (0U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 5U))))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U] 
        = (IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     & (0U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                     ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U]))
                     : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                         : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                              >> 1U) & (0U == (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                >> 5U))))
                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                             : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                 ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                 : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U] 
        = (IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 1U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 2U))))
                    ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U]))
                    : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                        : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                             >> 1U) & (1U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 5U))))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U] 
        = (IData)((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 1U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 2U))))
                     ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U]))
                     : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                         : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                              >> 1U) & (1U == (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                >> 5U))))
                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                             : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                 ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                 : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U] 
        = (IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 2U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 4U))))
                    ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U]))
                    : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                        : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                             >> 1U) & (2U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 5U))))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U] 
        = (IData)((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 2U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 4U))))
                     ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U]))
                     : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                         : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                              >> 1U) & (2U == (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                >> 5U))))
                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                             : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                 ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                 : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U] 
        = (IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 3U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 6U))))
                    ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U]))
                    : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                        : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                             >> 1U) & (3U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 5U))))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U] 
        = (IData)((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 3U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 6U))))
                     ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U]))
                     : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                         : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                              >> 1U) & (3U == (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                >> 5U))))
                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                             : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                 ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                 : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[8U] 
        = (IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 4U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 8U))))
                    ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[4U]))
                    : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                        : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                             >> 1U) & (4U == (7U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 5U))))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[9U] 
        = (IData)((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 4U) & (0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 8U))))
                     ? (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[4U]))
                     : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rdata
                         : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                              >> 1U) & (4U == (7U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                >> 5U))))
                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata
                             : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid)
                                 ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                                 : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data)))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in 
        = ((((((((0x1fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in 
                                 >> 3U)) == (0x1fffffffU 
                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr 
                                                >> 3U))) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                    ? (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 9U) & (0U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r))) 
                        | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                            >> 0xaU) & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r))) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                          >> 0xbU)) : (((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in)) 
                                        | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in) 
                                           & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in))) 
                                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in) 
                                           >> 1U) & 
                                          (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in)))))))) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in))) 
            & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                  >> 0xbU))) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend) 
                                   & (~ ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                                         & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en 
        = (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend)))) 
              | (((((2U == ((0xbU >= (0xfU & ((IData)(3U) 
                                              * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                             ? (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                      >> (0xfU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                             : 0U)) & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                         >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                  & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend)))) 
                 & ((((~ ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                           >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)) 
                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
                      | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
                     | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                        >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en)))) 
             & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)
                   ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))
                       ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)
                           ? (IData)(vlTOPp->tb_top__DOT__lsu_axi_wready)
                           : (IData)(vlTOPp->tb_top__DOT__lsu_axi_awready))
                       : ((IData)(vlTOPp->tb_top__DOT__lsu_axi_awready) 
                          & (IData)(vlTOPp->tb_top__DOT__lsu_axi_wready)))
                   : (IData)(vlTOPp->tb_top__DOT__lsu_axi_arready)) 
                 | (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid))) 
                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
            & (~ (((((((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any)) 
                       & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
                      & (7U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))) 
                     & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 2U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                                          >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en))))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r)
                ? ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r)) 
                   << 0x20U) : (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r)
                ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r) 
                   << 4U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                    << 5U)))))
                ? ((QData)((IData)((((0U == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                << 5U)))
                                      ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                      << 5U))))) 
                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                       (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                       >> (0x1fU & 
                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                            << 5U)))))) 
                   << 0x20U) : (QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                       << 5U))))) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                       << 5U)))))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (((IData)(2U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                    << 5U)))))
                ? (0xf0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                             >> (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                         << 2U))) << 4U))
                : (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                           >> (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                       << 2U)))));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en 
        = ((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                   != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)) 
                  & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                 & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
                & (2U == ((0xbU >= (0xfU & ((IData)(3U) 
                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                           ? (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                    >> (0xfU & ((IData)(3U) 
                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                           : 0U))) & (2U == ((0xbU 
                                              >= (0xfU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))))
                                              ? (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))))
                                              : 0U))) 
              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                    >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                   >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
            & ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                     >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                    >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                      >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                  >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffffff00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo
                                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffff00ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
                                            >> 8U) : 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                         >> 8U))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffff00ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
                                            >> 0x10U)
                                         : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                            >> 0x10U))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffff00ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_lo 
                                            >> 0x18U)
                                         : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                            >> 0x18U))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_lo)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffffff00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi
                                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffff00ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
                                            >> 8U) : 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                         >> 8U))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffff00ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
                                            >> 0x10U)
                                         : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                            >> 0x10U))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffff00ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rpipe_hi 
                                            >> 0x18U)
                                         : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                            >> 0x18U))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_hi) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_hi_hi)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U])))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U])))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U])))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U])))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[9U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[8U])))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_data_dff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wren_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busm_clken)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr_in;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
    }
    if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz_in;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_timerff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busm_clken)
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)
                      ? 0U : (((0U < (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                               & (7U > (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))
                               ? ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))
                               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)));
    if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r)
                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend_in 
        = (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend_in)))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_pend)) 
             & (~ ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rvalid) 
                   & ((IData)(vlTOPp->tb_top__DOT__lsu_axi_rid) 
                      == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rdrsp_tag))))) 
            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_cmd_sent) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffff00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | (IData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in))
                                        ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in)
                                        : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffff00ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 1U))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 8U))
                                         : (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 8U)))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffff00ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 2U))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x10U))
                                         : (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x10U)))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffff00ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 3U))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x18U))
                                         : (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x18U)))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffff00ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 4U))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x20U))
                                         : (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x20U)))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffff00ffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 5U))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x28U))
                                         : (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x28U)))))) 
              << 0x28U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xff00ffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 6U))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x30U))
                                         : (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x30U)))))) 
              << 0x30U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 7U))
                                         ? (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x38U))
                                         : (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x38U)))))) 
              << 0x38U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xf7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 4U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x20U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 5U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x40U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 6U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 7U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
                 | (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 1U) | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 2U) | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 3U) | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_m 
        = ((0x3fU >= (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                               << 3U))) ? ((((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo))) 
                                           >> (0x18U 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                                  << 3U)))
            : 0ULL);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
                 | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 1U) | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 2U) | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 3U) | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            >> 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__din_new 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst)) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busm_clken) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_obuf_c1_clken) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_external_m) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U))) ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_m)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__bus_read_data_r);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_external_m)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_m)
            : (IData)(((0x3fU >= (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                           << 3U)))
                        ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
                           >> (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                        << 3U))) : 0ULL)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_m 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_m) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_m)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
               >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__is_sideeffects_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_result_m 
        = (((((0xffU & ((- (IData)((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                           >> 5U) & 
                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                           >> 0xbU))))) 
                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)) 
              | (0xffffU & ((- (IData)((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 5U) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                 >> 0xaU))))) 
                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m))) 
             | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                      >> 5U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                 >> 0xbU))))) 
                & ((0xffffff00U & ((- (IData)((1U & 
                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
                                                >> 7U)))) 
                                   << 8U)) | (0xffU 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)))) 
            | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                     >> 5U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                >> 0xaU))))) 
               & ((0xffff0000U & ((- (IData)((1U & 
                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m 
                                               >> 0xfU)))) 
                                  << 0x10U)) | (0xffffU 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m)))) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                >> 9U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__L2U1_Plus1_0__DOT__lsu_ld_datafn_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_m 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
            | (- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m)))))) 
           & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m))
               ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_result_m
               : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_pre_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_bypass_data_d 
        = (((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d)))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_r_raw) 
             | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d) 
                                  >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_result_m)) 
            | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d) 
                                 >> 2U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_i0_result_x)) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_bypass_en_d) 
                                >> 3U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_data_d 
        = (((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d)))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_r_raw) 
             | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d) 
                                  >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_result_m)) 
            | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d) 
                                 >> 2U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_i0_result_x)) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_bypass_en_d) 
                                >> 3U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 0U;
    if ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                       >> 9U)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
            = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        if ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                           >> 0x13U)))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = (0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen));
        } else {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m) 
                      << 1U));
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
            = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        if ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                           >> 0x1dU)))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = (0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen));
        } else {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m) 
                      << 2U));
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
            = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen));
    } else {
        if ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                           >> 0x27U)))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen));
        } else {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen 
                = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen)) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m) 
                      << 3U));
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__found = 1U;
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
              == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                           >> 0xaU))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                             >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 9U))) & ((0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam)) 
                                      == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 9U))) & ((0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam)) 
                                      == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x13U))) & ((0x1fU & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0xaU))) 
                                         == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x13U))) & ((0x1fU & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0xaU))) 
                                         == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) & ((0x1fU & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x14U))) 
                                         == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x1dU))) & ((0x1fU & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x14U))) 
                                         == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) & ((0x1fU & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x1eU))) 
                                         == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 0xaU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                          >> 0x27U))) & ((0x1fU & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                           >> 0x1eU))) 
                                         == (0x1fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                >> 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
        = (IData)(((0x3fU >= (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                       << 3U))) ? ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_m)) 
                                                   << 
                                                   (0x18U 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                                       << 3U)))
                    : 0ULL));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
        = (IData)((((0x3fU >= (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                        << 3U))) ? 
                    ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_m)) 
                     << (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                  << 3U))) : 0ULL) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m 
        = (((0xffff0000U & (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 9U)))) 
                             << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_m)) 
            | ((0xff00U & (((- (IData)((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                               >> 0xaU) 
                                              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                 >> 9U))))) 
                            << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_m)) 
               | (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_m))) 
           & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
        = ((((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_bypass_en_d)) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d)))) 
             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d) 
            | ((- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_bypass_en_d))))) 
               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_immed_d)) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_bypass_en_d))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_bypass_data_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__muldiv_rs1_d 
        = (((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d)))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_data_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
        = (((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_data_d) 
             | (0xfffffffeU & ((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                    >> 0xaU))))) 
                               & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                           >> 1U)) 
                                  << 1U)))) | ((- (IData)(
                                                          ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_debug_wdata_rs1_d)))) 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg)) 
           | ((- (IData)((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_debug_wdata_rs1_d))) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d)))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
        = ((0xfffffffc00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam) 
           | (IData)((IData)((0x3ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw)))));
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
            = (0xfffffffdffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xfffffffc00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x200ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffffffeffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xffffffff9fULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 5U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xffffffffe0ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                      | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                          & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                       >> 4U)) == (0x1fU 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam)))) 
                         & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                    >> 8U))))) ? (0xfffffffdffULL 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xfffffffc00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
                   | (IData)((IData)((0x3ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam))))));
    }
    if ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                               >> 5U))))) & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                     >> 9U)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x100ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffffffdffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
        = ((0xfffff003ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0xaU))))) 
              << 0xaU));
    if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
            = (0xfffff7ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xfffff003ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x80000ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffffbffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfffffe7fffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 0xfU));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xffffff83ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd)) 
                  << 0xaU));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 1U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0xaU))))) 
                                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x12U)))))
                ? (0xfffff7ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xfffff003ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0xaU))))) 
                      << 0xaU)));
    }
    if ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                               >> 0xfU))))) & (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                       >> 0x13U)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x40000ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xfffff7ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
        = ((0xffc00fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0x14U))))) 
              << 0x14U));
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
            = (0xffdfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
        = (0xffc00fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x20000000ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xffefffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfff9ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 0x19U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xfffe0fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd)) 
                  << 0x14U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 2U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0x14U))))) 
                                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x1cU)))))
                ? (0xffdfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0xffc00fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0x14U))))) 
                      << 0x14U)));
    }
    if ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                               >> 0x19U))))) & (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                        >> 0x1dU)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x10000000ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xffdfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
        = ((0x3fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam) 
           | ((QData)((IData)((0x3ffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                 >> 0x1eU))))) 
              << 0x1eU));
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
            = (0x7fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
        = (0x3fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x8000000000ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0xbfffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xe7ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)) 
                  << 0x23U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((0xf83fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd)) 
                  << 0x1eU));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                       >> 3U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r) 
                                  & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                                               >> 4U)) 
                                     == (0x1fU & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                          >> 0x1eU))))) 
                                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                            >> 0x26U)))))
                ? (0x7fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in)
                : ((0x3fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                         >> 0x1eU))))) 
                      << 0x1eU)));
    }
    if ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r) 
             == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                               >> 0x23U))))) & (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                                        >> 0x27U)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x4000000000ULL | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
            = (0x7fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_raw_d 
        = (1U & ((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0x13U) & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout) 
                                          | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout) 
                                         >> 0x15U)) 
                          | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                             >> 5U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                        >> 4U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                   >> 6U)) 
                       | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xbU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout)) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                    | (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                         >> 3U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i))) 
                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__lsu_idle)))) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall)) 
                  | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                          >> 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb) 
                                     == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 0xaU)))) 
                     | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                            >> 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb) 
                                       == (0x1fU & 
                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U)))))) 
                 | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                     >> 5U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                               >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
        = (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U))))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 3U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
        = (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU))))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 9U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
        = (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U))))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                              >> 0xfU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
        = (((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U))))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__ldst_addr_trigger_m) 
           | ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                              >> 0x15U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bm 
        = ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                          >> 7U))) ? (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0xdU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x10U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x11U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x12U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x13U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x16U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x17U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x18U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x19U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1aU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1bU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1dU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1eU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop) 
                    + (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                             >> 0x1fU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__lout 
        = ((((((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_csr_ren_d))) 
                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_csr_rddata_d) 
                | (((- (IData)((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                               >> 0x12U)) 
                                      & (~ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                    >> 0x1bU))))))) 
                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d) 
                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)) 
               | ((- (IData)((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                             >> 0x11U)) 
                                    & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                  >> 0x1bU))))))) 
                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                     | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
              | ((- (IData)((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                            >> 0x10U)) 
                                   & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                 >> 0x1bU))))))) 
                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                    ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
             | (((- (IData)((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                            >> 0x12U)) 
                                   & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                              >> 0x1bU)))))) 
                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d) 
                & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
            | ((- (IData)((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                          >> 0x11U)) 
                                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                            >> 0x1bU)))))) 
               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                  | (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
           | ((- (IData)((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                         >> 0x10U)) 
                                & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                           >> 0x1bU)))))) 
              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                 ^ (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__shift_extend 
        = ((0x7fffffff00000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__shift_extend) 
           | (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__shift_extend 
        = ((0xffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__shift_extend) 
           | ((QData)((IData)((0x7fffffffU & (((((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                        >> 0xdU))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                  >> 0x1fU))))) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                          >> 0xfU))))) 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                         >> 0x1fU))))) 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                        >> 0x1eU))))) 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_a_reverse_ff 
        = ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                           << 0x1fU)) | ((0x40000000U 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                             << 0x1dU)) 
                                         | ((0x20000000U 
                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                               << 0x11U)) 
                                                           | ((0x800000U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                  << 0xfU)) 
                                                              | ((0x400000U 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                     << 0xdU)) 
                                                                 | ((0x200000U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                        << 0xbU)) 
                                                                    | ((0x100000U 
                                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                           << 9U)) 
                                                                       | ((0x80000U 
                                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                              << 7U)) 
                                                                          | ((0x40000U 
                                                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                << 5U)) 
                                                                             | ((0x20000U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__eq 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
           == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__zba_a_in 
        = ((((0xfffffffeU & ((- (IData)((1U & (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                       >> 0x16U))))) 
                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                << 1U))) | (0xfffffffcU 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                      >> 0x15U))))) 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                  << 2U)))) 
            | (0xfffffff8U & ((- (IData)((1U & (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                        >> 0x14U))))) 
                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                 << 3U)))) | ((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                        >> 0x13U)))))) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_array__BRA__0__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in) 
                                       ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout))))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in)
                      : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__0__KET____DOT__cam_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_array__BRA__1__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0xaU)) 
                                       ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0xaU)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__1__KET____DOT__cam_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_array__BRA__2__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0x14U)) 
                                       ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0x14U)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__2__KET____DOT__cam_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_array__BRA__3__KET____DOT__cam_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3ffU & ((0U != (0x3ffU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
                                                >> 0x1eU)) 
                                       ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout))))
                      ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in 
                                 >> 0x1eU)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__cam_array__BRA__3__KET____DOT__cam_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_raw_d))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                  >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_lsu_valid_raw_d 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d) 
                    & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U] 
                        >> 9U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U] 
                                  >> 8U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any))) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_raw_d))) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                    >> 5U)));
}
