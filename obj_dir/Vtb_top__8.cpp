// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"

VL_INLINE_OPT void Vtb_top::_combo__TOP__35(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top::_combo__TOP__35\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1327[3];
    WData/*255:0*/ __Vtemp1330[8];
    WData/*255:0*/ __Vtemp1331[8];
    // Body
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U]) 
                 == (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 1U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 1U)))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 2U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 2U)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 3U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 3U)))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 4U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 4U)))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 5U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 5U)))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 6U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 6U)))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 7U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 7U)))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 8U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 8U)))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 9U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 9U)))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xaU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xaU)))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xbU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xbU)))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xcU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xcU)))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xdU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xdU)))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xeU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xeU)))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xfU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xfU)))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x10U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x11U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x12U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x13U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x14U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x15U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x16U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x17U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x18U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x19U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1aU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1aU)))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1bU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1bU)))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1cU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1cU)))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1dU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1dU)))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1eU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1fU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                        >> 6U)) == (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7fffffeU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                              >> 5U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                       >> 7U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                         >> 1U))) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 8U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 2U)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 9U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 3U)))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                   << 0x1aU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xaU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 4U)))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xbU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 5U)))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xcU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 6U)))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xdU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 7U)))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xeU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 8U)))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xfU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 9U)))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x10U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x11U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x12U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x13U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x14U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x15U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x16U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x17U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x18U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x19U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1aU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1bU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1cU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1dU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1eU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1fU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
                  == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                            >> 0x1aU)))) << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 1U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 2U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 3U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 4U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1eU)))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 5U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1fU)))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                        >> 0xcU)) == (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x1ffffeU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                             >> 0xbU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                         << 1U))) | 
              (((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                       >> 0xdU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 1U))) 
               << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xeU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 2U)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xfU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 3U)))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                   << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x10U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 4U)))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x11U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 5U)))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x12U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 6U)))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x13U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 7U)))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x14U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 8U)))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x15U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 9U)))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x16U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x17U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x18U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x19U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1aU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1bU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1cU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1dU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1eU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1fU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
                  == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                            >> 0x14U)))) << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 1U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 2U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 3U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 4U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x18U)))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 5U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x19U)))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 6U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1aU)))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 7U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 8U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 9U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xaU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1eU)))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xbU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1fU)))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                        >> 0x12U)) == (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7ffeU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                           >> 0x11U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                       >> 0x13U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                            >> 1U))) 
               << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x14U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 2U)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x15U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 3U)))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                   << 0xeU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x16U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 4U)))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x17U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 5U)))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x18U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 6U)))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x19U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 7U)))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1aU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 8U)))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1bU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 9U)))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1cU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1dU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1eU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1fU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
                  == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                            >> 0xeU)))) << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 1U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0xfU)))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 2U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x10U)))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 3U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x11U)))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 4U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x12U)))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 5U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x13U)))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 6U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x14U)))) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 7U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 8U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 9U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xaU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x18U)))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xbU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x19U)))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xcU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1aU)))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xdU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1bU)))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xeU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1cU)))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xfU)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1dU)))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x10U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x11U)) == (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__sout 
        = ((IData)((0x7fffffffffffffffULL & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__shift_extend 
                                             >> (0x1fU 
                                                 & (((((((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                                >> 0xfU))))) 
                                                         & (- vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                                >> 0xeU))))) 
                                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                                >> 0xdU))))) 
                                                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                                >> 0x1fU))))) 
                                                         & (- vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                               >> 0x1eU))))) 
                                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                              >> 0x17U))))) 
                                                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))))) 
           & ((IData)(0xffffffffU) << (0x1fU & ((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                       >> 0xfU))))) 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os 
        = (((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                      >> 0x29U))))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d) 
           | ((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                        >> 0x28U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_a_reverse_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__found = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i = 0U;
    while ((VL_GTS_III(1,32,32, 0x20U, vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__found)))) {
        if ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os)) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__found = 1U;
        } else {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc 
                = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc)));
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os 
                = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_lzd_os 
                   << 1U);
        }
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__unnamedblk1__DOT__i);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__aout 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__zba_a_in 
            + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bm) 
           + (IData)((QData)((IData)((1U & (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                    >> 7U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p 
        = ((0x1ffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
                            << 2U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                      >> 3U))) | ((2U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                        >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
        = ((0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p) 
           | ((0xffc00000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
                               << 0x16U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                            << 0xdU))) 
              | ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                               << 0xdU)) | ((0x100000U 
                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                << 0xdU)) 
                                            | ((0x80000U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                   << 0xdU)) 
                                               | ((0x40000U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                      << 7U)) 
                                                  | ((0x20000U 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                         << 7U)) 
                                                     | ((0x10000U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                            << 8U)) 
                                                        | ((0x8000U 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                               << 8U)) 
                                                           | ((0x4000U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                  << 8U)) 
                                                              | ((0x2000U 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                     >> 6U)) 
                                                                 | ((0x1000U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                        >> 6U)) 
                                                                    | (0xc00U 
                                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                                          << 7U))))))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_exulegal_decode_d) 
           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
              >> 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d 
        = (0xfffU & ((((- (IData)((1U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                              >> 5U)) 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                             >> 7U)) 
                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                            >> 9U))))) 
                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                          >> 0x14U)) | ((- (IData)(
                                                   (1U 
                                                    & (((~ 
                                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                          >> 5U)) 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                           >> 7U)) 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                          >> 8U))))) 
                                        & ((0xfe0U 
                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                 >> 7U))))) 
                     & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_lsu_valid_raw_d)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                           >> 0xfU))))) 
           & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_lsu_valid_raw_d) 
                  | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                       & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                             >> 4U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m) 
                                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_m))) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                        >> 6U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r_ff))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_full_any 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_d) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_lsu_valid_raw_d))
            ? (3U <= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any))
            : (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | (0xffffffffU == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec)) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec)) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec)) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__lt 
        = (1U & (((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                              >> 5U))) & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__aout 
                                           >> 0x1fU) 
                                          ^ ((((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                   >> 0x1fU)) 
                                               & (~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bm 
                                                   >> 0x1fU))) 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__aout 
                                                 >> 0x1fU)) 
                                             | (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bm) 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__aout 
                                                    >> 0x1fU)))))) 
                 | ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                             >> 5U)) & (~ (IData)((1ULL 
                                                   & ((((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__zba_a_in)) 
                                                        + (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bm))) 
                                                       + (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                                >> 7U)))))) 
                                                      >> 0x20U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_b_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                   >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_twos_comp)))
            ? (((- (QData)((IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_twos_comp)))))) 
                & (((QData)((IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                               >> 1U)) 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
                                              >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
               | ((- (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_twos_comp))) 
                  & (((QData)((IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                >> 0x10U))))) 
                      << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out)))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_b_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_a_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                   >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state)))
            ? ((((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_shift)) 
                                   & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                         >> 0xdU)))))) 
                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__muldiv_rs1_d) 
                | (0xfffffff0U & ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_shift))) 
                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                     << 4U)))) | ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                 >> 0xdU)))) 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__ar_shifted[0U]))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__control_in 
        = ((4U & ((0x1fffcU & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                    >> 2U)) << 2U) 
                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                  >> 0xfU))) | (4U 
                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                                         >> 1U)) 
                                                       << 2U)) 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__muldiv_rs1_d 
                                                      >> 0x1dU))))) 
           | ((2U & ((0x1fffeU & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                       >> 2U)) << 1U) 
                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                     >> 0xfU))) | (2U 
                                                   & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                                        >> 1U) 
                                                       & ((~ 
                                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
                                                         >> 0x1eU))))) 
              | (1U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                            >> 2U)) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                       >> 0xfU)) | 
                       (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                         >> 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__rq_enable 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                   >> 2U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                             >> 0x12U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
           & (- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
                               >> 0x16U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__muldiv_rs1_d 
           & (- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
                               >> 0x16U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
           & (- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
                               >> 0x16U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_read 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_write 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = (0x10U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3fbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3f7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | (0x80U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write)) 
                       << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x37ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_sz)) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3bffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_sz)) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3dffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_sz)) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x3effU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d)) 
           | ((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_sz)) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_store_stall_any 
        = (((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_d)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_lsu_valid_raw_d))
              ? (4U <= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any))
              : (3U <= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any))) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_full_any)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m)) 
           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                       >> 4U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
               & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                    >> 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                              >> 6U)) | (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 2U) & 
                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                           >> 7U)) 
                                         & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 5U))))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m)) 
           | (0xfffffffeU & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                       >> 4U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
                               << 1U) & ((0xfffffeU 
                                          & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              >> 8U) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                >> 5U))) 
                                         | (0x1fffffeU 
                                            & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 7U) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 6U)) 
                                               & ((~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                    >> 0xbU)) 
                                                  << 1U))))) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m)) 
           | (0xfffffffcU & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                       >> 4U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
                               << 2U) & ((0x7fffcU 
                                          & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                >> 4U))) 
                                         | (0xffffcU 
                                            & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 5U)) 
                                               & ((~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                    >> 0x11U)) 
                                                  << 2U))))) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m)) 
           | (0xfffffff8U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                       >> 4U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__trigger_enable)) 
                               << 3U) & ((0x3ff8U & 
                                          ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                            >> 0x12U) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                              >> 3U))) 
                                         | (0x7ff8U 
                                            & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                   >> 4U)) 
                                               & ((~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                    >> 0x17U)) 
                                                  << 3U))))) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_minmax_sel_a 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__lt)) 
                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                            >> 0x24U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_misc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                      >> 2U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                >> 0x12U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state)) 
                  | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                     >> 7U))) ? ((0x40000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__div_p) 
                                               << 0x10U) 
                                              & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)) 
                                                 << 0x12U))) 
                                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__control_in) 
                                     << 0xfU) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case) 
                                                  << 0xeU) 
                                                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_enable) 
                                                     << 0xdU) 
                                                    | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_enable)
                                                          ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_decode)
                                                          : 0U) 
                                                        << 8U) 
                                                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__finish) 
                                                           << 7U) 
                                                          | (0x7fU 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & ((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 0x12U) 
                                                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state)) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__finish))) 
                                                                                & (~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                                >> 7U))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel))) 
                                                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_enable)))))) 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                    + 
                                                                    (0x1fU 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                        >> 8U))))))))))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout);
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__rq_enable) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_q_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((((- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                      >> 0x12U))))) 
                 & ((0xfffffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff 
                                    << 4U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case))) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum))) 
               | (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case))));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_q_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__clmul_raw_d 
        = (((((((((((((((((((((((((((((((((- (QData)((IData)(
                                                             (1U 
                                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)))) 
                                          & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in))) 
                                         ^ ((- (QData)((IData)(
                                                               (1U 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                   >> 1U))))) 
                                            & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                               << 1U))) 
                                        ^ ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                  >> 2U))))) 
                                           & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                              << 2U))) 
                                       ^ ((- (QData)((IData)(
                                                             (1U 
                                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                 >> 3U))))) 
                                          & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                             << 3U))) 
                                      ^ ((- (QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                >> 4U))))) 
                                         & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                            << 4U))) 
                                     ^ ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                               >> 5U))))) 
                                        & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                           << 5U))) 
                                    ^ ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                              >> 6U))))) 
                                       & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                          << 6U))) 
                                   ^ ((- (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                             >> 7U))))) 
                                      & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                         << 7U))) ^ 
                                  ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                          >> 8U))))) 
                                   & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                      << 8U))) ^ ((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                         >> 9U))))) 
                                                  & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                     << 9U))) 
                                ^ ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                          >> 0xaU))))) 
                                   & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                      << 0xaU))) ^ 
                               ((- (QData)((IData)(
                                                   (1U 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                       >> 0xbU))))) 
                                & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                   << 0xbU))) ^ ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                        >> 0xcU))))) 
                                                 & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                    << 0xcU))) 
                             ^ ((- (QData)((IData)(
                                                   (1U 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                       >> 0xdU))))) 
                                & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                   << 0xdU))) ^ ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                        >> 0xeU))))) 
                                                 & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                    << 0xeU))) 
                           ^ ((- (QData)((IData)((1U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                     >> 0xfU))))) 
                              & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                 << 0xfU))) ^ ((- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                      >> 0x10U))))) 
                                               & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                  << 0x10U))) 
                         ^ ((- (QData)((IData)((1U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                   >> 0x11U))))) 
                            & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                               << 0x11U))) ^ ((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                     >> 0x12U))))) 
                                              & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                                 << 0x12U))) 
                       ^ ((- (QData)((IData)((1U & 
                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                               >> 0x13U))))) 
                          & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                             << 0x13U))) ^ ((- (QData)((IData)(
                                                               (1U 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                   >> 0x14U))))) 
                                            & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                               << 0x14U))) 
                     ^ ((- (QData)((IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                  >> 0x15U))))) 
                        & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                           << 0x15U))) ^ ((- (QData)((IData)(
                                                             (1U 
                                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                                 >> 0x16U))))) 
                                          & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                             << 0x16U))) 
                   ^ ((- (QData)((IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                >> 0x17U))))) 
                      & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                         << 0x17U))) ^ ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                               >> 0x18U))))) 
                                        & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                           << 0x18U))) 
                 ^ ((- (QData)((IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                              >> 0x19U))))) 
                    & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                       << 0x19U))) ^ ((- (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                             >> 0x1aU))))) 
                                      & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                         << 0x1aU))) 
               ^ ((- (QData)((IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                            >> 0x1bU))))) 
                  & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                     << 0x1bU))) ^ ((- (QData)((IData)(
                                                       (1U 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                           >> 0x1cU))))) 
                                    & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                       << 0x1cU))) 
             ^ ((- (QData)((IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                          >> 0x1dU))))) 
                & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                   << 0x1dU))) ^ ((- (QData)((IData)(
                                                     (1U 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                         >> 0x1eU))))) 
                                  & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
                                     << 0x1eU))) ^ 
           ((- (QData)((IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                      >> 0x1fU))))) 
            & ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)) 
               << 0x1fU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__rs1_ext_in 
        = (((QData)((IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                    >> 0x15U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in 
                                                 >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs1_in)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__rs2_ext_in 
        = (((QData)((IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                    >> 0x14U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in 
                                                 >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__rs2_in)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d) 
             & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_raw_d) 
                    | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                        >> 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_store_stall_any) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                   | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                       >> 9U) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_full_any) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r_ff)) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any)))))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                 >> 1U)));
    if ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p)) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__i_bitmanip_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((QData)((IData)((1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                         >> 0x10U) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                           >> 0xfU)) 
                                       | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                          >> 0xeU))))) 
                << 0x20U) | (QData)((IData)(((((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                                              >> 0x10U)))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__clmul_raw_d)) 
                                              | (0x7fffffffU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                                                   >> 0xfU)))) 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__clmul_raw_d 
                                                               >> 0x20U))))) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                                               >> 0xeU)))) 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__clmul_raw_d 
                                                           >> 0x1fU)))))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__i_a_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((QData)((IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_mul__mul_p 
                                       >> 0x13U)))) 
                << 0x21U) | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__rs1_ext_in);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__i_b_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__rs2_ext_in;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__i_bitmanip_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT____Vcellout__i_bitmanip_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__i_a_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT____Vcellout__i_a_x_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__i_b_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_mul__DOT__rs2_x;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1f0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d) 
               & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d)))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                 >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                  >> 1U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_illegal_inst);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__misc1ff__din 
        = ((0x80U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_leak_one_r) 
                      << 7U) | (0xffffff80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                               & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                  << 7U))))) 
           | ((0x40U & ((0x7fffffc0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d) 
                                         << 6U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                   >> 1U))) 
                        | (0xffffffc0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                          & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                             << 6U))))) 
              | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start) 
                  << 5U) | ((0x10U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                                        << 4U) | (0xfffffff0U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))) 
                                      & ((~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_r))) 
                                             | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                 >> 4U) 
                                                & (0U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data 
                                                       >> 1U)))))) 
                                         << 4U))) | 
                            (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                              << 3U) | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                               >> 1U)) 
                                        | ((2U & ((
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
                                                    << 1U) 
                                                   | (0xfffffffeU 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))) 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                                       >> 1U)) 
                                                     << 1U))) 
                                           | (1U & 
                                              (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d) 
                                                & (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                       >> 0xdU) 
                                                      | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__postsync) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_any_unq_d))) 
                                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                                                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                                       & (0x7c2U 
                                                          == 
                                                          (0xfffU 
                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              >> 0x14U))))) 
                                                   | (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)))) 
                                               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((0U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en))) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 7U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 1U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_ctl_en 
        = (1U & ((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                               >> 1U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_ctl_en 
        = (1U & ((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                               >> 2U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_data_en 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 2U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_data_en 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 3U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
           & (3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift) 
           & (3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_d_c 
        = ((0x1fffffcU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                           >> 7U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                     << 2U))) | ((0xfffffeU 
                                                  & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                                        << 1U))) 
                                                 | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                     >> 0x11U) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1ffdfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t 
        = ((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
               << 0x10U) | ((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                       >> 0x22U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                             << 0xfU) | ((0x6000U & 
                                          (((((((3U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                    >> 1U))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf))) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc)))
                                             ? (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                                        >> 0x33U))
                                             : (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                        >> 0x33U))) 
                                           << 0xdU)) 
                                         | (((0xfffff000U 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                 << 0xaU)) 
                                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i) 
                                                << 0xcU)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                               << 0xcU))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d 
        = ((0xfffff3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d) 
           | (0xcU & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                        << 0x1aU) | (0x3fffffcU & (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 6U))) 
                      & ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d))) 
                         << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d 
        = ((0xfffffcU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d) 
           | ((0xffffeU & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                             >> 0xcU) & ((0U != (0x1fU 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))) 
                                         << 1U)) & 
                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                            << 1U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
              >> 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_ren_qual_d 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            >> 0x13U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p = 0U;
    if ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = (0x80U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = (0x200U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = (0x2000U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = (1U | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                     >> 7U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3f7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                           >> 2U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3fbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                           >> 2U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x37ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0xbU)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3bffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0xbU)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3dffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                            >> 0xbU)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x2fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | ((2U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                   >> 0xaU))) << 0xcU));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3ffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (4U & ((((0x1fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                         >> 7U)) | 
                          (0x3fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                         >> 6U))) & 
                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                          << 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                     << 1U))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3ff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (8U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                          >> 5U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                                    << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                               << 2U))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = (0x3ffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p 
            = ((0x3fdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)) 
               | (0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                           >> 0x18U)));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d 
        = ((0xffffc7ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d) 
           | ((QData)((IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                << 2U) | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                  >> 7U))) 
                                           << 1U) | 
                                          (((IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                                     >> 0x22U)) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                 >> 7U))))))) 
              << 0x23U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__misc1ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__misc1ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout));
    if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en) 
         & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
               >> 0xcU)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_ctl_en) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloaddelayff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_valid_m;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__x_d_in;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloaddelayff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_ctl_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__x_t_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_r_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_ctl_en 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_ctl_en) 
            << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_ctl_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_data_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0cinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_data_en) 
            & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                  >> 0xcU))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_x
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_r);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_data_en) 
            & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                 >> 1U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                           >> 0x16U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout)))
            ? ((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                       >> 1U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                 >> 3U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_result_m
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_i0_result_x)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_r_raw);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0xinstff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_data_en) 
            & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                  >> 0xcU))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_x);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_rddata_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_data_en) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d))
            ? (((QData)((IData)((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                          >> 0xfU)))) 
                << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_csr_rddata_d)))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_data_en)
            ? ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                              >> 2U))) ? ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata))))
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_data_en) 
            << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_r_data_en));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_2B 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val 
        = (3U & ((1U & ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                           >> 1U))) | ((- (IData)((1U 
                                                   & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)))))) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                  >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_ctl_en) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_d_c;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_c_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d 
        = ((0x1ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d) 
           | ((0xff800000U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                               << 0x12U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                            << 0x17U))) 
              | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                  << 0x16U) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d)) 
                                << 0x15U) | (((0x400000U 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d)
                                               ? (0xfffU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                     >> 0x14U))
                                               : 0U) 
                                             << 9U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0rdff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d)
                     ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0U;
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) {
        if ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 1U;
        }
        if ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 2U;
        }
        if ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 3U;
        }
        if ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 4U;
        }
        if ((1U & ((((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                          >> 0x11U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                       >> 0xcU)) | 
                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                         >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                    >> 5U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                               >> 0x1fU)) 
                     | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                        >> 0x18U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                      >> 0x16U)) | 
                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                    >> 0x12U)))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xfU;
        }
        if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_ren_qual_d) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 5U;
        }
        if (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_ren_qual_d)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 6U;
        }
        if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_ren_qual_d) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 7U;
        }
        if ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 8U;
        }
        if ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 9U;
        }
        if ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xaU;
        }
        if ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xbU;
        }
        if ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xcU;
        }
        if ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xdU;
        }
        if ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xeU;
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_lsu_valid_raw_d)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_m_in 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d 
        = ((0x3ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p) 
                     & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_p) 
                                 >> 0xdU))))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_m_in 
        = ((0x3ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_m_in)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                                >> 4U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
        = ((0xdfffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                             >> 1U))))) 
              << 0x35U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_r_ff0__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_ctl_en))
            ? (((QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                       >> 8U)))) << 0x38U) 
               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_predictpacket_x_ff__dout)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout);
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_flush_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_flush_path_x_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_npc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pred_correct_npc_x;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_flush_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_flush_r_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_npc_r_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_npc_r_ff__dout;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__i_pc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en))
                           ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                      >> 1U)) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT____Vcellout__i_pc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_csr_rs1_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en) 
             >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_csr_ren_d))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_csr_rs1_x);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_predpipe_r_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_misc_ff__dout)))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__predpipe_x
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__predpipe_r);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_predpipe_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en) 
             >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_branch_d))
            ? ((0x1fe000U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff)
                               : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff)) 
                             << 0xdU)) | ((0x1fe0U 
                                           & (((1U 
                                                & ((3U 
                                                    != 
                                                    (3U 
                                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                                                ? (
                                                   ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal 
                                                     >> 1U) 
                                                    ^ 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal 
                                                     >> 9U)) 
                                                   ^ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal 
                                                    >> 0x11U))
                                                : (
                                                   ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                                     >> 1U) 
                                                    ^ 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                                     >> 9U)) 
                                                   ^ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                                    >> 0x11U))) 
                                              << 5U)) 
                                          | (0x1fU 
                                             & ((1U 
                                                 & ((3U 
                                                     != 
                                                     (3U 
                                                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                                                 ? 
                                                (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal 
                                                   >> 0xeU)) 
                                                 ^ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal 
                                                  >> 9U))
                                                 : 
                                                (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                                   >> 0xeU)) 
                                                 ^ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                                  >> 9U))))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__predpipe_x);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb0 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val 
        = (3U & ((1U & ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B))) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                           >> 3U))) | ((- (IData)((1U 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B))))) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                          >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1fff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_d 
        = (0x1fffU & (((0x1000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                   << 1U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d)) 
                      + (7U & (((1U & (- (IData)((1U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                                                     >> 0xaU))))) 
                                | (3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                                                       >> 9U)))))) 
                               | (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                                                   >> 8U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_result_m
            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_lsu_valid_raw_d)
                ? ((((- (IData)(((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d)) 
                                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                         >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d)) 
                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                    >> 7U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d) 
                    | ((- (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_en_d) 
                                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                          >> 5U))) 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                      >> 7U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_bypass_data_d)) 
                   | ((- (IData)((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                         >> 5U) & (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 7U))))) 
                      & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout 
                          << 0xaU) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout) 
                                      << 2U)))) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__result 
        = (((((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__lout 
                         | ((- (IData)((1U & (((((IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                          >> 0xfU)) 
                                                 | (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                            >> 0xeU))) 
                                                | (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                           >> 0xdU))) 
                                               | (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                          >> 0x1fU))) 
                                              | (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                         >> 0x1eU)))))) 
                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__sout)) 
                        | ((- (IData)((1U & ((((((IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                          >> 8U)) 
                                                 | (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                            >> 7U))) 
                                                | (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                           >> 0x13U))) 
                                               & (~ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                             >> 6U)))) 
                                              & (~ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                            >> 0x24U)))) 
                                             & (~ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                           >> 0x23U))))))) 
                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__aout)) 
                       | ((- (IData)((1U & ((((IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                       >> 4U)) 
                                              | (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                                         >> 0x22U))) 
                                             | (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                                        >> 0x21U))) 
                                            | (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                                       >> 0x1fU)))))) 
                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__pcout 
                             << 1U))) | ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                                >> 1U))))) 
                                         & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap))
                                             ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d
                                             : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d))) 
                     | ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                 >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__lt))) 
                    | (1U & ((- (IData)((1U & (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                       >> 0x17U))))) 
                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__sout))) 
                   | ((- (IData)((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                 >> 0x29U)) 
                                        | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                   >> 0x28U)))))) 
                      & ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc)) 
                         | (0x1fU & ((- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc) 
                                                     >> 5U))))) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_dw_lzd_enc)))))) 
                  | ((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                               >> 0x27U))))) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_cpop))) 
                 | (((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                               >> 0x26U))))) 
                     & ((0xffffff00U & ((- (IData)(
                                                   (1U 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                       >> 7U)))) 
                                        << 8U)) | (0xffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d))) 
                    | ((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                 >> 0x25U))))) 
                       & ((0xffff0000U & ((- (IData)(
                                                     (1U 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                         >> 0xfU)))) 
                                          << 0x10U)) 
                          | (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d))))) 
                | (((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_minmax_sel) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_minmax_sel_a)))) 
                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d) 
                   | ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_minmax_sel) 
                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_minmax_sel_a))))) 
                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
               | ((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                            >> 0x22U))))) 
                  & ((0xffff0000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
                                     << 0x10U)) | (0xffffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d)))) 
              | ((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                           >> 0x20U))))) 
                 & ((0xff00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
                                << 8U)) | (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d)))) 
             | ((- (IData)(((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                     >> 0x1dU)) & (0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))))) 
                & ((0xff000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                   << 0x18U)) | ((0xff0000U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                     << 8U)) 
                                                 | ((0xff00U 
                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                        >> 8U)) 
                                                    | (0xffU 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                          >> 0x18U))))))) 
            | ((- (IData)(((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                    >> 0x1cU)) & (7U 
                                                  == 
                                                  (0x1fU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))))) 
               & ((0xff000000U & ((- (IData)((0U != 
                                              (0xffU 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                  >> 0x18U))))) 
                                  << 0x18U)) | ((0xff0000U 
                                                 & ((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0xffU 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                    >> 0x10U))))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((- (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xffU 
                                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                                                                       >> 8U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffU 
                                                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d)))))))))) 
           | ((((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                          >> 0x1aU))))) 
                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                   | ((IData)(1U) << (0x1fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
               | ((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                            >> 0x19U))))) 
                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                     & (~ ((IData)(1U) << (0x1fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))))) 
              | ((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                           >> 0x18U))))) 
                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
                    ^ ((IData)(1U) << (0x1fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_rs2_d))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__target_mispredict 
        = ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                    >> 0x1fU)) & ((0x7fffffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d)) 
                                  != (0x7fffffffU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__aout 
                                       >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__any_jal 
        = (1U & ((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                            >> 4U)) | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                               >> 0x22U))) 
                  | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                             >> 0x21U))) | (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                                    >> 0x1fU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0 
        = (1U & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1 
        = (1U & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb1 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                    >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_xff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_x_ctl_en)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_xff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
           + ((0xffffe000U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_d) 
                                                >> 0xcU)))) 
                              << 0xdU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
        = ((0xfffff000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d) 
           | (0xfffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                        + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout 
        = (1U & (((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d) 
                  + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d)) 
                 >> 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__i_result_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en) 
             >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__result
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__alu_result_x);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_flush_path_d 
        = (0x7fffffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__any_jal)
                           ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__aout 
                              >> 1U) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__pcout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken 
        = (1U & ((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                              >> 0xcU)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__eq)) 
                    | ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                >> 0xbU)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__eq)))) 
                   | ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                               >> 0xaU)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__lt))) 
                  | ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                              >> 9U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__lt)))) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__any_jal)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_hi_mff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x1fffffffU & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_d)) 
                                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                    >> 4U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                >> 3U)
                           : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__end_addr_hi_mff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
        = ((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d) 
           | (0xfffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                                               >> 0xbU) 
                                                              ^ ~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout))))) 
                                               << 0xcU) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d)) 
                              | (((- (IData)(((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                                  >> 0xbU)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((1U & (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_offset_d) 
                                                    >> 0xbU) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsadder__DOT__cout)))))) 
                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_flush_path_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_flush_path_d
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_flush_path_x_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__newhist 
        = ((2U & ((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                             >> 0x33U)) & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                                   >> 0x32U))) 
                   | ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                  >> 0x32U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                  << 1U)) | (1U & (((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                                >> 0x33U))) 
                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                                   | ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d 
                                               >> 0x33U)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__cond_mispredict 
        = (1U & (((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                           >> 3U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                 | ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                             >> 2U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_d 
        = ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                  >> 2U)) != (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                    >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regpred_access_fault_d 
        = (((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                              >> 0x1cU))) | (0xfU == 
                                             (0xfU 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 0x1cU)))) 
           ^ ((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                >> 0x1cU))) | (0xfU 
                                               == (0xfU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_d 
                                                      >> 0x1cU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__unmapped_access_fault_d 
        = (((((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                >> 0x1cU))) & (~ ((0xf004U 
                                                   == 
                                                   (0xffffU 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                       >> 0x10U))) 
                                                  | (0x1e018U 
                                                     == 
                                                     (0x1ffffU 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                         >> 0xfU)))))) 
             | ((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                  >> 0x1cU))) & (~ 
                                                 ((0xf004U 
                                                   == 
                                                   (0xffffU 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                       >> 0x10U))) 
                                                  | (0x1e018U 
                                                     == 
                                                     (0x1ffffU 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                         >> 0xfU))))))) 
            | ((0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                       >> 0x10U))) 
               & (0x1e018U == (0x1ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                           >> 0xfU))))) 
           | ((0x1e018U == (0x1ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                        >> 0xfU))) 
              & (0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                        >> 0x10U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_d 
        = (1U & (~ ((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                      >> 0x1cU))) | 
                    (0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                      >> 0x1cU))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regcross_misaligned_fault_d 
        = ((0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                    >> 0x1cU)) != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                           >> 0x1cU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_d 
        = (1U & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac 
                    >> (1U | (0x1eU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                       >> 0x1bU)))) 
                   & (~ (((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                            >> 0x1cU))) 
                          | (0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                              >> 0x1cU)))) 
                         | (0xeU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                             >> 0x1cU)))))) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d)) 
                 & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                     >> 6U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                               >> 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_d 
        = ((0x1e018U == (0x1ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                     >> 0xfU))) & (0x1e018U 
                                                   == 
                                                   (0x1ffffU 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                       >> 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned 
        = ((3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                  >> 2U)) != (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                    >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_d 
        = ((0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                   >> 0x10U))) & (0xf004U 
                                                  == 
                                                  (0xffffU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                      >> 0x10U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d 
        = ((0x7fffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                    >> 9U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__cond_mispredict) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__target_mispredict))))) 
              << 0x37U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d 
        = ((0xbfffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken)) 
              << 0x36U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d 
        = ((0xf7ffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__newhist) 
                                     >> 1U)))) << 0x33U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d 
        = ((0xfbffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d) 
           | ((QData)((IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__newhist)))) 
              << 0x32U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_flush_upper_d 
        = ((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                        >> 4U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__cond_mispredict)) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__target_mispredict)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d)) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                  >> 9U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final 
        = ((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                        >> 4U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__cond_mispredict)) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__target_mispredict)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d)) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                  >> 9U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__sideeffect_misaligned_fault_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_d) 
           & (~ (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                    >> 9U) & (0U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d))) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                      >> 0xaU) & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d))) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                    >> 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rden 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
               >> 7U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_mken 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
               >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__picm_access_fault_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_d) 
           & ((0U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d)) 
              | (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                    >> 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_pic_wen 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
            & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                >> 7U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                           >> 6U) & ((~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                                          >> 9U) | 
                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                                          >> 8U))) 
                                     | (0U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d)))))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_d)) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_sz) 
              >> 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_predictpacket_x_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_data_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_predictpacket_x_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_taken_d 
        = ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d 
                    >> 0x36U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_valid_d 
        = (((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_predict_p_d 
                     >> 0x25U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__misc2ff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_trigger_match_m) 
            << 4U) | ((8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                              << 3U) & ((0x1fffff8U 
                                         & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                             >> 7U) 
                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                               << 3U))) 
                                        | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                             >> 9U) 
                                            & (0U != 
                                               (3U 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m))) 
                                           << 3U)))) 
                      | ((4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d) 
                                 << 2U) | (0xfffffffcU 
                                           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                               & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren)) 
                                                  << 2U)) 
                                              & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)) 
                                                 << 2U))))) 
                         | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                             << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_noredir_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb0) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb1))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb0) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb1)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                  >> 4U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                  >> 7U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_d 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__regcross_misaligned_fault_d) 
             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__sideeffect_misaligned_fault_d) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_d))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d)) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_d) 
                 >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_wren 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                 >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_pic_r)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_pic_wen));
    vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rden = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_d));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r_ff) {
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo 
            = (0xffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r_ff)
                           ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_lo_r_ff)
                           : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_hi_r_ff)));
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi 
            = (0xffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r_ff)
                           ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_hi_r_ff)
                           : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_lo_r_ff)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_hi_r_ff;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_lo_r_ff;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo 
            = (0xffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen)
                           ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d
                           : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)));
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi 
            = (0xffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen)
                           ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d
                           : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wdata_hi
                : 0U);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wdata_lo
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_any) 
           & ((~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r_ff))) 
              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_d) 
                 & (~ (((3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                               >> 2U)) == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 2U))) 
                       | ((3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                                 >> 2U)) == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                   >> 2U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_x_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_ctl_en))
            ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_valid_d) 
                << 0xbU) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_taken_d) 
                             << 0xaU) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_flush_upper_d) 
                                          << 9U) | 
                                         (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d) 
                                               & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                          >> 2U))) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken))) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__any_jal))) 
                                            | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_alu_decode_d) 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                            >> 3U))) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__actual_taken)) 
                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__any_jal)))) 
                                           << 8U) | 
                                          (0xffU & 
                                           (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                                            >> 0xbU)))) 
                                             & ((0xfeU 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                                      >> 0xaU)))) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                                               >> 0xbU))))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout))))))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_misc_ff__din 
        = ((0x3fcU & (((((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_valid_d)))) 
                         << 2U) & ((0x3f8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_misc_ff__dout) 
                                              << 1U)) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_taken_d) 
                                      << 2U))) | (0xfffffffcU 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_valid_d)))))) 
                                                      << 2U) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_misc_ff__dout)))) 
                      | (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout)) 
                         << 2U))) | ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
                                            >> 0x15U)) 
                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_branch_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__misc2ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__misc2ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match 
        = ((((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                       >> 5U)) == (0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout 
                                            >> 5U))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err_data)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_miss_f 
        = (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_buff_hit_unq_f) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_wrap_f)))) 
            & (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken 
        = (((((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                            >> 5U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f)) 
             | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f 
        = (((0xfU == (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                              >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_hit_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rden) 
              & ((0U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                               >> 2U))) | (0U == (3U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                     >> 2U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rden) 
               & ((1U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                >> 2U))) | (1U == (3U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                      >> 2U))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rden) 
               & ((2U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                >> 2U))) | (2U == (3U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                      >> 2U))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rden) 
               & ((3U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                >> 2U))) | (3U == (3U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                      >> 2U))))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned 
        = ((3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                  >> 2U)) != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                    >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x3eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (1U & (((((((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                    ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 1U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 3U)) 
                                  ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     >> 4U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                >> 6U)) 
                                ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 8U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xaU)) 
                              ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                 >> 0xbU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xdU)) 
                            ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                               >> 0xfU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0x11U)) 
                          ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                             >> 0x13U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                           >> 0x15U)) 
                        ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                           >> 0x17U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                         >> 0x19U)) 
                      ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                         >> 0x1aU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x1cU)) ^ 
                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                     >> 0x1eU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x3dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (2U & ((((((((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     << 1U) ^ (0x7ffffffeU 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 1U))) 
                                   ^ (0x3ffffffeU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 2U))) ^ (0xffffffeU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                      >> 4U))) 
                                 ^ (0x7fffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 5U))) 
                                ^ (0xfffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                >> 8U))) 
                               ^ (0x7ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 9U))) 
                              ^ (0x1ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xbU))) 
                             ^ (0xffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0xcU))) 
                            ^ (0x1fffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                           >> 0xfU))) 
                           ^ (0xfffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                         >> 0x10U))) 
                          ^ (0x1ffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 0x13U))) 
                         ^ (0xffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x14U))) ^ 
                        (0x1feU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x17U))) ^ (0xfeU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x18U))) 
                      ^ (0x3eU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x1aU))) ^ (0x1eU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                    >> 0x1bU))) 
                    ^ (2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                             >> 0x1eU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x3bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (4U & ((((((((((((((((((0xfffffffcU & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      << 1U)) ^ (0xfffffffcU 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any)) 
                                   ^ (0x7ffffffcU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 1U))) ^ (0x7fffffcU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                      >> 5U))) 
                                 ^ (0x3fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 6U))) 
                                ^ (0x1fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 7U))) 
                               ^ (0xfffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 8U))) 
                              ^ (0xffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                             >> 0xcU))) 
                             ^ (0x7fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0xdU))) 
                            ^ (0x3fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                           >> 0xeU))) 
                           ^ (0x1fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                          >> 0xfU))) 
                          ^ (0xffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x14U))) 
                         ^ (0x7fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x15U))) ^ 
                        (0x3fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x16U))) ^ (0x1fcU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x17U))) 
                      ^ (0x1cU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x1bU))) ^ (0xcU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                    >> 0x1cU))) 
                    ^ (4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                             >> 0x1dU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x37U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (8U & (((((((((((((((0x7ffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 1U)) 
                                 ^ (0x3ffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                   >> 2U))) 
                                ^ (0x1ffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 3U))) 
                               ^ (0xffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                >> 4U))) 
                              ^ (0x7fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 5U))) 
                             ^ (0x3fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 6U))) 
                            ^ (0x1fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                             >> 7U))) 
                           ^ (0x1fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                          >> 0xfU))) 
                          ^ (0xfff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 0x10U))) 
                         ^ (0x7ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x11U))) 
                        ^ (0x3ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x12U))) ^ 
                       (0x1ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x13U))) ^ (0xff8U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x14U))) 
                     ^ (0x7f8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x15U))) ^ (0x3f8U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                    >> 0x16U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x2fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (0x10U & (((((((((((((((0x1fffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                   >> 7U)) 
                                    ^ (0xfffff0U & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 8U))) ^ 
                                   (0x7ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 9U))) 
                                  ^ (0x3ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                  >> 0xaU))) 
                                 ^ (0x1ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                 >> 0xbU))) 
                                ^ (0xffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                               >> 0xcU))) 
                               ^ (0x7fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                              >> 0xdU))) 
                              ^ (0x3fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                             >> 0xeU))) 
                             ^ (0x1fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                            >> 0xfU))) 
                            ^ (0xfff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                          >> 0x10U))) 
                           ^ (0x7ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                         >> 0x11U))) 
                          ^ (0x3ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                        >> 0x12U))) 
                         ^ (0x1ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                       >> 0x13U))) 
                        ^ (0xff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     >> 0x14U))) ^ 
                       (0x7f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                  >> 0x15U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp 
        = ((0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp)) 
           | (0x20U & ((((((0x7e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x15U)) ^ 
                           (0x3e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                      >> 0x16U))) ^ 
                          (0x1e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                     >> 0x17U))) ^ 
                         (0xe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x18U))) ^ (0x60U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                                     >> 0x19U))) 
                       ^ (0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any 
                                   >> 0x1aU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x3eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (1U & (((((((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                    ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 1U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 3U)) 
                                  ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     >> 4U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                >> 6U)) 
                                ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 8U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xaU)) 
                              ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                 >> 0xbU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xdU)) 
                            ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                               >> 0xfU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0x11U)) 
                          ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                             >> 0x13U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                           >> 0x15U)) 
                        ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                           >> 0x17U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                         >> 0x19U)) 
                      ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                         >> 0x1aU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x1cU)) ^ 
                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                     >> 0x1eU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x3dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (2U & ((((((((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     << 1U) ^ (0x7ffffffeU 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 1U))) 
                                   ^ (0x3ffffffeU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 2U))) ^ (0xffffffeU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                      >> 4U))) 
                                 ^ (0x7fffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 5U))) 
                                ^ (0xfffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                >> 8U))) 
                               ^ (0x7ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 9U))) 
                              ^ (0x1ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xbU))) 
                             ^ (0xffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0xcU))) 
                            ^ (0x1fffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                           >> 0xfU))) 
                           ^ (0xfffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                         >> 0x10U))) 
                          ^ (0x1ffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 0x13U))) 
                         ^ (0xffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x14U))) ^ 
                        (0x1feU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x17U))) ^ (0xfeU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x18U))) 
                      ^ (0x3eU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x1aU))) ^ (0x1eU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                    >> 0x1bU))) 
                    ^ (2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                             >> 0x1eU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x3bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (4U & ((((((((((((((((((0xfffffffcU & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      << 1U)) ^ (0xfffffffcU 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any)) 
                                   ^ (0x7ffffffcU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 1U))) ^ (0x7fffffcU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                      >> 5U))) 
                                 ^ (0x3fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 6U))) 
                                ^ (0x1fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 7U))) 
                               ^ (0xfffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 8U))) 
                              ^ (0xffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                             >> 0xcU))) 
                             ^ (0x7fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0xdU))) 
                            ^ (0x3fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                           >> 0xeU))) 
                           ^ (0x1fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                          >> 0xfU))) 
                          ^ (0xffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x14U))) 
                         ^ (0x7fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x15U))) ^ 
                        (0x3fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x16U))) ^ (0x1fcU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x17U))) 
                      ^ (0x1cU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x1bU))) ^ (0xcU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                    >> 0x1cU))) 
                    ^ (4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                             >> 0x1dU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x37U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (8U & (((((((((((((((0x7ffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 1U)) 
                                 ^ (0x3ffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                   >> 2U))) 
                                ^ (0x1ffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 3U))) 
                               ^ (0xffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                >> 4U))) 
                              ^ (0x7fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 5U))) 
                             ^ (0x3fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 6U))) 
                            ^ (0x1fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                             >> 7U))) 
                           ^ (0x1fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                          >> 0xfU))) 
                          ^ (0xfff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 0x10U))) 
                         ^ (0x7ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x11U))) 
                        ^ (0x3ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x12U))) ^ 
                       (0x1ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x13U))) ^ (0xff8U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x14U))) 
                     ^ (0x7f8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x15U))) ^ (0x3f8U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                    >> 0x16U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x2fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (0x10U & (((((((((((((((0x1fffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                   >> 7U)) 
                                    ^ (0xfffff0U & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 8U))) ^ 
                                   (0x7ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 9U))) 
                                  ^ (0x3ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                  >> 0xaU))) 
                                 ^ (0x1ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                 >> 0xbU))) 
                                ^ (0xffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                               >> 0xcU))) 
                               ^ (0x7fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                              >> 0xdU))) 
                              ^ (0x3fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                             >> 0xeU))) 
                             ^ (0x1fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                            >> 0xfU))) 
                            ^ (0xfff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                          >> 0x10U))) 
                           ^ (0x7ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                         >> 0x11U))) 
                          ^ (0x3ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                        >> 0x12U))) 
                         ^ (0x1ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                       >> 0x13U))) 
                        ^ (0xff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     >> 0x14U))) ^ 
                       (0x7f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                  >> 0x15U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp 
        = ((0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp)) 
           | (0x20U & ((((((0x7e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x15U)) ^ 
                           (0x3e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                      >> 0x16U))) ^ 
                          (0x1e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                     >> 0x17U))) ^ 
                         (0xe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x18U))) ^ (0x60U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                                     >> 0x19U))) 
                       ^ (0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any 
                                   >> 0x1aU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtrff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any))
                  ? ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m
                        : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xff00U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                           ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
                              >> 8U) : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                            >> 8U) : 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any 
                                         >> 8U))) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xff0000U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
                                >> 0x10U) : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                                              ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x10U)
                                              : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_lo_r_in) 
           | (0xff000000U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                               ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_lo_m 
                                  >> 0x18U) : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo))
                                                ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                                   >> 0x18U)
                                                : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_any 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xffU & ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m
                        : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xff00U & (((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                           ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
                              >> 8U) : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                            >> 8U) : 
                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any 
                                         >> 8U))) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xff0000U & (((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
                                >> 0x10U) : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                                              ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x10U)
                                              : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in) 
           | (0xff000000U & (((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_m))
                               ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_m 
                                  >> 0x18U) : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi))
                                                ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                                   >> 0x18U)
                                                : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_any 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wren = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen) 
                                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any)) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r)))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                              >> 4U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any
                        : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xff00U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                 >> 1U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                             >> 8U)
                           : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r 
                              >> 8U)) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xff00U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                 >> 5U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                             >> 8U)
                           : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r 
                              >> 8U)) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xff0000U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                   >> 2U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                               >> 0x10U)
                             : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r 
                                >> 0x10U)) << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xff0000U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                   >> 6U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                               >> 0x10U)
                             : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r 
                                >> 0x10U)) << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r) 
           | (0xff000000U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo)) 
                               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                     >> 3U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x18U)
                               : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r 
                                  >> 0x18U)) << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r) 
           | (0xff000000U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi)) 
                               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r) 
                                     >> 7U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
                                                 >> 0x18U)
                               : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r 
                                  >> 0x18U)) << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
              & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_misc_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_misc_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellinp__i_misc_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_misc_ff__dout));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_scnd_ff)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_scnd_ff)
                : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_tag_valid) 
                   & (- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           >> 5U)) 
                                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req) 
                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match)))
                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_scnd_ff)
                      : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match))
                          ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)
                          : ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                              ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)
                              : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)
                ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_scnd_ff) 
                   | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_index_match))) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)))
                : ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff)
                    : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_tag_valid) 
                       & (- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               >> 5U)) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))))));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_scnd_ff;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_scnd_ff;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_rep_wayf2_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__mb_tagv_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tagv_mb_ff;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_ignore_2nd_miss_f 
        = (((((~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)))) 
              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                 >> 5U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f)) 
            & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (((0x3ffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                              >> 5U)) == (0x3ffffffU 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                             >> 5U))) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f 
        = ((((((((~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)))) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                    >> 5U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f)) 
               & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
              & ((0x3ffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                >> 5U)) != (0x3ffffffU 
                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                               >> 5U)))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                  >> 6U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f 
        = (((((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f)) 
             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                   >> 5U))) & ((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                               | (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                 >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_byp_hit_f) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_hit_f)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f)) 
           & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f 
        = ((((((~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)))) 
               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                  >> 5U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f)) 
             & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any 
        = ((0x40U & ((VL_REDXOR_32(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_hi_any) 
                      ^ VL_REDXOR_32((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp))) 
                     << 6U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_hi__DOT__ecc_out_temp));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any 
        = ((0x40U & ((VL_REDXOR_32(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_lo_any) 
                      ^ VL_REDXOR_32((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp))) 
                     << 6U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_encode_lo__DOT__ecc_out_temp));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_m) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                      >> 6U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                 >> 4U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_data_hi_r_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wren) 
              & ((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                               >> 2U))) | (0U == (3U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                     >> 2U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wren) 
               & ((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                >> 2U))) | (1U == (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                      >> 2U))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wren) 
               & ((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                >> 2U))) | (2U == (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                      >> 2U))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wren) 
               & ((3U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                >> 2U))) | (3U == (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                      >> 2U))))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_killff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 1U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                                 >> 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_killff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 2U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                                 >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_killff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_killff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 3U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en) 
                                 >> 3U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_killff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | ((((((0x3fffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                      >> 2U))) == (0x3fffU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                                      >> 2U))) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | (0xfffffffeU & (((((((0x3fffU & (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                      >> 0x12U))) 
                                  == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                                 >> 2U))) 
                                 << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                               & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                      >> 1U)) << 1U)) 
                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r) 
                                 << 1U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                                >> 1U)) 
                                            << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | (0xfffffffcU & (((((((0x3fffU & (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                      >> 0x22U))) 
                                  == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                                 >> 2U))) 
                                 << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                               & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                      >> 2U)) << 2U)) 
                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r) 
                                 << 2U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                                >> 2U)) 
                                            << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
           | (0xfffffff8U & (((((((0x3fffU & (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                      >> 0x32U))) 
                                  == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                                 >> 2U))) 
                                 << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                               & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                      >> 3U)) << 3U)) 
                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r) 
                                 << 3U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                                >> 3U)) 
                                            << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (((((0x3fffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                     >> 2U))) == (0x3fffU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                                     >> 2U))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (0xfffffffeU & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x12U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                                >> 2U))) 
                                << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 1U)) << 1U)) 
                             & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                    >> 1U)) << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (0xfffffffcU & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x22U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                                >> 2U))) 
                                << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 2U)) << 2U)) 
                             & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                    >> 2U)) << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
           | (0xfffffff8U & ((((((0x3fffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr 
                                                     >> 0x32U))) 
                                 == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                                >> 2U))) 
                                << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld)) 
                              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                                     >> 3U)) << 3U)) 
                             & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                    >> 3U)) << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb_scnd 
        = (((5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f)) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                 >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__status_misc_ff__din 
        = ((0x1fcU & (((1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                >> 1U) | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U]) 
                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                 >> 0x12U))) ? ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[1U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                   >> 5U))
                        : ((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_status_addr))) 
                             >> 5U) & ((0x3ffffffU 
                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                           >> 5U)) 
                                       | (0x7ffffffU 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_addr_bits_hi_3) 
                                             >> 3U)))) 
                           | (((- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_status_addr))))) 
                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout) 
                              >> 5U))) << 2U)) | ((2U 
                                                   & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_q) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f)) 
                                                       << 1U) 
                                                      | (0x7ffeU 
                                                         & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                             << 1U) 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                               >> 0x11U))))) 
                                                  | (1U 
                                                     & ((1U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                               >> 0x12U)))
                                                         ? 
                                                        (1U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                            >> 0x17U))
                                                         : 
                                                        (1U 
                                                         & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_q) 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))
                                                             ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)
                                                             : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f 
        = ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f))) 
           & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                     >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                               >> 2U)))) ? 3U : ((1U 
                                                  & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                        >> 1U) 
                                                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                                          >> 
                                                          (7U 
                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                              >> 2U))))) 
                                                     & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_wrap_f)) 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                                           >> 
                                                           (7U 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout 
                                                                >> 2U)))))))
                                                  ? 2U
                                                  : 0U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f) 
               & (((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   | (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                  | (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_ic_req_ff_in 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                       >> 3U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid)) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) 
                 & (~ (((7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_cmd_valid)) 
                       & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xfeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xfdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (2U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                         >> 1U)) << 1U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                           & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                              << 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xfbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (4U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                         >> 2U)) << 2U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                           & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                              << 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xf7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (8U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                         >> 3U)) << 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                           & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                              << 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x10U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                            >> 4U)) << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                              & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                                 << 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x20U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                            >> 5U)) << 5U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                              & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                                 << 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0xbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x40U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                            >> 6U)) << 6U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                              & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                                 << 6U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error_in)) 
           | (0x80U & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                            >> 7U)) << 7U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_error) 
                                              & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                                 << 7U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_reset_data_beat_cnt 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat))) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xfeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xfdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                          << 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xfbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                          << 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xf7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                          << 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x20U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0xbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x40U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 6U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in)) 
           | (0x80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
                          & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                             << 7U)))));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r_ff) {
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r_ff)
                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_lo_r_ff)))
                : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_hi_r_ff))));
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r_ff)
                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_hi_r_ff)))
                : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_lo_r_ff))));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen)
                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wdata_lo)))
                : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any))));
        vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wen)
                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_hi_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wdata_hi)))
                : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__dccm_wdata_ecc_lo_any)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_data_any))));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                       >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                       << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clken)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                       << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0xfffffffff000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | (IData)((IData)((0xfffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                         ? (((0U == 
                                              (3U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                >> 2U))) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                             ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                >> 4U)
                                             : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                >> 4U))
                                         : (((0U == 
                                              (3U & 
                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                >> 2U))) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                             ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                >> 4U)
                                             : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                >> 4U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0xffffff000fffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | ((QData)((IData)((0xfffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                          ? (((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                   >> 2U))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                              ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                 >> 4U)
                                              : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                 >> 4U))
                                          : (((1U == 
                                               (3U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                   >> 2U))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                              ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                 >> 4U)
                                              : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 4U)))))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0xfff000ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | ((QData)((IData)((0xfffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                          ? (((2U == 
                                               (3U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                   >> 2U))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                              ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                 >> 4U)
                                              : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                 >> 4U))
                                          : (((2U == 
                                               (3U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                   >> 2U))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                              ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                 >> 4U)
                                              : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 4U)))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank 
        = ((0xfffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank) 
           | ((QData)((IData)((0xfffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank))
                                          ? (((3U == 
                                               (3U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                   >> 2U))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                              ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                 >> 4U)
                                              : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_lo) 
                                                 >> 4U))
                                          : (((3U == 
                                               (3U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                   >> 2U))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned))
                                              ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_d 
                                                 >> 4U)
                                              : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_d 
                                                 >> 4U)))))) 
              << 0x24U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtrff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r))) 
                   & (~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
                         | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                     & (~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
                           & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))))
                  ? ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                      & (~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)) 
                            | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))))
                      ? ((IData)(2U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))
                      : ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
              & ((((((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                    | (((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                       & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                   | (((0U == (3U & ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                      & (~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                            | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
               << 1U) & (((((((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                             | (((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                                & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                            | (((1U == (3U & ((IData)(1U) 
                                              + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                               & (~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                                     | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                           << 1U) | (0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))) 
                         | (0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
               << 2U) & (((((((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                             | (((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                                & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                            | (((2U == (3U & ((IData)(1U) 
                                              + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                               & (~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                                     | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                           << 2U) | (0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))) 
                         | (0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
               << 3U) & (((((((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                              & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                             | (((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                                & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                            | (((3U == (3U & ((IData)(1U) 
                                              + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r)) 
                               & (~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)) 
                                     | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))))) 
                           << 3U) | (0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))) 
                         | (0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_hi_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (1U & (((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                      & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                     & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (2U & ((((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                       & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                      & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (4U & ((((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                       & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                      & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                     << 2U) | (0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo)) 
           | (8U & ((((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_r)) 
                       & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))) 
                      & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r))))) 
                     << 3U) | (0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_matchvec_lo_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__status_misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__status_misc_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__status_misc_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__status_misc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f 
        = (3U & (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f))) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f)) 
                 & (- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__faddrf_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffffffU & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                             >> 7U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f))) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f))
                           ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                              >> 1U) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__faddrf_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fetchghr__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
            << 0xaU) | ((0x200U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                            >> 0x20U)) 
                                   << 9U)) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f) 
                                               << 8U) 
                                              | (0xffU 
                                                 & ((((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                     >> 0xaU)))) 
                                                      & ((1U 
                                                          & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout) 
                                                              >> 9U) 
                                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))))
                                                          ? 
                                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_misc_ff__dout) 
                                                          >> 2U)
                                                          : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_x_ff__dout))) 
                                                     | ((- (IData)(
                                                                   ((((~ 
                                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                        >> 0xaU)) 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                                         >> 7U)) 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f)) 
                                                                    & (~ 
                                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                        >> 8U))))) 
                                                        & ((((- (IData)(
                                                                        (2U 
                                                                         == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__num_valids)))) 
                                                             & ((0xfcU 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                    << 2U)) 
                                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__final_h))) 
                                                            | ((- (IData)(
                                                                          (1U 
                                                                           == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__num_valids)))) 
                                                               & ((0xfeU 
                                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                      << 1U)) 
                                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__final_h)))) 
                                                           | ((- (IData)(
                                                                         (0U 
                                                                          == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__num_valids)))) 
                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout))))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((~ 
                                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                        >> 0xaU)) 
                                                                      & (~ 
                                                                         ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                                            >> 7U) 
                                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f)) 
                                                                          & (~ 
                                                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                              >> 8U)))))))) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
        = (((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
              & (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_path_r) 
                 | ((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_flush_upper_d)))) 
                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i0_flush_path_d))) 
             | ((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                  & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                         >> 7U)) | 
                                     (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f))))))) 
                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)) 
            | ((- (IData)(((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                >> 7U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f)) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f)))) 
               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f)) 
           | ((- (IData)(((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                               >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f))) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f)))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_next));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                   >> 7U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f_qual 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_hit_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count 
        = (7U & (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_data_beat_cnt))) 
                  & ((IData)(1U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                                    >> 3U))) | ((- (IData)(
                                                           (1U 
                                                            & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_data_beat_cnt)) 
                                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_reset_data_beat_cnt)))))) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                                                   >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[0U] 
        = (IData)((((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                  >> 2U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                    : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U]) 
           | (IData)(((((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                      >> 2U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                        ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                        : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo) 
                      >> 0x20U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[1U]) 
           | (0xffffff80U & ((IData)((((1U == (3U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                >> 2U))) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                       ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                       : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo)) 
                             << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U]) 
           | ((0x7fU & ((IData)((((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                >> 2U))) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                  ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                  : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo)) 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((IData)(((((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                       >> 2U))) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                                  ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                                  : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo) 
                                                >> 0x20U)) 
                                       << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[2U]) 
           | (0xffffc000U & ((IData)((((2U == (3U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                >> 2U))) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                       ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                       : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo)) 
                             << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U] 
        = ((0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U]) 
           | ((0x3fffU & ((IData)((((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                  >> 2U))) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                    ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                    : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo)) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((((2U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                           >> 2U))) 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                                      ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                                      : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[3U]) 
           | (0xffe00000U & ((IData)((((3U == (3U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                >> 2U))) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                       ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                       : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo)) 
                             << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_data_bank[4U] 
        = ((0x1fffffU & ((IData)((((3U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                 >> 2U))) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                   ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                   : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo)) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((IData)(((((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_addr_hi) 
                                                       >> 2U))) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wr_unaligned))
                                                  ? vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_hi
                                                  : vlTOPp->tb_top__DOT__rvtop__DOT__dccm_wr_data_lo) 
                                                >> 0x20U)) 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_vldff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 1U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_vldff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 2U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_vldff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 3U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 3U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_vldff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin 
        = ((0xffffffffffff0000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin) 
           | (IData)((IData)((0xffffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                          ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r
                                          : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin 
        = ((0xffffffff0000ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin) 
           | ((QData)((IData)((0xffffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                           ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r
                                           : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r)))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin 
        = ((0xffff0000ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin) 
           | ((QData)((IData)((0xffffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                           ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r
                                           : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r)))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin 
        = ((0xffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin) 
           | ((QData)((IData)((0xffffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                                           ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r
                                           : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r)))) 
              << 0x30U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfff0U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xfU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                       ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                       : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xff0fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xf0U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                         ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                             >> 4U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                         : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                             >> 4U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xf0ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xf00U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                          ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                              >> 8U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                          : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                              >> 8U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r))) 
                        << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
        = ((0xfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)) 
           | (0xf000U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                               >> 0xcU) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r))
                           : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                               >> 0xcU) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r))) 
                         << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U])
                        : ((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen)) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xff00U & (((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 1U)) | 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                      >> 1U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                                  >> 8U)
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                   << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                >> 8U)))
                           : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 1U)) | 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                      >> 1U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                                  >> 8U)
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                   << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                >> 8U)))) 
                         << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xff0000U & (((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                 >> 0x10U)))
                             : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                 >> 0x10U)))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]) 
           | (0xff000000U & (((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 3U)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                    << 8U) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                      >> 0x18U)))
                               : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 3U)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                    << 8U) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U] 
                                                      >> 0x18U)))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 4U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U])
                        : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 4U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xff00U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 5U)) | 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                      >> 1U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                                  >> 8U)
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                   << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                >> 8U)))
                           : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 5U)) | 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                      >> 1U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                                  >> 8U)
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                   << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                >> 8U)))) 
                         << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xff0000U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 6U)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                 >> 0x10U)))
                             : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 6U)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                               << 0x10U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                 >> 0x10U)))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]) 
           | (0xff000000U & (((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 7U)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                    << 8U) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                      >> 0x18U)))
                               : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 7U)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                    << 8U) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U] 
                                                      >> 0x18U)))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 8U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U])
                        : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 8U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xff00U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 9U)) | 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                      >> 1U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                                  >> 8U)
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                   << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                >> 8U)))
                           : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 9U)) | 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                      >> 1U))) ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                                  >> 8U)
                               : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                   << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                >> 8U)))) 
                         << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xff0000U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xaU)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                 >> 0x10U)))
                             : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xaU)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                               << 0x10U) 
                                              | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                 >> 0x10U)))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]) 
           | (0xff000000U & (((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xbU)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                    << 8U) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                      >> 0x18U)))
                               : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xbU)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                    << 8U) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U] 
                                                      >> 0x18U)))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                        ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 0xcU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U])
                        : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 0xcU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r)))
                            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r
                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xffff00ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xff00U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                           ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                         >> 0xdU)) 
                                     | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                        >> 1U))) ? 
                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                               >> 8U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                         >> 8U)) : 
                          ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                      >> 0xdU)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                                   >> 1U)))
                            ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                               >> 8U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                         >> 8U))) << 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xff00ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xff0000U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                             ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xeU)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                 >> 0x10U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                              >> 0x10U))
                             : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                           >> 0xeU)) 
                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                          >> 2U))) ? 
                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                 >> 0x10U) : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                              >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((0xffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]) 
           | (0xff000000U & (((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
                               ? ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xfU)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_lo_r 
                                      >> 0x18U) : (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                   >> 0x18U))
                               : ((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                                             >> 0xfU)) 
                                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r) 
                                            >> 3U)))
                                   ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_datafn_hi_r 
                                      >> 0x18U) : (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U] 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetchghr__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fetchghr__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__fetchghr__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                      >> 0xfU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                     >> 7U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__imb_f_scnd_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken)
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb_scnd)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_region_acc_fault_bf 
        = ((0xee00U != (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                   >> 0xfU))) & (0xeU 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                                     >> 0x1bU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr))) 
            & ((0x7fffffe0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout) 
               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_addr_bits_hi_3) 
                   << 2U) | (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)))) 
           | ((- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_bf 
        = (1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac 
                    >> (0x1eU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                 >> 0x1aU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                  >> 7U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
            & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                   >> 7U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f))) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                 >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                   >> 7U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f 
        = ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f_qual) 
               << 1U) & ((0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f) 
                                          << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_f))) 
                         | ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f)) 
                            << 1U))) & ((0x1fU != (0x1fU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)) 
                                        << 1U)) & (
                                                   (2U 
                                                    != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout)) 
                                                   << 1U)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f_qual));
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
            = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                      ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                          : (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f)) 
                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f)) 
                              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                      : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                          : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                  >> 7U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
            = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                        ? 0U : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)
                                 ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))
                                     ? 0U : 2U) : 0U))
                    : ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f)) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f)) 
                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                        ? 2U : 0U)) : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                                        ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                            ? 0U : 
                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)
                                             ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))
                                                 ? 0U
                                                 : 2U)
                                             : 1U))
                                        : 0U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
            = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                      ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                          : (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f)) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_ignore_2nd_miss_f)) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                      : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                          ? ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f)) 
                              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))))
                          : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
            = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                        ? 2U : 0U) : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                       ? 5U : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_ignore_2nd_miss_f) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                                ? 7U
                                                : 0U)))
                : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                        ? 0U : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f) 
                                  & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                      >> 2U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                 ? 0U : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                 >> 2U))) 
                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                          ? 3U : ((
                                                   (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                                   ? 4U
                                                   : 
                                                  ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                    ? 0U
                                                    : 
                                                   ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f) 
                                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f))) 
                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                     ? 6U
                                                     : 
                                                    ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f))) 
                                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                      ? 6U
                                                      : 
                                                     (((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f)) 
                                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))) 
                                                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                       ? 0U
                                                       : 
                                                      ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                                                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f)) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat))))
                                                        ? 2U
                                                        : 0U)))))))))
                    : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))
                        ? 1U : 2U)));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in 
        = (((((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                      >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                >> 2U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                               >> 1U))) 
                    & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)) 
                   | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                        >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                  >> 2U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                                 >> 1U))) 
                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)) 
                  | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                       >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                 >> 2U))) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                             >> 1U)) 
                     & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout))) 
                 | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                       >> (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                 >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid_in) 
                                             >> (7U 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                                                     >> 2U))))) 
                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout 
                        >> 1U)) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout)) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff)) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f))) 
            | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f)))) 
           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                 >> 6U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f))) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_wd_byp_ok_ff)) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc1_ff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_in) 
            << 7U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr) 
                       << 6U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count) 
                                  << 3U) | ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U]) 
                                            | (1U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                                                >> 1U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin)
                       : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin 
                                  >> 0x10U)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin 
                                  >> 0x20U)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin 
                                  >> 0x30U)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset))))) 
                   & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin)
                       : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                        >> 1U))))) 
                   & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
                          >> 4U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                        >> 2U))))) 
                   & ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
                          >> 8U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__DOT__din_new 
        = (0xfU & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                                        >> 3U))))) 
                   & ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
                       ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin) 
                          >> 0xcU) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__Gen_dccm_enable__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout);
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_reg_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_region_acc_fault_bf;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__rgn_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_region_acc_fault_bf;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_iccm_reg_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__rgn_acc_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__adr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7ffffU & ((0U != (0x7ffffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                            >> 0xcU) 
                                           ^ vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__adr_ff__dout)))
                        ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                           >> 0xcU) : vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__adr_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp 
        = ((0x3eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp)) 
           | (1U & (((((((((((0x7ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                          >> 0xcU)) 
                             ^ (0x3ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                            >> 0xdU))) 
                            ^ (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                          >> 0xfU))) 
                           ^ (0x7fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                         >> 0x10U))) 
                          ^ (0x1fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                        >> 0x12U))) 
                         ^ (0x7ffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                      >> 0x14U))) ^ 
                        (0x1ffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                   >> 0x16U))) ^ (0xffU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                     >> 0x17U))) 
                      ^ (0x3fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                  >> 0x19U))) ^ (0xfU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                    >> 0x1bU))) 
                    ^ (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                             >> 0x1dU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp 
        = ((0x3dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp)) 
           | (2U & (((((((((((0xffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                          >> 0xbU)) 
                             ^ (0x3fffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                            >> 0xdU))) 
                            ^ (0x1fffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 0xeU))) 
                           ^ (0x7ffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                         >> 0x10U))) 
                          ^ (0x3ffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                        >> 0x11U))) 
                         ^ (0x7feU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                      >> 0x14U))) ^ 
                        (0x3feU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                   >> 0x15U))) ^ (0xfeU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                     >> 0x17U))) 
                      ^ (0x7eU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                  >> 0x18U))) ^ (0xeU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                    >> 0x1bU))) 
                    ^ (6U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                             >> 0x1cU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp 
        = ((0x3bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp)) 
           | (4U & (((((((((((0xffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                          >> 0xbU)) 
                             ^ (0x7fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                            >> 0xcU))) 
                            ^ (0x3fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                           >> 0xdU))) 
                           ^ (0x3ffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                         >> 0x11U))) 
                          ^ (0x1ffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                        >> 0x12U))) 
                         ^ (0xffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                      >> 0x13U))) ^ 
                        (0x7fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                   >> 0x14U))) ^ (0x7cU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                     >> 0x18U))) 
                      ^ (0x3cU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                  >> 0x19U))) ^ (0x1cU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                    >> 0x1aU))) 
                    ^ (0xcU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                               >> 0x1bU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp 
        = ((0x37U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp)) 
           | (8U & ((((((((0x3fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 0xdU)) ^ 
                          (0x1fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 0xeU))) ^ 
                         (0xfff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                     >> 0xfU))) ^ (0x7ff8U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                      >> 0x10U))) 
                       ^ (0x3ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                     >> 0x11U))) ^ 
                      (0x1ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                  >> 0x12U))) ^ (0xff8U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                    >> 0x13U))) 
                    ^ (8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                             >> 0x1bU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp 
        = ((0x2fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp)) 
           | (0x10U & ((((((((0xff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                        >> 0x13U)) 
                             ^ (0x7f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                          >> 0x14U))) 
                            ^ (0x3f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                         >> 0x15U))) 
                           ^ (0x1f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                        >> 0x16U))) 
                          ^ (0xf0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                      >> 0x17U))) ^ 
                         (0x70U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                   >> 0x18U))) ^ (0x30U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                                     >> 0x19U))) 
                       ^ (0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                   >> 0x1aU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp 
        = (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__OTHERS__DOT__ECC1_W__DOT__tag_ecc_encode__DOT__ecc_out_temp));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__tag_addr_ff__din 
        = ((0x3f8U & (((1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                >> 1U) | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U]) 
                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                 >> 0x12U))) ? ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[1U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                   >> 5U))
                        : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                           >> 5U)) << 3U)) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                                     >> 0x12U))))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_debug_way))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((1U 
                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                           >> 0x12U)))
                                                     ? 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                     >> 0x13U)
                                                     : 
                                                    (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err_data)) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_ic_in) 
                                                          | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                                                             >> 7U)))) 
                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en) 
            & (- (IData)((3U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                       >> 3U)))))) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_wr_way_en));
    if ((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                >> 1U) | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U]))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q 
            = (0x7fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[1U] 
                         << 0x1bU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                      >> 5U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q 
            = (0xfffU & (0xffcU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U]));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q 
            = (0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                        >> 5U));
        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q 
            = (0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr);
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_scnd_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken)
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb_scnd)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_scnd_ff)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_bf))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_scnd_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & (((((1U & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))) 
                      | (7U & ((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                  >> 1U)))) | (3U & 
                                               ((- (IData)(
                                                           ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                   >> 2U)))) 
                    | (0xeU & ((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                  << 1U)))) | ((- (IData)(
                                                          (1U 
                                                           & ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right))) 
                                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2))) 
                                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left)))))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_en 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                  ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                      ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                      : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                  : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                      ? (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                      : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_err_r) 
                          & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0 
        = (1U & ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                        >> 4U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1 
        = (1U & ((((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                       >> 4U)) | (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                        >> 4U)))) | 
                  (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                         >> 4U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2 
        = (1U & (((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                      >> 4U)) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                       >> 4U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen 
        = ((((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                           >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
            << 2U) | ((((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                      >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                       << 1U) | ((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                               >> 5U))) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ic_fetch_val_shift_right 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f) 
                   << (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb 
        = ((((((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
              & (~ ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))) 
             & (~ ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_byp_hit_f)))) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
           | ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                    >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__misc1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc1_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc1_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_addr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__tag_addr_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__icache_enabled__DOT__tag_addr_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_wren_biten_vec 
        = ((0xffffffc000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_wren_biten_vec) 
           | (IData)((IData)((0x3ffffffU & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_wren_biten_vec 
        = ((0x3ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_wren_biten_vec) 
           | ((QData)((IData)((0x3ffffffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q) 
                                                           >> 1U))))))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match)) 
           | (((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wb_index_hold)) 
               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__index_valid)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match)) 
           | (0xfffffffeU & ((((0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wb_index_hold) 
                                         >> 7U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_q)) 
                              << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__index_valid))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q 
        = ((0x1ffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q) 
           | (0x3fe00U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                          << 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q2pcff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q1pcff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q0pcff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle1ff__din 
        = ((0x60U & (((0x20U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))) 
                                << 5U)) | (0x40U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                                                            >> 1U) 
                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))) 
                                            << 5U))) 
                     | (0xffffffe0U & (((- (IData)(
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))) 
                                        << 5U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout))))) 
           | ((0x18U & (((((8U & ((- (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                  << 3U)) | (0x10U 
                                             & ((- (IData)(
                                                           ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                              >> 1U) 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                << 3U))) 
                          | (0x10U & ((- (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)) 
                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                      << 3U))) | (8U 
                                                  & ((- (IData)(
                                                                ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                   >> 2U) 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)) 
                                                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                     << 3U))) 
                        | (0xfffffff8U & (((- (IData)(
                                                      (1U 
                                                       & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))) 
                                           << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout))))) 
              | (((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                          >> 2U)) & (2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                  >> 3U)))) 
                     << 2U) & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_2B) 
                                  << 2U))) | ((((~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                                                  >> 2U)) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                       >> 3U)))) 
                                               << 2U) 
                                              & ((0xfffffffcU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                                                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B) 
                                                    << 2U)))) 
                  | (0xfffffffcU & ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                                          >> 2U)) & 
                                      (0U == (3U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                               >> 3U)))) 
                                     << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)))) 
                 | (((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                             >> 1U)) & (1U == (3U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                >> 3U)))) 
                        << 1U) & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_2B) 
                                     << 1U))) | (((
                                                   (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                                                     >> 1U)) 
                                                   & (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                          >> 3U)))) 
                                                  << 1U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)) 
                                                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B) 
                                                       << 1U)))) 
                     | (0xfffffffeU & ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen) 
                                             >> 1U)) 
                                         & (2U == (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                                      >> 3U)))) 
                                        << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)))) 
                    | (((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen)) 
                          & (0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                          >> 3U)))) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_2B))) 
                        | (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen)) 
                            & (2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                            >> 3U)))) 
                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)))) 
                       | (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen)) 
                           & (1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout) 
                                           >> 3U)))) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle1ff__dout)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable)) 
           | (1U & (((((0U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ic_fetch_val_shift_right))) 
                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f)) 
                     | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                        >> 2U)) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                      >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable)) 
           | (2U & ((((((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ic_fetch_val_shift_right) 
                                      >> 2U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f)) 
                      << 1U) | (0x7ffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 1U))) 
                    & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 8U)) << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__imb_f_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken)
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_scnd_ff__dout
                : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout
                    : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_scnd_ff)
            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_bf)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data 
        = (1U & (((~ ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy) 
                        | (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                       | (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                      | (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy) 
            | (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           | (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_addr_match 
        = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_addr_match 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_addr_match) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match) 
                    >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
               & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check) 
                    >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error)) 
           | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
                              & ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
                                 << 1U)) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check) 
                                                >> 6U)) 
                                            << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__single_ecc_error 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check) 
              >> 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__single_ecc_error 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_ecc_word_enable) 
             >> 1U) & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check) 
              >> 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__genblk2__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_bf_f_c1_clken)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_ff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                  ? (((6U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                      | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt))) 
                         & ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)))) 
                     | ((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_inc_cmd_beat_cnt)) 
                                          & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req)) 
                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))))))) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_beat_count)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_error_start 
        = (((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_eccerr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f)) 
           | (((((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_tag_valid))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_final_f) 
                     | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f))))) 
              & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f) 
                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                         >> 5U))) & ((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                     | (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout) 
                       >> 6U)))));
    VL_EXTEND_WQ(80,64, __Vtemp1327, (((QData)((IData)(
                                                       vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[2U])) 
                                       << 0x30U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[1U])) 
                                        << 0x10U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[0U])) 
                                        >> 0x10U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_premux_data 
        = (((- (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data))) 
            & (((QData)((IData)(((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
                                  ? __Vtemp1327[1U]
                                  : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[1U]))) 
                << 0x20U) | (QData)((IData)(((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
                                              ? __Vtemp1327[0U]
                                              : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_data_only_pre_new[0U]))))) 
           | ((- (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f))) 
              & ((0x3fU >= (0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                     << 4U))) ? ((((QData)((IData)(
                                                                   ((0x9bU 
                                                                     >= 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                     ? 
                                                                    (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                       ? 0U
                                                                       : 
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                            >> 5U)))] 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                                     | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * 
                                                                          (3U 
                                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                              >> 1U)))))
                                                                      ? 
                                                                     (((0U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * 
                                                                            (3U 
                                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U)))))
                                                                        ? 0U
                                                                        : 
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (7U 
                                                                          & (((IData)(0x27U) 
                                                                              * 
                                                                              (3U 
                                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                             >> 5U)))] 
                                                                        << 
                                                                        ((IData)(0x20U) 
                                                                         - 
                                                                         (0x1fU 
                                                                          & ((IData)(0x27U) 
                                                                             * 
                                                                             (3U 
                                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))))))) 
                                                                      | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                         (7U 
                                                                          & (((IData)(0x27U) 
                                                                              * 
                                                                              (3U 
                                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                             >> 5U))] 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & ((IData)(0x27U) 
                                                                             * 
                                                                             (3U 
                                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))))))
                                                                      : 0U)))) 
                                                 >> 
                                                 (0x10U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                     << 4U)))
                  : 0ULL)));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_sel_premux_data 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_double_err 
        = ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f_ff__dout)
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error) 
               & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f))))
            : (((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error) 
                       << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error))) 
               & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__single_ecc_error)
            ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
               ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__din_plus_parity)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__din_plus_parity);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__single_ecc_error));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__single_ecc_error)
            ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
               ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__din_plus_parity)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__din_plus_parity);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__single_ecc_error) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
        = (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_sel_premux_data)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__ic_premux_data
                    : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U])))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
        = (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_sel_premux_data)
                     ? vlTOPp->tb_top__DOT__rvtop__DOT__ic_premux_data
                     : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U])))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
        = (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_sel_premux_data)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__ic_premux_data
                    : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U])))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
        = (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_sel_premux_data)
                     ? vlTOPp->tb_top__DOT__rvtop__DOT__ic_premux_data
                     : (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U])))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in 
        = (((QData)((IData)(((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_double_err))
                              ? 1U : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f)
                                       ? 2U : ((4U 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout))
                                                ? 3U
                                                : 0U))))) 
            << 0x33U) | (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f)) 
                          << 0x14U) | (QData)((IData)(
                                                      ((0xfff00U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                           << 4U)) 
                                                       | (0xffU 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout)))))));
    __Vtemp1330[0U] = 1U;
    __Vtemp1330[1U] = 0U;
    __Vtemp1330[2U] = 0U;
    __Vtemp1330[3U] = 0U;
    __Vtemp1330[4U] = 0U;
    __Vtemp1330[5U] = 0U;
    __Vtemp1330[6U] = 0U;
    __Vtemp1330[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp1331, __Vtemp1330, (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in 
        = ((0x8000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_double_err) 
                       << 0xeU)) | ((0x4000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f) 
                                                << 0xdU)) 
                                    | ((0x2000U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__hist1_raw) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                                                  << 0xaU) 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
                                                    << 7U))) 
                                             | ((0x400U 
                                                 & (((0xfffffc00U 
                                                      & (((- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)))) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_f)) 
                                                         << 9U)) 
                                                     | (0x400U 
                                                        & (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                                                           >> 1U)))) 
                                                            << 9U) 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_p1_f) 
                                                              << 0xaU)))) 
                                                    | (0xfffffc00U 
                                                       & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f)) 
                                                           << 9U) 
                                                          & ((((- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)))) 
                                                               & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_rd_f)))) 
                                                              << 9U) 
                                                             | (((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                                                                >> 1U)))) 
                                                                 << 9U) 
                                                                & ((0x400U 
                                                                    & (((((((0x1fU 
                                                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predpipe_mp) 
                                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_rd_tag_p1_f)) 
                                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid)) 
                                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                                             >> 7U)) 
                                                                         & ((0xffU 
                                                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predpipe_mp 
                                                                                >> 5U)) 
                                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f)))
                                                                         ? 
                                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                                                         >> 9U)
                                                                         : 
                                                                        (0U 
                                                                         != 
                                                                         ((((((((__Vtemp1331[0U] 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[0U]) 
                                                                                | (__Vtemp1331[1U] 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[1U])) 
                                                                               | (__Vtemp1331[2U] 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[2U])) 
                                                                              | (__Vtemp1331[3U] 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[3U])) 
                                                                             | (__Vtemp1331[4U] 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[4U])) 
                                                                            | (__Vtemp1331[5U] 
                                                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[5U])) 
                                                                           | (__Vtemp1331[6U] 
                                                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[6U])) 
                                                                          | (__Vtemp1331[7U] 
                                                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[7U])))) 
                                                                       << 0xaU)) 
                                                                   | (0xfffffc00U 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_rd_f) 
                                                                         << 9U))))))))) 
                                                | ((0x200U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                                                            << 7U) 
                                                           & ((~ 
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
                                                                >> 2U)) 
                                                              << 8U)) 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
                                                             << 7U))) 
                                                      | ((0x80U 
                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_double_err) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__hist1_raw) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                                                                          << 3U) 
                                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                                                                            >> 1U))) 
                                                                     | ((4U 
                                                                         & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_f)) 
                                                                              << 2U) 
                                                                             | (0xfffffffcU 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_f)) 
                                                                                << 1U))) 
                                                                            | (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f)) 
                                                                                << 2U) 
                                                                               & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                                                                << 2U) 
                                                                                | (0xfffffffcU 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                                                                << 1U))) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_rd_f) 
                                                                                << 2U))))) 
                                                                        | ((2U 
                                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                                                                                & (~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                                                                                >> 2U))) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                                                                                >> 1U))))))))))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc 
        = ((0x3f80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc)) 
           | ((0x40U & (((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                  >> 0x26U)) ^ (0x40U 
                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
                        << 6U)) | ((0x20U & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                      >> 0x1fU)) 
                                             << 5U)) 
                                   | ((0x10U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 0xfU)) 
                                                << 4U)) 
                                      | ((8U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 7U)) 
                                                << 3U)) 
                                         | ((4U & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                            >> 3U)) 
                                                   << 2U)) 
                                            | (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
        = ((0xffffffff00000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data) 
           | (IData)((IData)(((0xfc000000U & ((IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                       >> 0x20U)) 
                                              << 0x1aU)) 
                              | ((0x3fff800U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 0x10U)) 
                                                << 0xbU)) 
                                 | ((0x7f0U & ((IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                        >> 8U)) 
                                               << 4U)) 
                                    | ((0xeU & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 4U)) 
                                                << 1U)) 
                                       | (1U & (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                        >> 2U))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc)) 
           | ((0x2000U & (((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                    >> 0x26U)) ^ (0x40U 
                                                  == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))) 
                          << 0xdU)) | ((0x1000U & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                            >> 0x1fU)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           ((IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                     >> 0xfU)) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & ((IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                          >> 7U)) 
                                                 << 0xaU)) 
                                             | ((0x200U 
                                                 & ((IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                             >> 3U)) 
                                                    << 9U)) 
                                                | (0x180U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity) 
                                                      << 7U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
        = ((0xffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data) 
           | ((QData)((IData)(((0xfc000000U & ((IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                        >> 0x20U)) 
                                               << 0x1aU)) 
                               | ((0x3fff800U & ((IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                          >> 0x10U)) 
                                                 << 0xbU)) 
                                  | ((0x7f0U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 8U)) 
                                                << 4U)) 
                                     | ((0xeU & ((IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                          >> 4U)) 
                                                 << 1U)) 
                                        | (1U & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__dout_plus_parity 
                                                         >> 2U))))))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_single_err 
        = (((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_iccm_access_f)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error 
        = ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_data = (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_sel_premux_data)))))) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U]))));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_data = (vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_data 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                                              >> 1U) 
                                                                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_sel_premux_data)))))) 
                                                      & (((QData)((IData)(
                                                                          vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U])))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__genblk1__DOT__misc2ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__genblk1__DOT__misc1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__genblk1__DOT__misc0ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__genblk1__DOT__brdata2ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__genblk1__DOT__brdata1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__genblk1__DOT__brdata0ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_data_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
            ? ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error))
                ? (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr)))
                : (((QData)((IData)(((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data)
                                      : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
                                                 >> 0x20U))))) 
                    << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_rdata);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_error_start) 
            << 0xaU) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                         << 9U) | ((0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r) 
                                               << 8U) 
                                              | (0xffffff00U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                    & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                       << 8U))))) 
                                   | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r) 
                                       << 7U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                  << 6U) 
                                                 | ((0x3fffffe0U 
                                                     & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                          << 5U) 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                            >> 2U)) 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_external_m) 
                                                           << 5U))) 
                                                    | ((0x3ffffff0U 
                                                        & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                             << 4U) 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                                               >> 2U)) 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_external_m) 
                                                              << 4U))) 
                                                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                                           << 3U) 
                                                          | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r) 
                                                              << 2U) 
                                                             | ((2U 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                    >> 5U)) 
                                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__force_halt)))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din 
        = ((0x40U & (((0xffffffc0U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)) 
                      | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_error_start)) 
                         << 6U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                    << 6U))) | ((0x30U 
                                                 & ((((- (IData)(
                                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2) 
                                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((- (IData)(
                                                                      (1U 
                                                                       & ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))) 
                                                           << 4U) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
                                                | ((0xcU 
                                                    & (((((- (IData)(
                                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
                                                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                         << 2U) 
                                                        | (0x3ffffffcU 
                                                           & (((- (IData)(
                                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1) 
                                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                               << 2U) 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                                 >> 2U)))) 
                                                       | (((- (IData)(
                                                                      (1U 
                                                                       & ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                                                          << 2U))) 
                                                   | (3U 
                                                      & (((((- (IData)(
                                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                                                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                                                           | ((- (IData)(
                                                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0) 
                                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                                 >> 4U))) 
                                                          | ((- (IData)(
                                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0) 
                                                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))))) 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))))) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_r) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_r)
                ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                    << 0x1bU) | (0x7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r))
                : ((0xf8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect) 
                   | (0x7ffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect 
                                    + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r) 
                                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error))))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ecc_dat0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error))
            ? (((QData)((IData)((0x7fU & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error))
                                           ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc)
                                           : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_ecc) 
                                              >> 7U))))) 
                << 0x2eU) | (((QData)((IData)(((1U 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error))
                                                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data)
                                                : (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_corrected_data 
                                                           >> 0x20U))))) 
                              << 0xeU) | (QData)((IData)(
                                                         (0x3fffU 
                                                          & ((1U 
                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_single_ecc_error))
                                                              ? 
                                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout) 
                                                              >> 1U)
                                                              : 
                                                             ((IData)(1U) 
                                                              + 
                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__iccm_index_f__dout) 
                                                               >> 1U))))))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
            ? ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                ? 0U : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                         ? 0U : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                                  ? 0U : 3U))) : ((2U 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_err_r)) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                                     ? 0U
                                                     : 3U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error)
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_error_start) 
                                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))
                                                      ? 1U
                                                      : 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status = 0U;
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                         | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
        } else {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                    = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en 
                    = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__iccm_rd_ecc_single_err) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_error_start)) 
                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error)) 
                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)));
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status 
                    = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en;
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data 
        = ((- (QData)((IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_byp_data) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f)) 
                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data))))) 
           & vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_data);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__freeff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__bundle2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__bundle2ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_state_en)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_nxtstate)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_dat_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sb_write_status)
                     ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                        >> 3U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
            ? ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                ? ((1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_err_r))) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                    ? 0U : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_err_r)
                             ? 1U : 3U)) : ((1U & (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                                             ? 0U : 
                                            ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f))
                                              ? 3U : 2U)))
            : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))
                ? ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))
                    ? 0U : (((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f) 
                                & (3U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data)))))
                             ? 3U : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f))
                                      ? 2U : 1U))) : 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch = 0U;
    if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch 
            = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout) 
                     | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f) 
                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))));
    } else {
        if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch 
                = (((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f)) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f) 
                       & (3U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data))))) 
                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))));
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_state_en)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_nxtstate)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall 
        = (1U & ((((((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                     | (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                    | (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__err_stop_state_ff__dout))) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__err_stop_fetch)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_err_r)) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                    >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state 
        = ((2U & ((0xffffffeU & (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                        >> 6U)) << 1U) 
                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                      >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f) 
                                                 << 1U)) 
                                 & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                    << 1U))) | (0x7fffffeU 
                                                & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                     >> 5U) 
                                                    & ((~ 
                                                        ((((((((2U 
                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                               | (6U 
                                                                  == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                              & (~ 
                                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)))) 
                                                             | (0U 
                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                             >> 8U)))) 
                                                       << 1U)) 
                                                   & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                                      << 1U))))) 
           | (1U & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                     & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_noredir_r))) 
                        & (0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                        >> 5U))))) 
                    | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                        >> 5U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_pmu_fetch_stall 
        = ((3U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                         >> 5U))) | ((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                   >> 5U))) 
                                     & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                          >> 4U) & 
                                         (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
                                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)))) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_bf 
        = (((((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                            >> 5U))) & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                            >> 3U) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)))))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes) 
                  & (~ (((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                         | ((6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                            & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bp_hit_taken_q_f)) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_eol_f))))) 
                        & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))))))))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_noredir_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_stall_any) 
            << 9U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f) 
                       << 8U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                  << 7U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state) 
                                             << 5U) 
                                            | ((0x10U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                                   << 1U)) 
                                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_bf) 
            << 8U) | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_bf) 
                         & (~ ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                  >> 7U)))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_miss_f))) 
                       << 7U) | (((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
                                  << 6U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_r) 
                                             << 5U) 
                                            | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                << 4U) 
                                               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f))) 
                                                      << 2U) 
                                                     | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arvalid_ff) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_arready_unq_ff) 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                                  >> 5U)))) 
                                                          & (0U 
                                                             != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent)))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_dma_access_ok 
        = (1U & ((((((0xee00U != (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                             >> 0xfU))) 
                     | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                         >> 4U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
                                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1))))) 
                    | ((3U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                     >> 5U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_bf)))) 
                   | (0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                   >> 5U)))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                    >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_en = (((
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_bf))) 
                                                   & (0xee00U 
                                                      != 
                                                      (0xffffU 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     (((((((6U 
                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en))) 
                                                          | ((1U 
                                                              == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))) 
                                                         | ((7U 
                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))) 
                                                        | ((3U 
                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))) 
                                                       | ((4U 
                                                           == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)))) 
                                                      | (((1U 
                                                           == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)) 
                                                         & (3U 
                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))))) 
                                                 | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_bf) 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final)) 
                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_bf))) 
                                                    & (0xee00U 
                                                       != 
                                                       (0xffffU 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                                           >> 0xfU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fbwrite_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__fbwrite_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_sigs_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__ifu_pmu_sigs_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_dma_access_ok) 
              & (3U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                >> 1U)) & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clken 
        = (3U & ((((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_en) 
                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc))))) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_wr_way_en)) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_en) 
                  | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                     >> 1U)) & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & (0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                      >> 0x10U)))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en 
        = ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clken)) 
           & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_wren_q)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en 
        = ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clken)) 
           & (0U != (3U & (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_en))) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en)) 
                           & (- (IData)((1U & ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en)))) 
                                               & (~ 
                                                  vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U])))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((0xcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en) 
              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                 & (- (IData)((1U & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                        >> 2U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug) 
              & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                     >> 2U)) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                  >> 2U) & (3U == (3U 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q)))) 
                                & (~ (IData)((3U == 
                                              (3U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                                >> 3U)))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden 
        = ((0xcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
           | (3U & (- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (2U & ((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
                    | (((0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
                        | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                           << 1U)) | (0xfffffffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren 
        = ((3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en) 
               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_debug_wr_way_en) 
                  & (- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                      >> 2U)))))) << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug) 
               << 1U) & ((0x7ffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                         >> 1U)) | 
                         (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                               >> 2U)) & (3U == (3U 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q)))) 
                          << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden 
        = ((3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
           | (0xcU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
                                        >> 1U)))) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (4U & ((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
                    | (((0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
                        | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                           << 2U)) | (0xfffffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
           | (8U & ((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken)) 
                    | (((0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_rden)) 
                        | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                           << 3U)) | (0xfffffff8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q 
        = ((0x3fe00U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q) 
           | (0x1ffU & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                            >> 2U) & (3U == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q)))) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_en_with_debug)) 
                         & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en)))))
                         ? ((0x1fcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                       >> 3U)) | (3U 
                                                  & ((IData)(1U) 
                                                     + 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                                      >> 3U))))
                         : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                            >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req)
                  ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
                      >= (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                >> 0x10U))) ? ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                                                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)))))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                      : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req))))
                          ? ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                          : 0U)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)))
                  ? ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))
                      ? 0U : ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
            << 8U) | ((0xe0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                >> 3U)) | ((0x18U & 
                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr 
                                             << 1U)) 
                                           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                     >> 1U)) 
                                                 | (0U 
                                                    != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_double_ecc_error)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din 
        = (0x20U | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                     << 9U) | ((0x100U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_data_error_ff) 
                                            << 8U) 
                                           | (0xffffff00U 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))) 
                                          & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_reset_data_beat_cnt)) 
                                             << 8U))) 
                               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final) 
                                   << 7U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_new_in) 
                                              << 6U) 
                                             | (((((((IData)(vlTOPp->tb_top__DOT__ifu_axi_rvalid) 
                                                     & (7U 
                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_new_data_beat_count))) 
                                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
                                                   & ((5U 
                                                       == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                      | (5U 
                                                         == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)))) 
                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_flush_final))) 
                                                 << 4U) 
                                                | ((8U 
                                                    & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f) 
                                                          << 3U) 
                                                         | (0xfffffff8U 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout))) 
                                                        & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_cmd_sent)) 
                                                           << 3U)) 
                                                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                                          << 3U))) 
                                                   | ((4U 
                                                       & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff) 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat)) 
                                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__scnd_miss_req))) 
                                                           << 2U) 
                                                          | (0xfffffffcU 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout) 
                                                                & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f)) 
                                                                   << 2U))))) 
                                                      | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_dma_access_ok) 
                                                            & (3U 
                                                               != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) 
                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__iccm_dma_sb_error))) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
              & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
               & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
               & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
               & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
               & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 4U));
    if (((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)) 
         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req))))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[0U] 
            = (IData)((0x7fffffffffULL & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                          >> 0xeU)));
        vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U] 
            = ((0xffffff80U & ((IData)((0x7fffffffffULL 
                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                           >> 0xeU))) 
                               << 7U)) | (IData)(((0x7fffffffffULL 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                                      >> 0xeU)) 
                                                  >> 0x20U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U] 
            = (0x3fffU & ((0x7fU & ((IData)((0x7fffffffffULL 
                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                                >> 0xeU))) 
                                    >> 0x19U)) | (0xffffff80U 
                                                  & ((IData)(
                                                             ((0x7fffffffffULL 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout 
                                                                  >> 0xeU)) 
                                                              >> 0x20U)) 
                                                     << 7U))));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[0U] 
            = (IData)((((QData)((IData)((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)))) 
                        << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata))));
        vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U] 
            = ((0xffffff80U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x20U)) 
                               << 7U)) | (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata))) 
                                                  >> 0x20U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U] 
            = (0x3fffU & ((0x3f80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)) 
                          | (0x7fU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 0x20U)) 
                                      >> 0x19U))));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | ((((((0U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error))) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
                & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
              | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                  >> 1U) & (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                         >> 5U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                 >> 2U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                             >> 1U)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
                 & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 1U) | (0xfffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                        & ((1U == (7U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                      >> 5U))) 
                                           << 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                 >> 4U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                             >> 2U)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
                 & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                   & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 2U) | (0xfffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                         << 1U) & (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                        >> 5U))) 
                                                   << 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                 >> 6U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                             >> 3U)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
                 & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                   & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 3U) | (0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                         << 2U) & (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                        >> 5U))) 
                                                   << 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                 >> 8U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                             >> 4U)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
                 & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                   & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 4U) | (0xfffffff0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                         << 3U) & (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                        >> 5U))) 
                                                   << 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rden = ((
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write))) 
                                                  | ((0xee00U 
                                                      == 
                                                      (0xffffU 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf 
                                                          >> 0xfU))) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_bf)));
    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wren = ((
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write)) 
                                                  | (3U 
                                                     == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_read 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_write 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_req) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write));
    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_size = 
        ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req))) 
         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_sz));
    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rw_addr = 
        (0x7fffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req)) 
                     & (3U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)))
                     ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr 
                        >> 1U) : (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_dma_access_q_ok) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_req))) 
                                   & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout)))
                                   ? (0x7ffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__ecc_dat0_ff__dout) 
                                                 << 1U))
                                   : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_clear_en 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_clear_en)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_clear_en 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_clear_en)) 
           | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_write_en) 
                              << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__sel_bypass)) 
           | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en) 
                              << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_addr_match))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__write_bypass_en 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__write_bypass_en)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_addr_match))) 
              & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wrptr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__write_bypass_en 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__write_bypass_en)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ic_b_read_en) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__any_addr_match))) 
               & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__wrptr))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__miscff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden) 
            << 8U) | ((0xf8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_q) 
                                << 3U)) | ((((- (IData)(
                                                        (1U 
                                                         & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                             >> 1U) 
                                                            & (~ 
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                                                >> 0x12U)))))) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_debug_way)) 
                                            << 1U) 
                                           | (1U & 
                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_ic_diag_pkt[0U] 
                                               >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[0U] 
        = (- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[1U] 
        = (- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[2U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[2U]) 
           | (0x7fU & (- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[2U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[2U]) 
           | (0xffffff80U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                               >> 1U)))) 
                             << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[3U] 
        = ((0x7fU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                       >> 1U)))) >> 0x19U)) 
           | (0xffffff80U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                               >> 1U)))) 
                             << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[4U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[4U]) 
           | ((0x7fU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                          >> 1U)))) 
                        >> 0x19U)) | (0x3f80U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                                >> 1U)))) 
                                                 << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[4U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[4U]) 
           | (0xffffc000U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                               >> 2U)))) 
                             << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[5U] 
        = ((0x3fffU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                         >> 2U)))) 
                       >> 0x12U)) | (0xffffc000U & 
                                     ((- (IData)((1U 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                     >> 2U)))) 
                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[6U] 
        = ((0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[6U]) 
           | ((0x3fffU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                            >> 2U)))) 
                          >> 0x12U)) | (0x1fc000U & 
                                        ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                        >> 2U)))) 
                                         << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[6U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[6U]) 
           | (0xffe00000U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                               >> 3U)))) 
                             << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[7U] 
        = ((0x1fffffU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                           >> 3U)))) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                      >> 3U)))) 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__ic_b_sb_bit_en_vec[8U] 
        = ((0x1fffffU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                           >> 3U)))) 
                         >> 0xbU)) | (0xfe00000U & 
                                      ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sb_wren) 
                                                      >> 3U)))) 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sram_en 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sram_en)) 
           | (0U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sram_en 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_sram_en)) 
           | ((IData)((0U != (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clken) 
                                    >> 2U)))) << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr_index_only 
        = ((0xfffffff0000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr_index_only) 
           | (IData)((IData)((0x1ffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr_index_only 
        = ((0xfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr_index_only) 
           | ((QData)((IData)((0x1ffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q 
                                         >> 9U)))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr 
        = ((0xfffffff0000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr) 
           | (IData)((IData)(((0xffffe00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                             >> 3U)) 
                              | (0x1ffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr 
        = ((0xfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rw_addr) 
           | ((QData)((IData)(((0xffffe00U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_rw_int_addr 
                                              >> 3U)) 
                               | (0x1ffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rw_addr_bank_q 
                                            >> 9U))))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_misc_bits__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__iccm_enabled__DOT__dma_misc_bits__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__misc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellinp__misc_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 3U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 4U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 4U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_rpend_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[0U] 
        = (IData)((0x7fffffffffULL & (((QData)((IData)(
                                                       vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[0U])))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U]) 
           | (IData)(((0x7fffffffffULL & (((QData)((IData)(
                                                           vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[0U])))) 
                      >> 0x20U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[1U]) 
           | (0xffffff80U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U])) 
                                          << 0x19U) 
                                         | ((QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                            >> 7U)))) 
                             << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U]) 
           | ((0x7fU & ((IData)((0x7fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U])) 
                                   << 0x19U) | ((QData)((IData)(
                                                                vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                                >> 7U)))) 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U])) 
                                                     << 0x19U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                                       >> 7U))) 
                                                >> 0x20U)) 
                                       << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[2U]) 
           | (0xffffc000U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[0U]))))) 
                             << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U] 
        = ((0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U]) 
           | ((0x3fffU & ((IData)((0x7fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[0U]))))) 
                          >> 0x12U)) | (0xffffc000U 
                                        & ((IData)(
                                                   ((0x7fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[0U])))) 
                                                    >> 0x20U)) 
                                           << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[3U]) 
           | (0xffe00000U & ((IData)((0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U])) 
                                          << 0x19U) 
                                         | ((QData)((IData)(
                                                            vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                            >> 7U)))) 
                             << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_wr_data_vec[4U] 
        = ((0x1fffffU & ((IData)((0x7fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U])) 
                                    << 0x19U) | ((QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                                 >> 7U)))) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((IData)(((0x7fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[2U])) 
                                                     << 0x19U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->tb_top__DOT__rvtop__DOT__iccm_wr_data[1U])) 
                                                       >> 7U))) 
                                                >> 0x20U)) 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 3U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 4U)) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 4U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_done_dff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                  >> 3U)) & (((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                | ((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 3U))) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 4U))) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                                | ((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                                | ((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                               | ((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift))) 
                                                                              | ((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d))) 
                                                                             | ((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                                            | ((9U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                               & (1U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                           | ((0xaU 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                              & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 6U) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                                          | ((0xbU 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                             & (2U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                         | ((0xcU 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                            & (3U 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                        | (((0xdU 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                            & (2U 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                              >> 4U))) 
                                                                       | (((0xeU 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                           & (3U 
                                                                              == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                             >> 4U))) 
                                                                      | ((0xfU 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                         & (4U 
                                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                     | ((0x10U 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                        & (5U 
                                                                           == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                    | ((0x12U 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                       & (6U 
                                                                          == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                   | ((0x11U 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                      & (7U 
                                                                         == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                  | ((0x13U 
                                                                      == 
                                                                      (0x3ffU 
                                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                     & (8U 
                                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                 | ((0x14U 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                    & (9U 
                                                                       == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                | ((0x15U 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                   & (0xaU 
                                                                      == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                               | ((0x16U 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                  & (0xbU 
                                                                     == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                              | ((0x17U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                 & (0xcU 
                                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                             | ((0x18U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                                & ((0xdU 
                                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                   | (0xeU 
                                                                      == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                            | ((0x19U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                               & (((IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                            >> 0x37U)) 
                                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                           | ((0x1aU 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                              & (((IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                           >> 0x36U)) 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                          | ((0x1bU 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                             & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                  >> 7U) 
                                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                                         | ((0x1cU 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_pmu_fetch_stall))) 
                                                        | ((0x1eU 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                       | ((0x1fU 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_postsync_stall))) 
                                                      | ((0x20U 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_presync_stall))) 
                                                     | ((0x22U 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_store_stall_any))) 
                                                    | ((0x23U 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any))) 
                                                   | ((0x24U 
                                                       == 
                                                       (0x3ffU 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_stall_any))) 
                                                  | ((0x25U 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                     & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                         | (0U 
                                                            != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)))) 
                                                 | ((0x26U 
                                                     == 
                                                     (0x3ffU 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                    & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                                                | ((0x27U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int))) 
                                               | ((0x28U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                                              | ((0x29U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                 & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_r) 
                                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_r)) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)))) 
                                             | ((0x2aU 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout))) 
                                            | ((0x2bU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_trxn))) 
                                           | ((0x2cU 
                                               == (0x3ffU 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_misaligned))) 
                                          | ((0x2dU 
                                              == (0x3ffU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                >> 2U))) 
                                         | ((0x2eU 
                                             == (0x3ffU 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_error))) 
                                        | ((0x2fU == 
                                            (0x3ffU 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                              >> 1U))) 
                                       | ((0x30U == 
                                           (0x3ffU 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_busy))) 
                                      | ((0x31U == 
                                          (0x3ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                         & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout))) 
                                     | ((0x32U == (0x3ffU 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                        & ((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout) 
                                           & (0U != 
                                              ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                >> 0x11U) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie)))))) 
                                    | ((0x36U == (0x3ffU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                       & (0xfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                   | ((0x37U == (0x3ffU 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                      & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                             >> 5U)) 
                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                  | ((0x38U == (0x3ffU 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                     & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            >> 4U)) 
                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                                 | ((0x200U == (0x3ffU 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                       >> 2U))) | (
                                                   (0x201U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_read))) 
                               | ((0x202U == (0x3ffU 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_write))) 
                              | ((0x203U == (0x3ffU 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_read))) 
                             | ((0x204U == (0x3ffU 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_write)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                   >> 4U)) << 1U) & (((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                | (0x3ffffffeU 
                                                                                & (((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 3U)))) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 1U)) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 1U)) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 1U)) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift)) 
                                                                                << 1U)) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d)) 
                                                                                << 1U)) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                                << 1U)) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (1U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                                | (0x7fffffeU 
                                                                                & (((0xaU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                << 1U) 
                                                                                & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 5U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                << 1U)) 
                                                                                & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                                << 1U))))) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                                | (0x1ffffffeU 
                                                                                & ((((0xdU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 3U)))) 
                                                                               | (0x1ffffffeU 
                                                                                & ((((0xeU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 3U)))) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (4U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                             | (((0x10U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (5U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 1U)) 
                                                                            | (((0x12U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                               << 1U)) 
                                                                           | (((0x11U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                               & (7U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                              << 1U)) 
                                                                          | (((0x13U 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                              & (8U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                             << 1U)) 
                                                                         | (((0x14U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                             & (9U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                            << 1U)) 
                                                                        | (((0x15U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                            & (0xaU 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                           << 1U)) 
                                                                       | (((0x16U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                           & (0xbU 
                                                                              == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          << 1U)) 
                                                                      | (((0x17U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                          & (0xcU 
                                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                         << 1U)) 
                                                                     | (((0x18U 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                         & ((0xdU 
                                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                            | (0xeU 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                        << 1U)) 
                                                                    | (((0x19U 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                        & (((IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x37U)) 
                                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                       << 1U)) 
                                                                   | (((0x1aU 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                       & (((IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x36U)) 
                                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                      << 1U)) 
                                                                  | (0x3fffffeU 
                                                                     & (((0x1bU 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                         << 1U) 
                                                                        & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                             >> 6U) 
                                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                               << 1U)) 
                                                                           & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                              << 1U))))) 
                                                                 | (((0x1cU 
                                                                      == 
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                                    << 1U)) 
                                                                | (((0x1eU 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                   << 1U)) 
                                                               | (((0x1fU 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xaU)))) 
                                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                  << 1U)) 
                                                              | (((0x20U 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(
                                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0xaU)))) 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                 << 1U)) 
                                                             | (((0x22U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0xaU)))) 
                                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_store_stall_any)) 
                                                                << 1U)) 
                                                            | (((0x23U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0xaU)))) 
                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                                               << 1U)) 
                                                           | (((0x24U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0xaU)))) 
                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                                              << 1U)) 
                                                          | (((0x25U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0xaU)))) 
                                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                                  | (0U 
                                                                     != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                                                             << 1U)) 
                                                         | (((0x26U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0xaU)))) 
                                                             & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                            << 1U)) 
                                                        | (((0x27U 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0xaU)))) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                           << 1U)) 
                                                       | (((0x28U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0xaU)))) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                          << 1U)) 
                                                      | (((0x29U 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0xaU)))) 
                                                          & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_r) 
                                                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_r)) 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
                                                         << 1U)) 
                                                     | (((0x2aU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xaU)))) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                        << 1U)) 
                                                    | (((0x2bU 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0xaU)))) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                                       << 1U)) 
                                                   | (((0x2cU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xaU)))) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                                      << 1U)) 
                                                  | (0x7ffffffeU 
                                                     & (((0x2dU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xaU)))) 
                                                         << 1U) 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                           >> 1U)))) 
                                                 | (((0x2eU 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0xaU)))) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                                    << 1U)) 
                                                | (0xfffffffeU 
                                                   & (((0x2fU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xaU)))) 
                                                       << 1U) 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                               | (((0x30U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xaU)))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                                                  << 1U)) 
                                              | (((0x31U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xaU)))) 
                                                  & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout)) 
                                                 << 1U)) 
                                             | (((0x32U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xaU)))) 
                                                 & ((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout) 
                                                    & (0U 
                                                       != 
                                                       ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                         >> 0x11U) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                                                << 1U)) 
                                            | (((0x36U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xaU)))) 
                                                & (0xfU 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                               << 1U)) 
                                           | (0xffffffeU 
                                              & (((0x37U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xaU)))) 
                                                  << 1U) 
                                                 & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                      << 1U) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                        >> 4U)) 
                                                    & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                       << 1U))))) 
                                          | (0x1ffffffeU 
                                             & (((0x38U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xaU)))) 
                                                 << 1U) 
                                                & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     << 1U) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                       >> 3U)) 
                                                   & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                      << 1U))))) 
                                         | (0x7ffffffeU 
                                            & (((0x200U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xaU)))) 
                                                << 1U) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  >> 1U)))) 
                                        | (((0x201U 
                                             == (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xaU)))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_read)) 
                                           << 1U)) 
                                       | (((0x202U 
                                            == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xaU)))) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_write)) 
                                          << 1U)) | 
                                      (((0x203U == 
                                         (0x3ffU & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xaU)))) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_read)) 
                                       << 1U)) | ((
                                                   (0x204U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xaU)))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_write)) 
                                                  << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                   >> 5U)) << 2U) & (((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                | (0x7ffffffcU 
                                                                                & (((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                                | (0x3ffffffcU 
                                                                                & (((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 2U)) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 2U)) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 2U)) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift)) 
                                                                                << 2U)) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d)) 
                                                                                << 2U)) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                                << 2U)) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (1U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                                | (0xffffffcU 
                                                                                & (((0xaU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                << 2U) 
                                                                                & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 4U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                                << 2U))))) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (2U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (3U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                                | (0x3ffffffcU 
                                                                                & ((((0xdU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (2U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 2U)))) 
                                                                               | (0x3ffffffcU 
                                                                                & ((((0xeU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (3U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 2U)))) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (4U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                             | (((0x10U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (5U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 2U)) 
                                                                            | (((0x12U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                                & (6U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                               << 2U)) 
                                                                           | (((0x11U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                               & (7U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                              << 2U)) 
                                                                          | (((0x13U 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                              & (8U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                             << 2U)) 
                                                                         | (((0x14U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                             & (9U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                            << 2U)) 
                                                                        | (((0x15U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                            & (0xaU 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                           << 2U)) 
                                                                       | (((0x16U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                           & (0xbU 
                                                                              == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          << 2U)) 
                                                                      | (((0x17U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                          & (0xcU 
                                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                         << 2U)) 
                                                                     | (((0x18U 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                         & ((0xdU 
                                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                            | (0xeU 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                        << 2U)) 
                                                                    | (((0x19U 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                        & (((IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x37U)) 
                                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                       << 2U)) 
                                                                   | (((0x1aU 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                       & (((IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x36U)) 
                                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                      << 2U)) 
                                                                  | (0x7fffffcU 
                                                                     & (((0x1bU 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                         << 2U) 
                                                                        & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                             >> 5U) 
                                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                               << 2U)) 
                                                                           & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                              << 2U))))) 
                                                                 | (((0x1cU 
                                                                      == 
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                                    << 2U)) 
                                                                | (((0x1eU 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                   << 2U)) 
                                                               | (((0x1fU 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x14U)))) 
                                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                  << 2U)) 
                                                              | (((0x20U 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(
                                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x14U)))) 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                 << 2U)) 
                                                             | (((0x22U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x14U)))) 
                                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_store_stall_any)) 
                                                                << 2U)) 
                                                            | (((0x23U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x14U)))) 
                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                                               << 2U)) 
                                                           | (((0x24U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x14U)))) 
                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                                              << 2U)) 
                                                          | (((0x25U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x14U)))) 
                                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                                  | (0U 
                                                                     != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                                                             << 2U)) 
                                                         | (((0x26U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x14U)))) 
                                                             & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                            << 2U)) 
                                                        | (((0x27U 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x14U)))) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                           << 2U)) 
                                                       | (((0x28U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x14U)))) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                          << 2U)) 
                                                      | (((0x29U 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x14U)))) 
                                                          & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_r) 
                                                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_r)) 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
                                                         << 2U)) 
                                                     | (((0x2aU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x14U)))) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                        << 2U)) 
                                                    | (((0x2bU 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x14U)))) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                                       << 2U)) 
                                                   | (((0x2cU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x14U)))) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                                      << 2U)) 
                                                  | (0xfffffffcU 
                                                     & (((0x2dU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x14U)))) 
                                                         << 2U) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                 | (((0x2eU 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x14U)))) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                                    << 2U)) 
                                                | (0xfffffffcU 
                                                   & (((0x2fU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x14U)))) 
                                                       << 2U) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         << 1U)))) 
                                               | (((0x30U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x14U)))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                                                  << 2U)) 
                                              | (((0x31U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x14U)))) 
                                                  & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout)) 
                                                 << 2U)) 
                                             | (((0x32U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x14U)))) 
                                                 & ((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout) 
                                                    & (0U 
                                                       != 
                                                       ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                         >> 0x11U) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                                                << 2U)) 
                                            | (((0x36U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x14U)))) 
                                                & (0xfU 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                               << 2U)) 
                                           | (0x1ffffffcU 
                                              & (((0x37U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x14U)))) 
                                                  << 2U) 
                                                 & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                      << 2U) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                        >> 3U)) 
                                                    & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                       << 2U))))) 
                                          | (0x3ffffffcU 
                                             & (((0x38U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x14U)))) 
                                                 << 2U) 
                                                & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     << 2U) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                       >> 2U)) 
                                                   & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                      << 2U))))) 
                                         | (0xfffffffcU 
                                            & (((0x200U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x14U)))) 
                                                << 2U) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                        | (((0x201U 
                                             == (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x14U)))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_read)) 
                                           << 2U)) 
                                       | (((0x202U 
                                            == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x14U)))) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_write)) 
                                          << 2U)) | 
                                      (((0x203U == 
                                         (0x3ffU & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x14U)))) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_read)) 
                                       << 2U)) | ((
                                                   (0x204U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x14U)))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_write)) 
                                                  << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_r)) 
           | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcountinhibit) 
                   >> 6U)) << 3U) & (((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((1U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((2U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                                                | (0x7ffffff8U 
                                                                                & (((3U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 3U)) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U)))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 3U)) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x34U))) 
                                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                                << 3U)) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_shift)) 
                                                                                << 3U)) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_decode_d)) 
                                                                                << 3U)) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                                << 3U)) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (1U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                                | (0x1ffffff8U 
                                                                                & (((0xaU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                << 3U) 
                                                                                & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                << 3U)) 
                                                                                & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                                << 3U))))) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                                | (0x7ffffff8U 
                                                                                & ((((0xdU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (2U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 1U)))) 
                                                                               | (0x7ffffff8U 
                                                                                & ((((0xeU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (3U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                                >> 1U)))) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (4U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                             | (((0x10U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (5U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                                << 3U)) 
                                                                            | (((0x12U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                               << 3U)) 
                                                                           | (((0x11U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                               & (7U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                              << 3U)) 
                                                                          | (((0x13U 
                                                                               == 
                                                                               (0x3ffU 
                                                                                & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                              & (8U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                             << 3U)) 
                                                                         | (((0x14U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                             & (9U 
                                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                            << 3U)) 
                                                                        | (((0x15U 
                                                                             == 
                                                                             (0x3ffU 
                                                                              & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                            & (0xaU 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                           << 3U)) 
                                                                       | (((0x16U 
                                                                            == 
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                           & (0xbU 
                                                                              == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                          << 3U)) 
                                                                      | (((0x17U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                          & (0xcU 
                                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                                         << 3U)) 
                                                                     | (((0x18U 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                         & ((0xdU 
                                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                            | (0xeU 
                                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                                        << 3U)) 
                                                                    | (((0x19U 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                        & (((IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x37U)) 
                                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                       << 3U)) 
                                                                   | (((0x1aU 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                       & (((IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                                                >> 0x36U)) 
                                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)))) 
                                                                      << 3U)) 
                                                                  | (0xffffff8U 
                                                                     & (((0x1bU 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                         << 3U) 
                                                                        & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                             >> 4U) 
                                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                               << 3U)) 
                                                                           & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                                              << 3U))))) 
                                                                 | (((0x1cU 
                                                                      == 
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                                    << 3U)) 
                                                                | (((0x1eU 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                   << 3U)) 
                                                               | (((0x1fU 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x1eU)))) 
                                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_postsync_stall)) 
                                                                  << 3U)) 
                                                              | (((0x20U 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (IData)(
                                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x1eU)))) 
                                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_presync_stall)) 
                                                                 << 3U)) 
                                                             | (((0x22U 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (IData)(
                                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x1eU)))) 
                                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_store_stall_any)) 
                                                                << 3U)) 
                                                            | (((0x23U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x1eU)))) 
                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                                               << 3U)) 
                                                           | (((0x24U 
                                                                == 
                                                                (0x3ffU 
                                                                 & (IData)(
                                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x1eU)))) 
                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                                              << 3U)) 
                                                          | (((0x25U 
                                                               == 
                                                               (0x3ffU 
                                                                & (IData)(
                                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x1eU)))) 
                                                              & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                                                  | (0U 
                                                                     != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                                                             << 3U)) 
                                                         | (((0x26U 
                                                              == 
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x1eU)))) 
                                                             & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                            << 3U)) 
                                                        | (((0x27U 
                                                             == 
                                                             (0x3ffU 
                                                              & (IData)(
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x1eU)))) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                           << 3U)) 
                                                       | (((0x28U 
                                                            == 
                                                            (0x3ffU 
                                                             & (IData)(
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x1eU)))) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                                          << 3U)) 
                                                      | (((0x29U 
                                                           == 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x1eU)))) 
                                                          & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_r) 
                                                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_r)) 
                                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
                                                         << 3U)) 
                                                     | (((0x2aU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x1eU)))) 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                                        << 3U)) 
                                                    | (((0x2bU 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x1eU)))) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                                       << 3U)) 
                                                   | (((0x2cU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x1eU)))) 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                                      << 3U)) 
                                                  | (0xfffffff8U 
                                                     & (((0x2dU 
                                                          == 
                                                          (0x3ffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x1eU)))) 
                                                         << 3U) 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                           << 1U)))) 
                                                 | (((0x2eU 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x1eU)))) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                                    << 3U)) 
                                                | (0xfffffff8U 
                                                   & (((0x2fU 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x1eU)))) 
                                                       << 3U) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                         << 2U)))) 
                                               | (((0x30U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x1eU)))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                                                  << 3U)) 
                                              | (((0x31U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x1eU)))) 
                                                  & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout)) 
                                                 << 3U)) 
                                             | (((0x32U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x1eU)))) 
                                                 & ((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout) 
                                                    & (0U 
                                                       != 
                                                       ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                         >> 0x11U) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                                                << 3U)) 
                                            | (((0x36U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x1eU)))) 
                                                & (0xfU 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                               << 3U)) 
                                           | (0x3ffffff8U 
                                              & (((0x37U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x1eU)))) 
                                                  << 3U) 
                                                 & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                      << 3U) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                        >> 2U)) 
                                                    & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                       << 3U))))) 
                                          | (0x7ffffff8U 
                                             & (((0x38U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x1eU)))) 
                                                 << 3U) 
                                                & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     << 3U) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                       >> 1U)) 
                                                   & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                                                      << 3U))))) 
                                         | (0xfffffff8U 
                                            & (((0x200U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x1eU)))) 
                                                << 3U) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                  << 1U)))) 
                                        | (((0x201U 
                                             == (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x1eU)))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_read)) 
                                           << 3U)) 
                                       | (((0x202U 
                                            == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x1eU)))) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_any_write)) 
                                          << 3U)) | 
                                      (((0x203U == 
                                         (0x3ffU & (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x1eU)))) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_read)) 
                                       << 3U)) | ((
                                                   (0x204U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x1eU)))) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_pmu_dccm_write)) 
                                                  << 3U))));
}
