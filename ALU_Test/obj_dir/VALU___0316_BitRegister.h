// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___0316_BITREGISTER_H_
#define VERILATED_VALU___0316_BITREGISTER_H_  // guard

#include "verilated.h"


class VALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU___0316_BitRegister final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ EN;
    CData/*0:0*/ CLK;
    CData/*0:0*/ Q0;
    CData/*0:0*/ Q1;
    CData/*0:0*/ Q2;
    CData/*0:0*/ Q3;
    CData/*0:0*/ Q4;
    CData/*0:0*/ Q5;
    CData/*0:0*/ Q6;
    CData/*0:0*/ Q7;
    CData/*0:0*/ Q8;
    CData/*0:0*/ Q9;
    CData/*0:0*/ Q10;
    CData/*0:0*/ Q11;
    CData/*0:0*/ Q12;
    CData/*0:0*/ Q13;
    CData/*0:0*/ Q14;
    CData/*0:0*/ Q15;
    CData/*0:0*/ __PVT__s1;
    CData/*0:0*/ __PVT__s2;
    CData/*0:0*/ __PVT__s3;
    CData/*0:0*/ __PVT__s5;
    CData/*0:0*/ __PVT__s6;
    CData/*0:0*/ __PVT__s7;
    CData/*0:0*/ __PVT__s8;
    CData/*0:0*/ __PVT__s9;
    CData/*0:0*/ __PVT__s10;
    CData/*0:0*/ __PVT__s11;
    CData/*0:0*/ __PVT__s12;
    CData/*0:0*/ __PVT__s13;
    CData/*0:0*/ __PVT__s14;
    CData/*0:0*/ __PVT__s15;
    CData/*0:0*/ __PVT__DIG_Register_i0__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i1__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i2__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i3__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i4__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i5__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i6__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i7__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i8__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i9__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i10__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i11__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i12__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i13__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i14__DOT__state;
    CData/*0:0*/ __PVT__DIG_Register_i15__DOT__state;
    SData/*15:0*/ D;

    // INTERNAL VARIABLES
    VALU__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VALU___0316_BitRegister();
    ~VALU___0316_BitRegister();
    void ctor(VALU__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VALU___0316_BitRegister);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
