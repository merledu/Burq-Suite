// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"

void Vtb_top::_settle__TOP__5(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top::_settle__TOP__5\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_imm 
        = ((0x80000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 0xcU)) | ((0x7f800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                  >> 1U)) 
                                     | ((0x400U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x15U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_i0_wen_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r) 
            & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                  >> 0x17U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_m_delay) 
                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                       >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_valid) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write))) 
           & (~ (((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__r_d_in 
                            >> 4U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r) 
            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
               >> 4U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_misaligned 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_inv_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_r) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en 
        = ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_commit_r)) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                   >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
             & ((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                >> 2U)) == (0x3fffffffU 
                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                               >> 2U)))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r))) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl_ns 
        = (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                    & (0xbccU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt_ns 
        = (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                    & (0xbc9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel_ns 
        = (3U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                  & (0x7a0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7d3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7d6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x305U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x7ffffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                               >> 1U)) | (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscratch_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x340U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscratch);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7f9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0xe000U & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                               >> 0x10U)) << 0xdU)) 
               | ((0x1000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                  | ((0xf80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                     | ((0x40U & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                      >> 6U)) << 6U)) 
                        | (0x3fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_int));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x7c0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac_in
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meivt_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fffffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                         & (0xbc8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                            >> 0xaU) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x323U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x324U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x325U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x326U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_r)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcountinhibit_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x320U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x3eU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                         >> 1U)) | (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mcountinhibit_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
            & (0x7c8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x10000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                            >> 8U)) | ((0xc000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                   >> 6U)) 
                                       | (0x3fffU & 
                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                           >> 3U))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                   >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                   >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                   >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcgc_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mfdht_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7ceU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7cfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb03U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb83U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb04U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb84U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb05U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb85U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb06U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_wr_en0 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb86U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7c9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7ccU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7caU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_miccmect_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7f1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
             & (0x7a1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
            & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                  >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0xdU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
             & (0x7a1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
            & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                  >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                             >> 0xdU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                   >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_kill_write)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
              & (0x7a1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
             & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
            & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                   >> 9U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xdU))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_kill_write)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7b1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x341U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mscause_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7ffU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod)) 
           & (0x7b0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x342U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x343U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb00U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mstatus_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x300U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7d5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb80U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstreth_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb82U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0xb02U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
               >> 8U)) & (~ ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_r)) 
                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_r)) 
                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
                                & (0x7c2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
           & (0x7c6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0x304U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r)))
            ? ((0x38U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                         >> 0x19U)) | ((4U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                              >> 9U)) 
                                       | ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                 >> 6U)) 
                                          | (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                   >> 3U)))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d 
        = ((0xfffe0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_d) 
           | (0x1f0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                        << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = ((- (IData)((1U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                       >> 5U))))) & 
           vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((2U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((3U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((4U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((5U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((6U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((7U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((8U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((9U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xaU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xbU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xcU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xdU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xeU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0xfU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x10U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x11U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x12U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x13U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x14U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x15U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x16U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x17U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x18U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x19U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1aU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1bU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1cU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1dU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1eU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs2_d 
           | ((- (IData)((0x1fU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 5U))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = ((- (IData)((1U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                       >> 0xaU))))) 
           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((2U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((3U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((4U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((5U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((6U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((7U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((8U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((9U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                          >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xaU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xbU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xcU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xdU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xeU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0xfU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                            >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x10U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x11U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x12U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x13U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x14U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x15U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x16U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x17U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x18U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x19U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1aU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1bU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1cU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1dU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1eU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__gpr_i0_rs1_d 
           | ((- (IData)((0x1fU == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                             >> 0xaU))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case 
        = ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
              >> 0x17U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U] 
                           >> 0xeU)) & (0U == (0x1fU 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
           & ((1U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                               >> 0xaU))) | (5U == 
                                             (0x1fU 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                 >> 0xaU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset 
        = ((0x800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_imm)
            ? (0xffU == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_imm 
                                  >> 0xcU))) : (0U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_imm 
                                                    >> 0xcU))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcgc_r)
                ? ((0x200U & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                  >> 9U)) << 9U)) | 
                   (0x1ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r))
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc_int))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc_int));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdht_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                     ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mfdht_r)
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                         : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdht))
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdht)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_r) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_r))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_micect_r)
                ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                    << 0x1bU) | (0x7ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r))
                : ((0xf8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect) 
                   | (0x7ffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect 
                                    + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_r)))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r) 
                  | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                     >> 0x1dU))) ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mdccmect_r)
                                     ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat) 
                                         << 0x1bU) 
                                        | (0x7ffffffU 
                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r))
                                     : ((0xf8000000U 
                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect) 
                                        | (0x7ffffffU 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect 
                                              + (1U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                    >> 0x1dU))))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdhs_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mfdhs_r)
                      ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                      : (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                          & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0xdU))) ? ((2U & 
                                               ((~ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                  >> 0xfU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                     >> 0xeU))))
                          : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdhs)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdhs)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_r) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_r)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_ic_debug_rd_data[0U])
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0h_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0h_r)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_ic_debug_rd_data[1U])
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0h);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__genblk6__DOT__dicad1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fU & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_r) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__misc1_ff__dout)))
                     ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_r)
                         ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                         : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu_ic_debug_rd_data[2U])
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1_raw)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r)))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t0_r)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)) 
                   | ((0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 8U) | (0xffffff00U 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))) 
                      | (0xffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0)))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                   >> 2U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r)))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t2_r)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                   | ((0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 6U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2))) 
                      | (0xffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                   >> 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r)))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t1_r)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                   | ((0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 7U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1))) 
                      | (0xffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled) 
                   >> 3U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r)))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtdata1_t3_r)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r)
                : ((0x200U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)) 
                   | ((0x100U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__update_hit_bit_r) 
                                  << 5U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3))) 
                      | (0xffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3)))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_r) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))
                           ? ((((- (IData)((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_r)))) 
                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                   >> 1U)) | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__request_debug_mode_r))) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc_r)) 
                              | ((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__request_debug_mode_r)) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_r))
                           : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns 
        = (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r)
                  ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r)
                    ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                    : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_inc);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)
                ? 0U : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)
                ? 0U : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r) 
                  | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                     >> 0x10U))) ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcycleh_r)
                                     ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                                     : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_inc)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                    >> 0xfU) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                >> 0xeU)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstreth_r)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_inc)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_ns 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_r)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_inc);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_r) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpmc_b_ns 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_r)
                  ? (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                        >> 1U)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpmc_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__fw_halt_req 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_r) 
             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 1U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                 >> 0x17U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready 
        = ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
               >> 0x16U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                             >> 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready 
        = (((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                >> 0x13U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                              >> 2U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready 
        = ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
               >> 0x12U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                             >> 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__soft_int_ready 
        = ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
               >> 0x11U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_raw 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
            >> 0x17U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U] 
               >> 0xbU)) & ((1U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))) 
                            | (5U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_12b_offset) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U] 
               >> 0xbU)) & (~ ((1U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))) 
                               | (5U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl0_r)
            ? ((6U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns)) 
               | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0_ns))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl0_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitctl1_r)
            ? ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns)) 
               | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1_ns))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitctl1_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))
                     ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_ns
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_aff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcyclel_r) 
                         | (1U & ((((IData)(1U) + (0xffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                   >> 8U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in))))
                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_ns 
                            >> 8U) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mcyclel_bff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok)) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))
                     ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffa__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_r) 
                          | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_inc_ok) 
                                   & (((IData)(1U) 
                                       + (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)) 
                                      >> 8U)))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns))
                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ns 
                            >> 8U) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt0_ffb__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffa__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok)) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))
                     ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffa__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ffb__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_r) 
                          | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_inc_ok) 
                                   & (((IData)(1U) 
                                       + (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)) 
                                      >> 8U)))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns))
                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ns 
                            >> 8U) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT____Vcellout__mitcnt1_ffb__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_aff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable)
                     ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_ns
                     : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_aff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_bff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_minstretl_r) 
                         | (1U & ((((IData)(1U) + (0xffU 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                   >> 8U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable))))
                         ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_ns 
                            >> 8U) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__minstretl_bff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__set_mie_pmu_fw_halt 
        = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpmc_b_ns)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__fw_halt_req));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
            >> 0x14U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
            >> 0x15U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_r 
        = (1U & (((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                          >> 4U)) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 5U)) & (~ (
                                                   (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
                                                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready)) 
                                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                                                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__soft_int_ready)) 
                                                      | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                         >> 1U)) 
                                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected)) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                      >> 0x17U)))) 
                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                          >> 0xbU))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0xbU))) 
                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 3U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                       >> 0x10U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                  >> 8U) | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready)) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__soft_int_ready)) 
                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                   >> 1U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mhwakeup) 
                                 & ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                        >> 0x13U)) 
                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                                       >> 2U)))) & 
                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                              >> 7U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                            >> 9U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_raw 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
            >> 0x17U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_raw 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
            >> 0x17U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_resume 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
               >> 2U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = (1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req))) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 2U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))) 
                 & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset 
        = (0xfffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_raw) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_raw))
                      ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_imm
                      : ((0x800U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                    >> 0x14U)) | ((0x400U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      << 3U)) 
                                                  | ((0x3f0U 
                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                         >> 0x15U)) 
                                                     | (0xfU 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                           >> 8U)))))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_r 
        = (1U & ((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_r)) 
                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r)) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_resume)) 
                  | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 6U)) | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__fw_halt_req)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)))) 
                 & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d 
        = ((0xfc003fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d) 
           | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)) 
              << 0x26U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error 
        = (1U & ((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                            >> 0x23U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                                          & (~ ((((
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U] 
                                                   >> 0x1cU) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_raw)) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_raw)) 
                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_raw))))) 
                  | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                  >> 0x25U))) & ((0xfffU 
                                                  & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                                             >> 0x26U))) 
                                                 != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset))) 
                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_raw)))) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
                       ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_raw)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwddata_m 
        = (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_m)) 
            << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__stbuf_fwdbyteen_m 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m) 
            << 4U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 9U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & (((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xbU) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                   >> 3U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_r))) 
                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_r))) 
                   & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 0x10U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0x11U))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 4U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                    & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xbU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error_all 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                  | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                             >> 0x22U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                               >> 7U))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi 
        = ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode))) 
                & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                   | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 2U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                   >> 9U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r))) 
                      & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                            >> 8U))))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_r))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_r))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r))) 
           & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                  >> 0x17U)) | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                 >> 0x18U) & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_fir_error)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw[2U];
    if (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error_all) 
         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] = 0U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] = 0U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] = 0U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
            = (0x20000U | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
            = (0x10000U | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
            = (0x8000U | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
            = (8U | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            = (1U | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            = (0x2000U | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U]);
    }
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_r)) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi))
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
                ? ((0x3f80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                   | (((((0x40U & ((- (IData)((1U & 
                                               ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                   >> 8U) 
                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1))) 
                                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))) 
                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))) 
                                   << 4U)) | (0x30U 
                                              & ((- (IData)(
                                                            (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1))) 
                                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))))) 
                                                 << 4U))) 
                        | (0x10U & ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1) 
                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))))) 
                                    << 4U))) | (0x20U 
                                                & ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_r_d1))) 
                                                   << 4U))) 
                      | (0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
                : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_r)
                    ? ((0x2000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                   >> 2U)) | ((0x300U 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                  >> 2U)) 
                                              | ((0x70U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                 | ((2U 
                                                     & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                    | (1U 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                          >> 2U))))))
                    : ((0x3ffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                           << 1U) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))))
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & ((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r))) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r)) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 9U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_r)) 
                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                    >> 0x17U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_branch_d 
        = (1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                   >> 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                >> 0x17U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error_all)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_csr_ren_d 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            >> 0x13U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
        = ((0x7ffff8U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p) 
           | (7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p 
        = ((0x7ffc07U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__mul_p) 
           | ((0x3f0U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                          << 0xbU) | (0x7f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                >> 0x15U)))) 
              | (8U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3fffffffe7fULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)((3U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                      << 0x1bU) | (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 5U))))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3fffff81fffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)(((0x3cU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                         << 1U)) | 
                               ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                       >> 0x1eU)) | 
                                (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U]))))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3ffffffff9fULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)((3U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                      << 3U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                >> 0x1dU))))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3ffffffe1ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)(((0xcU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                         << 8U) | (0xfcU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                      >> 0x18U)))) 
                               | ((2U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                         >> 0x17U)) 
                                  | (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                           >> 0x19U)))))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x1fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                        >> 0x1bU)))) 
              << 0x25U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3ffff87ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                        << 0xeU) | 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                        >> 0x12U))))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3e0007fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)((0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                          >> 0xdU)))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3ffffffffefULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)((1U & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                        >> 0x17U) & 
                                       (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case))) 
                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case))) 
                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case)))))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            >> 0x17U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            >> 0x17U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
            >> 0x17U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
            >> 0xfU) & (0U != (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                        >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
            >> 0x10U) & (0U != (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                         >> 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                  >> 0x10U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_soft_int 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__soft_int_ready) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__soft_int_ready))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = (((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                     >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible)) 
                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__soft_int_ready))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = ((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible)) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                      | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                         >> 1U)))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__soft_int_ready))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d 
        = ((0xfffff9ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d) 
           | ((QData)((IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall) 
                                << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja)))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d 
        = ((0xffffff00000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_predict_p_d) 
           | (IData)((IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret) 
                               << 0x1fU) | (0x7fffffffU 
                                            & (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                                       >> 2U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br 
        = (1U & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                    >> 0x1cU) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja)) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
               >> 1U)) & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs2_en_d) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
               >> 1U)) & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
               >> 1U)) & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_rs1_en_d) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
               >> 1U)) & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                    >> 4U)) == (0x1fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                   >> 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                 >> 0x13U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d 
        = ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
              >> 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                           >> 0x11U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                  >> 0x13U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write)));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_meicpct_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
            & (0xbcaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_r 
        = (((((((((((((((0xbU & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
                        | (7U & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int))))) 
                       | (3U & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_soft_int))))) 
                      | (0x1dU & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int))))) 
                     | (0x1cU & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))))) 
                    | (0x1eU & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int))))) 
                   | (2U & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))))) 
                  | (0xbU & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_r))))) 
                 | (1U & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_r))))) 
                | (3U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                                    | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))))))) 
               | (4U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r) 
                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r))))))) 
              | (5U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r) 
                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r))))))) 
             | (6U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_r) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r)))))) 
            | (7U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_r) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_r)))))) 
           & (~ (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r 
        = (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int) 
                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int)) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_soft_int)) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t 
        = ((0x1ff3fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__d_t) 
           | (0x80U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                        >> 0x10U) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br)) 
                                     << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3fffffffffbULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)(((~ ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                            >> 0x25U)) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid))) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3fffffffff7ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | ((QData)((IData)((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                         >> 0x25U)) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid)) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br)))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d 
        = (7U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x)
                   ? (1U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                            << 2U)) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r)
                                        ? (2U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                 << 2U))
                                        : 0U)) >> 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d 
        = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_x)
                  ? (1U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                           << 2U)) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depend_i0_r)
                                       ? (2U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                << 2U))
                                       : 0U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d 
        = (7U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x)
                   ? (1U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                            << 2U)) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r)
                                        ? (2U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                 << 2U))
                                        : 0U)) >> 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d 
        = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_x)
                  ? (1U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_x_c_ff__dout) 
                           << 2U)) : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depend_i0_r)
                                       ? (2U | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_r_c_ff__dout) 
                                                << 2U))
                                       : 0U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_immed_d 
        = ((((((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                 >> 0xeU)))) & ((0xfffff000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 0x1fU)))) 
                                                    << 0xcU)) 
                                                | (0xfffU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                      >> 0x14U)))) 
              | (0x1fU & ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                            >> 0xcU)))) 
                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                             >> 0x14U)))) | ((- (IData)(
                                                        (1U 
                                                         & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                             >> 0x17U) 
                                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                               >> 0xbU))))) 
                                             & ((0xfff00000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                                   >> 0x1fU)))) 
                                                    << 0x14U)) 
                                                | ((0xff000U 
                                                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0) 
                                                   | ((0x800U 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                            >> 0x14U))))))) 
            | (0xfffff000U & ((- (IData)((1U & ((~ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                                  >> 0x17U)) 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 0xbU))))) 
                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
           | (0x1fU & ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                      >> 0xfU)))) & 
                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 0xfU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
        = ((0x3fffffffffcULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap) 
           | (IData)((IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                               << 1U) | (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                               >> 0xfU))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_any_unq_d 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_meicpct_r)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_claimid)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | ((0x100U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                    << 6U) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 6U)) 
                                              << 8U)) 
                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                     << 6U)) & ((~ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                  >> 0x17U)) 
                                                << 8U))) 
                      | ((0x80U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                     << 5U) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                               << 7U)) 
                                   | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                       & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                          << 7U)) & 
                                      ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                           >> 6U)) 
                                       << 7U)))) | 
                         ((0x40U & ((0x1fffffc0U & 
                                     (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                       >> 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 << 4U))) 
                                    | (0xffffffc0U 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                             << 3U))))) 
                          | ((0x20U & (((0xffffffe0U 
                                         & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 >> 2U)) 
                                             << 5U) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                               << 3U))) 
                                        | (0x1fffffe0U 
                                           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 >> 3U)))) 
                                       | (0xffffffe0U 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                << 3U))))) 
                             | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                 << 4U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                               << 2U) 
                                              | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                    << 1U) 
                                                   & ((0x7ffffffeU 
                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                          >> 1U)) 
                                                      | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled) 
                                                         << 1U))) 
                                                  | (0xfffffffeU 
                                                     & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                            << 1U) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                          & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                                                             << 1U)) 
                                                         & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start)) 
                                                            << 1U)) 
                                                        & ((~ 
                                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 6U)) 
                                                           << 1U)))) 
                                                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                     & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                         >> 2U) 
                                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                                    | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start))) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 6U)))))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_r_mod) 
             & (0x7c2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wraddr_r))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
           | ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_r 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_r) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_r)) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_repair_state_rfnpc)) 
            | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)))) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_r) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_r 
        = (1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 6U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r 
        = ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_r)) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_r)) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass 
        = ((4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                   << 2U) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                              << 2U) | (0xfffffffcU 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))))) 
           | ((2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                      << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))) 
              | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d) 
                        >> 1U) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                      >> 2U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                 >> 1U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass 
        = ((4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                   << 2U) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                              << 2U) | (0xfffffffcU 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))))) 
           | ((2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                      << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))) 
              | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d) 
                        >> 1U) & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                      >> 2U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                 >> 1U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__bitmanip_minmax_sel 
        = (1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                          >> 0x24U)) | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                                                >> 0x23U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_br_immed_d 
        = ((1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_ap 
                           >> 2U)) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                                         >> 0x17U))))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)
            : ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                      << 1U)) | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d 
        = (0xfffU & ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_any_unq_d))) 
                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 0x14U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exthaltff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                       >> 3U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                 >> 2U)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                            >> 1U)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                       >> 4U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_r)) 
                  | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                     >> 4U))) ? ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout))
                                  ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data 
                                     - (IData)(1U))
                                  : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_r)
                                      ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r
                                      : ((((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                          >> 3U)))) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout) 
                                              & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_x))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                            >> 2U)))) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_rddata_x_ff__dout) 
                                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_x))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout) 
                                                           >> 1U)))) 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_mask_x))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscause_ns 
        = (0xfU & ((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))) 
                     & (((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r))) 
                           & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r 
                                      >> 0x22U))) | 
                          (1U & (- (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)))))) 
                         | (2U & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_r))))) 
                        | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_r))) 
                           & ((0U == (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                            >> 0xdU)))
                               ? 9U : (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                             >> 0xdU)))))) 
                    | ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mscause_r) 
                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)) 
                   | ((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mscause_r)) 
                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscause))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0x7fffffffU & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_r))
                           ? (((((- (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
                                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r)))) 
                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc_r) 
                                | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))) 
                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_r)) 
                               | ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_r) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                     >> 1U))) | ((- (IData)(
                                                            (1U 
                                                             & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_r)) 
                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout))
                           : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcause_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_r))
            ? ((((((0xf0000000U & (- (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type))))) 
                   | (0xf0000001U & (- (IData)((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type)))))) 
                  | ((- (IData)((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                      >> 0x18U)) & 
                                  (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_fir_error))) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                       >> 0xcU))))) 
                     & (0xf0001000U | (((IData)((3U 
                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_fir_error))) 
                                        << 1U) | (1U 
                                                  & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_fir_error) 
                                                      >> 1U) 
                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_fir_error)))))))) 
                 | ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi))))) 
                    & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
                        << 0x1fU) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_r)))) 
                | ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_r) 
                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r))))) 
                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)) 
               | ((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mcause_r)) 
                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r)))))) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcause))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcause);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r) 
            << 0xbU) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_r) 
                         << 0xaU) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                      << 9U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r))) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r))) 
                                                       << 2U) 
                                                      | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                                          << 1U) 
                                                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_r))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_r)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_r)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
            & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_r) 
                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_r) 
                   & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                         >> 0xfU)))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_noredir_r 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt) 
              | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_r) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode))) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_r)) 
            | ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r)) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r))) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int_start));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in 
        = ((0x3ffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_r_in)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                >> 4U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__x_d_in 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__x_d_in 
        = ((0xfffffdU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__x_d_in) 
           | (2U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                     & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            >> 3U)) << 1U)) & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                                               << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__x_d_in 
        = ((0xfffffeU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__x_d_in) 
           | (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                     & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 3U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
             >> 2U) & (((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                           >> 0x17U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout) 
                         & (0U == (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                            >> 4U)))) 
                        | (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                             >> 0x17U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
                       | ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                             >> 0x17U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_kill_writeb_r)))) 
           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                 >> 2U) & (~ (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                                >> 0x17U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout) 
                              | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                                  >> 0x17U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout)))) 
               & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                            >> 4U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__div_waddr_wb))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_err_r 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_r) 
              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
              & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                   >> 7U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                             >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_external_m))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r))) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m)))) 
           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                 >> 0xdU)));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__pcout 
        = ((0x7ffff000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__pcout) 
           | (0xfffU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                 >> 1U)) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_br_immed_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout 
        = (1U & (((0xfffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                     >> 1U))) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_br_immed_d)) 
                 >> 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__postsync 
        = (1U & ((((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 0xaU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U)) 
                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 1U))) | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xbU)) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U))) 
                      | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 7U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 6U)) & 
                         (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 1U)))) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 4U))) 
                                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)))) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)) 
                   | (((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 0xbU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U))) 
                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 6U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U))) 
                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 3U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U))) 
                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                  | ((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 0xbU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 7U)) & 
                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 4U))) & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                     & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 1U)))) | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 4U))) 
                                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U))) 
                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitctl0 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 5U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U)) 
                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 1U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitctl1 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 2U)) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitb0 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 5U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U)) 
                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 2U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitb1 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 2U)) & 
                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                   >> 1U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitcnt0 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 6U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 5U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U)) 
                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 2U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitcnt1 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 6U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 2U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 1U))) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__legal 
        = (1U & (((((((((((((((((((((((((((((((((((
                                                   ((((~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xbU)) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xaU)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 9U)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 8U)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 2U))) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                            | ((((((((((~ 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xbU)) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU))) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 9U)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 8U)) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 6U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U)))) 
                                           | (((((((((~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 0xbU)) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xaU))) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 9U)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 8U)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U))) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                          | (((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 9U)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 8U)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 5U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 2U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                         | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xaU))) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 9U)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 8U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U))) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                        | ((((((((((((~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 0xbU)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xaU)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 9U)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 8U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 7U)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 6U)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 4U)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U)) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 1U)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                       | ((((((((((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 0xbU)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xaU)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 9U)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 8U)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 5U)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U)) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 2U))) 
                                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 1U)))) 
                                      | (((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xbU) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 9U)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 8U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 5U))) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U)) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U))) 
                                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U))) 
                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                     | ((((((((((~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xbU)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xaU)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 8U)) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U)) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 5U)) 
                                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U))) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 1U)))) 
                                    | ((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xbU)) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xaU))) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 9U)) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 8U)) 
                                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U))) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 6U))) 
                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 5U)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 2U))) 
                                   | ((((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xbU) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 8U)) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 7U))) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U)) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 3U))) 
                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                                       & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 1U))) 
                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                  | ((((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xbU)) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xaU)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 9U)) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 8U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 7U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 6U)) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 5U))) 
                                       & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U))) 
                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 3U)) & 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 1U))) | ((
                                                   ((((((((~ 
                                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                            >> 0xbU)) 
                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                             >> 0xaU)) 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                            >> 9U)) 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 8U)) 
                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                          >> 7U)) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 6U)) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 5U))) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 4U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 3U))) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 2U))) 
                                | (((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xbU) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 9U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 8U)) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U))) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 6U))) 
                                       & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 5U))) 
                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U)) & 
                                     (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 3U))) & 
                                    (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 2U))) & 
                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 1U))) | ((((
                                                   (((((~ 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xbU)) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU))) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 9U)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 8U)) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 6U))) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 5U)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 1U)) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                              | ((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 0xbU) & 
                                        (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU))) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 8U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U)) 
                                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 5U))) 
                                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U))) & 
                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 3U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 2U)))) 
                             | (((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 0xbU) & 
                                        (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 0xaU))) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 8U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U)) 
                                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 5U))) 
                                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U))) & 
                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 3U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U))) 
                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                            | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 0xbU) & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xaU))) 
                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 8U)) 
                                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 6U))) & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 5U))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 2U))) | ((((((
                                                   ((((~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xbU)) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 0xaU)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 9U)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 8U)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 5U))) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U))) 
                          | (((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 0xbU)) & 
                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 0xaU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 8U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U)) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 4U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                         | ((((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 0xbU)) & 
                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 0xaU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 9U)) 
                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                     >> 8U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 7U)) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 4U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)) 
                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 2U)))) | (((((
                                                   ((((((~ 
                                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                          >> 0xbU)) 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU)) 
                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                          >> 9U)) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 8U)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U)) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 6U))) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 4U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 2U))) 
                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                       | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 0xbU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 0xaU))) 
                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 8U)) 
                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 6U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 5U))) 
                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 1U))) | ((((((((((~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xbU)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xaU))) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 9U)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 8U)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 7U))) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 6U)) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U))) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 4U))) 
                                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U)))) 
                     | ((((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 0xbU)) & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xaU))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 8U)) 
                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 7U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 5U))) 
                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 4U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U))) 
                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 1U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                    | ((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 0xbU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 0xaU))) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 8U)) & 
                          (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 7U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 6U))) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 5U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 3U))) | ((
                                                   ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 0xbU) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                           >> 0xaU))) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 9U)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 8U)) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 6U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 5U))) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 3U))) 
                  | ((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 0xbU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 0xaU))) 
                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 8U)) & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 7U))) 
                       & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 6U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U)) & 
                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                      >> 4U))) | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 0xbU) & 
                                       (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 0xaU))) 
                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 9U)) & 
                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 8U)) & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U))) & 
                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mvendorid 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 7U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_marchid 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 7U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 1U)) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mimpid 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 6U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 1U)) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mdseac 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xbU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 0xaU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 4U))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                       >> 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_meihap 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                   >> 0xbU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 0xaU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dcsr 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 6U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 5U)) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 4U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dpc 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 6U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 5U)) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 4U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicawics 
        = (1U & ((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 0xbU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U))) & 
                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 3U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                   >> 2U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0h 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                    >> 0xaU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                       >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                    >> 4U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 3U)) 
                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                        >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad1 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 0xaU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 3U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U))) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                     >> 1U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__presync 
        = (1U & ((((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 0xaU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U)) 
                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)) 
                      | ((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 7U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 5U)) 
                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                  >> 4U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 3U))) 
                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 2U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                     | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                             >> 5U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 4U))) 
                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                 >> 3U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U))) 
                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                    | ((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                               >> 6U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 5U))) 
                          & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                >> 4U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 3U))) 
                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                              >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 1U))) 
                   | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                          >> 0xbU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 4U))) & 
                        (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                            >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 1U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                  | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 0xbU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 4U))) & 
                       (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                           >> 3U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 2U)) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U)))) 
                 | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                         >> 7U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                      >> 5U))) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                      & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                            >> 3U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U))) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                       >> 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__excinfo_wb_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__excinfo_wb_ff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_r))
            ? (((((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc_r 
                       << 1U)) | (0xfffffffeU & ((- (IData)(
                                                            (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_r) 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                                                                    >> 0xfU))) 
                                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi))))) 
                                                 & (((IData)(1U) 
                                                     + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc_r) 
                                                    << 1U)))) 
                  | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_illegal_inst)) 
                 | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r))) 
                    & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r 
                               >> 2U)))) | ((- (IData)(
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_r) 
                                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid_r))))) 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)) 
               | ((- (IData)((1U & ((((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mtval_r))) 
                                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                                     & (~ (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_or_int_valid_r) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_pc_r))) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_inst_r))) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_r))))) 
                                    & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval_capture_lsu_r)))))) 
                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_noredir_r) 
            << 0x11U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken) 
                          << 0x10U) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_idle_any) 
                                        << 0xfU) | 
                                       (((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0xeU) | 
                                        (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                          << 0xdU) 
                                         | ((0x7ffff000U 
                                             & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                  << 0xcU) 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 1U)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                   << 0xcU))) 
                                            | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                << 0xbU) 
                                               | ((((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                    & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns))))) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r) 
                                                      << 9U) 
                                                     | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r) 
                                                            & (~ 
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                >> 0xdU))) 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                          & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_r))) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                                     << 1U)) 
                                                                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__request_debug_mode_r) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__request_debug_mode_done) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_r) 
                                                                              << 1U) 
                                                                             | (1U 
                                                                                & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_halt_req) 
                                                                                | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout) 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                                                >> 0x17U))))))))))))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_leak_one_r 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
            & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0xcU) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_noredir_r)));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                  >> 7U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
        if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_state_ff__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate 
                    = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_err_r) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r));
            }
        }
    }
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo 
        = ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                               >> 2U)) == (0x3fffffffU 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                              >> 2U))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo 
        = (((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                             >> 2U))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi 
        = (((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
                              >> 2U)) == (0x3fffffffU 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                             >> 2U))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                 >> 2U)) == (0x3fffffffU 
                                             & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[1U] 
                                                 << 0x1eU) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[0U] 
                                                   >> 2U)))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
               & (0U != (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m)));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffffeU & ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffffcU & ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo)) 
           | (0xfffffff8U & ((((((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                                 >> 2U)) 
                                 == (0x3fffffffU & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[3U] 
                                      >> 2U))) << 3U) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                              & ((0U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                               >> 9U))) 
                                 << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
                                            << 3U))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_m) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
           & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
               >> 7U) | ((0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                                         >> 2U)) != 
                         (0x3fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                         >> 2U)))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__pcout 
        = ((0xfffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__pcout) 
           | (0x7ffff000U & (((((- (IData)((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_br_immed_d) 
                                                   >> 0xbU) 
                                                  ^ ~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout))))) 
                                & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                           >> 0xdU))) 
                               | ((- (IData)(((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_br_immed_d) 
                                                  >> 0xbU)) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout)))) 
                                  & ((IData)(1U) + (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                                            >> 0xdU))))) 
                              | ((- (IData)((1U & (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_i0_br_immed_d) 
                                                    >> 0xbU) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_alu__DOT__ibradder__DOT__cout)))))) 
                                 & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
                                             >> 0xdU)) 
                                    - (IData)(1U)))) 
                             << 0xcU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_csr_rddata_d 
        = (((((((((((((((((((((((((((((((((((((((((
                                                   ((((((((((((((0x40001104U 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (((((~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))) 
                                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                                | (0x45U 
                                                                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mvendorid))))) 
                                                               | (0x10U 
                                                                  & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_marchid))))) 
                                                              | (4U 
                                                                 & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mimpid))))) 
                                                             | ((- (IData)(
                                                                           (1U 
                                                                            & (((((~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))) 
                                                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                                & (0x1800U 
                                                                   | ((0x80U 
                                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                                          << 6U)) 
                                                                      | (8U 
                                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                                            << 3U)))))) 
                                                            | ((- (IData)(
                                                                          (1U 
                                                                           & (((((~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U)) 
                                                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                               & ((0xfffffffcU 
                                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)))) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & (((~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U)) 
                                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U)) 
                                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))))) 
                                                              & ((0x70000000U 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                                     << 8U)) 
                                                                 | ((0x800U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                                        >> 8U)) 
                                                                    | ((0x80U 
                                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                                           >> 0xbU)) 
                                                                       | (8U 
                                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                                             >> 0xeU))))))) 
                                                          | ((- (IData)(
                                                                        (1U 
                                                                         & (((((~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU)) 
                                                                               & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                              & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U)) 
                                                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                             & ((0x70000000U 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie) 
                                                                    << 0x19U)) 
                                                                | ((0x800U 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie) 
                                                                       << 9U)) 
                                                                   | ((0x80U 
                                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie) 
                                                                          << 6U)) 
                                                                      | (8U 
                                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie) 
                                                                            << 3U))))))) 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 0xbU) 
                                                                               & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U))) 
                                                                              & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                             & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 3U))) 
                                                                            & (~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 2U))) 
                                                                           & (~ 
                                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 1U)))))) 
                                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel)) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U) 
                                                                               & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                              & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 5U))) 
                                                                             & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                            & (~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 3U))) 
                                                                           & (~ 
                                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 2U))) 
                                                                          & (~ 
                                                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                              >> 1U)))))) 
                                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_inc)) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & (((((((~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U)) 
                                                                              & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 6U))) 
                                                                             & (~ 
                                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                            & (~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 3U))) 
                                                                           & (~ 
                                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 2U))) 
                                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                             >> 1U)) 
                                                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl)) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & (((((((~ 
                                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 0xaU)) 
                                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 7U)) 
                                                                            & (~ 
                                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                                >> 4U))) 
                                                                           & (~ 
                                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                               >> 3U))) 
                                                                          & (~ 
                                                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                              >> 2U))) 
                                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                            >> 1U)) 
                                                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_inc)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (((((~ 
                                                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                            >> 7U)) 
                                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                             >> 6U)) 
                                                                         & (~ 
                                                                            ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                             >> 2U))) 
                                                                        & (~ 
                                                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                            >> 1U))) 
                                                                       & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscratch)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((((~ 
                                                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                          >> 7U)) 
                                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                           >> 6U)) 
                                                                       & (~ 
                                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                           >> 1U))) 
                                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout 
                                                          << 1U))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((((~ 
                                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 7U)) 
                                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                          >> 6U)) 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 1U)) 
                                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcause)) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 6U) 
                                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 5U)) 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 2U))))) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscause))) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((((~ 
                                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 7U)) 
                                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 6U)) 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 1U)) 
                                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval)) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((((((~ 
                                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 0xbU)) 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 7U)) 
                                                                     & (~ 
                                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                         >> 5U))) 
                                                                    & (~ 
                                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                        >> 3U))) 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 2U))) 
                                                                  & (~ 
                                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 1U)))))) 
                                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac)) 
                                               | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mdseac))) 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac)) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & ((((((~ 
                                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 0xaU)) 
                                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                       >> 6U)) 
                                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 3U)) 
                                                                  & (~ 
                                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                      >> 2U))) 
                                                                 & (~ 
                                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                     >> 1U))) 
                                                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout 
                                                    << 0xaU))) 
                                             | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_meihap))) 
                                                & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meivt_ff__dout 
                                                    << 0xaU) 
                                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__meihap_ff__dout) 
                                                      << 2U)))) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                >> 0xbU) 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                  >> 6U)) 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                 >> 2U))))) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl))) 
                                           | (0xfU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                   >> 0xbU) 
                                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                     >> 6U)) 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                    >> 1U)) 
                                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                                    >> 9U)))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 0xbU) 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                 >> 6U)) 
                                                             & (~ 
                                                                ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                 >> 1U))) 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                              >> 0xaU) 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                >> 4U)) 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 3U)) 
                                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc))) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                              >> 0xaU) 
                                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                                >> 4U)) 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 3U)) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                               >> 1U))) 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc)) 
                                       | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dcsr))) 
                                          & (0x40000003U 
                                             | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                                << 2U)))) 
                                      | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dpc))) 
                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout 
                                            << 1U))) 
                                     | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0))) 
                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0)) 
                                    | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0h))) 
                                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0h)) 
                                   | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad1))) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad1_raw))) 
                                  | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicawics))) 
                                     & ((0x1000000U 
                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics 
                                            << 8U)) 
                                        | ((0x300000U 
                                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics 
                                               << 6U)) 
                                           | (0x1fff8U 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics 
                                                 << 3U)))))) 
                                 | ((- (IData)((1U 
                                                & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 0xaU) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 5U)) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 4U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 1U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))) 
                                | ((- (IData)((1U & 
                                               (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xaU) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 4U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 3U))) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_tsel_out)) 
                               | ((- (IData)((1U & 
                                              (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 0xaU) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 5U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))))) 
                                  & (((((- (IData)(
                                                   (0U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0) 
                                       | ((- (IData)(
                                                     (1U 
                                                      == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1)) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2)) 
                                     | ((- (IData)(
                                                   (3U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)))) 
                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3)))) 
                              | ((- (IData)((1U & (
                                                   (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 6U) 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 5U)) 
                                                     & (~ 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                         >> 3U))) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 1U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect)) 
                             | ((- (IData)((1U & ((
                                                   (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 6U) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 5U)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 3U))) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect)) 
                            | ((- (IData)((1U & (((
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect)) 
                           | ((- (IData)((1U & ((((
                                                   (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 4U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 3U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 2U))) 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3)) 
                          | ((- (IData)((1U & (((((
                                                   (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 7U))) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 4U))) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 3U))) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 1U))) 
                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4)) 
                         | ((- (IData)((1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 0xbU) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 7U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U))) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5)) 
                        | ((- (IData)((1U & (((((((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 7U)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 5U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 3U))) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 2U)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U)) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6)) 
                       | ((- (IData)((1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 7U) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 2U))) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 1U)) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h)) 
                      | ((- (IData)((1U & ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 7U) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 6U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U))) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h)) 
                     | ((- (IData)((1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 4U))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 3U))) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U)) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                 >> 1U))) 
                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h)) 
                    | ((- (IData)((1U & ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 7U) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 6U))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U))) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 2U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 1U)) 
                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h)) 
                   | ((- (IData)((1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 6U) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 3U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 1U)) 
                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdht))) 
                  | ((- (IData)((1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 6U) & 
                                         (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U))) 
                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdhs))) 
                 | ((- (IData)((1U & ((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 7U)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 5U)) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 4U))) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 3U))) 
                                       & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 2U))) 
                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme3))) 
                | ((- (IData)((1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 5U) & 
                                         (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 4U))) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 3U))) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 2U)) & 
                                      (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 1U))) 
                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme4))) 
               | ((- (IData)((1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 5U) & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                    >> 4U))) 
                                       & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 3U))) 
                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 2U)) & 
                                     (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))))) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme5))) 
              | ((- (IData)((1U & (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 5U) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                      & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                            >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 1U)) 
                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme6))) 
             | ((- (IData)((1U & ((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 7U)) & 
                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                       >> 5U)) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                    & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 3U))) 
                                   & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 2U))) & 
                                  (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))))) 
                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcountinhibit))) 
            | (2U & ((- (IData)((1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 6U) & 
                                          (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                              >> 4U))) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 3U))) 
                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 2U)) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                          >> 1U))))) 
                     & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpmc_ff__dout)) 
                        << 1U)))) | ((- (IData)((((
                                                   (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitcnt1) 
                                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitcnt0)) 
                                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitb1)) 
                                                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitb0)) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitctl0)) 
                                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitctl1)))) 
                                     & (((((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitcnt0))) 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0) 
                                            | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitcnt1))) 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)) 
                                           | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitb0))) 
                                              & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_b))) 
                                          | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitb1))) 
                                             & (~ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_b))) 
                                         | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitctl0))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0))) 
                                        | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mitctl1))) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                  & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d)) 
                     | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_any_unq_d) 
                         & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__legal) 
                             & ((~ ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dcsr) 
                                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dpc)) 
                                         | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 0xaU) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                   >> 4U))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 3U))) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                >> 2U)) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                  >> 1U)))) 
                                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicawics)) 
                                       | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0)) 
                                      | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0h)) 
                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad1)) 
                                    | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 0xaU) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                             >> 3U)) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                               >> 2U))) 
                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 1U)) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d)))) 
                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                   >> 0xdU))) & (~ 
                                                 ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                      >> 0xbU) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                        >> 6U)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                                       >> 1U)) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d))) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_any_unq_d))))) 
                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d) 
                              & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mvendorid) 
                                     | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_marchid)) 
                                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mimpid)) 
                                   | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                        >> 0xaU) & 
                                       (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                           >> 7U))) 
                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_rdaddr_d) 
                                         >> 2U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mdseac)) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_meihap))))))) 
                 & (((((~ (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                             >> 9U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                          >> 0x1fU))) 
                           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                 >> 0x16U)))) & (~ 
                                                 ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                        >> 0x11U))) 
                                                   & (~ 
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                       >> 9U))) 
                                                  & (~ 
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                      >> 0x16U))))) 
                      & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                            >> 0x18U))) & (~ (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                >> 0x16U) 
                                               & (~ 
                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                                                   >> 0x1fU))) 
                                              & (~ 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                                  >> 9U))))) 
                    & (~ ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                             >> 0x1fU) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                          >> 9U)) & 
                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[1U] 
                            >> 0x16U)) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[2U] 
                                             >> 0x11U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall 
        = (1U & ((((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U] 
                      >> 0xeU) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__presync) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_any_unq_d)) 
                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw)) 
                  | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc) 
                 & ((0x20U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp[0U])
                     ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout
                     : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout 
                        | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
                   ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_flush_leak_one_r) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)) 
                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                     >> 8U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__finish 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case)) 
            | (0x20U == (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_result 
        = ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_div_wren))) 
           & ((((- (IData)((1U & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                      >> 0xfU)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel)))))) 
                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff) 
               | ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0xfU)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff))) 
              | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel))) 
                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0xfeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (1U & ((((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                    >> 8U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U)) 
                     | ((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                      >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                    | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                       >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0xfdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (2U & (((0x7ffffffeU & (((0U == (3U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               >> 8U))) 
                                      << 1U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 1U))) 
                     | (((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                        << 1U)) | (0xffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                 >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0xfbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (4U & (((0xfffffffcU & (((1U == (3U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               >> 8U))) 
                                      << 2U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                << 1U))) 
                     | (((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                        << 2U)) | (0x1ffffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0xf7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (8U & (((0xfffffff8U & (((1U == (3U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                               >> 8U))) 
                                      << 3U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                << 1U))) 
                     | (((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                       >> 5U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                        << 3U)) | (0x3ffffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0xefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (0x10U & (((0xfffffff0U & (((2U == (3U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 8U))) 
                                         << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   << 3U))) 
                        | (((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                          >> 5U))) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                           << 4U)) | (0x7ffffff0U & 
                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                       >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0xdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (0x20U & (((0xffffffe0U & (((2U == (3U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 8U))) 
                                         << 5U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   << 3U))) 
                        | (((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                          >> 5U))) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                           << 5U)) | (0xffffffe0U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0xbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (0x40U & (((0xffffffc0U & (((3U == (3U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 8U))) 
                                         << 6U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   << 5U))) 
                        | (((3U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                          >> 5U))) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                           << 6U)) | (0xffffffc0U & 
                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                       << 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken)) 
           | (0x80U & (((0xffffff80U & (((3U == (3U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    >> 8U))) 
                                         << 7U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   << 5U))) 
                        | (((3U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout) 
                                          >> 5U))) 
                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)) 
                           << 7U)) | (0xffffff80U & 
                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                       << 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
                               << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
                               << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_lo) 
                               << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
           | (0xfffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_lo) 
                               << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (2U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfffbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (4U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfff7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                        >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                   << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffefU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x10U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffdfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x20U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                          << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xffbfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x40U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xff7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x80U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                         << 4U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                   >> 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                              << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfeffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x100U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfdffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x200U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xfbffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x400U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                           << 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xf7ffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x800U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                          << 8U) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                    >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                               << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xefffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x1000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xdfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x2000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 0xaU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0xbfffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x4000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen) 
                                       << 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                                                  << 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
        = ((0x7fffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo)) 
           | (0x8000U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_hitvec_lo) 
                           << 0xcU) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                            << 0xcU))));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_presync_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid 
        = (1U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu_mp_pkt 
                          >> 0x37U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f 
        = ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_p1_f 
              & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_p1_f 
                           >> 0x11U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_rd_tag_p1_f))) 
             & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                    >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_p1_f)))) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
               >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_p1_f 
        = ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_p1_f 
              & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_p1_f 
                           >> 0x11U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_rd_tag_p1_f))) 
             & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                    >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_p1_f)))) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
               >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f 
        = ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f 
              & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f 
                           >> 0x11U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_rd_tag_f))) 
             & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                    >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_f)))) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
               >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_f 
        = ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f 
              & ((0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f 
                           >> 0x11U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_rd_tag_f))) 
             & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                    >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_f)))) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
               >> 7U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__leak_one_f)));
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
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((1U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((2U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((3U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((4U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((5U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((6U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((7U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((8U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((9U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                              >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0xaU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0xaU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0xbU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0xbU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0xcU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0xcU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0xdU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0xdU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0xeU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0xeU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0xfU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0xfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x10U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x10U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x11U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x11U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x12U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x12U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x13U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x13U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x14U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x14U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x15U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x15U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x16U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x16U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x17U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x17U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x18U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x18U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x19U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x19U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x1aU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x1aU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x1bU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x1bU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x1cU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x1cU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x1dU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x1dU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x1eU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x1eU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                        & ((((0x1fU == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                 >> 3U))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                >> 1U)) | ((0x1fU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                              >> 5U)))) ? (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                  >> 5U))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((1U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (1U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((2U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (2U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((3U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (3U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((4U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (4U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((5U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (5U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((6U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (6U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((7U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (7U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((8U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (8U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((9U == (0x7fU 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (9U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0xaU == (0x7fU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                  >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0xaU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0xbU == (0x7fU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                  >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0xcU == (0x7fU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                  >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0xcU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0xdU == (0x7fU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                  >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0xdU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0xeU == (0x7fU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                  >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0xeU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__14__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0xfU == (0x7fU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                  >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0xfU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__15__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x10U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x10U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__16__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x11U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x11U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__17__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x12U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x12U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__18__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x13U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x13U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__19__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x14U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x14U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__20__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x15U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x15U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__21__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x16U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x16U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__22__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x17U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x17U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__23__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x18U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x18U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__24__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x19U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x19U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__25__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x1aU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x1aU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__26__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x1bU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x1bU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__27__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x1cU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x1cU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__28__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x1dU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x1dU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__29__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x1eU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x1eU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__30__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 1U) & ((((0x1fU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 2U)) | (
                                                   (0x1fU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__0__KET____DOT__way_clken__BRA__1__KET____DOT__TAG_VALID__BRA__31__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x20U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x20U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__0__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x21U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x21U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__1__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x22U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x22U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__2__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x23U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x23U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__3__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x24U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x24U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__4__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x25U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x25U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__5__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x26U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x26U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__6__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x27U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x27U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__7__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x28U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x28U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__8__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x29U == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x29U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__9__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x2aU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x2aU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__10__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x2bU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x2bU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__11__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x2cU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x2cU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__12__KET____DOT__ic_way_tagvalid_dup__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_enabled__DOT__tag_valid_clken) 
                         >> 2U) & ((((0x2dU == (0x7fU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                   >> 3U))) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                        >> 1U)) | (
                                                   (0x2dU 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__perr_dat_ff__dout)) 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate))) 
                                   | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                      >> 5U)))) ? (
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__tag_addr_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                        >> 5U))) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__perr_sel_invalidate)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__icache_enabled__DOT__CLK_GRP_TAG_VALID__BRA__1__KET____DOT__way_clken__BRA__0__KET____DOT__TAG_VALID__BRA__13__KET____DOT__ic_way_tagvalid_dup__dout)));
}
