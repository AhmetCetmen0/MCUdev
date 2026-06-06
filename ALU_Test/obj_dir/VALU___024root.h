// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
class VALU___0316_BitRegister;


class VALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU___024root final {
  public:
    // CELLS
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i5;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i6;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i7;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i8;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i9;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i10;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i11;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i12;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i13;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i14;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i15;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i16;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i17;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i18;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i19;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i20;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i21;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i22;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i23;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i24;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i25;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i26;
    VALU___0316_BitRegister* __PVT__ALU__DOT____0316_BitRegister_i27;

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(En,0,0);
    VL_IN8(Opcode,3,0);
    VL_IN8(Carry_In,0,0);
    VL_IN8(Borrow_In,0,0);
    VL_OUT8(Carry_Out,0,0);
    VL_OUT8(Borrow_Out,0,0);
    VL_OUT8(SLT,0,0);
    VL_OUT8(LSU_EN,0,0);
    VL_OUT8(SLTU,0,0);
    VL_OUT8(SERACC_EN,0,0);
    CData/*0:0*/ ALU__DOT__s53;
    CData/*3:0*/ ALU__DOT__s341;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i0__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i1__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i2__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i3__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i4__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i5__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i6__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i7__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i8__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i9__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i10__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i11__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i12__DOT__state;
    CData/*0:0*/ ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i13__DOT__state;
    CData/*3:0*/ ALU__DOT__DIG_Register_BUS_i31__DOT__state;
    CData/*3:0*/ ALU__DOT__DIG_Register_BUS_i32__DOT__state;
    CData/*3:0*/ ALU__DOT__DIG_Register_BUS_i33__DOT__state;
    CData/*3:0*/ ALU__DOT__DIG_Register_BUS_i34__DOT__state;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN16(A,15,0);
    VL_IN16(B,15,0);
    VL_OUT16(Sum,15,0);
    VL_OUT16(Sub,15,0);
    VL_OUT16(mul_low,15,0);
    VL_OUT16(mul_high,15,0);
    VL_OUT16(AND,15,0);
    VL_OUT16(XOR,15,0);
    VL_OUT16(OR,15,0);
    VL_OUT16(Not,15,0);
    VL_OUT16(SAR,15,0);
    VL_OUT16(SHR,15,0);
    VL_OUT16(SHL,15,0);
    VL_OUT16(ROR,15,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VALU___024root(VALU__Syms* symsp, const char* namep);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
