// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"

void Vtb_top::_settle__TOP__7(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top::_settle__TOP__7\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp444[8];
    WData/*255:0*/ __Vtemp445[8];
    WData/*255:0*/ __Vtemp490[8];
    WData/*255:0*/ __Vtemp491[8];
    // Body
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[1U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[2U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x10000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x40000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                 | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f 
        = ((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__wayhit_f)) 
            | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                 >> 1U)))) & ((2U & 
                                               (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_expanded_p1_f) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_p1_f)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__wayhit_f) 
                                                    >> 1U))))) 
           & (1U | (2U & (((~ (IData)((7U == (7U & 
                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                               >> 2U))))) 
                           | (0U != (3U & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
                          << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
        = (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)))) 
            & (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_expanded_f)))) 
                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f) 
               | ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_f)))) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f))) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0o_rd_data_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
        = (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0o_rd_data_f) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                >> 1U)))) & (((- (IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_expanded_p1_f)))) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_p1_f) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_p1_f)))) 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_p1_f))));
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
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__64__valid 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f;
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__64__Vfuncout 
        = (3U & ((1U & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__64__valid) 
                        >> 1U)) + (1U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__64__valid))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__num_valids 
        = vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__64__Vfuncout;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                      >> 1U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
           & (~ (- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                  >> 3U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_force_taken_f 
        = ((2U & ((0x7ffffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
                                  >> 1U)) | (0xfffffffeU 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f))) 
           | (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                     >> 2U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                               >> 1U))));
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
    __Vtemp444[0U] = 1U;
    __Vtemp444[1U] = 0U;
    __Vtemp444[2U] = 0U;
    __Vtemp444[3U] = 0U;
    __Vtemp444[4U] = 0U;
    __Vtemp444[5U] = 0U;
    __Vtemp444[6U] = 0U;
    __Vtemp444[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp445, __Vtemp444, (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[0U] 
        = (__Vtemp445[0U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[1U] 
        = (__Vtemp445[1U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[2U] 
        = (__Vtemp445[2U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[3U] 
        = (__Vtemp445[3U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[4U] 
        = (__Vtemp445[4U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[5U] 
        = (__Vtemp445[5U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[6U] 
        = (__Vtemp445[6U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[7U] 
        = (__Vtemp445[7U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f 
        = ((2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_force_taken_f) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f)) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f))) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_force_taken_f) 
                     | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f) 
                        >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__hist1_raw 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_force_taken_f) 
           | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f)) 
              | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f) 
                       >> 1U))));
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
    __Vtemp490[0U] = 1U;
    __Vtemp490[1U] = 0U;
    __Vtemp490[2U] = 0U;
    __Vtemp490[3U] = 0U;
    __Vtemp490[4U] = 0U;
    __Vtemp490[5U] = 0U;
    __Vtemp490[6U] = 0U;
    __Vtemp490[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp491, __Vtemp490, (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f));
    if ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                >> 7U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[0U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[0U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[0U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[0U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[0U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[0U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[1U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[1U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[1U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[1U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[1U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[1U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[2U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[2U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[2U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[2U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[2U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[2U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[3U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[3U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[3U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[3U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[3U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[3U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[4U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[4U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[4U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[4U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[4U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[4U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[5U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[5U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[5U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[5U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[5U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[5U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[5U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[6U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[6U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[6U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[6U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[6U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[6U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[6U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[7U] 
            = ((((((~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[7U]) 
                   & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[7U])) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[7U]) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[7U] 
                    & (- (IData)((1U & (~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                                   >> 0x20U)))))))) 
                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[7U] 
                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f))))) 
               | ((__Vtemp491[7U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[0U];
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[1U];
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[2U];
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[3U];
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[4U];
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[5U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[5U];
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[6U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[6U];
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[7U] 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[7U];
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bloc_f 
        = ((2U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f))) 
                   | ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f)) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f))) 
                  << 1U)) | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)) 
                                   | ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f)) 
                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_f 
        = ((2U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f)) 
                  << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f 
        = ((((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__hist1_raw))) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                >> 7U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                              >> 8U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                             >> 3U)));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__final_h 
        = (0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_f) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f 
        = (0xffffU & (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_f) 
                                         >> 1U)))) 
                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
                          >> 1U)) | ((- (IData)((1U 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_f)))) 
                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                                        >> 1U))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                  >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
             >> 1U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_total_branch_offset_f 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bloc_f) 
                  >> 1U) ^ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                            >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus 
        = (1U & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_dir_f)) 
                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                       >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_f)) 
                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                    >> 3U)));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0xfeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | (1U & (~ ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push)) 
                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0xfdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop)) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0xfbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop)) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0xf7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop)) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0xefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop)) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0xdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop)) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable 
        = ((0xbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop)) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[1U] 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[0U]) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[2U] 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[1U]) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[3U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[3U] 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[2U]) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[4U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[4U] 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[3U]) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[5U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[5U] 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[4U]) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[6U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[6U] 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[5U]) 
           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[7U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
        = (0x3fffffffU & ((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus))) 
                            & ((IData)(1U) + (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                              >> 1U))) 
                           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f))) 
                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__faddrf_ff__dout)) 
                          | ((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f)) 
                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus)))))) 
                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                >> 1U))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__rs_addr__pc 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
            << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_total_branch_offset_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
            << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_total_branch_offset_f));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_rs_call_target_f 
        = ((0x7ffff000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_rs_call_target_f) 
           | (0xfffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__rs_addr__pc 
                        + (1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                    >> 3U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout 
        = (1U & (((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__rs_addr__pc) 
                  + (1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                              >> 3U)))) >> 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_btb_target_adder_f 
        = ((0x7ffff000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_btb_target_adder_f) 
           | (0xfffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
                        + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                           >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout 
        = (1U & (((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__predtgt_addr__pc) 
                  + (0xfffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                               >> 4U))) >> 0xcU));
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
}
