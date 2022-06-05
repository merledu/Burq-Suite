// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top_el2_configurable_gw.h"
#include "Vtb_top__Syms.h"

//==========

VL_CTOR_IMP(Vtb_top_el2_configurable_gw) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_top_el2_configurable_gw::__Vconfigure(Vtb_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtb_top_el2_configurable_gw::~Vtb_top_el2_configurable_gw() {
}

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__1(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__1\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__2(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__2\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__3(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__3\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__4(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__4\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__5(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__5\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__6(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__6\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__7(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__7\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__8(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__8\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__9(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__9\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__10(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__10\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__11(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__11\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__12(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__12\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__13(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__13\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__14(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__14\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__15(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__15\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__16(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__16\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__17(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__17\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__18(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__18\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__19(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__19\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__20(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__20\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__21(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__21\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__22(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__22\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__23(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__23\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__24(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__24\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__25(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__25\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__26(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__26\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__27(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__27\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__28(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__28\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__29(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__1__KET____DOT__gw_inst__29\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__30(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__2__KET____DOT__gw_inst__30\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__31(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_settle__TOP__tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__31\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtb_top_el2_configurable_gw::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_el2_configurable_gw::_ctor_var_reset\n"); );
    // Body
    gw_clk = VL_RAND_RESET_I(1);
    rawclk = VL_RAND_RESET_I(1);
    clken = VL_RAND_RESET_I(1);
    rst_l = VL_RAND_RESET_I(1);
    extintsrc_req = VL_RAND_RESET_I(1);
    meigwctrl_polarity = VL_RAND_RESET_I(1);
    meigwctrl_type = VL_RAND_RESET_I(1);
    meigwclr = VL_RAND_RESET_I(1);
    extintsrc_req_config = VL_RAND_RESET_I(1);
    __PVT__gw_int_pending = VL_RAND_RESET_I(1);
    __PVT__extintsrc_req_sync = VL_RAND_RESET_I(1);
    __PVT__sync_inst__DOT__din_ff1 = VL_RAND_RESET_I(1);
    sync_inst__DOT__sync_ff1__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    sync_inst__DOT__sync_ff2__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
    int_pend_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din = VL_RAND_RESET_I(1);
}
