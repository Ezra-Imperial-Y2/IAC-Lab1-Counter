// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtopLayer.h"
#include "VtopLayer__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VtopLayer::VtopLayer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtopLayer__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , v{vlSymsp->TOP.v}
    , bcd{vlSymsp->TOP.bcd}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VtopLayer::VtopLayer(const char* _vcname__)
    : VtopLayer(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtopLayer::~VtopLayer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VtopLayer___024root___eval_initial(VtopLayer___024root* vlSelf);
void VtopLayer___024root___eval_settle(VtopLayer___024root* vlSelf);
void VtopLayer___024root___eval(VtopLayer___024root* vlSelf);
#ifdef VL_DEBUG
void VtopLayer___024root___eval_debug_assertions(VtopLayer___024root* vlSelf);
#endif  // VL_DEBUG
void VtopLayer___024root___final(VtopLayer___024root* vlSelf);

static void _eval_initial_loop(VtopLayer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VtopLayer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VtopLayer___024root___eval_settle(&(vlSymsp->TOP));
        VtopLayer___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VtopLayer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtopLayer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtopLayer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VtopLayer___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VtopLayer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VtopLayer::final() {
    VtopLayer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtopLayer::hierName() const { return vlSymsp->name(); }
const char* VtopLayer::modelName() const { return "VtopLayer"; }
unsigned VtopLayer::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VtopLayer::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VtopLayer___024root__trace_init_top(VtopLayer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VtopLayer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtopLayer___024root*>(voidSelf);
    VtopLayer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VtopLayer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VtopLayer___024root__trace_register(VtopLayer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VtopLayer::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VtopLayer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
