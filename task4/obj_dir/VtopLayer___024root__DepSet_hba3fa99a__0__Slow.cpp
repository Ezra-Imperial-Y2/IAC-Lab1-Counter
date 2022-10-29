// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopLayer.h for the primary calling header

#include "verilated.h"

#include "VtopLayer___024root.h"

VL_ATTR_COLD void VtopLayer___024root___eval_initial(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VtopLayer___024root___combo__TOP__0(VtopLayer___024root* vlSelf);

VL_ATTR_COLD void VtopLayer___024root___eval_settle(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___eval_settle\n"); );
    // Body
    VtopLayer___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VtopLayer___024root___final(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___final\n"); );
}

VL_ATTR_COLD void VtopLayer___024root___ctor_var_reset(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->v = VL_RAND_RESET_I(8);
    vlSelf->bcd = VL_RAND_RESET_I(12);
    vlSelf->topLayer__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->topLayer__DOT__myDecoder__DOT__result = VL_RAND_RESET_I(20);
}
