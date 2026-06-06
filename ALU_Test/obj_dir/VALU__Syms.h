// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU__SYMS_H_
#define VERILATED_VALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VALU.h"

// INCLUDE MODULE CLASSES
#include "VALU___024root.h"
#include "VALU___0316_BitRegister.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VALU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VALU* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VALU___024root                 TOP;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i10;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i11;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i12;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i13;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i14;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i15;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i16;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i17;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i18;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i19;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i20;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i21;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i22;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i23;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i24;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i25;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i26;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i27;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i5;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i6;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i7;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i8;
    VALU___0316_BitRegister        TOP__ALU__DOT____0316_BitRegister_i9;

    // CONSTRUCTORS
    VALU__Syms(VerilatedContext* contextp, const char* namep, VALU* modelp);
    ~VALU__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
