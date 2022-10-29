// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtopLayer.h for the primary calling header

#include "verilated.h"

#include "VtopLayer__Syms.h"
#include "VtopLayer___024root.h"

void VtopLayer___024root___ctor_var_reset(VtopLayer___024root* vlSelf);

VtopLayer___024root::VtopLayer___024root(VtopLayer__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtopLayer___024root___ctor_var_reset(this);
}

void VtopLayer___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VtopLayer___024root::~VtopLayer___024root() {
}
