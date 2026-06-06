// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

void VALU___0316_BitRegister___ctor_var_reset(VALU___0316_BitRegister* vlSelf);

VALU___0316_BitRegister::VALU___0316_BitRegister() = default;
VALU___0316_BitRegister::~VALU___0316_BitRegister() = default;

void VALU___0316_BitRegister::ctor(VALU__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VALU___0316_BitRegister___ctor_var_reset(this);
}

void VALU___0316_BitRegister::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VALU___0316_BitRegister::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
