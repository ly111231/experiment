// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->declBit(c+38,"kbd_clk", false,-1);
    tracep->declBit(c+39,"kbd_data", false,-1);
    tracep->declBus(c+40,"seg0", false,-1, 7,0);
    tracep->declBus(c+41,"seg1", false,-1, 7,0);
    tracep->declBus(c+42,"seg2", false,-1, 7,0);
    tracep->declBus(c+43,"seg3", false,-1, 7,0);
    tracep->declBus(c+44,"seg4", false,-1, 7,0);
    tracep->declBus(c+45,"seg5", false,-1, 7,0);
    tracep->declBit(c+46,"ready", false,-1);
    tracep->declBit(c+47,"overflow", false,-1);
    tracep->declBus(c+48,"stata", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->declBit(c+38,"kbd_clk", false,-1);
    tracep->declBit(c+39,"kbd_data", false,-1);
    tracep->declBus(c+40,"seg0", false,-1, 7,0);
    tracep->declBus(c+41,"seg1", false,-1, 7,0);
    tracep->declBus(c+42,"seg2", false,-1, 7,0);
    tracep->declBus(c+43,"seg3", false,-1, 7,0);
    tracep->declBus(c+44,"seg4", false,-1, 7,0);
    tracep->declBus(c+45,"seg5", false,-1, 7,0);
    tracep->declBit(c+46,"ready", false,-1);
    tracep->declBit(c+47,"overflow", false,-1);
    tracep->declBus(c+48,"stata", false,-1, 3,0);
    tracep->declBus(c+1,"data", false,-1, 7,0);
    tracep->declBit(c+2,"nextdata_n", false,-1);
    tracep->declBit(c+3,"flag", false,-1);
    tracep->declBus(c+4,"cur_make_code", false,-1, 7,0);
    tracep->declBus(c+5,"cur_asc2_code", false,-1, 7,0);
    tracep->declBus(c+6,"cnt", false,-1, 7,0);
    tracep->declBus(c+50,"IDLE", false,-1, 3,0);
    tracep->declBus(c+51,"MAKE_CODE", false,-1, 3,0);
    tracep->declBus(c+52,"BREAK_CODE", false,-1, 3,0);
    tracep->declBus(c+53,"END_RECEIVE", false,-1, 3,0);
    tracep->declBus(c+7,"current_state", false,-1, 3,0);
    tracep->declBus(c+8,"next_stata", false,-1, 3,0);
    tracep->declBus(c+9,"seg_tmp0", false,-1, 7,0);
    tracep->declBus(c+10,"seg_tmp1", false,-1, 7,0);
    tracep->declBus(c+11,"seg_tmp2", false,-1, 7,0);
    tracep->declBus(c+12,"seg_tmp3", false,-1, 7,0);
    tracep->declBus(c+13,"seg_tmp4", false,-1, 7,0);
    tracep->declBus(c+14,"seg_tmp5", false,-1, 7,0);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+49,"clrn", false,-1);
    tracep->declBit(c+38,"ps2_clk", false,-1);
    tracep->declBit(c+39,"ps2_data", false,-1);
    tracep->declBit(c+2,"nextdata_n", false,-1);
    tracep->declBus(c+1,"data", false,-1, 7,0);
    tracep->declBit(c+46,"ready", false,-1);
    tracep->declBit(c+47,"overflow", false,-1);
    tracep->declBus(c+15,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+16+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+24,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+25,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+26,"count", false,-1, 3,0);
    tracep->declBus(c+27,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBus(c+28,"ps2_data_d2", false,-1, 2,0);
    tracep->declBit(c+29,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u0_seg ");
    tracep->declBus(c+30,"b", false,-1, 3,0);
    tracep->declBus(c+9,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u1_seg ");
    tracep->declBus(c+31,"b", false,-1, 3,0);
    tracep->declBus(c+10,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2_seg ");
    tracep->declBus(c+32,"b", false,-1, 3,0);
    tracep->declBus(c+11,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3_seg ");
    tracep->declBus(c+33,"b", false,-1, 3,0);
    tracep->declBus(c+12,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4_seg ");
    tracep->declBus(c+34,"b", false,-1, 3,0);
    tracep->declBus(c+13,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5_seg ");
    tracep->declBus(c+35,"b", false,-1, 3,0);
    tracep->declBus(c+14,"h", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__data),8);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__nextdata_n));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__flag));
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__cur_make_code),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__cur_asc2_code),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__cnt),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__current_state),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__next_stata),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__seg_tmp0),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__seg_tmp1),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__seg_tmp2),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__seg_tmp3),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__seg_tmp4),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__seg_tmp5),8);
    bufp->fullSData(oldp+15,(vlSelf->top__DOT__inst__DOT__buffer),10);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__inst__DOT__fifo[0]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__inst__DOT__fifo[1]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__inst__DOT__fifo[2]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__inst__DOT__fifo[3]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__inst__DOT__fifo[4]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__inst__DOT__fifo[5]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__inst__DOT__fifo[6]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__inst__DOT__fifo[7]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__inst__DOT__w_ptr),3);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__inst__DOT__r_ptr),3);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__inst__DOT__count),4);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__inst__DOT__ps2_clk_sync),3);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__inst__DOT__ps2_data_d2),3);
    bufp->fullBit(oldp+29,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+30,((0xfU & (IData)(vlSelf->top__DOT__cur_asc2_code))),4);
    bufp->fullCData(oldp+31,((0xfU & ((IData)(vlSelf->top__DOT__cur_asc2_code) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+32,((0xfU & (IData)(vlSelf->top__DOT__cur_make_code))),4);
    bufp->fullCData(oldp+33,((0xfU & ((IData)(vlSelf->top__DOT__cur_make_code) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+34,((0xfU & (IData)(vlSelf->top__DOT__cnt))),4);
    bufp->fullCData(oldp+35,((0xfU & ((IData)(vlSelf->top__DOT__cnt) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+36,(vlSelf->clk));
    bufp->fullBit(oldp+37,(vlSelf->reset));
    bufp->fullBit(oldp+38,(vlSelf->kbd_clk));
    bufp->fullBit(oldp+39,(vlSelf->kbd_data));
    bufp->fullCData(oldp+40,(vlSelf->seg0),8);
    bufp->fullCData(oldp+41,(vlSelf->seg1),8);
    bufp->fullCData(oldp+42,(vlSelf->seg2),8);
    bufp->fullCData(oldp+43,(vlSelf->seg3),8);
    bufp->fullCData(oldp+44,(vlSelf->seg4),8);
    bufp->fullCData(oldp+45,(vlSelf->seg5),8);
    bufp->fullBit(oldp+46,(vlSelf->ready));
    bufp->fullBit(oldp+47,(vlSelf->overflow));
    bufp->fullCData(oldp+48,(vlSelf->stata),4);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+50,(0U),4);
    bufp->fullCData(oldp+51,(1U),4);
    bufp->fullCData(oldp+52,(2U),4);
    bufp->fullCData(oldp+53,(4U),4);
}
