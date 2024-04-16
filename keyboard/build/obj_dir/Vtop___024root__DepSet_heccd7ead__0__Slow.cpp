// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ly/experiment/keyboard/vsrc/top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h33195002_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
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
    // Body
    vlSelf->stata = vlSelf->top__DOT__current_state;
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
    vlSelf->top__DOT__data = vlSelf->top__DOT__inst__DOT__fifo
        [vlSelf->top__DOT__inst__DOT__r_ptr];
    vlSelf->seg4 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp4)));
    vlSelf->seg5 = (0xffU & (~ (IData)(vlSelf->top__DOT__seg_tmp5)));
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->kbd_clk = 0;
    vlSelf->kbd_data = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 0;
    vlSelf->seg3 = 0;
    vlSelf->seg4 = 0;
    vlSelf->seg5 = 0;
    vlSelf->ready = 0;
    vlSelf->overflow = 0;
    vlSelf->stata = 0;
    vlSelf->top__DOT__data = 0;
    vlSelf->top__DOT__nextdata_n = 0;
    vlSelf->top__DOT__flag = 0;
    vlSelf->top__DOT__cur_make_code = 0;
    vlSelf->top__DOT__cur_asc2_code = 0;
    vlSelf->top__DOT__cnt = 0;
    vlSelf->top__DOT__current_state = 0;
    vlSelf->top__DOT__next_stata = 0;
    vlSelf->top__DOT__seg_tmp0 = 0;
    vlSelf->top__DOT__seg_tmp1 = 0;
    vlSelf->top__DOT__seg_tmp2 = 0;
    vlSelf->top__DOT__seg_tmp3 = 0;
    vlSelf->top__DOT__seg_tmp4 = 0;
    vlSelf->top__DOT__seg_tmp5 = 0;
    vlSelf->top__DOT__inst__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__inst__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst__DOT__w_ptr = 0;
    vlSelf->top__DOT__inst__DOT__r_ptr = 0;
    vlSelf->top__DOT__inst__DOT__count = 0;
    vlSelf->top__DOT__inst__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__inst__DOT__ps2_data_d2 = 0;
    vlSelf->top__DOT__inst__DOT____Vlvbound_h1a91ade8__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
