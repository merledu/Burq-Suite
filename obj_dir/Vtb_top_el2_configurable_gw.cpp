// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top_el2_configurable_gw.h"
#include "Vtb_top__Syms.h"

//==========

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__32(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__32\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 2U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 1U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__33(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__33\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 4U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 2U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__34(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__34\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 6U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 3U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__35(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__35\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 8U))) | ((IData)(this->__PVT__gw_int_pending) 
                                             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 4U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__36(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__36\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0xaU))) | ((IData)(this->__PVT__gw_int_pending) 
                                               & (~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 5U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__37(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__37\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0xcU))) | ((IData)(this->__PVT__gw_int_pending) 
                                               & (~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 6U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__38(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__38\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0xeU))) | ((IData)(this->__PVT__gw_int_pending) 
                                               & (~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                   >> 7U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__39(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__39\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x10U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 8U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__40(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__40\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x12U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 9U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__41(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__41\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x14U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xaU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__42(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__42\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x16U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xbU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__43(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__43\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x18U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xcU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__44(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__44\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x1aU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xdU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__45(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__45\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x1cU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xeU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__46(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__46\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x1eU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0xfU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__47(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__47\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x20U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x10U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__48(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__48\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x22U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x11U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__49(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__49\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x24U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x12U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__50(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__50\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x26U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x13U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__51(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__51\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x28U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x14U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__52(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__52\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x2aU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x15U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__53(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__53\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x2cU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x16U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__54(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__54\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x2eU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x17U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__55(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__55\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x30U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x18U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__56(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__56\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x32U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x19U)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__57(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__57\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x34U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1aU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__58(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__58\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x36U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1bU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__59(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__59\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x38U))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1cU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__60(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__60\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x3aU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1dU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__61(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__61\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x3cU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1eU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}

VL_INLINE_OPT void Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__62(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_sequent__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__62\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__sync_inst__DOT__din_ff1 = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                            & (IData)(this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__gw_int_pending = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                   & (IData)(this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->__PVT__extintsrc_req_sync = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__core_rst_l) 
                                       & (IData)(this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din));
    this->sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken)) 
           & (IData)(this->__PVT__sync_inst__DOT__din_ff1));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken) {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__sync_inst__DOT__din_ff1;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(this->__PVT__extintsrc_req_sync) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                 >> 0x3eU))) | ((IData)(this->__PVT__gw_int_pending) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we 
                                                    >> 0x1fU)))));
    } else {
        this->sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = this->__PVT__extintsrc_req_sync;
        this->int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(this->__PVT__gw_int_pending));
    }
}
