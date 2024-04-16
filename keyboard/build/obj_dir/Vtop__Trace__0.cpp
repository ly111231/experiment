// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__data),8);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__nextdata_n));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__flag));
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__cur_make_code),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__cur_asc2_code),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__cnt),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__current_state),4);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__next_stata),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__seg_tmp0),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__seg_tmp1),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__seg_tmp2),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__seg_tmp3),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__seg_tmp4),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__seg_tmp5),8);
        bufp->chgSData(oldp+14,(vlSelf->top__DOT__inst__DOT__buffer),10);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__inst__DOT__fifo[0]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__inst__DOT__fifo[1]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__inst__DOT__fifo[2]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__inst__DOT__fifo[3]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__inst__DOT__fifo[4]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__inst__DOT__fifo[5]),8);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__inst__DOT__fifo[6]),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__inst__DOT__fifo[7]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__inst__DOT__w_ptr),3);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__inst__DOT__r_ptr),3);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__inst__DOT__count),4);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__inst__DOT__ps2_clk_sync),3);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__inst__DOT__ps2_data_d2),3);
        bufp->chgBit(oldp+28,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync))))));
        bufp->chgCData(oldp+29,((0xfU & (IData)(vlSelf->top__DOT__cur_asc2_code))),4);
        bufp->chgCData(oldp+30,((0xfU & ((IData)(vlSelf->top__DOT__cur_asc2_code) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+31,((0xfU & (IData)(vlSelf->top__DOT__cur_make_code))),4);
        bufp->chgCData(oldp+32,((0xfU & ((IData)(vlSelf->top__DOT__cur_make_code) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+33,((0xfU & (IData)(vlSelf->top__DOT__cnt))),4);
        bufp->chgCData(oldp+34,((0xfU & ((IData)(vlSelf->top__DOT__cnt) 
                                         >> 4U))),4);
    }
    bufp->chgBit(oldp+35,(vlSelf->clk));
    bufp->chgBit(oldp+36,(vlSelf->reset));
    bufp->chgBit(oldp+37,(vlSelf->kbd_clk));
    bufp->chgBit(oldp+38,(vlSelf->kbd_data));
    bufp->chgCData(oldp+39,(vlSelf->seg0),8);
    bufp->chgCData(oldp+40,(vlSelf->seg1),8);
    bufp->chgCData(oldp+41,(vlSelf->seg2),8);
    bufp->chgCData(oldp+42,(vlSelf->seg3),8);
    bufp->chgCData(oldp+43,(vlSelf->seg4),8);
    bufp->chgCData(oldp+44,(vlSelf->seg5),8);
    bufp->chgBit(oldp+45,(vlSelf->ready));
    bufp->chgBit(oldp+46,(vlSelf->overflow));
    bufp->chgCData(oldp+47,(vlSelf->stata),4);
    bufp->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->reset)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
