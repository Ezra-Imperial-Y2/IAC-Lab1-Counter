// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtopLayer.h for the primary calling header

#ifndef VERILATED_VTOPLAYER___024ROOT_H_
#define VERILATED_VTOPLAYER___024ROOT_H_  // guard

#include "verilated.h"

class VtopLayer__Syms;

class VtopLayer___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(v,7,0);
    CData/*7:0*/ topLayer__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT16(bcd,11,0);
    IData/*19:0*/ topLayer__DOT__myDecoder__DOT__result;

    // INTERNAL VARIABLES
    VtopLayer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtopLayer___024root(VtopLayer__Syms* symsp, const char* name);
    ~VtopLayer___024root();
    VL_UNCOPYABLE(VtopLayer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
