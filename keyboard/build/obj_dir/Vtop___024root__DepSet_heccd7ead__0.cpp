// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 512> Vtop__ConstPool__TABLE_h20df33dc_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h33195002_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vdly__top__DOT__cur_make_code;
    __Vdly__top__DOT__cur_make_code = 0;
    CData/*0:0*/ __Vdly__top__DOT__nextdata_n;
    __Vdly__top__DOT__nextdata_n = 0;
    CData/*2:0*/ __Vdly__top__DOT__inst__DOT__ps2_clk_sync;
    __Vdly__top__DOT__inst__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__top__DOT__inst__DOT__ps2_data_d2;
    __Vdly__top__DOT__inst__DOT__ps2_data_d2 = 0;
    CData/*3:0*/ __Vdly__top__DOT__inst__DOT__count;
    __Vdly__top__DOT__inst__DOT__count = 0;
    CData/*2:0*/ __Vdly__top__DOT__inst__DOT__w_ptr;
    __Vdly__top__DOT__inst__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__top__DOT__inst__DOT__r_ptr;
    __Vdly__top__DOT__inst__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__overflow;
    __Vdly__overflow = 0;
    CData/*0:0*/ __Vdly__ready;
    __Vdly__ready = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__inst__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__inst__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__inst__DOT__fifo__v0;
    __Vdlyvval__top__DOT__inst__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__inst__DOT__fifo__v0;
    __Vdlyvset__top__DOT__inst__DOT__fifo__v0 = 0;
    // Body
    __Vdly__top__DOT__inst__DOT__ps2_data_d2 = vlSelf->top__DOT__inst__DOT__ps2_data_d2;
    __Vdly__top__DOT__inst__DOT__ps2_clk_sync = vlSelf->top__DOT__inst__DOT__ps2_clk_sync;
    __Vdly__top__DOT__nextdata_n = vlSelf->top__DOT__nextdata_n;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__top__DOT__inst__DOT__w_ptr = vlSelf->top__DOT__inst__DOT__w_ptr;
    __Vdly__top__DOT__inst__DOT__count = vlSelf->top__DOT__inst__DOT__count;
    __Vdly__ready = vlSelf->ready;
    __Vdly__top__DOT__inst__DOT__r_ptr = vlSelf->top__DOT__inst__DOT__r_ptr;
    __Vdlyvset__top__DOT__inst__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__cur_make_code = vlSelf->top__DOT__cur_make_code;
    __Vdly__top__DOT__inst__DOT__ps2_data_d2 = ((6U 
                                                 & ((IData)(vlSelf->top__DOT__inst__DOT__ps2_data_d2) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->kbd_data));
    __Vdly__top__DOT__inst__DOT__ps2_clk_sync = ((6U 
                                                  & ((IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->kbd_clk));
    __Vdly__top__DOT__nextdata_n = (1U & ((IData)(vlSelf->reset) 
                                          | (~ ((((1U 
                                                   == (IData)(vlSelf->top__DOT__next_stata)) 
                                                  | (2U 
                                                     == (IData)(vlSelf->top__DOT__next_stata))) 
                                                 & (IData)(vlSelf->ready)) 
                                                & (IData)(vlSelf->top__DOT__nextdata_n)))));
    if (vlSelf->reset) {
        __Vdly__top__DOT__inst__DOT__count = 0U;
        __Vdly__top__DOT__inst__DOT__w_ptr = 0U;
        __Vdly__top__DOT__inst__DOT__r_ptr = 0U;
        __Vdly__overflow = 0U;
        __Vdly__ready = 0U;
        vlSelf->top__DOT__cnt = 0U;
        __Vdly__top__DOT__cur_make_code = 0U;
        vlSelf->top__DOT__current_state = 0U;
    } else {
        if (vlSelf->ready) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__nextdata_n)))) {
                __Vdly__top__DOT__inst__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__r_ptr)));
                if (((IData)(vlSelf->top__DOT__inst__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__r_ptr))))) {
                    __Vdly__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__inst__DOT__count))) {
                if ((((~ (IData)(vlSelf->top__DOT__inst__DOT__buffer)) 
                      & ((IData)(vlSelf->top__DOT__inst__DOT__ps2_data_d2) 
                         >> 2U)) & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->top__DOT__inst__DOT__buffer) 
                                                    >> 1U))))) {
                    __Vdlyvval__top__DOT__inst__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__inst__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__inst__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__inst__DOT__fifo__v0 
                        = vlSelf->top__DOT__inst__DOT__w_ptr;
                    __Vdly__ready = 1U;
                    __Vdly__top__DOT__inst__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__w_ptr)));
                    __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->top__DOT__inst__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__inst__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__inst__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__inst__DOT____Vlvbound_h1a91ade8__0 
                    = (1U & ((IData)(vlSelf->top__DOT__inst__DOT__ps2_data_d2) 
                             >> 2U));
                if ((9U >= (IData)(vlSelf->top__DOT__inst__DOT__count))) {
                    vlSelf->top__DOT__inst__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__inst__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__inst__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__inst__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->top__DOT__inst__DOT__count))));
                }
                __Vdly__top__DOT__inst__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__count)));
            }
        }
        if (((0U == (IData)(vlSelf->top__DOT__current_state)) 
             & (1U == (IData)(vlSelf->top__DOT__next_stata)))) {
            vlSelf->top__DOT__cnt = (0xffU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__cnt)));
            __Vdly__top__DOT__cur_make_code = vlSelf->top__DOT__data;
        } else {
            vlSelf->top__DOT__cnt = (0xffU & (IData)(vlSelf->top__DOT__cnt));
            __Vdly__top__DOT__cur_make_code = vlSelf->top__DOT__cur_make_code;
        }
        vlSelf->top__DOT__current_state = vlSelf->top__DOT__next_stata;
    }
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__cur_make_code) 
                     << 1U) | (IData)(vlSelf->reset));
    vlSelf->top__DOT__cur_asc2_code = Vtop__ConstPool__TABLE_h20df33dc_0
        [__Vtableidx1];
    vlSelf->top__DOT__flag = ((~ (IData)(vlSelf->reset)) 
                              & (((2U == (IData)(vlSelf->top__DOT__next_stata)) 
                                  & ((IData)(vlSelf->top__DOT__data) 
                                     == (IData)(vlSelf->top__DOT__cur_make_code))) 
                                 & (~ (IData)(vlSelf->top__DOT__nextdata_n))));
    vlSelf->top__DOT__inst__DOT__count = __Vdly__top__DOT__inst__DOT__count;
    vlSelf->top__DOT__inst__DOT__w_ptr = __Vdly__top__DOT__inst__DOT__w_ptr;
    vlSelf->overflow = __Vdly__overflow;
    vlSelf->top__DOT__inst__DOT__ps2_clk_sync = __Vdly__top__DOT__inst__DOT__ps2_clk_sync;
    vlSelf->top__DOT__inst__DOT__ps2_data_d2 = __Vdly__top__DOT__inst__DOT__ps2_data_d2;
    vlSelf->ready = __Vdly__ready;
    vlSelf->top__DOT__inst__DOT__r_ptr = __Vdly__top__DOT__inst__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__inst__DOT__fifo__v0) {
        vlSelf->top__DOT__inst__DOT__fifo[__Vdlyvdim0__top__DOT__inst__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__inst__DOT__fifo__v0;
    }
    vlSelf->top__DOT__nextdata_n = __Vdly__top__DOT__nextdata_n;
    vlSelf->top__DOT__cur_make_code = __Vdly__top__DOT__cur_make_code;
    vlSelf->top__DOT__data = vlSelf->top__DOT__inst__DOT__fifo
        [vlSelf->top__DOT__inst__DOT__r_ptr];
    __Vtableidx6 = (0xfU & (IData)(vlSelf->top__DOT__cnt));
    vlSelf->top__DOT__seg_tmp4 = Vtop__ConstPool__TABLE_h33195002_0
        [__Vtableidx6];
    __Vtableidx7 = (0xfU & ((IData)(vlSelf->top__DOT__cnt) 
                            >> 4U));
    vlSelf->top__DOT__seg_tmp5 = Vtop__ConstPool__TABLE_h33195002_0
        [__Vtableidx7];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->top__DOT__cur_asc2_code));
    vlSelf->top__DOT__seg_tmp0 = Vtop__ConstPool__TABLE_h33195002_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->top__DOT__cur_asc2_code) 
                            >> 4U));
    vlSelf->top__DOT__seg_tmp1 = Vtop__ConstPool__TABLE_h33195002_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & (IData)(vlSelf->top__DOT__cur_make_code));
    vlSelf->top__DOT__seg_tmp2 = Vtop__ConstPool__TABLE_h33195002_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & ((IData)(vlSelf->top__DOT__cur_make_code) 
                            >> 4U));
    vlSelf->top__DOT__seg_tmp3 = Vtop__ConstPool__TABLE_h33195002_0
        [__Vtableidx5];
    vlSelf->seg4 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp4)));
    vlSelf->seg5 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp5)));
    vlSelf->stata = vlSelf->top__DOT__current_state;
    if ((1U == (IData)(vlSelf->top__DOT__current_state))) {
        vlSelf->seg0 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp0)));
        vlSelf->seg1 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp1)));
        vlSelf->seg2 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp2)));
        vlSelf->seg3 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp3)));
    } else {
        vlSelf->seg0 = 0xffU;
        vlSelf->seg1 = 0xffU;
        vlSelf->seg2 = 0xffU;
        vlSelf->seg3 = 0xffU;
    }
    vlSelf->top__DOT__next_stata = ((8U & (IData)(vlSelf->top__DOT__current_state))
                                     ? 0U : ((4U & (IData)(vlSelf->top__DOT__current_state))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->top__DOT__current_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__current_state))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__flag)
                                                    ? 4U
                                                    : 2U))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__current_state))
                                                   ? 
                                                  (((IData)(vlSelf->ready) 
                                                    & (0xf0U 
                                                       == (IData)(vlSelf->top__DOT__data)))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((IData)(vlSelf->ready)
                                                    ? 1U
                                                    : 0U)))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ly/experiment/keyboard/vsrc/top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ly/experiment/keyboard/vsrc/top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->kbd_clk & 0xfeU))) {
        Verilated::overWidthError("kbd_clk");}
    if (VL_UNLIKELY((vlSelf->kbd_data & 0xfeU))) {
        Verilated::overWidthError("kbd_data");}
}
#endif  // VL_DEBUG
