// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top.h"
#include "Vtb_top__Syms.h"

void Vtb_top::_settle__TOP__3(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top::_settle__TOP__3\n"); );
    Vtb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp190[3];
    WData/*159:0*/ __Vtemp274[5];
    WData/*95:0*/ __Vtemp284[3];
    WData/*95:0*/ __Vtemp285[3];
    WData/*95:0*/ __Vtemp286[3];
    WData/*95:0*/ __Vtemp291[3];
    WData/*95:0*/ __Vtemp294[3];
    WData/*95:0*/ __Vtemp295[3];
    WData/*95:0*/ __Vtemp296[3];
    WData/*95:0*/ __Vtemp301[3];
    WData/*255:0*/ __Vtemp304[8];
    WData/*255:0*/ __Vtemp305[8];
    WData/*255:0*/ __Vtemp306[8];
    WData/*255:0*/ __Vtemp307[8];
    // Body
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_last_data_beat) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_data_valid) 
            >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__other_tag)) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc 
        = ((0x7eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc)) 
           | (1U & ((((((((((((((((((((((((((((((((
                                                   (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half) 
                                                     ^ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 6U))) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 8U))) 
                                                ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0xaU))) 
                                               ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                          >> 0xbU))) 
                                              ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                        >> 0xfU))) 
                                            ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                       >> 0x11U))) 
                                           ^ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                      >> 0x13U))) 
                                          ^ (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                     >> 0x15U))) 
                                         ^ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                    >> 0x17U))) 
                                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                   >> 0x19U))) 
                                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                  >> 0x1aU))) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                 >> 0x1cU))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                >> 0x1eU))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                               >> 0x20U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                              >> 0x22U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                             >> 0x24U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                            >> 0x26U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                           >> 0x28U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                          >> 0x2aU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                         >> 0x2cU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                        >> 0x2eU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                       >> 0x30U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x32U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x34U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                    >> 0x36U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x38U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                  >> 0x39U))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x3bU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                >> 0x3dU))) ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                       >> 0x3fU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc 
        = ((0x7dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc)) 
           | (2U & ((((((((((((((((((((((((((((((((
                                                   ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half) 
                                                      ^ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 9U))) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 0xaU))) 
                                                ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0xcU))) 
                                               ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                          >> 0xdU))) 
                                              ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                        >> 0x11U))) 
                                            ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                       >> 0x14U))) 
                                           ^ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                      >> 0x15U))) 
                                          ^ (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                     >> 0x18U))) 
                                         ^ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                    >> 0x19U))) 
                                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                   >> 0x1bU))) 
                                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                  >> 0x1cU))) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                 >> 0x1fU))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                >> 0x20U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                               >> 0x23U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                              >> 0x24U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                             >> 0x27U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                            >> 0x28U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                           >> 0x2bU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                          >> 0x2cU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                         >> 0x2fU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                        >> 0x30U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                       >> 0x33U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x34U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x37U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                    >> 0x38U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x3aU))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                  >> 0x3bU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x3eU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                >> 0x3fU))) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc 
        = ((0x7bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc)) 
           | (4U & ((((((((((((((((((((((((((((((((
                                                   ((((IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 9U))) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 0xaU))) 
                                                ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0xeU))) 
                                               ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                          >> 0xfU))) 
                                              ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                        >> 0x11U))) 
                                            ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                       >> 0x16U))) 
                                           ^ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                      >> 0x17U))) 
                                          ^ (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                     >> 0x18U))) 
                                         ^ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                    >> 0x19U))) 
                                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                   >> 0x1dU))) 
                                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                  >> 0x1eU))) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                 >> 0x1fU))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                >> 0x20U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                               >> 0x25U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                              >> 0x26U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                             >> 0x27U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                            >> 0x28U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                           >> 0x2dU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                          >> 0x2eU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                         >> 0x2fU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                        >> 0x30U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                       >> 0x35U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x36U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x37U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                    >> 0x38U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x3cU))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                  >> 0x3dU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x3eU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                >> 0x3fU))) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc 
        = ((0x77U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc)) 
           | (8U & ((((((((((((((((((((((((((((((((IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 4U)) 
                                                  ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 5U))) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 6U))) 
                                                ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 7U))) 
                                               ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                          >> 8U))) 
                                              ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 9U))) 
                                             ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                        >> 0xaU))) 
                                            ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                       >> 0x12U))) 
                                           ^ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                      >> 0x13U))) 
                                          ^ (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                     >> 0x14U))) 
                                         ^ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                    >> 0x15U))) 
                                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                   >> 0x16U))) 
                                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                  >> 0x17U))) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                 >> 0x18U))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                >> 0x19U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                               >> 0x21U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                              >> 0x22U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                             >> 0x23U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                            >> 0x24U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                           >> 0x25U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                          >> 0x26U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                         >> 0x27U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                        >> 0x28U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                       >> 0x31U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x32U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x33U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                    >> 0x34U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x35U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                  >> 0x36U))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x37U))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                >> 0x38U))) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc 
        = ((0x6fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc)) 
           | (0x10U & (((((((((((((((((((((((((((((
                                                   (((IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0xfU))) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 0x10U))) 
                                                ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x11U))) 
                                               ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                          >> 0x12U))) 
                                              ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                        >> 0x14U))) 
                                            ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                       >> 0x15U))) 
                                           ^ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                      >> 0x16U))) 
                                          ^ (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                     >> 0x17U))) 
                                         ^ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                    >> 0x18U))) 
                                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                   >> 0x19U))) 
                                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                  >> 0x29U))) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                 >> 0x2aU))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                >> 0x2bU))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                               >> 0x2cU))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                              >> 0x2dU))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                             >> 0x2eU))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                            >> 0x2fU))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                           >> 0x30U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                          >> 0x31U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                         >> 0x32U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                        >> 0x33U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                       >> 0x34U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x35U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x36U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                    >> 0x37U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x38U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc 
        = ((0x5fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc)) 
           | (0x20U & (((((((((((((((((((((((((((((
                                                   (((IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x1eU))) 
                                                 ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 0x1fU))) 
                                                ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x20U))) 
                                               ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                          >> 0x21U))) 
                                              ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                         >> 0x22U))) 
                                             ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                        >> 0x23U))) 
                                            ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                       >> 0x24U))) 
                                           ^ (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                      >> 0x25U))) 
                                          ^ (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                     >> 0x26U))) 
                                         ^ (IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                    >> 0x27U))) 
                                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                   >> 0x28U))) 
                                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                  >> 0x29U))) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                 >> 0x2aU))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                >> 0x2bU))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                               >> 0x2cU))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                              >> 0x2dU))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                             >> 0x2eU))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                            >> 0x2fU))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                           >> 0x30U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                          >> 0x31U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                         >> 0x32U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                        >> 0x33U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                       >> 0x34U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x35U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x36U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                    >> 0x37U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x38U))) 
                       << 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc)) 
           | (0x40U & ((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x39U)) ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 0x3aU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                       >> 0x3bU))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                      >> 0x3cU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                             >> 0x3dU))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                    >> 0x3eU))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                           >> 0x3fU))) 
                       << 6U)));
    __Vtemp190[0U] = (IData)(((0x9bU >= (0xffU & ((IData)(0x27U) 
                                                  * 
                                                  (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                      >> 1U)))))
                               ? (0x7fffffffffULL & 
                                  (((0U == (0x1fU & 
                                            ((IData)(0x27U) 
                                             * (3U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                   >> 1U)))))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                               ((IData)(2U) 
                                                                + 
                                                                (7U 
                                                                 & (((IData)(0x27U) 
                                                                     * 
                                                                     (3U 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                         >> 1U))) 
                                                                    >> 5U)))])) 
                                               << ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x27U) 
                                                       * 
                                                       (3U 
                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                           >> 1U))))))) 
                                   | (((QData)((IData)(
                                                       vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                       ((IData)(1U) 
                                                        + 
                                                        (7U 
                                                         & (((IData)(0x27U) 
                                                             * 
                                                             (3U 
                                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                 >> 1U))) 
                                                            >> 5U)))])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                          >> 1U)))))
                                            ? 0x20U
                                            : ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * 
                                                     (3U 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                         >> 1U))))))) 
                                      | ((QData)((IData)(
                                                         vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                         (7U 
                                                          & (((IData)(0x27U) 
                                                              * 
                                                              (3U 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                  >> 1U))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x27U) 
                                                * (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                      >> 1U))))))))
                               : 0ULL));
    __Vtemp190[1U] = ((0xffffff80U & ((IData)(((0x9bU 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                ? (0x7fffffffffULL 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                        ((IData)(2U) 
                                                                         + 
                                                                         (7U 
                                                                          & (((IData)(0x27U) 
                                                                              * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                             >> 5U)))])) 
                                                        << 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           (7U 
                                                                            & (((IData)(0x27U) 
                                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                               >> 5U)))])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                                >> 5U))])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))))
                                                : 0ULL)) 
                                      << 7U)) | (IData)(
                                                        (((0x9bU 
                                                           >= 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * 
                                                               (3U 
                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                   >> 1U)))))
                                                           ? 
                                                          (0x7fffffffffULL 
                                                           & (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(0x27U) 
                                                                    * 
                                                                    (3U 
                                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                        >> 1U)))))
                                                                ? 0ULL
                                                                : 
                                                               ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                                >> 5U)))])) 
                                                                << 
                                                                ((IData)(0x40U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(0x27U) 
                                                                     * 
                                                                     (3U 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                         >> 1U))))))) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                                >> 5U)))])) 
                                                                  << 
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(0x27U) 
                                                                        * 
                                                                        (3U 
                                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                            >> 1U)))))
                                                                    ? 0x20U
                                                                    : 
                                                                   ((IData)(0x20U) 
                                                                    - 
                                                                    (0x1fU 
                                                                     & ((IData)(0x27U) 
                                                                        * 
                                                                        (3U 
                                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                            >> 1U))))))) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                                >> 1U))) 
                                                                                >> 5U))])) 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & ((IData)(0x27U) 
                                                                        * 
                                                                        (3U 
                                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_lo_ff__dout) 
                                                                            >> 1U))))))))
                                                           : 0ULL) 
                                                         >> 0x20U)));
    __Vtemp190[2U] = ((0x7fU & ((IData)(((0x9bU >= 
                                          (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                          ? (0x7fffffffffULL 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x27U) 
                                                                        * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (7U 
                                                                      & (((IData)(0x27U) 
                                                                          * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                         >> 5U)))])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                      (7U 
                                                                       & (((IData)(0x27U) 
                                                                           * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))))
                                          : 0ULL)) 
                                >> 0x19U)) | (0xffffff80U 
                                              & ((IData)(
                                                         (((0x9bU 
                                                            >= 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                            ? 
                                                           (0x7fffffffffULL 
                                                            & (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                 ? 0ULL
                                                                 : 
                                                                ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                                >> 5U)))])) 
                                                                 << 
                                                                 ((IData)(0x40U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                                >> 5U)))])) 
                                                                   << 
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                                                     ? 0x20U
                                                                     : 
                                                                    ((IData)(0x20U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT__iccm_bank_dout_fn[
                                                                                (7U 
                                                                                & (((IData)(0x27U) 
                                                                                * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                                >> 5U))])) 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__iccm__DOT__iccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))))
                                                            : 0ULL) 
                                                          >> 0x20U)) 
                                                 << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
        = __Vtemp190[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
        = __Vtemp190[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
        = __Vtemp190[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U]) 
           | (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U]) 
           | (0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[6U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[7U]) 
           | (0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[7U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[8U]) 
           | (0xfe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[8U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U]) 
           | (0xffffff80U & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[5U] 
                              << 0x19U) | (0x1ffff80U 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[4U] 
                                              >> 7U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
        = ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[5U] 
                     >> 7U)) | (0xffffff80U & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[6U] 
                                                << 0x19U) 
                                               | (0x1ffff80U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[5U] 
                                                     >> 7U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
        = ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[6U] 
                     >> 7U)) | (0xffffff80U & ((0xffffc000U 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[2U] 
                                                   << 7U)) 
                                               | (0x3f80U 
                                                  & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[7U] 
                                                      << 0x19U) 
                                                     | (0x1ffff80U 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__1__KET____DOT__ECC1__DOT__wb_packeddout[6U] 
                                                           >> 7U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
        = ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[2U] 
                     >> 0x19U)) | (0xffffff80U & ((0x3f80U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[3U] 
                                                      << 7U)) 
                                                  | (0xffffc000U 
                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[3U] 
                                                        << 7U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
        = ((0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U]) 
           | ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[3U] 
                        >> 0x19U)) | (0xffffff80U & 
                                      ((0x3f80U & (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[4U] 
                                                   << 7U)) 
                                       | (0x1fc000U 
                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__PACKED_1__DOT__BANKS_WAY__BRA__0__KET____DOT__ECC1__DOT__wb_packeddout[4U] 
                                             << 7U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__crit_byp_hit_f 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_buff_hit_unq_f) 
           & ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              | (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__stream_hit_f 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_buff_hit_unq_f) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_wrap_f))) 
           & (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_tag_valid = 
        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
         & (- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                 >> 8U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                            >> 7U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
        = ((0xffffffc000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
           | (IData)((IData)((0x3ffffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_data_raw_packed)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
        = ((0x3ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
           | ((QData)((IData)((0x3ffffffU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__ic_tag_data_raw_packed 
                                                     >> 0x1aU))))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f 
        = (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank0_rd_data_f)) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank1_rd_data_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f 
        = (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f)))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank1_rd_data_f)) 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_start_f) 
                                >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_bank0_rd_data_p1_f)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error 
        = (((((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                 >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
             & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                      >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
            & ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg) 
                  >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
           & ((~ (((0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                           >> 0x10U))) 
                   | (0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                             >> 0x10U)))) 
                  | (0x1e018U == (0x1ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                              >> 0xfU))))) 
              | (((0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                          >> 0x10U))) 
                  | (0x1e018U == (0x1ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                              >> 0xfU)))) 
                 & (2U != (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error 
        = (((((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                 >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
             & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                      >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
            & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg) 
                     >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
           & (~ ((0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                         >> 0x10U))) 
                 | (0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                           >> 0x10U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__din_plus_parity 
        = (((QData)((IData)(((0x80000000U & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                      >> 0x26U)) 
                                             << 0x1fU)) 
                             | ((0x7e000000U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                         >> 0x1aU)) 
                                                << 0x19U)) 
                                | ((0x1000000U & ((IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                           >> 0x25U)) 
                                                  << 0x18U)) 
                                   | ((0xfffe00U & 
                                       ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                 >> 0xbU)) 
                                        << 9U)) | (
                                                   (0x100U 
                                                    & ((IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                                >> 0x24U)) 
                                                       << 8U)) 
                                                   | ((0xfeU 
                                                       & ((IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                                   >> 4U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                                    >> 0x23U))))))))))) 
            << 7U) | (QData)((IData)(((0x70U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                         >> 1U)) 
                                                << 4U)) 
                                      | ((8U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                         >> 0x22U)) 
                                                << 3U)) 
                                         | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo) 
                                                   << 2U)) 
                                            | (3U & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0x20U)))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x7eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (1U & (((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                              >> 0x20U)) 
                                     ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo)) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                               >> 1U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                              >> 3U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                             >> 4U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                            >> 6U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                           >> 8U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                          >> 0xaU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                         >> 0xbU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                        >> 0xdU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                       >> 0xfU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0x11U))) 
                          ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                     >> 0x13U))) ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                            >> 0x15U))) 
                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                   >> 0x17U))) ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                          >> 0x19U))) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                 >> 0x1aU))) ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                        >> 0x1cU))) 
                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                               >> 0x1eU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x7dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (2U & ((((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                               >> 0x21U)) 
                                      ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo)) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                >> 2U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                               >> 3U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                              >> 5U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                             >> 6U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                            >> 9U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                           >> 0xaU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                          >> 0xcU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                         >> 0xdU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                        >> 0x10U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                       >> 0x11U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                      >> 0x14U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0x15U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                           >> 0x19U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                  >> 0x1bU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                         >> 0x1cU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                >> 0x1fU))) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x7bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (4U & ((((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                               >> 0x22U)) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                 >> 1U))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                >> 2U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                               >> 3U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                              >> 7U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                             >> 8U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                            >> 9U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                           >> 0xaU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                          >> 0xeU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                         >> 0xfU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                        >> 0x10U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                       >> 0x11U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                      >> 0x16U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0x17U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                           >> 0x19U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                  >> 0x1dU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                         >> 0x1eU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                >> 0x1fU))) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x77U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (8U & (((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                            >> 0x23U)) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                              >> 4U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                             >> 5U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                            >> 6U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                           >> 7U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                          >> 8U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                         >> 9U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0xaU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                       >> 0x12U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                      >> 0x13U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0x14U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                    >> 0x15U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                           >> 0x16U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                  >> 0x17U))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                         >> 0x18U))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                >> 0x19U))) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x6fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (0x10U & (((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                               >> 0x24U)) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                 >> 0xbU))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                >> 0xcU))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                               >> 0xdU))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                              >> 0xeU))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                             >> 0xfU))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                            >> 0x10U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                           >> 0x11U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                          >> 0x12U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                         >> 0x13U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                        >> 0x14U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                       >> 0x15U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                      >> 0x16U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0x17U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                           >> 0x19U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x5fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (0x20U & ((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                      >> 0x25U)) ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                            >> 0x1aU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                       >> 0x1bU))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                      >> 0x1cU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                             >> 0x1dU))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                    >> 0x1eU))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                           >> 0x1fU))) 
                       << 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)) 
           | (0x40U & ((VL_REDXOR_32((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo)) 
                        ^ VL_REDXOR_32((0x7fU & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo 
                                                         >> 0x20U))))) 
                       << 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity 
        = (((QData)((IData)(((0x80000000U & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                      >> 0x26U)) 
                                             << 0x1fU)) 
                             | ((0x7e000000U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 0x1aU)) 
                                                << 0x19U)) 
                                | ((0x1000000U & ((IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                           >> 0x25U)) 
                                                  << 0x18U)) 
                                   | ((0xfffe00U & 
                                       ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                 >> 0xbU)) 
                                        << 9U)) | (
                                                   (0x100U 
                                                    & ((IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                                >> 0x24U)) 
                                                       << 8U)) 
                                                   | ((0xfeU 
                                                       & ((IData)(
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                                   >> 4U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                                    >> 0x23U))))))))))) 
            << 7U) | (QData)((IData)(((0x70U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 1U)) 
                                                << 4U)) 
                                      | ((8U & ((IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 0x22U)) 
                                                << 3U)) 
                                         | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi) 
                                                   << 2U)) 
                                            | (3U & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0x20U)))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x7eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (1U & (((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                              >> 0x20U)) 
                                     ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi)) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                               >> 1U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                              >> 3U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                             >> 4U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                            >> 6U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                           >> 8U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                          >> 0xaU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                         >> 0xbU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                        >> 0xdU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                       >> 0xfU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0x11U))) 
                          ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                     >> 0x13U))) ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                            >> 0x15U))) 
                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                   >> 0x17U))) ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                          >> 0x19U))) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                 >> 0x1aU))) ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                        >> 0x1cU))) 
                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                               >> 0x1eU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x7dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (2U & ((((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                               >> 0x21U)) 
                                      ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi)) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                >> 2U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                               >> 3U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                              >> 5U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                             >> 6U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                            >> 9U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                           >> 0xaU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                          >> 0xcU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                         >> 0xdU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                        >> 0x10U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                       >> 0x11U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                      >> 0x14U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0x15U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                           >> 0x19U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                  >> 0x1bU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 0x1cU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                >> 0x1fU))) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x7bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (4U & ((((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                               >> 0x22U)) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                 >> 1U))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                >> 2U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                               >> 3U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                              >> 7U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                             >> 8U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                            >> 9U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                           >> 0xaU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                          >> 0xeU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                         >> 0xfU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                        >> 0x10U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                       >> 0x11U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                      >> 0x16U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0x17U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                           >> 0x19U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                  >> 0x1dU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 0x1eU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                >> 0x1fU))) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x77U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (8U & (((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                            >> 0x23U)) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                              >> 4U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                             >> 5U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                            >> 6U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                           >> 7U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                          >> 8U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                         >> 9U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0xaU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                       >> 0x12U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                      >> 0x13U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0x14U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                    >> 0x15U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                           >> 0x16U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                  >> 0x17U))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 0x18U))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                >> 0x19U))) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x6fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (0x10U & (((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                               >> 0x24U)) 
                                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                 >> 0xbU))) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                >> 0xcU))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                               >> 0xdU))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                              >> 0xeU))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                             >> 0xfU))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                            >> 0x10U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                           >> 0x11U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                          >> 0x12U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                         >> 0x13U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                        >> 0x14U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                       >> 0x15U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                      >> 0x16U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0x17U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                           >> 0x19U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x5fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (0x20U & ((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                      >> 0x25U)) ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                            >> 0x1aU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                       >> 0x1bU))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                      >> 0x1cU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                             >> 0x1dU))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                    >> 0x1eU))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                           >> 0x1fU))) 
                       << 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)) 
           | (0x40U & ((VL_REDXOR_32((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi)) 
                        ^ VL_REDXOR_32((0x7fU & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 0x20U))))) 
                       << 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__dccm_rdata_m 
        = (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_hi)) 
            << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dccm_rd_data_lo)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_hi 
        = (((0x3fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                        >> 2U)) == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                               >> 2U))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_lo 
        = (((0x3fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                        >> 2U)) == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                               >> 2U))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_r_hi 
        = (((0x3fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                        >> 2U)) == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r 
                                               >> 2U))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_wr_bypass_d_m_lo 
        = (((0x3fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any) 
                        >> 2U)) == (0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                                               >> 2U))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_m));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__0__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable)) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__1__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
                                 >> 4U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                             >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__2__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
                                 >> 8U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                             >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__3__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
                                 >> 0xcU))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                               >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__4__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
                                 >> 0x10U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__5__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
                                 >> 0x14U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__6__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
                                 >> 0x18U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__IO_CLK_GRP__BRA__7__KET____DOT__grp_clken 
        = (1U & ((0U != (0xfU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_clk_enable 
                                 >> 0x1cU))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_part_out 
        = ((0xffffffff00000000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_part_out) 
           | (IData)((IData)(((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_reg_read) 
                                          & (0U == 
                                             (0xfU 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_raddr_ff 
                                                 >> 2U)))))) 
                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_part_out 
        = ((0xffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_part_out) 
           | ((QData)((IData)(((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_reg_read) 
                                           & (1U == 
                                              (0xfU 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_raddr_ff 
                                                  >> 2U)))))) 
                               & (IData)(((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
                                          >> 0x20U))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xfU & ((- (IData)((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg)))) 
                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xf0U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                          >> 1U)))) 
                        << 4U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xf00U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                           >> 2U)))) 
                         << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xf000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                            >> 3U)))) 
                          << 0xcU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xf0000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                             >> 4U)))) 
                           << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xf00000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                              >> 5U)))) 
                            << 0x14U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xf000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                               >> 6U)))) 
                             << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[0U]) 
           | (0xf0000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                                >> 7U)))) 
                              << 0x1cU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[0U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xfU & ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                        >> 8U)))) & 
                      vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xf0U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                          >> 9U)))) 
                        << 4U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xf00U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                           >> 0xaU)))) 
                         << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xf000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                            >> 0xbU)))) 
                          << 0xcU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xf0000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                             >> 0xcU)))) 
                           << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xf00000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                              >> 0xdU)))) 
                            << 0x14U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xf000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                               >> 0xeU)))) 
                             << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[1U]) 
           | (0xf0000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                                >> 0xfU)))) 
                              << 0x1cU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[1U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xfU & ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                        >> 0x10U)))) 
                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xf0U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                          >> 0x11U)))) 
                        << 4U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xf00U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                           >> 0x12U)))) 
                         << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xf000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                            >> 0x13U)))) 
                          << 0xcU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xf0000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                             >> 0x14U)))) 
                           << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xf00000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                              >> 0x15U)))) 
                            << 0x14U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xf000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                               >> 0x16U)))) 
                             << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[2U]) 
           | (0xf0000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                                >> 0x17U)))) 
                              << 0x1cU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xfffffff0U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xfU & ((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                        >> 0x18U)))) 
                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xffffff0fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xf0U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                          >> 0x19U)))) 
                        << 4U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xfffff0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xf00U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                           >> 0x1aU)))) 
                         << 8U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xffff0fffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xf000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                            >> 0x1bU)))) 
                          << 0xcU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xfff0ffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xf0000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                             >> 0x1cU)))) 
                           << 0x10U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xff0fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xf00000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                              >> 0x1dU)))) 
                            << 0x14U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xf0ffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xf000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                               >> 0x1eU)))) 
                             << 0x18U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U] 
        = ((0xfffffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en[3U]) 
           | (0xf0000000U & (((- (IData)((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
                                                 & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                                                >> 0x1fU)))) 
                              << 0x1cU) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv[3U])));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__mstr_prtyff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_priority)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_cmd_sent 
            = ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel)) 
               & 1U);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_cmd_sent 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
               & 1U);
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__mstr_prtyff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_priority));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_cmd_sent = 0U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_cmd_sent = 0U;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_read 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid) 
            | (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
           & (IData)(vlTOPp->tb_top__DOT__sb_axi_arready));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_addr 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
            | ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
               | (5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) 
           & (IData)(vlTOPp->tb_top__DOT__sb_axi_awready));
    if (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid)) 
          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid)) 
         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                           >> 0x14U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                     >> 0x11U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_data 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid) 
            | ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
               | (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) 
           & (IData)(vlTOPp->tb_top__DOT__sb_axi_wready));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid 
        = (((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (((0U != (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                 >> 8U))) | ((0U == 
                                              (0xffU 
                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                  >> 0x18U))) 
                                             & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x11U)))) 
                  | ((2U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x18U))) & 
                     (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))))) 
           & ((~ ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_dma_bubble)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp 
        = ((0x3eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
           | (1U & ((((((((((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 1U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 3U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 4U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 6U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 8U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0xaU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0xbU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0xdU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0xfU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x11U))) 
                          ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                     >> 0x13U))) ^ (IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                            >> 0x15U))) 
                        ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                   >> 0x17U))) ^ (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                          >> 0x19U))) 
                      ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                 >> 0x1aU))) ^ (IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                        >> 0x1cU))) 
                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                               >> 0x1eU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp 
        = ((0x3dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
           | (2U & (((((((((((((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                >> 2U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 3U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 5U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 6U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 9U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0xaU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0xcU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0xdU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x10U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x11U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x14U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x15U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x19U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                  >> 0x1bU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                         >> 0x1cU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                >> 0x1fU))) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp 
        = ((0x3bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
           | (4U & (((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 1U)) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                >> 2U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 3U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 7U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 8U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 9U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0xaU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0xeU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0xfU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x10U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x11U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x16U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x17U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x19U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                  >> 0x1dU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                         >> 0x1eU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                >> 0x1fU))) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp 
        = ((0x37U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
           | (8U & ((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 4U)) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 5U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 6U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 7U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 8U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 9U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0xaU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x12U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x13U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x14U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x15U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x16U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                  >> 0x17U))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                         >> 0x18U))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                >> 0x19U))) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp 
        = ((0x2fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
           | (0x10U & ((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0xbU)) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                >> 0xcU))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 0xdU))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0xeU))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 0xfU))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 0x10U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0x11U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0x12U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0x13U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x14U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x15U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x16U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x17U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x18U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x19U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp 
        = ((0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)) 
           | (0x20U & (((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                     >> 0x1aU)) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x1bU))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x1cU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x1dU))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x1eU))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x1fU))) 
                       << 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp 
        = ((0x3eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp)) 
           | (1U & ((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 0x20U)) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 0x21U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0x23U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 0x24U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 0x26U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0x28U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0x2aU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0x2bU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x2dU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x2fU))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x31U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x33U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x35U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x37U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                  >> 0x39U))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                         >> 0x3aU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                >> 0x3cU))) ^ (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                       >> 0x3eU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp 
        = ((0x3dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp)) 
           | (2U & (((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0x20U)) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                >> 0x22U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 0x23U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0x25U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 0x26U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 0x29U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0x2aU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0x2cU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0x2dU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x30U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x31U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x34U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x35U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x38U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x39U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                  >> 0x3bU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                         >> 0x3cU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                >> 0x3fU))) << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp 
        = ((0x3bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp)) 
           | (4U & (((((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0x21U)) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                >> 0x22U))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 0x23U))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0x27U))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 0x28U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 0x29U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0x2aU))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0x2eU))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0x2fU))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x30U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x31U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x36U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x37U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x38U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x39U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                  >> 0x3dU))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                         >> 0x3eU))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                >> 0x3fU))) << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp 
        = ((0x37U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp)) 
           | (8U & ((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0x24U)) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 0x25U))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 0x26U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0x27U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0x28U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0x29U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x2aU))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x32U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x33U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x34U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x35U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x36U))) 
                       ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                  >> 0x37U))) ^ (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                         >> 0x38U))) 
                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                >> 0x39U))) << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp 
        = ((0x2fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp)) 
           | (0x10U & ((((((((((((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0x2bU)) 
                                     ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                >> 0x2cU))) 
                                    ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                               >> 0x2dU))) 
                                   ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                              >> 0x2eU))) 
                                  ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                             >> 0x2fU))) 
                                 ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                            >> 0x30U))) 
                                ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                           >> 0x31U))) 
                               ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                          >> 0x32U))) 
                              ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                         >> 0x33U))) 
                             ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                        >> 0x34U))) 
                            ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                       >> 0x35U))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x36U))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x37U))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x38U))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x39U))) 
                       << 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp 
        = ((0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp)) 
           | (0x20U & (((((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                     >> 0x3aU)) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x3bU))) 
                           ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                      >> 0x3cU))) ^ (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                             >> 0x3dU))) 
                         ^ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                    >> 0x3eU))) ^ (IData)(
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                           >> 0x3fU))) 
                       << 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__traceskidff__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_exc_cause_wb1_raw) 
            << 1U) | (1U & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                >> 0xcU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                             >> 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__trace_rv_trace_pkt[0U] 
        = (IData)((((QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout) 
                                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_exc_valid_wb1))))) 
                    << 0x26U) | (((QData)((IData)((0x1fU 
                                                   & ((1U 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout))
                                                       ? 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout) 
                                                       >> 1U)
                                                       : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_exc_cause_wb1_raw))))) 
                                  << 0x21U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__trace_rv_trace_pkt[1U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__trace_rv_trace_pkt[1U]) 
           | (IData)(((((QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout) 
                                               | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_exc_valid_wb1))))) 
                        << 0x26U) | (((QData)((IData)(
                                                      (0x1fU 
                                                       & ((1U 
                                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout))
                                                           ? 
                                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout) 
                                                           >> 1U)
                                                           : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_exc_cause_wb1_raw))))) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtval))))) 
                      >> 0x20U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__trace_rv_trace_pkt[3U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__trace_rv_trace_pkt[3U]) 
           | (0x80U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout) 
                         << 7U) | (0x80U & ((- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                                            >> 0xcU))))) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                               << 4U)))) 
                       | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_exc_valid_wb1) 
                          << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
        = (0x7fffffffU & (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                             >> 1U)))) 
                           & ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pceff)) 
                          | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                                   >> 1U)) 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
                             & (IData)((((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren))))) 
                                           >> 0x1fU) 
                                          & ((0x1ffffffffULL 
                                              & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q1pcff__dout))) 
                                             | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q0pcff__dout)) 
                                                >> 0x1fU))) 
                                         | (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                    >> 1U))))) 
                                             >> 0x1fU) 
                                            & ((0x1ffffffffULL 
                                                & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q2pcff__dout))) 
                                               | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q1pcff__dout)) 
                                                  >> 0x1fU)))) 
                                        | (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                   >> 2U))))) 
                                            >> 0x1fU) 
                                           & ((0x1ffffffffULL 
                                               & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q0pcff__dout))) 
                                              | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__q2pcff__dout)) 
                                                 >> 0x1fU))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal 
        = (0x7fffffffU & (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel)))) 
                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pceff) 
                          | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel) 
                                               >> 1U)))) 
                             & ((IData)(1U) + vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pceff))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final 
        = (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1sel)))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff)) 
           | (0xffU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1sel) 
                                         >> 1U)))) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff) 
                          >> 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final 
        = (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel)))) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff)) 
           | (0xffU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel) 
                                         >> 1U)))) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff) 
                          >> 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final 
        = (((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel)))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff) 
           | (0xffffU & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel) 
                                           >> 1U)))) 
                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff 
                            >> 0x10U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write) 
             & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg) 
                      >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
            & (0xf0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen)))
            ? (4U | (0xfffffffbU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_sz 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write) 
             & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg) 
                      >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
            & ((0xfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen)) 
               | (0xf0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen))))
            ? 2U : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int));
    vlTOPp->tb_top__DOT__dma_axi_bvalid = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_valid) 
                                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_write));
    vlTOPp->tb_top__DOT__dma_axi_rvalid = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_valid) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_write)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_lo_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_m) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_hi_m 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_m) 
            & (((1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m 
                       >> 2U)) != (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_m 
                                         >> 2U))) | 
               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                >> 4U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                               >> 8U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_any 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_vld) 
                   >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)) 
                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill) 
                        >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)))) 
                 & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_dma_kill_en))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi)))) 
           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                >> 2U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_hi) 
                                >> 3U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo)))) 
           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[0U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                                >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[1U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                                >> 2U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_match_lo) 
                                >> 3U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[3U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m 
        = (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_m) 
                    << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m 
        = ((0x1fffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                           >> 3U)) == (0x1fffffffU 
                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
                                          >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz 
        = (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                 >> (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                           << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign 
        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign) 
                 >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn 
        = (IData)(((0x3fU >= (0x18U & ((((0U == (0x1fU 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                    << 5U)))
                                          ? 0U : (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                       << 5U))))) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                           (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                                           >> (0x1fU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                  << 5U)))) 
                                       << 3U))) ? (
                                                   (((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo))) 
                                                   >> 
                                                   (0x18U 
                                                    & ((((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                              << 5U)))
                                                          ? 0U
                                                          : 
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                          ((IData)(1U) 
                                                           + 
                                                           (3U 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag)))] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                               << 5U))))) 
                                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                           (3U 
                                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                               << 5U)))) 
                                                       << 3U)))
                    : 0ULL));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
               == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                 >> 5U)))) & (IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                      >> 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                  >> 0xfU)))) & (IData)(
                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                         >> 0x13U))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                  >> 0x19U)))) & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                          >> 0x1dU))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                  >> 0x23U)))) & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                          >> 0x27U))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec)) 
           | ((~ (IData)((0U != (0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage))))) 
              & (5U == (7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec)) 
           | (((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage) 
                                          >> 4U))))) 
               & (5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                               >> 3U)))) << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec)) 
           | (((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage) 
                                          >> 8U))))) 
               & (5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                               >> 6U)))) << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec)) 
           | (((~ (IData)((0U != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rsp_pickage) 
                                          >> 0xcU))))) 
               & (5U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                               >> 9U)))) << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busm_clken 
        = (1U & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_empty_any)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r)) 
                 | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_idle_any 
        = ((~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                      >> 4U))) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                        >> 4U))))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_empty_any));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_valid 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_ready) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_load_any 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any)));
    vlTOPp->tb_top__DOT__lsu_axi_arvalid = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write))) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_nosend))) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    vlTOPp->tb_top__DOT__lsu_axi_wvalid = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    vlTOPp->tb_top__DOT__lsu_axi_awvalid = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)) 
                                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done))) 
                                            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any 
        = (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                    + (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__isdccmst_m) 
                             << ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__isdccmst_m) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_m))))) 
                   + (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__isdccmst_r) 
                            << ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__isdccmst_r) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ldst_dual_r))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r 
        = (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_r) 
                    << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r 
        = (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_r) 
                    << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_r 
        = (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_r) 
                    << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)) 
                   >> 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_r) 
                   << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_ext_r 
        = (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_r) 
                    << (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask 
        = ((0xffffffffffffff00ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask) 
           | (IData)((IData)((0xffU & (- (IData)((1U 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_r))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask 
        = ((0xffffffffffff00ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask) 
           | ((QData)((IData)((0xffU & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_r) 
                                                      >> 1U))))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask 
        = ((0xffffffffff00ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask) 
           | ((QData)((IData)((0xffU & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_r) 
                                                      >> 2U))))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask 
        = ((0xffffffff00ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask) 
           | ((QData)((IData)((0xffU & (- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__store_byteen_r) 
                                                      >> 3U))))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_lo_r) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_single_ecc_error_hi_r)) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
        = ((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout 
                   >> 0x15U) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__r_d_ff__dout))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_data);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0xcU)) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))
            ? ((9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xcU)) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0xffffc0ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | ((0x3000U & ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail))) 
                          << 0xcU)) | ((0xc00U & ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail) 
                                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))))) 
                                                  << 0xaU)) 
                                       | (0x300U & 
                                          ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))) 
                                           << 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_halt_req) 
                  | vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout) 
                 & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                       >> 0x17U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f 
        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xaU) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_halt_req))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt 
        = ((0x43U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt)) 
           | ((0x30U & (((- (IData)((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                   >> 0x25U))))) 
                         & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                    >> 0x32U))) << 4U)) 
              | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_r) 
                  << 3U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_r) 
                            << 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc_r 
        = (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_r))) 
            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout) 
           | ((- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_r))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__core_dbg_cmd_done 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dbg_cmd_done) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_r 
        = ((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r))) 
             & ((1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                               >> 0x38U))) ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_npc_r_ff__dout
                 : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_flush_r_ff__dout)) 
            | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r))) 
               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout)) 
           | ((- (IData)((1U & ((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r)) 
                                & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r)))))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_r_raw 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
            >> 0x10U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r));
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__0__KET____DOT__byp_data_1_ff__dout;
    }
    if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__1__KET____DOT__byp_data_1_ff__dout;
    }
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__2__KET____DOT__byp_data_1_ff__dout;
    }
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__3__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__4__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__5__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__6__KET____DOT__byp_data_1_ff__dout;
    }
    if ((0x80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_fill_data))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)(vlTOPp->tb_top__DOT__ifu_axi_rdata);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (IData)((vlTOPp->tb_top__DOT__ifu_axi_rdata 
                       >> 0x20U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_0_ff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__wr_flop__BRA__7__KET____DOT__byp_data_1_ff__dout;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((((1U 
                                                & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U)))))) 
                                               | (2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                    >> 0x11U))))))) 
                                              | (4U 
                                                 & (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                   >> 0x11U))))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U))))))))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data1_reg);
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0xcU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U)))));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_din 
        = ((0xff000000U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 0x18U)) 
           | (((0x780000U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 0x15U)) << 0x13U)) 
               | ((((0U == (0xffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x1aU)))) 
                    & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                               >> 0x14U))) << 0x12U) 
                  | ((((0U == (0xffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x1aU)))) 
                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x13U))) << 0x11U) 
                     | (0x10000U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x12U)) 
                                    << 0x10U))))) | 
              (0xffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_wren) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0x10U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                   & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                              >> 0x18U))) | (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                               >> 0x15U) 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en)) 
                                             & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                  & (0x39U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0x22U))))) 
                                                 | (0x3cU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                >> 0x22U))))) 
                                                | (0x3dU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))))))
                  ? (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                        & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x18U)))) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw 
        = (0x7fU & ((IData)(1U) + ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_b_enc) 
                                   - (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_a_enc))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new)) 
           | (1U & ((((((((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw)) 
                          | (1U == (0x1fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                               >> 2U)))) 
                         | (1U == (0x7ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                             >> 4U)))) 
                        | (1U == (0x1ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                            >> 6U)))) 
                       | (1U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                          >> 8U)))) 
                      | (1U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                         >> 0xaU)))) 
                     | (1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                     >> 0xcU)))) | 
                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                     >> 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new)) 
           | (2U & (((((((((1U == (0x3fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                              >> 1U))) 
                           | (1U == (0x1fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                                >> 2U)))) 
                          | (1U == (0x3ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                              >> 5U)))) 
                         | (1U == (0x1ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                             >> 6U)))) 
                        | (1U == (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                           >> 9U)))) 
                       | (1U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                          >> 0xaU)))) 
                      | (1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                      >> 0xdU)))) << 1U) 
                    | (0x7fffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                   >> 0xdU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new)) 
           | (4U & (((((((((1U == (0xfffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                             >> 3U))) 
                           | (1U == (0x7ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                               >> 4U)))) 
                          | (1U == (0x3ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                              >> 5U)))) 
                         | (1U == (0x1ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                             >> 6U)))) 
                        | (1U == (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                          >> 0xbU)))) 
                       | (1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                       >> 0xcU)))) 
                      | (1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                      >> 0xdU)))) << 2U) 
                    | (0xffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                   >> 0xcU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new)) 
           | (8U & (((((((((1U == (0xffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                            >> 7U))) 
                           | (1U == (0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                              >> 8U)))) 
                          | (1U == (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                             >> 9U)))) 
                         | (1U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                            >> 0xaU)))) 
                        | (1U == (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                          >> 0xbU)))) 
                       | (1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                       >> 0xcU)))) 
                      | (1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                      >> 0xdU)))) << 3U) 
                    | (0x1ffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_raw) 
                                    >> 0xbU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out 
        = ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__i_twos_comp__DOT__dout_temp 
            << 1U) | (1U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_in));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren)) 
           | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren_last) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wren_reset_miss))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_tag_wren)) 
           | (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren_last) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__wren_reset_miss))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr 
        = ((((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes)) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_q 
        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rvalid_ff) 
              & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
            & (~ (IData)((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rresp_ff))))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes));
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rid_ff))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[0U] 
            = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[1U] 
            = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                       >> 0x20U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[2U] 
            = ((0xffffff80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff) 
                               << 7U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[3U] 
            = ((0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff) 
                         >> 0x19U)) | (0xffffff80U 
                                       & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff 
                                                   >> 0x20U)) 
                                          << 7U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[4U] 
            = ((0xffffff80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_ecc) 
                               << 7U)) | (0x7fU & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff 
                                                            >> 0x20U)) 
                                                   >> 0x19U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[0U] 
            = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[1U] 
            = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_bus_rdata_ff 
                       >> 0x20U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[2U] 
            = ((0xffffff80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half) 
                               << 7U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_ecc));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[3U] 
            = ((0x7fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half) 
                         >> 0x19U)) | (0xffffff80U 
                                       & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                   >> 0x20U)) 
                                          << 7U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[4U] 
            = ((0xffffff80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_miss_buff_ecc) 
                               << 7U)) | (0x7fU & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_buff_half 
                                                            >> 0x20U)) 
                                                   >> 0x19U)));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__din_plus_parity 
        = (((QData)((IData)(((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                             << 0x19U)) 
                             | ((0x7e000000U & ((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 << 0x1fU) 
                                                | (0x7e000000U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                      >> 1U)))) 
                                | ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                  << 0x13U)) 
                                   | ((0xfffe00U & 
                                       ((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                         << 0x1eU) 
                                        | (0x3ffffe00U 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                              >> 2U)))) 
                                      | ((0x100U & 
                                          (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                           << 4U)) 
                                         | ((0xfeU 
                                             & ((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 << 0x1dU) 
                                                | (0x1ffffffeU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                      >> 3U)))) 
                                            | (1U & 
                                               (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                >> 3U)))))))))) 
            << 7U) | (QData)((IData)(((0x70U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                << 3U)) 
                                      | ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                << 1U)) 
                                         | ((4U & (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                   << 2U)) 
                                            | (3U & 
                                               vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U])))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__din_plus_parity 
        = (((QData)((IData)(((0x80000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                             << 0x12U)) 
                             | ((0x7e000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                << 0x18U)) 
                                | ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                  << 0xcU)) 
                                   | ((0xfffe00U & 
                                       ((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                         << 0x17U) 
                                        | (0x7ffe00U 
                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                              >> 9U)))) 
                                      | ((0x100U & 
                                          (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                           >> 3U)) 
                                         | ((0xfeU 
                                             & ((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                 << 0x16U) 
                                                | (0x3ffffeU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                      >> 0xaU)))) 
                                            | (1U & 
                                               (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                >> 0xaU)))))))))) 
            << 7U) | (QData)((IData)(((0x70U & ((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                 << 0x1cU) 
                                                | (0xffffff0U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                      >> 4U)))) 
                                      | ((8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                >> 6U)) 
                                         | ((4U & (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                   >> 5U)) 
                                            | (3U & 
                                               (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                >> 7U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (1U & ((((((((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                     ^ vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U]) 
                                    ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 1U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                  >> 3U)) 
                                  ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                     >> 4U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                >> 6U)) 
                                ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                   >> 8U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                              >> 0xaU)) 
                              ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                 >> 0xbU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                              >> 0xdU)) 
                            ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                               >> 0xfU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                            >> 0x11U)) 
                          ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                             >> 0x13U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                           >> 0x15U)) 
                        ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                           >> 0x17U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                         >> 0x19U)) 
                      ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                         >> 0x1aU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 0x1cU)) ^ 
                    (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                     >> 0x1eU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (2U & (((((((((((((((((((0xfffffffeU & 
                                      vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U]) 
                                     ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                        << 1U)) ^ (0x7ffffffeU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                      >> 1U))) 
                                   ^ (0x3ffffffeU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 2U))) ^ (0xffffffeU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                      >> 4U))) 
                                 ^ (0x7fffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                  >> 5U))) 
                                ^ (0xfffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                >> 8U))) 
                               ^ (0x7ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                               >> 9U))) 
                              ^ (0x1ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                              >> 0xbU))) 
                             ^ (0xffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                            >> 0xcU))) 
                            ^ (0x1fffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                           >> 0xfU))) 
                           ^ (0xfffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                         >> 0x10U))) 
                          ^ (0x1ffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                        >> 0x13U))) 
                         ^ (0xffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                      >> 0x14U))) ^ 
                        (0x1feU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                   >> 0x17U))) ^ (0xfeU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                     >> 0x18U))) 
                      ^ (0x3eU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                  >> 0x1aU))) ^ (0x1eU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                    >> 0x1bU))) 
                    ^ (2U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                             >> 0x1eU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (4U & (((((((((((((((((((0xfffffffcU & 
                                      vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U]) 
                                     ^ (0xfffffffcU 
                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                           << 1U))) 
                                    ^ (0xfffffffcU 
                                       & vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U])) 
                                   ^ (0x7ffffffcU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 1U))) ^ (0x7fffffcU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                      >> 5U))) 
                                 ^ (0x3fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                  >> 6U))) 
                                ^ (0x1fffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                 >> 7U))) 
                               ^ (0xfffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                               >> 8U))) 
                              ^ (0xffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                             >> 0xcU))) 
                             ^ (0x7fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                            >> 0xdU))) 
                            ^ (0x3fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                           >> 0xeU))) 
                           ^ (0x1fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                          >> 0xfU))) 
                          ^ (0xffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 0x14U))) 
                         ^ (0x7fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                      >> 0x15U))) ^ 
                        (0x3fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                   >> 0x16U))) ^ (0x1fcU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                     >> 0x17U))) 
                      ^ (0x1cU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                  >> 0x1bU))) ^ (0xcU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                    >> 0x1cU))) 
                    ^ (4U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                             >> 0x1dU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x77U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (8U & ((((((((((((((((0xfffffff8U & vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U]) 
                                  ^ (0x7ffffff8U & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                      >> 1U))) ^ (0x3ffffff8U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                     >> 2U))) 
                                ^ (0x1ffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                  >> 3U))) 
                               ^ (0xffffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                >> 4U))) 
                              ^ (0x7fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                               >> 5U))) 
                             ^ (0x3fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                              >> 6U))) 
                            ^ (0x1fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                             >> 7U))) 
                           ^ (0x1fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                          >> 0xfU))) 
                          ^ (0xfff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                        >> 0x10U))) 
                         ^ (0x7ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 0x11U))) 
                        ^ (0x3ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                      >> 0x12U))) ^ 
                       (0x1ff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                   >> 0x13U))) ^ (0xff8U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                     >> 0x14U))) 
                     ^ (0x7f8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                  >> 0x15U))) ^ (0x3f8U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                    >> 0x16U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x6fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x10U & ((((((((((((((((0xfffffff0U & 
                                      vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U]) 
                                     ^ (0x1fffff0U 
                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                           >> 7U))) 
                                    ^ (0xfffff0U & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                        >> 8U))) ^ 
                                   (0x7ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                 >> 9U))) 
                                  ^ (0x3ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                  >> 0xaU))) 
                                 ^ (0x1ffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                 >> 0xbU))) 
                                ^ (0xffff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                               >> 0xcU))) 
                               ^ (0x7fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                              >> 0xdU))) 
                              ^ (0x3fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                             >> 0xeU))) 
                             ^ (0x1fff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                            >> 0xfU))) 
                            ^ (0xfff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                          >> 0x10U))) 
                           ^ (0x7ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                         >> 0x11U))) 
                          ^ (0x3ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                        >> 0x12U))) 
                         ^ (0x1ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 0x13U))) 
                        ^ (0xff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                     >> 0x14U))) ^ 
                       (0x7f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                  >> 0x15U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x5fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x20U & (((((((0xffffffe0U & vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U]) 
                            ^ (0x7e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                         >> 0x15U))) 
                           ^ (0x3e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                        >> 0x16U))) 
                          ^ (0x1e0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                       >> 0x17U))) 
                         ^ (0xe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                     >> 0x18U))) ^ 
                        (0x60U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                  >> 0x19U))) ^ (0x20U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U] 
                                                    >> 0x1aU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x40U & ((VL_REDXOR_32(vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[0U]) 
                        ^ VL_REDXOR_32((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U]))) 
                       << 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (1U & (((((((((((((((((((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                      ^ vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U]) 
                                     >> 7U) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                               >> 8U)) 
                                   ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                      >> 0xaU)) ^ (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                   >> 0xbU)) 
                                 ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                    >> 0xdU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 >> 0xfU)) 
                               ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                  >> 0x11U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                >> 0x12U)) 
                             ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                >> 0x14U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                              >> 0x16U)) 
                           ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                              >> 0x18U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                            >> 0x1aU)) 
                         ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                            >> 0x1cU)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                          >> 0x1eU)) 
                       ^ vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U]) 
                      ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                         >> 1U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                    >> 3U)) ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                               >> 5U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (2U & (((((((((((((((((((0x1fffffeU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                       >> 7U)) ^ (0x3fffffeU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                     >> 6U))) 
                                    ^ (0xfffffeU & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                        >> 8U))) ^ 
                                   (0x7ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 >> 9U))) 
                                  ^ (0x1ffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                  >> 0xbU))) 
                                 ^ (0xffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                >> 0xcU))) 
                                ^ (0x1fffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                               >> 0xfU))) 
                               ^ (0xfffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                             >> 0x10U))) 
                              ^ (0x3ffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                            >> 0x12U))) 
                             ^ (0x1ffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                           >> 0x13U))) 
                            ^ (0x3feU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                         >> 0x16U))) 
                           ^ (0x1feU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                        >> 0x17U))) 
                          ^ (0x3eU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                      >> 0x1aU))) ^ 
                         (0x1eU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                   >> 0x1bU))) ^ (2U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                     >> 0x1eU))) 
                       ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                          << 1U)) ^ (0x7ffffffeU & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                      >> 1U))) ^ (0x3ffffffeU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                     >> 2U))) 
                    ^ (0x7fffffeU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                     >> 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (4U & (((((((((((((((((((0x1fffffcU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                       >> 7U)) ^ (0x3fffffcU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                     >> 6U))) 
                                    ^ (0x1fffffcU & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                        >> 7U))) ^ 
                                   (0xfffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 >> 8U))) 
                                  ^ (0xffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 >> 0xcU))) 
                                 ^ (0x7fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                >> 0xdU))) 
                                ^ (0x3fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                               >> 0xeU))) 
                               ^ (0x1fffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                              >> 0xfU))) 
                              ^ (0x1ffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                            >> 0x13U))) 
                             ^ (0xffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                          >> 0x14U))) 
                            ^ (0x7fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                         >> 0x15U))) 
                           ^ (0x3fcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                        >> 0x16U))) 
                          ^ (0x1cU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                      >> 0x1bU))) ^ 
                         (0xcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                  >> 0x1cU))) ^ (4U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                    >> 0x1dU))) 
                       ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                          << 2U)) ^ (0x3ffffffcU & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                      >> 2U))) ^ (0x1ffffffcU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                     >> 3U))) 
                    ^ (0xffffffcU & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                     >> 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x77U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (8U & ((((((((((((((((0x1fffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                 >> 7U)) 
                                  ^ (0xfffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                  >> 8U))) 
                                 ^ (0x7ffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 >> 9U))) 
                                ^ (0x3ffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                >> 0xaU))) 
                               ^ (0x1ffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                               >> 0xbU))) 
                              ^ (0xffff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                             >> 0xcU))) 
                             ^ (0x7fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                            >> 0xdU))) 
                            ^ (0x3fff8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                           >> 0xeU))) 
                           ^ (0x3f8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                        >> 0x16U))) 
                          ^ (0x1f8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                       >> 0x17U))) 
                         ^ (0xf8U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                     >> 0x18U))) ^ 
                        (0x78U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                  >> 0x19U))) ^ (0x38U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                    >> 0x1aU))) 
                      ^ (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                  >> 0x1bU))) ^ (8U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                    >> 0x1cU))) 
                    ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                       << 3U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x6fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x10U & ((((((((((((((((0x1fffff0U & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                       >> 7U)) ^ (0x3fff0U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                     >> 0xeU))) 
                                    ^ (0x1fff0U & (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                   >> 0xfU))) 
                                   ^ (0xfff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                 >> 0x10U))) 
                                  ^ (0x7ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                >> 0x11U))) 
                                 ^ (0x3ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                               >> 0x12U))) 
                                ^ (0x1ff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                              >> 0x13U))) 
                               ^ (0xff0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                            >> 0x14U))) 
                              ^ (0x7f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                           >> 0x15U))) 
                             ^ (0x3f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                          >> 0x16U))) 
                            ^ (0x1f0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                         >> 0x17U))) 
                           ^ (0xf0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                       >> 0x18U))) 
                          ^ (0x70U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                      >> 0x19U))) ^ 
                         (0x30U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                   >> 0x1aU))) ^ (0x10U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                                     >> 0x1bU))) 
                       ^ (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                          << 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x5fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x20U & (((((((0x1ffffe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                           >> 7U)) 
                            ^ (0xffffffe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                              << 4U))) 
                           ^ (0xffffffe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                             << 3U))) 
                          ^ (0xffffffe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                            << 2U))) 
                         ^ (0xffffffe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                           << 1U))) 
                        ^ (0xffffffe0U & vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U])) 
                       ^ (0x7fffffe0U & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                         >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x40U & ((VL_REDXOR_32(((vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                       << 0x19U) | 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[1U] 
                                       >> 7U))) ^ VL_REDXOR_32(
                                                               (0x7fU 
                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__iccm_rd_data_ecc[2U] 
                                                                   >> 7U)))) 
                       << 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U] = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
        = ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                >> 5U))))) & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
        = ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                >> 5U))))) & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U] 
        = (0x7fU & ((- (IData)((1U & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                         >> 5U))))) 
                    & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U]) 
           | vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
             << 0x19U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                          >> 7U)) | ((- (IData)((1U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                    >> 5U)))) 
                                     & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
             << 0x19U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
                          >> 7U)) | ((- (IData)((1U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                    >> 5U)))) 
                                     & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
        = (0x7fU & (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                      << 0x19U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
                                   >> 7U)) | ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                             >> 5U)))) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U])));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U]) 
           | (0xffffff80U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                             << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
        = ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                     >> 0x19U)) | (0xffffff80U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                                                  << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U]) 
           | ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                        >> 0x19U)) | (0xffffff80U & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
                                       << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U] 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                >> 5U)))) & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
                                              << 0x19U) 
                                             | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
                                                >> 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] 
           | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                >> 5U)))) & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                                              << 0x19U) 
                                             | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
                                                >> 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U] 
        = (0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                    | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                         >> 5U)))) 
                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                           << 0x19U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                                        >> 7U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U]) 
           | vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U]);
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
             << 0x19U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                          >> 7U)) | ((- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                     >> 5U))))) 
                                     & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
                                         << 0x19U) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
                                           >> 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
             << 0x19U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
                          >> 7U)) | ((- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                     >> 5U))))) 
                                     & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                                         << 0x19U) 
                                        | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
                                           >> 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
        = (0x7fU & (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                      << 0x19U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
                                   >> 7U)) | ((- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                              >> 5U))))) 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                                  << 0x19U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                                                    >> 7U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U]) 
           | (0xffffff80U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                             << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
        = ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                     >> 0x19U)) | (0xffffff80U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                                                  << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
        = ((0xffffc000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U]) 
           | ((0x7fU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                        >> 0x19U)) | (0xffffff80U & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
                                       << 7U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
                          >> 0xeU)) | ((- (IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 5U))))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                           << 0x12U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                                             >> 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                          >> 0xeU)) | ((- (IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 5U))))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                                           << 0x12U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                             >> 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U] 
        = (0x7fU & (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                      << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                   >> 0xeU)) | ((- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                                >> 5U))))) 
                                                & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                                                      >> 0xeU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U]) 
           | (0xffffc000U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
                             << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
        = ((0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
                       >> 0x12U)) | (0xffffc000U & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
        = ((0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U]) 
           | ((0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
                          >> 0x12U)) | (0xffffc000U 
                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U] 
                                           << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
             << 0xbU) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                         >> 0x15U)) | ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                      >> 5U)))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                           << 0x12U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                                             >> 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U] 
             << 0xbU) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                         >> 0x15U)) | ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                      >> 5U)))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                                           << 0x12U) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                             >> 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
        = (0x7fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U] 
                     >> 0x15U) | ((- (IData)((1U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                               >> 5U)))) 
                                  & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                                      << 0x12U) | (
                                                   vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                                                   >> 0xeU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U]) 
           | (0xffe00000U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                             << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
        = ((0x1fffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                         >> 0xbU)) | (0xffe00000U & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U] 
        = ((0x1fffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                         >> 0xbU)) | (0xffe00000U & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
                          >> 0xeU)) | ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                      >> 5U)))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                                           << 0xbU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                                             >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
             << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                          >> 0xeU)) | ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                      >> 5U)))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                                           << 0xbU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                                             >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U] 
        = (0x7fU & (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                      << 0x12U) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                   >> 0xeU)) | ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                               >> 5U)))) 
                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                                                   >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U] 
        = ((0x3fffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U]) 
           | (0xffffc000U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
                             << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
        = ((0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[0U] 
                       >> 0x12U)) | (0xffffc000U & 
                                     (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
                                      << 0xeU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
        = ((0xffe00000U & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U]) 
           | ((0x3fffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[1U] 
                          >> 0x12U)) | (0xffffc000U 
                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound2[2U] 
                                           << 0xeU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
             << 0xbU) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                         >> 0x15U)) | ((- (IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 5U))))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                                           << 0xbU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                                             >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
        = (((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U] 
             << 0xbU) | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                         >> 0x15U)) | ((- (IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 5U))))) 
                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                                           << 0xbU) 
                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                                             >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
        = (0x7fU & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U] 
                     >> 0x15U) | ((- (IData)((1U & 
                                              (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                  >> 5U))))) 
                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                                     >> 0x15U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
        = ((0x1fffffU & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U]) 
           | (0xffe00000U & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                             << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
        = ((0x1fffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[0U] 
                         >> 0xbU)) | (0xffe00000U & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U] 
        = ((0x1fffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[1U] 
                         >> 0xbU)) | (0xffe00000U & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vlvbound3[2U] 
                                       << 0x15U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__ictag_debug_rd_data 
        = (0x3ffffffU & ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff)))) 
                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw)));
    vlTOPp->tb_top__DOT__rvtop__DOT__ictag_debug_rd_data 
        = (0x3ffffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__ictag_debug_rd_data 
                         | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                              >> 1U)))) 
                            & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                       >> 0x1aU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (1U & (((((((((((((0x1fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                 >> 0x15U))) 
                               ^ (0x1fffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw))) 
                              ^ (0xfffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                             >> 1U))) 
                             ^ (0x3ffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                            >> 3U))) 
                            ^ (0x1ffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                           >> 4U))) 
                           ^ (0x7fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                         >> 6U))) ^ 
                          (0x1fffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                      >> 8U))) ^ (0x7ffU 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                     >> 0xaU))) 
                        ^ (0x3ffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                     >> 0xbU))) ^ (0xffU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                      >> 0xdU))) 
                      ^ (0x3fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                  >> 0xfU))) ^ (0xfU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                   >> 0x11U))) 
                    ^ (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                             >> 0x13U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (2U & (((((((((((((0x1eU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                 >> 0x15U))) 
                               ^ (0x3ffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                               << 1U))) 
                              ^ (0xffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                             >> 1U))) 
                             ^ (0x7fffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                            >> 2U))) 
                            ^ (0x1fffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                           >> 4U))) 
                           ^ (0xfffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                         >> 5U))) ^ 
                          (0x1ffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                      >> 8U))) ^ (0xffeU 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                     >> 9U))) 
                        ^ (0x3feU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                     >> 0xbU))) ^ (0x1feU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                      >> 0xcU))) 
                      ^ (0x3eU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                  >> 0xfU))) ^ (0x1eU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                   >> 0x10U))) 
                    ^ (2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                             >> 0x13U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (4U & ((((((((((((0x1cU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                >> 0x15U))) 
                              ^ (0x3ffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                              << 1U))) 
                             ^ (0x1ffffcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw))) 
                            ^ (0xffffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                           >> 1U))) 
                           ^ (0xfffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                         >> 5U))) ^ 
                          (0x7ffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                      >> 6U))) ^ (0x3ffcU 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                     >> 7U))) 
                        ^ (0x1ffcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                      >> 8U))) ^ (0x1fcU 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                     >> 0xcU))) 
                      ^ (0xfcU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                  >> 0xdU))) ^ (0x7cU 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                   >> 0xeU))) 
                    ^ (0x3cU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                >> 0xfU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x77U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (8U & (((((((((((0x18U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                               >> 0x15U))) 
                             ^ (0xffff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                            >> 1U))) 
                            ^ (0x7fff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                           >> 2U))) 
                           ^ (0x3fff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                          >> 3U))) 
                          ^ (0x1fff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                         >> 4U))) ^ 
                         (0xfff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                     >> 5U))) ^ (0x7ff8U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                    >> 6U))) 
                       ^ (0x3ff8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                     >> 7U))) ^ (0x38U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                    >> 0xfU))) 
                     ^ (0x18U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                 >> 0x10U))) ^ (8U 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                   >> 0x11U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x6fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x10U & (((((((((((0x10U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                  >> 0x15U))) 
                                ^ (0x3ff0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                              >> 7U))) 
                               ^ (0x1ff0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                             >> 8U))) 
                              ^ (0xff0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                           >> 9U))) 
                             ^ (0x7f0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                          >> 0xaU))) 
                            ^ (0x3f0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                         >> 0xbU))) 
                           ^ (0x1f0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                        >> 0xcU))) 
                          ^ (0xf0U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                      >> 0xdU))) ^ 
                         (0x70U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                   >> 0xeU))) ^ (0x30U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                                    >> 0xfU))) 
                       ^ (0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw) 
                                   >> 0x10U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check 
        = (0x5fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (1U & (((((((((((((0x1fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                 >> 0x2fU))) 
                               ^ (0x1fffffU & (IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                       >> 0x1aU)))) 
                              ^ (0xfffffU & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                      >> 0x1aU)) 
                                             >> 1U))) 
                             ^ (0x3ffffU & ((IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                     >> 0x1aU)) 
                                            >> 3U))) 
                            ^ (0x1ffffU & ((IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                    >> 0x1aU)) 
                                           >> 4U))) 
                           ^ (0x7fffU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                  >> 0x1aU)) 
                                         >> 6U))) ^ 
                          (0x1fffU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                               >> 0x1aU)) 
                                      >> 8U))) ^ (0x7ffU 
                                                  & ((IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                              >> 0x1aU)) 
                                                     >> 0xaU))) 
                        ^ (0x3ffU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                              >> 0x1aU)) 
                                     >> 0xbU))) ^ (0xffU 
                                                   & ((IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                               >> 0x1aU)) 
                                                      >> 0xdU))) 
                      ^ (0x3fU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                           >> 0x1aU)) 
                                  >> 0xfU))) ^ (0xfU 
                                                & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                            >> 0x1aU)) 
                                                   >> 0x11U))) 
                    ^ (3U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                      >> 0x1aU)) >> 0x13U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (2U & (((((((((((((0x1eU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                 >> 0x2fU))) 
                               ^ (0x3ffffeU & ((IData)(
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                        >> 0x1aU)) 
                                               << 1U))) 
                              ^ (0xffffeU & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                      >> 0x1aU)) 
                                             >> 1U))) 
                             ^ (0x7fffeU & ((IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                     >> 0x1aU)) 
                                            >> 2U))) 
                            ^ (0x1fffeU & ((IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                    >> 0x1aU)) 
                                           >> 4U))) 
                           ^ (0xfffeU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                  >> 0x1aU)) 
                                         >> 5U))) ^ 
                          (0x1ffeU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                               >> 0x1aU)) 
                                      >> 8U))) ^ (0xffeU 
                                                  & ((IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                              >> 0x1aU)) 
                                                     >> 9U))) 
                        ^ (0x3feU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                              >> 0x1aU)) 
                                     >> 0xbU))) ^ (0x1feU 
                                                   & ((IData)(
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                               >> 0x1aU)) 
                                                      >> 0xcU))) 
                      ^ (0x3eU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                           >> 0x1aU)) 
                                  >> 0xfU))) ^ (0x1eU 
                                                & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                            >> 0x1aU)) 
                                                   >> 0x10U))) 
                    ^ (2U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                      >> 0x1aU)) >> 0x13U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x7bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (4U & ((((((((((((0x1cU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                >> 0x2fU))) 
                              ^ (0x3ffffcU & ((IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                       >> 0x1aU)) 
                                              << 1U))) 
                             ^ (0x1ffffcU & (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                     >> 0x1aU)))) 
                            ^ (0xffffcU & ((IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                    >> 0x1aU)) 
                                           >> 1U))) 
                           ^ (0xfffcU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                  >> 0x1aU)) 
                                         >> 5U))) ^ 
                          (0x7ffcU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                               >> 0x1aU)) 
                                      >> 6U))) ^ (0x3ffcU 
                                                  & ((IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                              >> 0x1aU)) 
                                                     >> 7U))) 
                        ^ (0x1ffcU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                               >> 0x1aU)) 
                                      >> 8U))) ^ (0x1fcU 
                                                  & ((IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                              >> 0x1aU)) 
                                                     >> 0xcU))) 
                      ^ (0xfcU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                           >> 0x1aU)) 
                                  >> 0xdU))) ^ (0x7cU 
                                                & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                            >> 0x1aU)) 
                                                   >> 0xeU))) 
                    ^ (0x3cU & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                         >> 0x1aU)) 
                                >> 0xfU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x77U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (8U & (((((((((((0x18U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                               >> 0x2fU))) 
                             ^ (0xffff8U & ((IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                     >> 0x1aU)) 
                                            >> 1U))) 
                            ^ (0x7fff8U & ((IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                    >> 0x1aU)) 
                                           >> 2U))) 
                           ^ (0x3fff8U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                   >> 0x1aU)) 
                                          >> 3U))) 
                          ^ (0x1fff8U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                  >> 0x1aU)) 
                                         >> 4U))) ^ 
                         (0xfff8U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                              >> 0x1aU)) 
                                     >> 5U))) ^ (0x7ff8U 
                                                 & ((IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                             >> 0x1aU)) 
                                                    >> 6U))) 
                       ^ (0x3ff8U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                              >> 0x1aU)) 
                                     >> 7U))) ^ (0x38U 
                                                 & ((IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                             >> 0x1aU)) 
                                                    >> 0xfU))) 
                     ^ (0x18U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                          >> 0x1aU)) 
                                 >> 0x10U))) ^ (8U 
                                                & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                            >> 0x1aU)) 
                                                   >> 0x11U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = ((0x6fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check)) 
           | (0x10U & (((((((((((0x10U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                  >> 0x2fU))) 
                                ^ (0x3ff0U & ((IData)(
                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                       >> 0x1aU)) 
                                              >> 7U))) 
                               ^ (0x1ff0U & ((IData)(
                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                      >> 0x1aU)) 
                                             >> 8U))) 
                              ^ (0xff0U & ((IData)(
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                    >> 0x1aU)) 
                                           >> 9U))) 
                             ^ (0x7f0U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                   >> 0x1aU)) 
                                          >> 0xaU))) 
                            ^ (0x3f0U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                  >> 0x1aU)) 
                                         >> 0xbU))) 
                           ^ (0x1f0U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                 >> 0x1aU)) 
                                        >> 0xcU))) 
                          ^ (0xf0U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                               >> 0x1aU)) 
                                      >> 0xdU))) ^ 
                         (0x70U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                            >> 0x1aU)) 
                                   >> 0xeU))) ^ (0x30U 
                                                 & ((IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                             >> 0x1aU)) 
                                                    >> 0xfU))) 
                       ^ (0x10U & ((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                            >> 0x1aU)) 
                                   >> 0x10U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check 
        = (0x5fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
        = ((0xfffffff80000ULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout) 
           | (IData)((IData)((0x7ffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
        = ((0xffffff07ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout) 
           | ((QData)((IData)((0x1fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                >> 0x15U))))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
        = ((0xf80000ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout) 
           | ((QData)((IData)((0x7ffffU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                   >> 0x1aU))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
        = ((0x7ffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout) 
           | ((QData)((IData)((0x1fU & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw 
                                                >> 0x2fU))))) 
              << 0x2bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error 
        = ((((((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                  >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                       >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
             & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg) 
                      >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
            & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error))) 
           & ((((((((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int)) 
                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int) 
                   | ((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int)) 
                      & (0U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int)))) 
                  | ((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int)) 
                     & (0U != (7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int)))) 
                 | ((0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                            >> 0x10U))) 
                    & (~ ((2U == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int))) 
                          | (3U == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int))))))) 
                | (((0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                            >> 0x10U))) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write)) 
                   & (~ ((2U == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int))) 
                         | (3U == (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int))))))) 
               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write) 
                   & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int))) 
                  & (0xfU != (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen) 
                                      >> (7U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int)))))) 
              | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_write) 
                  & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_sz_int))) 
                 & (~ (((0xfU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen)) 
                        | (0xf0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen))) 
                       | (0xffU == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_byteen)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffffeULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | (IData)((IData)((1U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffffdULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((2U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffffbULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((3U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffff7ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((4U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffffefULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((5U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffffdfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((6U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffffbfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((7U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffff7fULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((8U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffeffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((9U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffdffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0xaU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffbffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0xbU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffff7ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0xcU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffefffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0xdU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffdfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0xeU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffbfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0xfU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffff7fffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x10U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffeffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x11U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffdffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x12U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffbffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x13U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffff7ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x14U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffefffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x15U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffdfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x16U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffbfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x17U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fff7fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x18U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffeffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x19U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffdffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x1aU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffbffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x1bU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ff7ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x1cU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fefffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x1dU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fdfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x1eU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fbfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x1fU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7f7fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x20U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7effffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x21U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7dffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x22U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7bffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x23U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x22U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x77ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x24U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x23U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x6fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x25U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x24U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x5fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x26U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x25U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x3fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x27U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x26U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffffeULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | (IData)((IData)((1U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffffdULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((2U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffffbULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((3U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffff7ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((4U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffffefULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((5U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffffdfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((6U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffffbfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((7U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffff7fULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((8U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffeffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((9U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffdffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0xaU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffbffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0xbU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffff7ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0xcU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffefffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0xdU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffdfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0xeU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffbfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0xfU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffff7fffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x10U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffeffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x11U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffdffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x12U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffbffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x13U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffff7ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x14U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffefffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x15U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffdfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x16U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffbfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x17U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fff7fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x18U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffeffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x19U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffdffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x1aU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffbffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x1bU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ff7ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x1cU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fefffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x1dU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fdfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x1eU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fbfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x1fU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7f7fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x20U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7effffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x21U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7dffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x22U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7bffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x23U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x22U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x77ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x24U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x23U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x6fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x25U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x24U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x5fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x26U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x25U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x3fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x27U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x26U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_out 
        = (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_part_out);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_out 
        = (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_out 
           | (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_part_out 
                      >> 0x20U)));
    VL_EXTEND_WW(136,128, __Vtemp274, vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_w_prior_en);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
        = __Vtemp274[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
        = __Vtemp274[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
        = __Vtemp274[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
        = __Vtemp274[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
        = ((0xffffff00U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U]) 
           | __Vtemp274[4U]);
    vlTOPp->tb_top__DOT__dma_axi_arready = (1U & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vld) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_cmd_sent)))));
    vlTOPp->tb_top__DOT__dma_axi_wready = (1U & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vld) 
                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_cmd_sent)))));
    vlTOPp->tb_top__DOT__dma_axi_awready = (1U & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_vld) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_cmd_sent)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
        = ((((0xffULL & ((- (QData)((IData)((0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                         & ((0x3fU >= (0x38U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                << 3U)))
                             ? (vlTOPp->tb_top__DOT__sb_axi_rdata 
                                >> (0x38U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                             << 3U)))
                             : 0ULL))) | (0xffffULL 
                                          & ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & ((0x3fU 
                                                 >= 
                                                 (0x30U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 ? 
                                                (vlTOPp->tb_top__DOT__sb_axi_rdata 
                                                 >> 
                                                 (0x30U 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 : 0ULL)))) 
            | (0xffffffffULL & ((- (QData)((IData)(
                                                   (2U 
                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                & ((0x3fU >= (0x20U 
                                              & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                 << 3U)))
                                    ? (vlTOPp->tb_top__DOT__sb_axi_rdata 
                                       >> (0x20U & 
                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                            << 3U)))
                                    : 0ULL)))) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                  & vlTOPp->tb_top__DOT__sb_axi_rdata));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
            ? ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                ? 0U : ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                         ? 0U : ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                  ? 0U : 9U))) : ((4U 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 8U
                                                     : 
                                                    (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_data))
                                                      ? 8U
                                                      : 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_data)
                                                       ? 5U
                                                       : 6U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 4U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 3U)
                                                     : 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbdata0wr_access)
                                                      ? 2U
                                                      : 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en = 1U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = vlTOPp->tb_top__DOT__sb_axi_bvalid;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_rsp_error));
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = vlTOPp->tb_top__DOT__sb_axi_rvalid;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_rsp_error));
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_data;
                }
            } else {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                    = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                        ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_addr)
                        : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_data)));
            }
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_read;
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                }
            } else {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbdata0wr_access) 
                              | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en) 
                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                                  & (0x3cU == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U))))) 
                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0xfU))) | ((
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_reg_en) 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                                   & (0x39U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                  >> 0x22U))))) 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                     >> 0x14U))) 
                            & (~ (IData)((0U != (7U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                    >> 0xcU)))))) 
                           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                 >> 0x16U)));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren 
                        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                           & (0U != (7U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0xeU)))));
                }
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_byteen_in 
        = ((- (IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid))))) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_addr;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = (3U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x14U));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel)
                ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addr
                : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addr);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_sz)
                : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_sz));
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                     >> 1U))) & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                << 1U) | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type)))) 
              & ((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                << 2U) | (0xfffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 2U) & 
                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 1U)))) 
              & ((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                << 3U) | (0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 3U) & 
                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 2U)))) 
              & ((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                << 4U) | (0xfffffff0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 4U) & 
                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 3U)))) 
              & ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 4U)));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x10U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid 
            = ((2U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type)) 
               & 1U);
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid = 0U;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc 
        = ((0x3f80U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)) 
           | ((0x40U & ((VL_REDXOR_32((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata)) 
                         ^ VL_REDXOR_32((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp))) 
                        << 6U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode0__DOT__ecc_out_temp)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc 
        = ((0x7fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__dma_mem_ecc)) 
           | ((0x2000U & ((VL_REDXOR_32((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                                                 >> 0x20U))) 
                           ^ VL_REDXOR_32((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp))) 
                          << 0xdU)) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__iccm_ecc_encode1__DOT__ecc_out_temp) 
                                       << 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__traceskidff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__traceskidff__din) 
                   ^ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout)))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__traceskidff__din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__traceskidff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1hist1 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 0xcU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                                     >> 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1hist0 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 0xbU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                                     >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pc4 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 0xaU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                                     >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1way 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 9U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                                   >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1brend 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                                   >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1ret 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 7U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1dbecc 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 0xeU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                                     >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1icaf 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                  >> 0xdU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1final) 
                                     >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0hist1 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 0xcU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                                     >> 5U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0hist0 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 0xbU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                                     >> 4U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pc4 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 0xaU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                                     >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0way 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 9U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                                   >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0brend 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 8U)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                                   >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0ret 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 7U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0dbecc 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 0xeU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                                     >> 7U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0icaf 
        = ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                  >> 0xdU)) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0final) 
                                     >> 6U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((0xffff0000U & ((((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1sel)))) 
                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff) 
                                  << 0x10U) | (0xffff0000U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1sel) 
                                                                  >> 1U)))) 
                                                   << 0x10U) 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff)))) 
                 | (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0final))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wdata_hi 
        = (IData)(((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                    >> (0x38U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr 
                                 << 3U))) >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_dccm_wdata_lo 
        = (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_wdata 
                   >> (0x38U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_mem_addr 
                                << 3U))));
    vlTOPp->tb_top__DOT__lsu_axi_bvalid = ((IData)(vlTOPp->tb_top__DOT__lmem_axi_bvalid) 
                                           | (IData)(vlTOPp->tb_top__DOT__dma_axi_bvalid));
    vlTOPp->tb_top__DOT__bridge__DOT__bresp_select 
        = ((IData)(vlTOPp->tb_top__DOT__dma_axi_bvalid) 
           & (~ (IData)(vlTOPp->tb_top__DOT__lmem_axi_bvalid)));
    vlTOPp->tb_top__DOT__lsu_axi_rvalid = ((IData)(vlTOPp->tb_top__DOT__lmem_axi_rvalid) 
                                           | (IData)(vlTOPp->tb_top__DOT__dma_axi_rvalid));
    vlTOPp->tb_top__DOT__bridge__DOT__rresp_select 
        = ((IData)(vlTOPp->tb_top__DOT__dma_axi_rvalid) 
           & (~ (IData)(vlTOPp->tb_top__DOT__lmem_axi_rvalid)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__single_ecc_error_lo_any 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_lo_m) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check) 
              >> 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_hi_m) 
             & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check) 
                  >> 6U))) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_lo_m) 
                               & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check) 
                                    >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__L2U_Plus1_0__DOT__is_ldst_hi_m) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check) 
              >> 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data 
        = (((((0xffU & ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign) 
                                    & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn)) 
              | (0xffffU & ((- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign) 
                                        & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn))) 
             | ((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign)) 
                            & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
                & ((0xffffff00U & ((- (IData)((1U & 
                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn 
                                                >> 7U)))) 
                                   << 8U)) | (0xffU 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn)))) 
            | ((- (IData)(((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign)) 
                           & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
               & ((0xffff0000U & ((- (IData)((1U & 
                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn 
                                               >> 0xfU)))) 
                                  << 0x10U)) | (0xffffU 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn)))) 
           | ((- (IData)((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz)))) 
              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)))) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 1U)))) 
                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                  >> 0xaU)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 2U)))) 
                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                  >> 0x14U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 3U)))) 
                       & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam 
                                  >> 0x1eU)))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtrDec;
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Enc_value 
        = ((6U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Enc_value)) 
           | (1U & (((((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                       >> 1U) | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                 >> 3U)) | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                            >> 5U)) 
                    | ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                       >> 7U))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Enc_value 
        = ((5U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Enc_value)) 
           | (2U & ((((0x7ffffffeU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                      >> 1U)) | (0x3ffffffeU 
                                                 & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                                    >> 2U))) 
                     | (0x7fffffeU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                      >> 5U))) | (0x3fffffeU 
                                                  & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                                     >> 6U)))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Enc_value 
        = ((3U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Enc_value)) 
           | (4U & ((((0x3ffffffcU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                      >> 2U)) | (0x1ffffffcU 
                                                 & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                                    >> 3U))) 
                     | (0xffffffcU & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                      >> 4U))) | (0x7fffffcU 
                                                  & ((IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Dec_value) 
                                                     >> 5U)))));
    vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Vfuncout 
        = vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Enc_value;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__RspPtr 
        = (3U & (IData)(vlTOPp->__Vfunc_tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__f_Enc8to3__67__Vfuncout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_valid) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_error));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_load_any)) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                  >> 0xcU))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                   >> 0x1eU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_error 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_load_any) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected 
        = (((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                >> 0x1eU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_load_any) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any))) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_fir_type)));
    vlTOPp->tb_top__DOT__lmem_axi_arvalid = ((IData)(vlTOPp->tb_top__DOT__lsu_axi_arvalid) 
                                             & (0xee00U 
                                                != 
                                                (0xffffU 
                                                 & (vlTOPp->tb_top__DOT__lsu_axi_araddr 
                                                    >> 0x10U))));
    vlTOPp->tb_top__DOT__lmem_axi_awvalid = ((IData)(vlTOPp->tb_top__DOT__lsu_axi_awvalid) 
                                             & (0xee00U 
                                                != 
                                                (0xffffU 
                                                 & (vlTOPp->tb_top__DOT__lsu_axi_araddr 
                                                    >> 0x10U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_hi_r 
        = (0xfU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
                    >> 4U) & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                               >> 6U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_lo_r 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
                   & (- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_r) 
                                       >> 6U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
                              << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xfffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
                              << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_hi)) 
           | (0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_hi) 
                              << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_lo) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_lo) 
                              << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_lo) 
                              << 2U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_byte_rhit_lo_lo)) 
           | (0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_lo_lo) 
                              << 3U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_byteen_ext_r))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__store_data_r 
        = (((IData)(((0x3fU >= (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                         << 3U))) ? 
                     ((((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_hi_r)) 
                        << 0x20U) | (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__store_data_lo_r))) 
                      >> (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r 
                                   << 3U))) : 0ULL)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__L2U1_Plus1_0__DOT__store_data_mask)) 
           & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_busreq_r))));
    if ((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ld_single_ecc_error_r) 
               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                  >> 4U)))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__end_addr_r);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_lo_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_r);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_rplus1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_hi_r;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_rplus1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_lo_r;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_hi_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_hi_r_ff));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__ld_sec_addr_lo_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xffffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__ld_sec_addr_lo_r_ff));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_rplus1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_hi_r_ff;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_rplus1ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__sec_data_lo_r_ff;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac_in 
        = ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
           | ((0x40000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                              & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                     >> 0x1fU)) << 0x1eU))) 
              | ((0x20000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                 | ((0x10000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                    & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                           >> 0x1dU)) 
                                       << 0x1cU))) 
                    | ((0x8000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                       | ((0x4000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                         & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                >> 0x1bU)) 
                                            << 0x1aU))) 
                          | ((0x2000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                             | ((0x1000000U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                               & ((~ 
                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                    >> 0x19U)) 
                                                  << 0x18U))) 
                                | ((0x800000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                   | ((0x400000U & 
                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                        & ((~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                               >> 0x17U)) 
                                           << 0x16U))) 
                                      | ((0x200000U 
                                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                         | ((0x100000U 
                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                & ((~ 
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                     >> 0x15U)) 
                                                   << 0x14U))) 
                                            | ((0x80000U 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                               | ((0x40000U 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                      & ((~ 
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                           >> 0x13U)) 
                                                         << 0x12U))) 
                                                  | ((0x20000U 
                                                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                     | ((0x10000U 
                                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                            & ((~ 
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                 >> 0x11U)) 
                                                               << 0x10U))) 
                                                        | ((0x8000U 
                                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                           | ((0x4000U 
                                                               & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                  & ((~ 
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                       >> 0xfU)) 
                                                                     << 0xeU))) 
                                                              | ((0x2000U 
                                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                                 | ((0x1000U 
                                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                        & ((~ 
                                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                             >> 0xdU)) 
                                                                           << 0xcU))) 
                                                                    | ((0x800U 
                                                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                                       | ((0x400U 
                                                                           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                              & ((~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 0xbU)) 
                                                                                << 0xaU))) 
                                                                          | ((0x200U 
                                                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                                             | ((0x100U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                & ((~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 9U)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                & ((~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 7U)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                & ((~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 5U)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                                                | ((4U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                & ((~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 3U)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                                                | (1U 
                                                                                & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                & (~ 
                                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                                >> 1U)))))))))))))))))))))))))))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_sat 
        = ((0x1aU < (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                              >> 0x1bU))) ? 0x1aU : 
           (0x1fU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                     >> 0x1bU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__event_r 
        = (((((((0x204U < (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)) 
                | (0U != (0x3fffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                       >> 0xaU)))) 
               | ((0x200U > (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)) 
                  & (0x38U < (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)))) 
              | ((0x36U > (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)) 
                 & (0x32U < (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)))) 
             | (0x1dU == (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r))) 
            | (0x21U == (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r)))
            ? 0U : (0x3ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_r 
        = ((0x200U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                       >> 0x12U) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                    >> 4U))) | ((0x180U 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                    >> 0xcU)) 
                                                | ((0x40U 
                                                    & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                         >> 0x15U) 
                                                        & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 7U)) 
                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                          >> 6U))) 
                                                   | ((0x20U 
                                                       & (((~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel)) 
                                                           & ((2U 
                                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))
                                                               ? 
                                                              ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                >> 0xbU) 
                                                               & (~ 
                                                                  (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                                                    >> 9U) 
                                                                   & (~ 
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                       >> 0x1bU)))))
                                                               : 
                                                              ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                >> 0xbU) 
                                                               & (~ 
                                                                  (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                                    >> 9U) 
                                                                   & (~ 
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                       >> 0x1bU))))))) 
                                                          << 5U)) 
                                                      | ((0x18U 
                                                          & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                             >> 3U)) 
                                                         | ((4U 
                                                             & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                & ((~ 
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                     >> 0x13U)) 
                                                                   << 2U))) 
                                                            | ((2U 
                                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r) 
                                                               | (1U 
                                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                     & (~ 
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                                                                         >> 0x13U)))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_kill_write 
        = (1U & ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtsel))
                  ? ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                      >> 0x1bU) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                       >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                  >> 5U)))
                  : ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_r 
                      >> 0x1bU) & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                       >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                  >> 5U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_debug_halt_req_sync)) 
            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 6U))) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                 >> 0x17U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 | ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 2U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 8U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en2 
        = ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                             >> 6U)))) & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                  >> 2U) | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec_tlu_br0_r_pkt) 
                            >> 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_r)
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__core_dbg_cmd_done) 
            & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_resume_req = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_resume_req = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
            vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_resume_req = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
                vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                 >> 0x11U));
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 2U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 1U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = ((IData)(vlTOPp->tb_top__DOT__sb_axi_rvalid) 
                           | (IData)(vlTOPp->tb_top__DOT__sb_axi_bvalid));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 8U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error 
                        = (((IData)(vlTOPp->tb_top__DOT__sb_axi_rvalid) 
                            | (IData)(vlTOPp->tb_top__DOT__sb_axi_bvalid)) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_rsp_error));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 
                        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                            & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error)));
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_read) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_addr));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_read) 
                           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_cmd_write_data));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 7U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done) 
                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done) 
                              | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)));
                }
            } else {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((0U != (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                         >> 8U))) ? 8U
                            : 6U);
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((~ ((((((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                         | (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                        | (5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                       | (6U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                      | (7U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                     | (8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) 
                                 | (0U != (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                 >> 8U)))));
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 8U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__core_dbg_cmd_done;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = (((0U != (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                          >> 8U))) 
                            | ((0U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x18U))) 
                               & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                     >> 0x11U)))) ? 8U
                            : 4U);
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                            | (0U != (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                            >> 8U)))) 
                           | ((0U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                               >> 0x18U))) 
                              & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                    >> 0x11U))));
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((0x200U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg)
                            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__resumereq)
                                ? 9U : (((2U == (0xffU 
                                                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                    >> 0x18U))) 
                                         & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))
                                         ? 5U : 3U))
                            : ((0x80000000U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                                ? 1U : 0U));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                    >> 9U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                                 | (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                        >> 9U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                           & ((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)) 
                              | (5U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate))));
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_resume_req 
                        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                           & (9U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)));
                }
            } else {
                if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 2U;
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                  >> 9U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
                } else {
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((1U & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                   >> 9U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                            ? 2U : 1U);
                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                   >> 0x1fU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                                >> 9U)) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
                }
            }
        }
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__npwbc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_r) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_r)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_r
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r 
        = ((~ (- (IData)((1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 >> 3U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0xdU)))))) 
           & (((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_i0_valid_r))) 
                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_r 
                    >> 8U)) & (~ (((((8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                                            << 1U)) 
                                     | ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2)) 
                                        | ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1) 
                                                  >> 1U)) 
                                           | (1U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                               >> 2U))))) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                                   & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_r_raw)))) 
                                  | (- (IData)((1U 
                                                & ((IData)(
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                            >> 0x24U)) 
                                                   | (IData)(
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT____Vcellout__i_r_ff0__dout 
                                                              >> 0x23U))))))))) 
               & (~ ((((8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t3) 
                              << 2U)) | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                                                << 1U)) 
                                         | ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t1)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                >> 1U))))) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_data)) 
                     & (- (IData)((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_error_pkt_r))))))) 
              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_enabled)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_wren)
                       ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_din 
                          >> 0x10U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_wren) 
                       | ((((0U == (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                             >> 0x18U))) 
                            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                               >> 0x13U)) & (8U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                          & (~ (IData)((0U != (7U & 
                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                >> 8U)))))))
                       ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_din
                       : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq 
        = ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))
            ? 0U : (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_in 
        = (0x1ffffffffULL & (((((((((((((((((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                       >> 0x12U) 
                                                                      & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                         >> 0x11U)) 
                                                                     & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case))))))) 
                                              | ((- (QData)((IData)(
                                                                    (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                      & (0U 
                                                                         == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                                     & (~ 
                                                                        (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                         >> 0xdU)))))) 
                                                 & (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                                                                          >> 0x1cU))))))) 
                                             | ((- (QData)((IData)(
                                                                   (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                     & (1U 
                                                                        == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                                    & (~ 
                                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                        >> 0xdU)))))) 
                                                & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder01_out)) 
                                            | ((- (QData)((IData)(
                                                                  (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                    & (2U 
                                                                       == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                                   & (~ 
                                                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                       >> 0xdU)))))) 
                                               & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder02_out)) 
                                           | ((- (QData)((IData)(
                                                                 (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                   & (3U 
                                                                      == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                                  & (~ 
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                      >> 0xdU)))))) 
                                              & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder03_out)) 
                                          | ((- (QData)((IData)(
                                                                (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                  & (4U 
                                                                     == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                                 & (~ 
                                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                     >> 0xdU)))))) 
                                             & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder04_out)) 
                                         | ((- (QData)((IData)(
                                                               (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                 & (5U 
                                                                    == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                                & (~ 
                                                                   (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                    >> 0xdU)))))) 
                                            & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder05_out)) 
                                        | ((- (QData)((IData)(
                                                              (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                                & (6U 
                                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                               & (~ 
                                                                  (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                   >> 0xdU)))))) 
                                           & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder06_out)) 
                                       | ((- (QData)((IData)(
                                                             (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                               & (7U 
                                                                  == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                              & (~ 
                                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                  >> 0xdU)))))) 
                                          & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder07_out)) 
                                      | ((- (QData)((IData)(
                                                            (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                              & (8U 
                                                                 == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                             & (~ 
                                                                (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                 >> 0xdU)))))) 
                                         & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder08_out)) 
                                     | ((- (QData)((IData)(
                                                           (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                             & (9U 
                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                            & (~ 
                                                               (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                                >> 0xdU)))))) 
                                        & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder09_out)) 
                                    | ((- (QData)((IData)(
                                                          (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                            & (0xaU 
                                                               == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                           & (~ 
                                                              (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                               >> 0xdU)))))) 
                                       & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder10_out)) 
                                   | ((- (QData)((IData)(
                                                         (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                           & (0xbU 
                                                              == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                          & (~ 
                                                             (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                              >> 0xdU)))))) 
                                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder11_out)) 
                                  | ((- (QData)((IData)(
                                                        (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                          & (0xcU 
                                                             == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                         & (~ 
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                             >> 0xdU)))))) 
                                     & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder12_out)) 
                                 | ((- (QData)((IData)(
                                                       (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                         & (0xdU 
                                                            == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                        & (~ 
                                                           (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                            >> 0xdU)))))) 
                                    & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder13_out)) 
                                | ((- (QData)((IData)(
                                                      (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                        & (0xeU 
                                                           == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                       & (~ 
                                                          (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                           >> 0xdU)))))) 
                                   & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder14_out)) 
                               | ((- (QData)((IData)(
                                                     (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__running_state) 
                                                       & (0xfU 
                                                          == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__quotient_new))) 
                                                      & (~ 
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                          >> 0xdU)))))) 
                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__adder15_out)) 
                              | ((- (QData)((IData)(
                                                    (1U 
                                                     & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                                        >> 0xdU))))) 
                                 & (((QData)((IData)(
                                                     vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__ar_shifted[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__ar_shifted[1U]))))) 
                             | ((- (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case))) 
                                & (QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_status_addr 
        = ((((((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes)) 
              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__last_beat)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_q)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_tag_valid_for_miss));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_q) 
               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)) 
              & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren)) 
           | (0xfffffffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_ifu_wr_en_ff_q) 
                               << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)) 
                             & ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                << 1U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[2U] 
        = ((0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[2U]) 
           | (0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[2U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[2U]) 
           | (0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[2U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[3U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[3U]) 
           | (0xffffff80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[3U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[4U] 
        = ((0x7fU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[4U]) 
           | (0x3f80U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__icache_ecc_1__DOT__ic_wr_16bytes_data[4U]));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffffeULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | (IData)((IData)((1U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffffdULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((2U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffffbULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((3U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffff7ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((4U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffffefULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((5U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffffdfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((6U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffffbfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((7U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffff7fULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((8U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffeffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((9U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffdffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xaU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffbffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xbU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffff7ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xcU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffefffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xdU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffdfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xeU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffbfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xfU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffff7fffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x10U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffeffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x11U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffdffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x12U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffbffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x13U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffff7ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x14U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffefffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x15U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffdfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x16U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffbfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x17U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fff7fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x18U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffeffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x19U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffdffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1aU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffbffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1bU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ff7ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1cU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fefffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1dU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fdfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1eU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fbfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1fU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7f7fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x20U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7effffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x21U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7dffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x22U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7bffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x23U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x22U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x77ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x24U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x23U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x6fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x25U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x24U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x5fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x26U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x25U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x3fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x27U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x26U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffffeULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | (IData)((IData)((1U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffffdULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((2U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffffbULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((3U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffff7ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((4U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffffefULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((5U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffffdfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((6U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 5U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffffbfULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((7U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffff7fULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((8U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 7U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffeffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((9U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffdffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xaU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 9U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffffbffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xbU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xaU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffff7ffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xcU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xbU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffefffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xdU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xcU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffdfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xeU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xdU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffffbfffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0xfU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xeU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffff7fffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x10U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0xfU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffeffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x11U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffdffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x12U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x11U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffffbffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x13U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x12U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffff7ffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x14U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x13U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffefffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x15U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x14U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffdfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x16U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x15U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fffbfffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x17U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x16U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fff7fffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x18U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x17U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffeffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x19U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x18U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffdffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1aU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x19U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ffbffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1bU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1aU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7ff7ffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1cU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1bU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fefffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1dU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1cU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fdfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1eU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1dU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7fbfffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x1fU == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1eU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7f7fffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x20U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x1fU));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7effffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x21U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7dffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x22U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x7bffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x23U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x22U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x77ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x24U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x23U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x6fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x25U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x24U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x5fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x26U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x25U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask 
        = ((0x3fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__error_mask) 
           | ((QData)((IData)((0x27U == (0x3fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__iccm_enabled__DOT__ICCM_ECC_CHECK__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))))) 
              << 0x26U));
    VL_EXTEND_WQ(65,64, __Vtemp284, (((QData)((IData)(
                                                      vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp285, (((QData)((IData)(
                                                      (0xffffU 
                                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
                                                           << 0x19U) 
                                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                             >> 7U))))) 
                                      << 0x30U) | (0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U])) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U])) 
                                                          << 0x10U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[0U])) 
                                                            >> 0x10U))))));
    VL_EXTEND_WQ(65,64, __Vtemp286, (((QData)((IData)(
                                                      ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U] 
                                                        << 0x19U) 
                                                       | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                          >> 7U)))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U]))));
    __Vtemp291[1U] = ((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                    >> 3U))) ? __Vtemp285[1U]
                       : ((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                        >> 3U))) ? 
                          __Vtemp286[1U] : ((0xffffU 
                                             & ((IData)(
                                                        (0x1ffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U])) 
                                                                << 0x19U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U])) 
                                                                  >> 7U))))) 
                                                >> 0x10U)) 
                                            | (0xffff0000U 
                                               & ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U])) 
                                                                   << 0x19U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U])) 
                                                                     >> 7U)))) 
                                                           >> 0x20U)) 
                                                  << 0x10U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U] 
        = (IData)((((QData)((IData)(((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                   >> 3U)))
                                      ? __Vtemp284[1U]
                                      : __Vtemp291[1U]))) 
                    << 0x20U) | (QData)((IData)(((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                      >> 3U)))
                                                  ? 
                                                 __Vtemp284[0U]
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 3U)))
                                                   ? 
                                                  __Vtemp285[0U]
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                        >> 3U)))
                                                    ? 
                                                   __Vtemp286[0U]
                                                    : 
                                                   ((0xffff0000U 
                                                     & ((IData)(
                                                                (0x1ffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                                     << 0x39U) 
                                                                    | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U])) 
                                                                        << 0x19U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U])) 
                                                                          >> 7U))))) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] 
                                                             >> 0x10U)))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U] 
        = (IData)(((((QData)((IData)(((0U == (3U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                               >> 3U)))
                                       ? __Vtemp284[1U]
                                       : __Vtemp291[1U]))) 
                     << 0x20U) | (QData)((IData)(((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 3U)))
                                                   ? 
                                                  __Vtemp284[0U]
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                        >> 3U)))
                                                    ? 
                                                   __Vtemp285[0U]
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                         >> 3U)))
                                                     ? 
                                                    __Vtemp286[0U]
                                                     : 
                                                    ((0xffff0000U 
                                                      & ((IData)(
                                                                 (0x1ffffffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                                      << 0x39U) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[3U])) 
                                                                         << 0x19U) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U])) 
                                                                           >> 7U))))) 
                                                         << 0x10U)) 
                                                     | (0xffffU 
                                                        & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[2U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[1U] 
                                                              >> 0x10U)))))))))) 
                   >> 0x20U));
    VL_EXTEND_WQ(65,64, __Vtemp294, (((QData)((IData)(
                                                      vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                      >> 0xeU))));
    VL_EXTEND_WQ(65,64, __Vtemp295, (((QData)((IData)(
                                                      (0xffffU 
                                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                                                           << 0xbU) 
                                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                             >> 0x15U))))) 
                                      << 0x30U) | (0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U])) 
                                                          << 2U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[4U])) 
                                                            >> 0x1eU))))));
    VL_EXTEND_WQ(65,64, __Vtemp296, (((QData)((IData)(
                                                      ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U] 
                                                        << 0xbU) 
                                                       | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                          >> 0x15U)))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                                    << 0x12U) 
                                                                   | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                                                                      >> 0xeU))))));
    __Vtemp301[1U] = ((1U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                    >> 3U))) ? __Vtemp295[1U]
                       : ((2U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                        >> 3U))) ? 
                          __Vtemp296[1U] : ((0xffffU 
                                             & ((IData)(
                                                        (0x1ffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U])) 
                                                             << 0x2bU) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U])) 
                                                                << 0xbU) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                                  >> 0x15U))))) 
                                                >> 0x10U)) 
                                            | (0xffff0000U 
                                               & ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U])) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U])) 
                                                                   << 0xbU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                                     >> 0x15U)))) 
                                                           >> 0x20U)) 
                                                  << 0x10U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U] 
        = (IData)((((QData)((IData)(((0U == (3U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                   >> 3U)))
                                      ? __Vtemp294[1U]
                                      : __Vtemp301[1U]))) 
                    << 0x20U) | (QData)((IData)(((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                      >> 3U)))
                                                  ? 
                                                 __Vtemp294[0U]
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 3U)))
                                                   ? 
                                                  __Vtemp295[0U]
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                        >> 3U)))
                                                    ? 
                                                   __Vtemp296[0U]
                                                    : 
                                                   ((0xffff0000U 
                                                     & ((IData)(
                                                                (0x1ffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U])) 
                                                                     << 0x2bU) 
                                                                    | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U])) 
                                                                        << 0xbU) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                                          >> 0x15U))))) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                           << 2U) 
                                                          | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                                                             >> 0x1eU)))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U] 
        = (IData)(((((QData)((IData)(((0U == (3U & 
                                              ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                               >> 3U)))
                                       ? __Vtemp294[1U]
                                       : __Vtemp301[1U]))) 
                     << 0x20U) | (QData)((IData)(((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                       >> 3U)))
                                                   ? 
                                                  __Vtemp294[0U]
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                        >> 3U)))
                                                    ? 
                                                   __Vtemp295[0U]
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                         >> 3U)))
                                                     ? 
                                                    __Vtemp296[0U]
                                                     : 
                                                    ((0xffff0000U 
                                                      & ((IData)(
                                                                 (0x1ffffffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[8U])) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[7U])) 
                                                                         << 0xbU) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U])) 
                                                                           >> 0x15U))))) 
                                                         << 0x10U)) 
                                                     | (0xffffU 
                                                        & ((vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[6U] 
                                                            << 2U) 
                                                           | (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_pre[5U] 
                                                              >> 0x1eU)))))))))) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_double_ecc_error 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_double_ecc_error)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__en) 
               & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check) 
                    >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__single_ecc_error 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__en) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__DOT__ecc_check) 
              >> 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_double_ecc_error 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_double_ecc_error)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__en) 
                & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))) 
               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check) 
                     >> 6U))) << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__single_ecc_error 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__en) 
            & (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__DOT__ecc_check) 
              >> 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit = ((2U 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)) 
                                                  | (((0x7ffffU 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout)) 
                                                      == vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__adr_ff__dout) 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_tag_valid)));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit = ((1U 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)) 
                                                  | (0xfffffffeU 
                                                     & ((((0x7ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__w_tout 
                                                                      >> 0x18U))) 
                                                          == vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__adr_ff__dout) 
                                                         << 1U) 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_tag_valid))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req 
        = (((((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                 >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
             & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_rpend) 
                      >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
            & (~ ((4U >= (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                     >> (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))) 
           & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__picm_rd_data 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff) 
             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wren_ff)) 
            & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_raddr_ff 
               == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_waddr_ff))
            ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
            : (((((((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_reg_read))) 
                      & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpend_rd_out) 
                     | ((- (IData)(((0x1e01800U == 
                                     (0x1ffffffU & 
                                      (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_raddr_ff 
                                       >> 7U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)))) 
                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out))) 
                    | ((- (IData)(((0x1e01840U == (0x1ffffffU 
                                                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_raddr_ff 
                                                      >> 7U))) 
                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)))) 
                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out))) 
                   | ((- (IData)(((0x1e01880U == (0x1ffffffU 
                                                  & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_raddr_ff 
                                                     >> 7U))) 
                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)))) 
                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out))) 
                  | ((- (IData)(((0xf00c3000U == vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_raddr_ff) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_rden_ff)))) 
                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg))) 
                 | (3U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_mken_ff) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__mask) 
                                        >> 3U)))))) 
                | (1U & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_mken_ff) 
                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__mask) 
                                       >> 2U)))))) 
               | (0xfU & (- (IData)(((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_mken_ff) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__mask) 
                                        >> 1U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__pl_in_q 
        = (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                    ? (~ ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x16U] 
                           << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x15U] 
                                        >> 8U))) : 
                   ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x16U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x15U] 
                                  >> 8U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[7U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[7U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[7U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                     << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                  >> 0x10U))) < (0xfU 
                                                 & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                                                     << 0xcU) 
                                                    | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                                       >> 0x14U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                     << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xcU] 
                               >> 0x18U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                                                  << 4U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xcU] 
                                                    >> 0x1cU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xeU] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xeU] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xeU] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U]) 
           < (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x12U] 
                       << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U] 
                                    >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b 
        = ((0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x12U] 
                     << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U] 
                                  >> 8U))) < (0xfU 
                                              & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x12U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U] 
                                                    >> 0xcU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_en 
        = (((IData)(vlTOPp->tb_top__DOT__lsu_axi_arvalid) 
            & (0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__lsu_axi_araddr 
                                      >> 0x10U)))) 
           & (IData)(vlTOPp->tb_top__DOT__dma_axi_arready));
    vlTOPp->tb_top__DOT__lsu_axi_arready = ((0xee00U 
                                             != (0xffffU 
                                                 & (vlTOPp->tb_top__DOT__lsu_axi_araddr 
                                                    >> 0x10U))) 
                                            | (IData)(vlTOPp->tb_top__DOT__dma_axi_arready));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_en 
        = (((IData)(vlTOPp->tb_top__DOT__lsu_axi_wvalid) 
            & (IData)(vlTOPp->tb_top__DOT__bridge__DOT__w_slave_select)) 
           & (IData)(vlTOPp->tb_top__DOT__dma_axi_wready));
    vlTOPp->tb_top__DOT__lsu_axi_wready = (1U & ((~ (IData)(vlTOPp->tb_top__DOT__bridge__DOT__w_slave_select)) 
                                                 | (IData)(vlTOPp->tb_top__DOT__dma_axi_wready)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_en 
        = (((IData)(vlTOPp->tb_top__DOT__lsu_axi_awvalid) 
            & (0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__lsu_axi_araddr 
                                      >> 0x10U)))) 
           & (IData)(vlTOPp->tb_top__DOT__dma_axi_awready));
    vlTOPp->tb_top__DOT__lsu_axi_awready = ((0xee00U 
                                             != (0xffffU 
                                                 & (vlTOPp->tb_top__DOT__lsu_axi_araddr 
                                                    >> 0x10U))) 
                                            | (IData)(vlTOPp->tb_top__DOT__dma_axi_awready));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (7U & ((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                  ? ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))
                      ? 0U : ((IData)(1U) + (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)))
                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)));
    if ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_byteen_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_byteen_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout;
    }
    if ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_byteen_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_byteen_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout;
    }
    if ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_byteen_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_byteen_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout;
    }
    if ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_byteen_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_byteen_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout;
    }
    if ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_byteen_in;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_addr_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_sz_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_sz_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_byteen_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_byteen_dff__dout;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_dbg_dff__dout;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((4U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((8U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_write_dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0x10U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_write_dff__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                         >> 1U)) & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                    >> 0x10U))) & (0U 
                                                   == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
                | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                    | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                   & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
               | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
              | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                  >> 1U) & (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                         >> 5U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)) 
                   << 1U) | (0x1fffeU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                           << 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type)) 
                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                            >> 0xfU)))) 
                 & ((1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                    << 1U)) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                                & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                               << 1U)) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                                           & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m))) 
                                          << 1U)) | 
              (0xfffffffeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                              & ((1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                               >> 5U))) 
                                 << 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)) 
                   << 2U) | (0x3fffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                           << 2U) & 
                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                                           << 1U)) 
                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                            >> 0xeU)))) 
                 & ((2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                    << 2U)) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                                & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                               << 2U)) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                                           & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m))) 
                                          << 2U)) | 
              (0xfffffffcU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                               << 1U) & ((2U == (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                    >> 5U))) 
                                         << 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)) 
                   << 3U) | (0x7fff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                           << 3U) & 
                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                                           << 2U)) 
                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                            >> 0xdU)))) 
                 & ((3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                    << 3U)) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                               << 3U)) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                                           & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m))) 
                                          << 3U)) | 
              (0xfffffff8U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                               << 2U) & ((3U == (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                    >> 5U))) 
                                         << 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_cmd_sent) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in)) 
                   << 4U) | (0xffff0U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_valid) 
                                           << 4U) & 
                                          ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type) 
                                           << 3U)) 
                                         & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                                            >> 0xcU)))) 
                 & ((4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                    << 4U)) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                                & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                               << 4U)) | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                                           & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m))) 
                                          << 4U)) | 
              (0xfffffff0U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                               << 3U) & ((4U == (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                    >> 5U))) 
                                         << 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__command_reg 
              >> 0x10U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0hist1)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1hist1) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0hist1)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0hist0)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1hist0) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0hist0)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pc4)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pc4) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pc4)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0way)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1way) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0way)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0brend)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1brend) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0brend)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0ret)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1ret) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0ret)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0dbecc)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1dbecc) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0dbecc)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf 
        = (((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                              >> 1U)))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0icaf)) 
           | ((- (IData)((1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                                    >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout))))) 
              & ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1icaf) 
                        << 1U)) | (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0icaf)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d 
        = ((((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
                >> 1U)) | ((3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval))) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din 
        = ((3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))
            ? (0xffffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)
            : 0U);
    if (vlTOPp->tb_top__DOT__bridge__DOT__bresp_select) {
        vlTOPp->tb_top__DOT__lsu_axi_bid = vlTOPp->tb_top__DOT__bridge__DOT__awid
            [vlTOPp->tb_top__DOT__bridge__DOT__bid_cnt];
        vlTOPp->tb_top__DOT__lsu_axi_bresp = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_error;
    } else {
        vlTOPp->tb_top__DOT__lsu_axi_bid = vlTOPp->tb_top__DOT__lmem_axi_bid;
        vlTOPp->tb_top__DOT__lsu_axi_bresp = 0U;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__bus_rsp_sent 
        = (((IData)(vlTOPp->tb_top__DOT__dma_axi_bvalid) 
            & (IData)(vlTOPp->tb_top__DOT__bridge__DOT__bresp_select)) 
           | ((IData)(vlTOPp->tb_top__DOT__dma_axi_rvalid) 
              & (IData)(vlTOPp->tb_top__DOT__bridge__DOT__rresp_select)));
    if (vlTOPp->tb_top__DOT__bridge__DOT__rresp_select) {
        vlTOPp->tb_top__DOT__lsu_axi_rdata = ((0x13fU 
                                               >= (0x1ffU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                      << 6U)))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                        << 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                                    ((IData)(2U) 
                                                                     + 
                                                                     (0xeU 
                                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                                         << 1U)))])) 
                                                    << 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                         << 6U))))) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       (0xeU 
                                                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                                           << 1U)))])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                            << 6U)))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                            << 6U))))) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                                        (0xeU 
                                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                                            << 1U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                            << 6U)))))
                                               : 0ULL);
        vlTOPp->tb_top__DOT__lsu_axi_rid = vlTOPp->tb_top__DOT__bridge__DOT__arid
            [vlTOPp->tb_top__DOT__bridge__DOT__rid_cnt];
        vlTOPp->tb_top__DOT__lsu_axi_rresp = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__axi_rsp_error;
    } else {
        vlTOPp->tb_top__DOT__lsu_axi_rdata = vlTOPp->tb_top__DOT__lmem_axi_rdata;
        vlTOPp->tb_top__DOT__lsu_axi_rid = vlTOPp->tb_top__DOT__lmem_axi_rid;
        vlTOPp->tb_top__DOT__lsu_axi_rresp = 0U;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__single_ecc_error_lo_any)
            ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
               ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__din_plus_parity)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__din_plus_parity);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m 
        = ((3ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_error_pkt_m) 
           | (((QData)((IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_pkt_m) 
                                      >> 6U)))) << 0x27U) 
              | (((QData)((IData)((1U & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m))))) 
                  << 0x26U) | (((QData)((IData)(((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m) 
                                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__misaligned_fault_m))) 
                                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_m)))
                                                  ? 1U
                                                  : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__exc_mscause_m)))) 
                                << 0x22U) | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_addr_m)) 
                                             << 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x3fcU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
               & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
               ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)
               : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                    >> 1U) & (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                           >> 5U))))
                   ? (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                   : (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                        | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                       << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x3f3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                     >> 1U) & (1U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                            >> 5U))))
                    ? (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                    : (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                        << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x3cfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                     >> 1U) & (2U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                            >> 5U))))
                    ? (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                    : (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                        << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)))) 
              << 4U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x33fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                     >> 1U) & (3U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                            >> 5U))))
                    ? (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                    : (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                        << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)))) 
              << 6U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xffU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)
                : ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                     >> 1U) & (4U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                            >> 5U))))
                    ? (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout))
                    : (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                          | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                         | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                        << 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)))) 
              << 8U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0x1eU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                 | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)) 
                  & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
              | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                   >> 1U) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout)) 
                 & (0U == (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                 >> 5U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0x1dU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                 & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)) 
                   & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 1U) | (0xfffffffeU & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                            << 1U)) 
                                        & ((1U == (7U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                      >> 5U))) 
                                           << 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0x1bU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                 & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)) 
                   & (2U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 2U) | (0xfffffffcU & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                          << 2U)) & 
                                        ((2U == (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                    >> 5U))) 
                                         << 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0x17U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                 & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)) 
                   & (3U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 3U) | (0xfffffff8U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                          << 2U) & 
                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                          << 3U)) & 
                                        ((3U == (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                    >> 5U))) 
                                         << 3U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xfU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                   | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error)) 
                 & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dccm_dma_rvalid) 
                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_m)) 
                   & (4U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__dma_mem_tag_m)))) 
               << 4U) | (0xfffffff0U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                          << 3U) & 
                                         ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                          << 4U)) & 
                                        ((4U == (7U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__iccm_enabled__DOT__dma_misc_bits__dout) 
                                                    >> 5U))) 
                                         << 4U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_m 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__single_ecc_error_lo_any));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__single_ecc_error_hi_any)
            ? (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
               ^ vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity)
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__din_plus_parity);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xeU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                  == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                    >> 5U))))) & (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                          >> 9U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xdU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                   == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                     >> 0xfU))))) & (IData)(
                                                            (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                                             >> 0x13U))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xbU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                   == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                     >> 0x19U))))) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                          >> 0x1dU))) << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((7U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                   == (3U & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                                     >> 0x23U))))) 
               & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_raw 
                          >> 0x27U))) << 3U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en)
            ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any)
                ? (((0U == (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                     << 5U))) ? 0U : 
                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                     ((IData)(1U) + (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                            << 5U))))) 
                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (3U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag))] 
                      >> (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                   << 5U)))) : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                       << 5U))))) 
                                                | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                   (3U 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                       << 5U)))))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_load_any)) 
                  & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                         >> 0xcU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                        >> 1U))))) 
                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 0xbU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                    >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_imprecise_error_store_any)) 
                  & (~ (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                         >> 0xcU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                        >> 1U))))) 
                 | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 0xaU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                    >> 1U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected 
        = (1U & ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                     >> 6U) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                  >> 0xdU))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected)) 
                  | (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                      >> 0xcU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                     >> 1U)))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_fir_type)));
    vlTOPp->tb_top__DOT__lmem__DOT__mailbox_write = 
        (((IData)(vlTOPp->tb_top__DOT__lmem_axi_awvalid) 
          & (0xd0580000U == vlTOPp->tb_top__DOT__lsu_axi_araddr)) 
         & (IData)(vlTOPp->tb_top__DOT__rst_l));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_hi_r 
        = (IData)((((0x3fU >= (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                        << 3U))) ? 
                    ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__store_data_r)) 
                     << (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                  << 3U))) : 0ULL) 
                   >> 0x20U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_r 
        = ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__store_data_r)) 
           << (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                        << 3U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_r 
        = (IData)(((0x3fU >= (0x18U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                       << 3U))) ? ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__store_data_r)) 
                                                   << 
                                                   (0x18U 
                                                    & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                                       << 3U)))
                    : 0ULL));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req 
        = (1U & (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                        >> 6U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)) 
                   | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 8U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                 >> 9U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__force_halt) 
           | (((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_idle_any) 
                   & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 0xfU)) & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                 & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xeU)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req))) 
               & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 7U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc2ff__dout) 
                                    >> 2U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers 
        = (1U & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 6U) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_r 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 0xaU) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                   >> 0x17U))) & ((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                    >> 6U)) 
                                                  | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                       >> 4U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_r 
        = (1U & (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 9U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__genblk11__DOT__mstatus_ff__dout 
                                 >> 0x17U))) & ((~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 6U)) 
                                                | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))) 
                 & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                       >> 4U))));
    VL_EXTEND_WI(256,1, __Vtemp304, (1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en2)));
    VL_SHIFTL_WWI(256,256,8, __Vtemp305, __Vtemp304, (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__br0_hashed_wb));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[0U] 
        = __Vtemp305[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[1U] 
        = __Vtemp305[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[2U] 
        = __Vtemp305[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
        = __Vtemp305[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
        = __Vtemp305[4U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
        = __Vtemp305[5U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
        = __Vtemp305[6U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
        = __Vtemp305[7U];
    VL_EXTEND_WI(256,1, __Vtemp306, (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_wr_en2) 
                                           >> 1U)));
    VL_SHIFTL_WWI(256,256,8, __Vtemp307, __Vtemp306, (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__br0_hashed_wb));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
        = __Vtemp307[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
        = __Vtemp307[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
        = __Vtemp307[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
        = __Vtemp307[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
        = __Vtemp307[4U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
        = __Vtemp307[5U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
        = __Vtemp307[6U];
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
        = __Vtemp307[7U];
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr 
            = (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__predpipe_r 
                        >> 5U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_p1_f 
            = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb) 
                & ((0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__predpipe_r 
                             >> 5U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f))) 
               & 1U);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_f 
            = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_error_wb) 
                & ((0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__predpipe_r 
                             >> 5U)) == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_f))) 
               & 1U);
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_addr 
            = (0xffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__final_predpipe_mp 
                        >> 5U));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_p1_f = 0U;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__bpred__DOT__bp__DOT__branch_error_bank_conflict_f = 0U;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1)) 
            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))
            ? ((((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                 & (IData)((vlTOPp->tb_top__DOT__rvtop__DOT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 2U))) | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dbg_cmd_done)
                                            ? (((0xffU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                    & ((0x1fU 
                                                        >= 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        ? 
                                                       (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                        >> 
                                                        ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        : 0U))) 
                                                | (0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & ((0x1fU 
                                                          >= 
                                                          (0x10U 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          ? 
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                          >> 
                                                          (0x10U 
                                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          : 0U)))) 
                                               | ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                  & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata))
                                            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_corr_r))) 
               | ((- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))) 
                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 1U) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_resume_req)) 
                 & (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 6U) & (~ (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 2U)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 2U) | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final) 
                               | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 8U)) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 9U)) 
                             | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1))) 
                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_resume_req))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_r 
        = ((8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r) 
                  & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                          >> 5U)) << 3U) | (0xfffffff8U 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r) 
                                               << 1U))))) 
           | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r) 
                     & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t2) 
                             >> 5U)) << 2U) | (0x7ffffffcU 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r) 
                                                  >> 1U))))) 
              | ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r) 
                        & (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                >> 5U)) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r)) 
                           << 1U))) | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r) 
                                             & ((~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata1_t0) 
                                                  >> 5U)) 
                                                | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_r) 
                                                   >> 1U)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_decode 
        = (((((((((((((((((((((((((4U & ((((- (IData)(
                                                      (0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))) 
                                           | (- (IData)(
                                                        (0x1aU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq)))))) 
                                          | (- (IData)(
                                                       (0x19U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq)))))) 
                                         | (- (IData)(
                                                      (0x18U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                                  | (8U & (- (IData)(
                                                     (0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                                 | (8U & (- (IData)(
                                                    (0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                                | (8U & (- (IData)(
                                                   (0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                               | (8U & (- (IData)((0x14U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                              | (0xcU & (- (IData)(
                                                   (0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                             | (0xcU & (- (IData)((0x12U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                            | (0xcU & (- (IData)((0x11U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                           | (0xcU & (- (IData)((0x10U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                          | (0x10U & (- (IData)((0xfU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                         | (0x10U & (- (IData)((0xeU 
                                                == 
                                                (0x1fU 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                        | (0x10U & (- (IData)((0xdU 
                                               == (0x1fU 
                                                   & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                       | (0x10U & (- (IData)((0xcU 
                                              == (0x1fU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                      | (0x14U & (- (IData)((0xbU == 
                                             (0x1fU 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                     | (0x14U & (- (IData)((0xaU == 
                                            (0x1fU 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                    | (0x14U & (- (IData)((9U == (0x1fU 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                   | (0x14U & (- (IData)((8U == (0x1fU 
                                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                  | (0x18U & (- (IData)((7U == (0x1fU 
                                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                 | (0x18U & (- (IData)((6U == (0x1fU 
                                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
                | (0x18U & (- (IData)((5U == (0x1fU 
                                              & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
               | (0x18U & (- (IData)((4U == (0x1fU 
                                             & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
              | (0x1cU & (- (IData)((3U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
             | (0x1cU & (- (IData)((2U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
            | (0x1cU & (- (IData)((1U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq))))))) 
           | (0x1cU & (- (IData)((0U == (0x1fU & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq)))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__ic_wr_en = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__bus_wren) 
                                                 & (- (IData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_ic_16_bytes))));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_wr_data[0U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[0U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_wr_data[1U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[1U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_wr_data[2U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[2U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_wr_data[3U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[3U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_wr_data[4U] 
        = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT____Vcellout__mem_ctl__ic_wr_data[4U];
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_single_ecc_error 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_single_ecc_error)) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__0__KET____DOT__ecc_decode__single_ecc_error));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_single_ecc_error 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_single_ecc_error)) 
           | ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_tag_inst__DOT____Vcellout__PACKED_1__DOT__ECC1__DOT__genblk1__BRA__1__KET____DOT__ecc_decode__single_ecc_error) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__bank_check_en 
        = ((2U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__bank_check_en)) 
           | (0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__bank_check_en 
        = ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__bank_check_en)) 
           | (((0U != (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)) 
               & ((7U != (7U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                >> 5U))) & (3U == (3U 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                                                      >> 8U))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q 
        = (3U & ((1U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout))
                  ? ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__mem__DOT__icache__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__miscff__dout) 
                     >> 1U) : (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__ic_rd_hit)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_iccm_stall_any 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & (0xee00U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                      >> 0x10U)))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
              >= (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                        >> 0x10U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_dccm_stall_any 
        = (((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((0xf004U == (0xffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_addr_int 
                                           >> 0xfU))))) 
           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
              >= (7U & (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                        >> 0x10U))));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[1U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0U] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[2U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[3U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[1U] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[4U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__9__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__10__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[5U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__11__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[2U] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__12__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[6U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__13__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__14__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[7U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__15__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[3U] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[9U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__16__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[9U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[9U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[8U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xaU] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[9U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[9U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xaU] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[9U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xaU] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[9U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[4U] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xaU] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xaU]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xaU] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xaU] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xcU] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__5__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xcU] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xcU] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xbU] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__6__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[5U] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xdU] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xcU] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[7U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xcU]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__7__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xdU] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xcU] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[7U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xdU] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0xcU] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__8__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[7U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[6U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x12U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x11U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x11U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x12U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x11U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x12U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x11U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[8U] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x13U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x12U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x12U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x13U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x12U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x13U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x12U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x14U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x13U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                        << 0xcU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                    >> 0x14U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x13U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xaU] 
                        << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[9U] 
                                     >> 0x10U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1aU] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x19U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                        << 4U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xcU] 
                                  >> 0x1cU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1aU] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x19U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                        << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xcU] 
                                  >> 0x18U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1bU] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1aU] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xeU] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1aU]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1bU] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1aU] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xeU] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1bU] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x1aU] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xeU] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0xdU] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x23U] 
                         << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x22U] 
                                      >> 8U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x12U] 
                        << 0x1cU) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U] 
                                     >> 4U)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id 
            = (0xffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x22U]);
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority 
            = (0xfU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U]);
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x23U] 
                         << 8U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x22U] 
                                   >> 0x18U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x12U] 
                        << 0x14U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U] 
                                     >> 0xcU)));
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id 
            = (0xffU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x23U] 
                         << 0x10U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_id[0x22U] 
                                      >> 0x10U)));
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__genblock__DOT__LEVEL__BRA__4__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority 
            = (0xfU & ((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x12U] 
                        << 0x18U) | (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__pic_ctrl_inst__DOT__genblock__DOT__level_intpend_w_prior_en[0x11U] 
                                     >> 8U)));
    }
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_en) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__lsu_axi_araddr;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                : 3U);
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addr;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_sz;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_rst 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_cmd_sent) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_en)));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_en) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__lsu_axi_wstrb;
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteenff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_rst 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_cmd_sent) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_en)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent 
        = ((IData)(vlTOPp->tb_top__DOT__lsu_axi_wvalid) 
           & (IData)(vlTOPp->tb_top__DOT__lsu_axi_wready));
    if (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_en) {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__lsu_axi_araddr;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect)
                ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz)
                : 3U);
    } else {
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addr;
        vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_szff__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_sz;
    }
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_rst 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_cmd_sent) 
           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_en)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent 
        = ((IData)(vlTOPp->tb_top__DOT__lsu_axi_awvalid) 
           & (IData)(vlTOPp->tb_top__DOT__lsu_axi_awready));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_trxn 
        = ((((IData)(vlTOPp->tb_top__DOT__lsu_axi_awvalid) 
             & (IData)(vlTOPp->tb_top__DOT__lsu_axi_awready)) 
            | ((IData)(vlTOPp->tb_top__DOT__lsu_axi_wvalid) 
               & (IData)(vlTOPp->tb_top__DOT__lsu_axi_wready))) 
           | ((IData)(vlTOPp->tb_top__DOT__lsu_axi_arvalid) 
              & (IData)(vlTOPp->tb_top__DOT__lsu_axi_arready)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__lsu_pmu_bus_busy 
        = ((((IData)(vlTOPp->tb_top__DOT__lsu_axi_awvalid) 
             & (~ (IData)(vlTOPp->tb_top__DOT__lsu_axi_awready))) 
            | ((IData)(vlTOPp->tb_top__DOT__lsu_axi_wvalid) 
               & (~ (IData)(vlTOPp->tb_top__DOT__lsu_axi_wready)))) 
           | ((IData)(vlTOPp->tb_top__DOT__lsu_axi_arvalid) 
              & (~ (IData)(vlTOPp->tb_top__DOT__lsu_axi_arready))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (0U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (1U == (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dbg_cmd_type)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp = 0ULL;
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_br_start_error 
        = (((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignval) 
               >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x3ffffffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)(((((3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)) 
                                | ((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend) 
                                      >> 1U))) | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_br_start_error)))) 
              << 0x32U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_brp_pc4 
        = (((3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4)) 
           | ((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignpc4) 
                 >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7fffffffffffeULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | (IData)((IData)((((3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                               & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret)) 
                              | ((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignret) 
                                    >> 1U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7fffffffffffdULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)((1U & ((1U & ((3U != 
                                             (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                                      ? (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway)
                                      : ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignway) 
                                         >> 1U))))) 
              << 1U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7ffdfffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)((((3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1)) 
                               | ((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist1) 
                                     >> 1U))))) << 0x25U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7ffefffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)((((3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0)) 
                               | ((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignhist0) 
                                     >> 1U))))) << 0x24U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1 
        = ((3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
           & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout) 
                  >> 1U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__bundle2ff__dout)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x4003fffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)((0xfffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                                          ? (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                                     >> 8U))
                                          : (IData)(
                                                    (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                     >> 8U)))))) 
              << 0x26U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7fffe00000003ULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)((0x7fffffffU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_ends_f1)
                                               ? (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
                                                          >> 0x14U))
                                               : (IData)(
                                                         (vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
                                                          >> 0x14U)))))) 
              << 2U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7fffbffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_br_start_error)) 
              << 0x22U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7fffdffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)((1U & ((1U & ((3U != 
                                             (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                                            | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignbrend)))
                                      ? vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0pcfinal
                                      : vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc)))) 
              << 0x21U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
        = ((0x7fff7ffffffffULL & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp) 
           | ((QData)((IData)(((((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                          >> 0x32U)) 
                                 & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_brp_pc4)) 
                                & (3U != (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                               | (((IData)((vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__i0_brp 
                                            >> 0x32U)) 
                                   & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__i0_brp_pc4))) 
                                  & (3U == (3U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))))) 
              << 0x23U));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
           | (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_pmu_postsync_stall 
        = ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
           & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__dec__DOT__dec_ib0_valid_d));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__legal 
        = (1U & (((((((((((((((((((((((((((((((((((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xdU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xcU))) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xbU)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                                              | (((((~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xdU)) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                        >> 0xcU))) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 6U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                                             | ((((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xfU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xdU))) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xbU)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 1U)))) 
                                            | (((((~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xdU)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xcU))) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 5U)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                                           | (((((~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xdU)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 0xcU))) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xaU)) 
                                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                                          | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xfU)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xdU))) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 >> 6U)) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 1U)))) 
                                         | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 0xfU) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xcU))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 1U))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                                        | (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xdU)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xcU))) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 9U)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 1U)) 
                                           & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                                       | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 0xcU)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 6U)) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 >> 1U))) 
                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                                      | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 0xfU)) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 >> 0xdU))) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 5U)) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 1U)))) 
                                     | (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 0xdU)) 
                                           & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 >> 0xcU))) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 8U)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 1U)) 
                                        & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                                    | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 0xcU)) 
                                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 5U)) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 1U))) 
                                       & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                                   | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 0xfU)) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 0xdU))) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xaU)) 
                                      & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 1U)))) 
                                  | (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 0xdU)) 
                                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 0xcU))) 
                                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 7U)) & 
                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                       >> 1U)) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                                 | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                        >> 0xcU) & 
                                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                        >> 0xbU)) & 
                                      (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xaU))) 
                                     & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 1U))) 
                                    & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                                | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 0xfU)) 
                                     & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 0xdU))) 
                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                       >> 9U)) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 1U)))) 
                               | (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 0xdU)) 
                                     & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 0xcU))) 
                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                       >> 4U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 1U)) 
                                  & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                              | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                    >> 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 0xcU)) 
                                  & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                        >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                             | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                      >> 0xfU)) & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xdU))) 
                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                    >> 8U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 1U)))) 
                            | (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                      >> 0xdU)) & (~ 
                                                   ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xcU))) 
                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                    >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 1U)) 
                               & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                           | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                 >> 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 4U)) 
                               & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                     >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                          | (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                    >> 0xdU)) & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xcU))) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 2U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 1U)) 
                             & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                         | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 0xfU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xdU))) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                >> 7U)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 1U)))) 
                        | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                              >> 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 3U)) & 
                            (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                       | (((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                             >> 0xdU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 2U)) & 
                           (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                               >> 1U))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                      | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                           >> 0xeU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xdU))) 
                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                               >> 1U)))) | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xeU)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xcU))) 
                                             & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 1U))) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                    | ((((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                           >> 0xfU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xdU))) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                            >> 0xcU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 1U)) & 
                       (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                   | (((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                             >> 0xfU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 0xdU))) 
                        & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                              >> 0xcU))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 1U)) 
                      & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))) 
                  | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                           >> 0xfU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 0xdU))) 
                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                         >> 0xcU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 1U)))) 
                 | ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                      >> 0xeU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                     >> 0xdU))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d 
        = ((0x80U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                     >> 5U)) | ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)) 
                                | ((0x20U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)) 
                                   | ((0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                << 2U)) 
                                      | ((8U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 8U)) 
                                         | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 8U)) 
                                            | (3U & 
                                               ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 3U))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d 
        = ((0x10U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                     >> 1U)) | ((0xeU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 9U)) | 
                                (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                       >> 6U))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d 
        = ((0x30U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                     >> 3U)) | (0xfU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                        >> 9U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                   >> 0xfU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                               >> 0xeU)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                   >> 0xfU) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 1U))) & (~ (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2 
        = (1U & ((((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                   >> 0xfU) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                               >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 1U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm5d 
        = ((0x20U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                     >> 7U)) | (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__simm9d 
        = ((0x20U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                     >> 7U)) | ((0x18U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)) 
                                | ((4U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 3U)) | 
                                   ((2U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 1U)) 
                                    | (1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 6U))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
        = ((0xff800U & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald) 
           | ((0x400U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                         >> 2U)) | ((0x200U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               << 1U)) 
                                    | ((0x180U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 2U)) 
                                       | ((0x40U & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din)) 
                                          | ((0x20U 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 >> 2U)) 
                                             | ((0x10U 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    << 2U)) 
                                                | ((8U 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 8U)) 
                                                   | (7U 
                                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                         >> 3U))))))))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald 
        = ((0x7ffU & vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjald) 
           | (0xff800U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 0xcU)))) 
                          << 0xbU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimmd 
        = ((0xfffe0U & ((- (IData)((1U & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xcU)))) 
                        << 5U)) | (0x1fU & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 2U)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sjaloffset11_1 
        = (1U & ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                     >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 0xdU)));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sluimm17_12 
        = (1U & ((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                           >> 0xfU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                        >> 0xeU)) & 
                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                       >> 0xdU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                    >> 7U)) | ((((~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xfU)) 
                                                 & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                    >> 0xeU)) 
                                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 8U)))) 
                   | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                            >> 0xfU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 0xeU)) 
                       & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                          >> 0xdU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                       >> 9U))) | (
                                                   (((~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xfU)) 
                                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                        >> 0xeU)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xaU))) 
                 | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                          >> 0xfU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                       >> 0xeU)) & 
                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                      >> 0xdU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                   >> 0xbU))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrd 
        = (1U & ((((((((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                 >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 6U)) 
                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                               >> 1U)) | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 0xfU)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 0xeU)) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 0xbU)) 
                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                          | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 5U)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                >> 1U))) | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xfU)) 
                                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 >> 0xeU)) 
                                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 0xaU)) 
                                            & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                        | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 4U)) 
                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                              >> 1U))) | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 0xfU)) 
                                            & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 0xeU)) 
                                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 9U)) 
                                          & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                      | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                              >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 3U)) 
                         & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                            >> 1U))) | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 0xfU)) 
                                          & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 0xeU)) 
                                         & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 8U))) 
                                        & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                    | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                            >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 2U)) & 
                       ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                        >> 1U))) | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xfU)) 
                                      & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 0xeU)) 
                                     & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                        >> 7U)) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                  | ((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                         >> 0xfU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                      >> 1U))) | ((
                                                   (~ 
                                                    ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 0xfU)) 
                                                   & (~ 
                                                      ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xdU))) 
                                                  & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))));
    vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__rdrs1 
        = (1U & ((((((((((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                   >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 0xcU)) 
                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                 >> 0xbU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 1U)) 
                            | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                     >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                  >> 0xcU)) 
                                & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                   >> 0xaU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 1U))) 
                           | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                    >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                 >> 0xcU)) 
                               & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 9U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 1U))) 
                          | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                   >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                >> 0xcU)) 
                              & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                 >> 8U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                            >> 1U))) 
                         | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                               >> 0xcU)) 
                             & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                >> 7U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 1U))) 
                        | ((((((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                     >> 0xeU)) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 0xcU))) 
                                & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                      >> 6U))) & (~ 
                                                  ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 5U))) 
                              & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                    >> 4U))) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                   >> 3U))) 
                            & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                  >> 2U))) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                              >> 1U))) 
                       | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                             >> 0xcU)) 
                           & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                              >> 6U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 1U))) | 
                      ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                             >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xcU)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                           >> 5U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                      >> 1U))) | ((
                                                   ((~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xeU)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xcU)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 4U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 1U))) 
                    | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                             >> 0xeU)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                          >> 0xcU)) 
                        & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                           >> 3U)) & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                      >> 1U))) | ((
                                                   ((~ 
                                                     ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 0xeU)) 
                                                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                       >> 0xcU)) 
                                                   & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                      >> 2U)) 
                                                  & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                                     >> 1U))) 
                  | ((((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                           >> 0xfU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                           >> 0xeU))) 
                      & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                            >> 0xdU))) & (IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din))) 
                 | (((~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                         >> 0xfU)) & (~ ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                                         >> 0xeU))) 
                    & ((IData)(vlTOPp->tb_top__DOT__rvtop__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__compress0__din) 
                       >> 1U))));
}
