// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"

VL_INLINE_OPT void Vtb_top::_multiclk__TOP__33(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top::_multiclk__TOP__33\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp1208[8];
    WData/*255:0*/ __Vtemp1209[8];
    WData/*255:0*/ __Vtemp1222[8];
    WData/*255:0*/ __Vtemp1223[8];
    // Body
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__229__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__229__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__230__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__230__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__231__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__231__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__232__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__232__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__233__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__233__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__234__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xeaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__234__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__235__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xebU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__235__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__236__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xecU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__236__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__237__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xedU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__237__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__238__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xeeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__238__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__239__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xefU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__239__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__240__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__240__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__241__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__241__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__242__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__242__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__243__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__243__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__244__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__244__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__245__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__245__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__246__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__246__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__247__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__247__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__248__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__248__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__249__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__249__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__250__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__250__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__251__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__251__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__252__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__252__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__253__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__253__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__254__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__254__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__255__KET____DOT__btb_bank0_way0__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xffU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way0))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__255__KET____DOT__btb_bank0_way0__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__4__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__4__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__5__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__5__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__6__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__6__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__7__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__7__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__8__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__8__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__9__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__9__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__10__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__10__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__11__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__11__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__12__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__12__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__13__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__13__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__14__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__14__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__15__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__15__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__16__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x10U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__16__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__17__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x11U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__17__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__18__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x12U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__18__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__19__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x13U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__19__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__20__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x14U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__20__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__21__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x15U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__21__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__22__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x16U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__22__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__23__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x17U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__23__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__24__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x18U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__24__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__25__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x19U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__25__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__26__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x1aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__26__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__27__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x1bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__27__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__28__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x1cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__28__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__29__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x1dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__29__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__30__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x1eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__30__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__31__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x1fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__31__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__32__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x20U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__32__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__33__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x21U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__33__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__34__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x22U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__34__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__35__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x23U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__35__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__36__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x24U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__36__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__37__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x25U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__37__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__38__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x26U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__38__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__39__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x27U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__39__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__40__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x28U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__40__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__41__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x29U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__41__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__42__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x2aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__42__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__43__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x2bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__43__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__44__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x2cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__44__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__45__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x2dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__45__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__46__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x2eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__46__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__47__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x2fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__47__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__48__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x30U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__48__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__49__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x31U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__49__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__50__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x32U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__50__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__51__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x33U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__51__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__52__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x34U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__52__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__53__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x35U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__53__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__54__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x36U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__54__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__55__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x37U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__55__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__56__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x38U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__56__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__57__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x39U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__57__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__58__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x3aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__58__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__59__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x3bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__59__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__60__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x3cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__60__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__61__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x3dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__61__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__62__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x3eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__62__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__63__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x3fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__63__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__64__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x40U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__64__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__65__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x41U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__65__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__66__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x42U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__66__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__67__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x43U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__67__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__68__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x44U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__68__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__69__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x45U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__69__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__70__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x46U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__70__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__71__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x47U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__71__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__72__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x48U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__72__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__73__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x49U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__73__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__74__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x4aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__74__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__75__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x4bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__75__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__76__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x4cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__76__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__77__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x4dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__77__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__78__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x4eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__78__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__79__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x4fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__79__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__80__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x50U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__80__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__81__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x51U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__81__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__82__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x52U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__82__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__83__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x53U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__83__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__84__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x54U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__84__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__85__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x55U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__85__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__86__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x56U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__86__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__87__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x57U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__87__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__88__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x58U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__88__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__89__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x59U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__89__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__90__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x5aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__90__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__91__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x5bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__91__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__92__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x5cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__92__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__93__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x5dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__93__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__94__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x5eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__94__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__95__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x5fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__95__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__96__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x60U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__96__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__97__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x61U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__97__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__98__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x62U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__98__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__99__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x63U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__99__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__100__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x64U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__100__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__101__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x65U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__101__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__102__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x66U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__102__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__103__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x67U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__103__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__104__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x68U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__104__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__105__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x69U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__105__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__106__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x6aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__106__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__107__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x6bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__107__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__108__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x6cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__108__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__109__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x6dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__109__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__110__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x6eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__110__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__111__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x6fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__111__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__112__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x70U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__112__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__113__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x71U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__113__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__114__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x72U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__114__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__115__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x73U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__115__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__116__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x74U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__116__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__117__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x75U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__117__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__118__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x76U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__118__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__119__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x77U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__119__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__120__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x78U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__120__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__121__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x79U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__121__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__122__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x7aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__122__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__123__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x7bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__123__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__124__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x7cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__124__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__125__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x7dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__125__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__126__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x7eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__126__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__127__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x7fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__127__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__128__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x80U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__128__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__129__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x81U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__129__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__130__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x82U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__130__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__131__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x83U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__131__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__132__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x84U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__132__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__133__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x85U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__133__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__134__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x86U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__134__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__135__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x87U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__135__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__136__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x88U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__136__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__137__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x89U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__137__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__138__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x8aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__138__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__139__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x8bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__139__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__140__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x8cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__140__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__141__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x8dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__141__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__142__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x8eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__142__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__143__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x8fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__143__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__144__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x90U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__144__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__145__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x91U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__145__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__146__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x92U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__146__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__147__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x93U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__147__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__148__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x94U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__148__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__149__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x95U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__149__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__150__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x96U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__150__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__151__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x97U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__151__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__152__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x98U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__152__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__153__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x99U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__153__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__154__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x9aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__154__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__155__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x9bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__155__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__156__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x9cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__156__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__157__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x9dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__157__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__158__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x9eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__158__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__159__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0x9fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__159__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__160__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__160__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__161__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__161__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__162__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__162__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__163__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__163__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__164__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__164__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__165__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__165__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__166__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__166__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__167__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__167__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__168__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__168__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__169__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xa9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__169__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__170__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xaaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__170__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__171__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xabU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__171__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__172__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xacU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__172__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__173__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xadU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__173__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__174__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xaeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__174__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__175__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xafU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__175__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__176__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__176__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__177__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__177__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__178__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__178__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__179__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__179__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__180__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__180__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__181__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__181__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__182__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__182__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__183__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__183__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__184__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__184__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__185__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xb9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__185__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__186__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xbaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__186__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__187__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xbbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__187__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__188__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xbcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__188__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__189__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xbdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__189__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__190__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xbeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__190__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__191__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xbfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__191__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__192__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__192__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__193__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__193__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__194__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__194__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__195__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__195__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__196__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__196__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__197__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__197__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__198__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__198__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__199__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__199__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__200__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__200__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__201__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xc9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__201__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__202__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xcaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__202__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__203__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xcbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__203__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__204__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xccU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__204__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__205__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xcdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__205__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__206__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xceU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__206__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__207__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xcfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__207__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__208__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__208__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__209__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__209__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__210__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__210__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__211__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__211__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__212__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__212__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__213__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__213__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__214__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__214__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__215__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__215__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__216__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__216__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__217__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xd9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__217__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__218__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xdaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__218__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__219__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xdbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__219__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__220__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xdcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__220__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__221__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xddU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__221__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__222__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xdeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__222__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__223__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xdfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__223__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__224__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__224__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__225__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__225__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__226__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__226__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__227__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__227__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__228__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__228__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__229__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__229__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__230__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__230__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__231__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__231__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__232__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__232__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__233__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xe9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__233__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__234__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xeaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__234__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__235__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xebU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__235__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__236__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xecU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__236__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__237__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xedU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__237__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__238__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xeeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__238__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__239__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xefU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__239__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__240__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__240__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__241__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__241__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__242__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__242__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__243__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__243__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__244__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__244__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__245__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__245__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__246__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__246__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__247__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__247__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__248__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__248__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__249__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xf9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__249__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__250__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__250__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__251__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__251__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__252__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__252__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__253__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__253__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__254__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xfeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__254__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk3__DOT__BTB_FLOPS__BRA__255__KET____DOT__btb_bank0_way1__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((0xffU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_en_way1))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_data
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__genblk3__DOT__BTB_FLOPS__BRA__255__KET____DOT__btb_bank0_way1__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((2U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((4U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x10U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x40U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                           | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x100U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x400U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                            | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x2000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x4000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                             | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x8000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x10000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x20000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x40000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                              | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x80000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x100000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x200000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x400000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                               | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x1000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x4000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[0U]))
                  ? ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U])
                      ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                         >> 4U) : (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
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
    __Vtemp1208[0U] = 1U;
    __Vtemp1208[1U] = 0U;
    __Vtemp1208[2U] = 0U;
    __Vtemp1208[3U] = 0U;
    __Vtemp1208[4U] = 0U;
    __Vtemp1208[5U] = 0U;
    __Vtemp1208[6U] = 0U;
    __Vtemp1208[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp1209, __Vtemp1208, (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[0U] 
        = (__Vtemp1209[0U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[1U] 
        = (__Vtemp1209[1U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[2U] 
        = (__Vtemp1209[2U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[3U] 
        = (__Vtemp1209[3U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[4U] 
        = (__Vtemp1209[4U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[5U] 
        = (__Vtemp1209[5U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[6U] 
        = (__Vtemp1209[6U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[7U] 
        = (__Vtemp1209[7U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
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
    __Vtemp1222[0U] = 1U;
    __Vtemp1222[1U] = 0U;
    __Vtemp1222[2U] = 0U;
    __Vtemp1222[3U] = 0U;
    __Vtemp1222[4U] = 0U;
    __Vtemp1222[5U] = 0U;
    __Vtemp1222[6U] = 0U;
    __Vtemp1222[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp1223, __Vtemp1222, (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f));
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
               | ((__Vtemp1223[0U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
               | ((__Vtemp1223[1U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
               | ((__Vtemp1223[2U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
               | ((__Vtemp1223[3U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
               | ((__Vtemp1223[4U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
               | ((__Vtemp1223[5U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
               | ((__Vtemp1223[6U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
               | ((__Vtemp1223[7U] & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__rs_addr__pc 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
            << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_total_branch_offset_f));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
            << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_total_branch_offset_f));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_rs_call_target_f 
        = ((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_rs_call_target_f) 
           | (0x7ffff000U & ((0xfffff000U & (((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout))))) 
                                              << 0xcU) 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__rs_addr__pc)) 
                             | (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout))) 
                                 & ((IData)(1U) + (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__rs_addr__pc 
                                                   >> 0xcU))) 
                                << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_btb_target_adder_f 
        = ((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_btb_target_adder_f) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                               >> 0xfU) 
                                                              ^ ~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout))))) 
                                               << 0xcU) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__predtgt_addr__pc)) 
                              | (((- (IData)(((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                  >> 0xfU)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((1U & (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                    >> 0xfU) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)))))) 
                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__predtgt_addr__pc 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[0U] 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_push))) 
            & (1U | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_rs_call_target_f 
                     << 1U))) | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[1U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f 
        = (0x7fffffffU & (((- (IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                               >> 1U))) 
                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[0U]) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f)))) 
                           & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[1U] 
                               << 0x1fU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[0U] 
                                            >> 1U))) 
                          | ((- (IData)(((~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                  >> 1U))) 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_out[0U])) 
                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifu_bp_hit_taken_f)))) 
                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_btb_target_adder_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__0__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[0U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__1__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[1U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__2__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[2U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__3__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[3U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__4__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[4U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__4__KET____DOT__rets_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__5__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[5U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__5__KET____DOT__rets_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__6__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[6U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__6__KET____DOT__rets_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__7__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rsenable))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__rets_in[7U]
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__7__KET____DOT__rets_ff__dout);
}
