// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU__pch.h"

//============================================================
// Constructors

VALU::VALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALU__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , En{vlSymsp->TOP.En}
    , Opcode{vlSymsp->TOP.Opcode}
    , Carry_In{vlSymsp->TOP.Carry_In}
    , Borrow_In{vlSymsp->TOP.Borrow_In}
    , Carry_Out{vlSymsp->TOP.Carry_Out}
    , Borrow_Out{vlSymsp->TOP.Borrow_Out}
    , SLT{vlSymsp->TOP.SLT}
    , LSU_EN{vlSymsp->TOP.LSU_EN}
    , SLTU{vlSymsp->TOP.SLTU}
    , SERACC_EN{vlSymsp->TOP.SERACC_EN}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Sum{vlSymsp->TOP.Sum}
    , Sub{vlSymsp->TOP.Sub}
    , mul_low{vlSymsp->TOP.mul_low}
    , mul_high{vlSymsp->TOP.mul_high}
    , AND{vlSymsp->TOP.AND}
    , XOR{vlSymsp->TOP.XOR}
    , OR{vlSymsp->TOP.OR}
    , Not{vlSymsp->TOP.Not}
    , SAR{vlSymsp->TOP.SAR}
    , SHR{vlSymsp->TOP.SHR}
    , SHL{vlSymsp->TOP.SHL}
    , ROR{vlSymsp->TOP.ROR}
    , __PVT__ALU__DOT____0316_BitRegister_i5{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i5}
    , __PVT__ALU__DOT____0316_BitRegister_i6{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i6}
    , __PVT__ALU__DOT____0316_BitRegister_i7{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i7}
    , __PVT__ALU__DOT____0316_BitRegister_i8{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i8}
    , __PVT__ALU__DOT____0316_BitRegister_i9{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i9}
    , __PVT__ALU__DOT____0316_BitRegister_i10{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i10}
    , __PVT__ALU__DOT____0316_BitRegister_i11{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i11}
    , __PVT__ALU__DOT____0316_BitRegister_i12{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i12}
    , __PVT__ALU__DOT____0316_BitRegister_i13{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i13}
    , __PVT__ALU__DOT____0316_BitRegister_i14{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i14}
    , __PVT__ALU__DOT____0316_BitRegister_i15{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i15}
    , __PVT__ALU__DOT____0316_BitRegister_i16{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i16}
    , __PVT__ALU__DOT____0316_BitRegister_i17{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i17}
    , __PVT__ALU__DOT____0316_BitRegister_i18{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i18}
    , __PVT__ALU__DOT____0316_BitRegister_i19{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i19}
    , __PVT__ALU__DOT____0316_BitRegister_i20{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i20}
    , __PVT__ALU__DOT____0316_BitRegister_i21{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i21}
    , __PVT__ALU__DOT____0316_BitRegister_i22{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i22}
    , __PVT__ALU__DOT____0316_BitRegister_i23{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i23}
    , __PVT__ALU__DOT____0316_BitRegister_i24{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i24}
    , __PVT__ALU__DOT____0316_BitRegister_i25{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i25}
    , __PVT__ALU__DOT____0316_BitRegister_i26{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i26}
    , __PVT__ALU__DOT____0316_BitRegister_i27{vlSymsp->TOP.__PVT__ALU__DOT____0316_BitRegister_i27}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VALU::VALU(const char* _vcname__)
    : VALU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALU::~VALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf);
#endif  // VL_DEBUG
void VALU___024root___eval_static(VALU___024root* vlSelf);
void VALU___024root___eval_initial(VALU___024root* vlSelf);
void VALU___024root___eval_settle(VALU___024root* vlSelf);
void VALU___024root___eval(VALU___024root* vlSelf);

void VALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VALU___024root___eval_static(&(vlSymsp->TOP));
        VALU___024root___eval_initial(&(vlSymsp->TOP));
        VALU___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VALU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VALU::eventsPending() { return false; }

uint64_t VALU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VALU___024root___eval_final(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU::final() {
    VALU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALU::hierName() const { return vlSymsp->name(); }
const char* VALU::modelName() const { return "VALU"; }
unsigned VALU::threads() const { return 1; }
void VALU::prepareClone() const { contextp()->prepareClone(); }
void VALU::atClone() const {
    contextp()->threadPoolpOnClone();
}
