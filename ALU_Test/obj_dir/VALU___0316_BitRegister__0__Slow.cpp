// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

VL_ATTR_COLD void VALU___0316_BitRegister___eval_static__TOP__ALU__DOT____0316_BitRegister_i5(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___eval_static__TOP__ALU__DOT____0316_BitRegister_i5\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__DIG_Register_i0__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i1__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i2__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i3__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i4__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i5__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i6__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i7__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i8__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i9__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i10__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i11__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i12__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i13__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i14__DOT__state = 0U;
    vlSelfRef.__PVT__DIG_Register_i15__DOT__state = 0U;
}

VL_ATTR_COLD void VALU___0316_BitRegister___ctor_var_reset(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ctor_var_reset\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->D = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9391737413944127320ull);
    vlSelf->EN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14623712832743575250ull);
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->Q0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12932224490550198225ull);
    vlSelf->Q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13532830657779382464ull);
    vlSelf->Q2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2889597185851374052ull);
    vlSelf->Q3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 389017435972163806ull);
    vlSelf->Q4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13773510078020457882ull);
    vlSelf->Q5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8031446562879561649ull);
    vlSelf->Q6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13694865584346184397ull);
    vlSelf->Q7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 225988904258840035ull);
    vlSelf->Q8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 825979404284436616ull);
    vlSelf->Q9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5282836022041838143ull);
    vlSelf->Q10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11133409301775852745ull);
    vlSelf->Q11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2514460987124065757ull);
    vlSelf->Q12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2878600076444932518ull);
    vlSelf->Q13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7203216998111319356ull);
    vlSelf->Q14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7500021449041615377ull);
    vlSelf->Q15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4848083444900403387ull);
    vlSelf->__PVT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4753788280039121835ull);
    vlSelf->__PVT__s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14966854839801065251ull);
    vlSelf->__PVT__s3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17897891470873596469ull);
    vlSelf->__PVT__s5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9098317761626649321ull);
    vlSelf->__PVT__s6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2329287311852916947ull);
    vlSelf->__PVT__s7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8038506487359073229ull);
    vlSelf->__PVT__s8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8867709290003845170ull);
    vlSelf->__PVT__s9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15073802288006578424ull);
    vlSelf->__PVT__s10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13663337376319666892ull);
    vlSelf->__PVT__s11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12947617318936077727ull);
    vlSelf->__PVT__s12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4978410490650617232ull);
    vlSelf->__PVT__s13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 484222550069403370ull);
    vlSelf->__PVT__s14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3353957255920211111ull);
    vlSelf->__PVT__s15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13278760190937594925ull);
}
