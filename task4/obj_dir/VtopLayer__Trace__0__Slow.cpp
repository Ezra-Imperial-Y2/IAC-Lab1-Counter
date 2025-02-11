// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VtopLayer__Syms.h"


VL_ATTR_COLD void VtopLayer___024root__trace_init_sub__TOP__0(VtopLayer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"v", false,-1, 7,0);
    tracep->declBus(c+5,"bcd", false,-1, 11,0);
    tracep->pushNamePrefix("topLayer ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"v", false,-1, 7,0);
    tracep->declBus(c+5,"bcd", false,-1, 11,0);
    tracep->declBus(c+6,"count", false,-1, 7,0);
    tracep->pushNamePrefix("myCounter ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+6,"count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myDecoder ");
    tracep->declBus(c+4,"x", false,-1, 7,0);
    tracep->declBus(c+5,"BCD", false,-1, 11,0);
    tracep->declBus(c+7,"result", false,-1, 19,0);
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VtopLayer___024root__trace_init_top(VtopLayer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root__trace_init_top\n"); );
    // Body
    VtopLayer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VtopLayer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtopLayer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtopLayer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VtopLayer___024root__trace_register(VtopLayer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VtopLayer___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VtopLayer___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VtopLayer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VtopLayer___024root__trace_full_sub_0(VtopLayer___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VtopLayer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root__trace_full_top_0\n"); );
    // Init
    VtopLayer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopLayer___024root*>(voidSelf);
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VtopLayer___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VtopLayer___024root__trace_full_sub_0(VtopLayer___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtopLayer___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->v),8);
    bufp->fullSData(oldp+5,(vlSelf->bcd),12);
    bufp->fullCData(oldp+6,(vlSelf->topLayer__DOT__count),8);
    bufp->fullIData(oldp+7,(vlSelf->topLayer__DOT__myDecoder__DOT__result),20);
    bufp->fullIData(oldp+8,(8U),32);
    bufp->fullIData(oldp+9,(8U),32);
}
