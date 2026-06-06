// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i0__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i0__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i6__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i6__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i1__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i1__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i8__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i8__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i9__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i9__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i2__DOT__state)));
    vlSelfRef.__PVT__s1 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 4U));
    vlSelfRef.__PVT__s2 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 8U));
    vlSelfRef.__PVT__s3 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 0x0000000cU));
    vlSelfRef.__PVT__s5 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 5U));
    vlSelfRef.__PVT__s6 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 9U));
    vlSelfRef.__PVT__s7 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 0x0000000dU));
    vlSelfRef.__PVT__s9 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 6U));
    vlSelfRef.__PVT__s10 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.B) 
                               >> 0x0000000aU));
    vlSelfRef.__PVT__s11 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.B) 
                               >> 0x0000000eU));
    vlSelfRef.__PVT__s13 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.B) 
                               >> 7U));
    vlSelfRef.__PVT__s14 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.B) 
                               >> 0x0000000bU));
    vlSelfRef.__PVT__s15 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.B) 
                               >> 0x0000000fU));
    vlSelfRef.__PVT__s8 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.B) 
                              >> 2U));
    vlSelfRef.__PVT__s12 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.B) 
                               >> 3U));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSelfRef.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSelfRef.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSelfRef.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSelfRef.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSelfRef.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSelfRef.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSelfRef.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSelfRef.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSelfRef.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSelfRef.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSelfRef.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSelfRef.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSelfRef.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSelfRef.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__1(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__1\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i2__DOT__state)));
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i3__DOT__state)));
    vlSelfRef.__PVT__s1 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 4U));
    vlSelfRef.__PVT__s2 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 8U));
    vlSelfRef.__PVT__s3 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 0x0000000cU));
    vlSelfRef.__PVT__s5 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 5U));
    vlSelfRef.__PVT__s6 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 9U));
    vlSelfRef.__PVT__s7 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 0x0000000dU));
    vlSelfRef.__PVT__s8 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 2U));
    vlSelfRef.__PVT__s9 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                           & ((IData)(vlSymsp->TOP.A) 
                              >> 6U));
    vlSelfRef.__PVT__s10 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.A) 
                               >> 0x0000000aU));
    vlSelfRef.__PVT__s11 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.A) 
                               >> 0x0000000eU));
    vlSelfRef.__PVT__s12 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.A) 
                               >> 3U));
    vlSelfRef.__PVT__s13 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.A) 
                               >> 7U));
    vlSelfRef.__PVT__s14 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.A) 
                               >> 0x0000000bU));
    vlSelfRef.__PVT__s15 = ((IData)(vlSymsp->TOP.ALU__DOT__s53) 
                            & ((IData)(vlSymsp->TOP.A) 
                               >> 0x0000000fU));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSelfRef.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSelfRef.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSelfRef.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSelfRef.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSelfRef.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSelfRef.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSelfRef.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSelfRef.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSelfRef.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSelfRef.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSelfRef.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSelfRef.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSelfRef.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSelfRef.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i3__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i12__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i12__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i4__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i4__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i14__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i14__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i5__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i5__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i16__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i16__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i6__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i6__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i18__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i18__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i7__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i7__DOT__state)));
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i8__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i8__DOT__state)));
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i9__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i9__DOT__state)));
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i10__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i10__DOT__state)));
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i11__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i11__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i24__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i24__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i12__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i12__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i26__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i26__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2) 
                     >> 1U));
    }
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i13__DOT__state)));
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0(VALU___0316_BitRegister* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.EN) {
        vlSelfRef.__PVT__DIG_Register_i1__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s1;
        vlSelfRef.__PVT__DIG_Register_i2__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s2;
        vlSelfRef.__PVT__DIG_Register_i3__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s3;
        vlSelfRef.__PVT__DIG_Register_i5__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s5;
        vlSelfRef.__PVT__DIG_Register_i6__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s6;
        vlSelfRef.__PVT__DIG_Register_i7__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s7;
        vlSelfRef.__PVT__DIG_Register_i8__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s8;
        vlSelfRef.__PVT__DIG_Register_i9__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s9;
        vlSelfRef.__PVT__DIG_Register_i10__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s10;
        vlSelfRef.__PVT__DIG_Register_i11__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s11;
        vlSelfRef.__PVT__DIG_Register_i12__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s12;
        vlSelfRef.__PVT__DIG_Register_i13__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s13;
        vlSelfRef.__PVT__DIG_Register_i14__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s14;
        vlSelfRef.__PVT__DIG_Register_i15__DOT__state 
            = vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__s15;
        vlSelfRef.__PVT__DIG_Register_i0__DOT__state 
            = (1U & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3));
        vlSelfRef.__PVT__DIG_Register_i4__DOT__state 
            = (1U & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3) 
                     >> 1U));
    }
    vlSelfRef.EN = (1U & ((~ (IData)(vlSymsp->TOP.ALU__DOT__s53)) 
                          | (IData)(vlSymsp->TOP.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i13__DOT__state)));
}
