// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopLayer.h for the primary calling header

#include "verilated.h"

#include "VtopLayer___024root.h"

VL_INLINE_OPT void VtopLayer___024root___combo__TOP__0(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 0U;
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        ((0xfff00U & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
         | (IData)(vlSelf->v));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->topLayer__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelf->topLayer__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->topLayer__DOT__myDecoder__DOT__result = 
        (0xfffffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                     << 1U));
    vlSelf->bcd = (0xfffU & (vlSelf->topLayer__DOT__myDecoder__DOT__result 
                             >> 8U));
}

VL_INLINE_OPT void VtopLayer___024root___sequent__TOP__0(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->topLayer__DOT__count = ((IData)(vlSelf->rst)
                                     ? 0U : (0xffU 
                                             & ((IData)(vlSelf->topLayer__DOT__count) 
                                                + (IData)(vlSelf->en))));
}

void VtopLayer___024root___eval(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___eval\n"); );
    // Body
    VtopLayer___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VtopLayer___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VtopLayer___024root___eval_debug_assertions(VtopLayer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
