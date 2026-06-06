// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VALU__pch.h"

VALU__Syms::VALU__Syms(VerilatedContext* contextp, const char* namep, VALU* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(480);
    // Setup sub module instances
    TOP__ALU__DOT____0316_BitRegister_i10.ctor(this, "ALU.16_BitRegister_i10");
    TOP__ALU__DOT____0316_BitRegister_i11.ctor(this, "ALU.16_BitRegister_i11");
    TOP__ALU__DOT____0316_BitRegister_i12.ctor(this, "ALU.16_BitRegister_i12");
    TOP__ALU__DOT____0316_BitRegister_i13.ctor(this, "ALU.16_BitRegister_i13");
    TOP__ALU__DOT____0316_BitRegister_i14.ctor(this, "ALU.16_BitRegister_i14");
    TOP__ALU__DOT____0316_BitRegister_i15.ctor(this, "ALU.16_BitRegister_i15");
    TOP__ALU__DOT____0316_BitRegister_i16.ctor(this, "ALU.16_BitRegister_i16");
    TOP__ALU__DOT____0316_BitRegister_i17.ctor(this, "ALU.16_BitRegister_i17");
    TOP__ALU__DOT____0316_BitRegister_i18.ctor(this, "ALU.16_BitRegister_i18");
    TOP__ALU__DOT____0316_BitRegister_i19.ctor(this, "ALU.16_BitRegister_i19");
    TOP__ALU__DOT____0316_BitRegister_i20.ctor(this, "ALU.16_BitRegister_i20");
    TOP__ALU__DOT____0316_BitRegister_i21.ctor(this, "ALU.16_BitRegister_i21");
    TOP__ALU__DOT____0316_BitRegister_i22.ctor(this, "ALU.16_BitRegister_i22");
    TOP__ALU__DOT____0316_BitRegister_i23.ctor(this, "ALU.16_BitRegister_i23");
    TOP__ALU__DOT____0316_BitRegister_i24.ctor(this, "ALU.16_BitRegister_i24");
    TOP__ALU__DOT____0316_BitRegister_i25.ctor(this, "ALU.16_BitRegister_i25");
    TOP__ALU__DOT____0316_BitRegister_i26.ctor(this, "ALU.16_BitRegister_i26");
    TOP__ALU__DOT____0316_BitRegister_i27.ctor(this, "ALU.16_BitRegister_i27");
    TOP__ALU__DOT____0316_BitRegister_i5.ctor(this, "ALU.16_BitRegister_i5");
    TOP__ALU__DOT____0316_BitRegister_i6.ctor(this, "ALU.16_BitRegister_i6");
    TOP__ALU__DOT____0316_BitRegister_i7.ctor(this, "ALU.16_BitRegister_i7");
    TOP__ALU__DOT____0316_BitRegister_i8.ctor(this, "ALU.16_BitRegister_i8");
    TOP__ALU__DOT____0316_BitRegister_i9.ctor(this, "ALU.16_BitRegister_i9");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ALU__DOT____0316_BitRegister_i10 = &TOP__ALU__DOT____0316_BitRegister_i10;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i11 = &TOP__ALU__DOT____0316_BitRegister_i11;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i12 = &TOP__ALU__DOT____0316_BitRegister_i12;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i13 = &TOP__ALU__DOT____0316_BitRegister_i13;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i14 = &TOP__ALU__DOT____0316_BitRegister_i14;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i15 = &TOP__ALU__DOT____0316_BitRegister_i15;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i16 = &TOP__ALU__DOT____0316_BitRegister_i16;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i17 = &TOP__ALU__DOT____0316_BitRegister_i17;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i18 = &TOP__ALU__DOT____0316_BitRegister_i18;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i19 = &TOP__ALU__DOT____0316_BitRegister_i19;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i20 = &TOP__ALU__DOT____0316_BitRegister_i20;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i21 = &TOP__ALU__DOT____0316_BitRegister_i21;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i22 = &TOP__ALU__DOT____0316_BitRegister_i22;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i23 = &TOP__ALU__DOT____0316_BitRegister_i23;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i24 = &TOP__ALU__DOT____0316_BitRegister_i24;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i25 = &TOP__ALU__DOT____0316_BitRegister_i25;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i26 = &TOP__ALU__DOT____0316_BitRegister_i26;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i27 = &TOP__ALU__DOT____0316_BitRegister_i27;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i5 = &TOP__ALU__DOT____0316_BitRegister_i5;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i6 = &TOP__ALU__DOT____0316_BitRegister_i6;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i7 = &TOP__ALU__DOT____0316_BitRegister_i7;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i8 = &TOP__ALU__DOT____0316_BitRegister_i8;
    TOP.__PVT__ALU__DOT____0316_BitRegister_i9 = &TOP__ALU__DOT____0316_BitRegister_i9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ALU__DOT____0316_BitRegister_i10.__Vconfigure(true);
    TOP__ALU__DOT____0316_BitRegister_i11.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i12.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i13.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i14.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i15.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i16.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i17.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i18.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i19.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i20.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i21.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i22.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i23.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i24.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i25.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i26.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i27.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i5.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i6.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i7.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i8.__Vconfigure(false);
    TOP__ALU__DOT____0316_BitRegister_i9.__Vconfigure(false);
    // Setup scopes
}

VALU__Syms::~VALU__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__ALU__DOT____0316_BitRegister_i9.dtor();
    TOP__ALU__DOT____0316_BitRegister_i8.dtor();
    TOP__ALU__DOT____0316_BitRegister_i7.dtor();
    TOP__ALU__DOT____0316_BitRegister_i6.dtor();
    TOP__ALU__DOT____0316_BitRegister_i5.dtor();
    TOP__ALU__DOT____0316_BitRegister_i27.dtor();
    TOP__ALU__DOT____0316_BitRegister_i26.dtor();
    TOP__ALU__DOT____0316_BitRegister_i25.dtor();
    TOP__ALU__DOT____0316_BitRegister_i24.dtor();
    TOP__ALU__DOT____0316_BitRegister_i23.dtor();
    TOP__ALU__DOT____0316_BitRegister_i22.dtor();
    TOP__ALU__DOT____0316_BitRegister_i21.dtor();
    TOP__ALU__DOT____0316_BitRegister_i20.dtor();
    TOP__ALU__DOT____0316_BitRegister_i19.dtor();
    TOP__ALU__DOT____0316_BitRegister_i18.dtor();
    TOP__ALU__DOT____0316_BitRegister_i17.dtor();
    TOP__ALU__DOT____0316_BitRegister_i16.dtor();
    TOP__ALU__DOT____0316_BitRegister_i15.dtor();
    TOP__ALU__DOT____0316_BitRegister_i14.dtor();
    TOP__ALU__DOT____0316_BitRegister_i13.dtor();
    TOP__ALU__DOT____0316_BitRegister_i12.dtor();
    TOP__ALU__DOT____0316_BitRegister_i11.dtor();
    TOP__ALU__DOT____0316_BitRegister_i10.dtor();
}
