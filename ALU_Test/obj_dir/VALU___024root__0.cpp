// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

void VALU___024root___eval_triggers_vec__ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers_vec__ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool VALU___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ ALU__DOT__SERACC_EN_temp;
    ALU__DOT__SERACC_EN_temp = 0;
    CData/*0:0*/ ALU__DOT__LSU_EN_temp;
    ALU__DOT__LSU_EN_temp = 0;
    IData/*16:0*/ ALU__DOT__DIG_Add_i35__DOT__temp;
    ALU__DOT__DIG_Add_i35__DOT__temp = 0;
    IData/*16:0*/ ALU__DOT__DIG_Sub_i36__DOT__temp;
    ALU__DOT__DIG_Sub_i36__DOT__temp = 0;
    // Body
    ALU__DOT__DIG_Add_i35__DOT__temp = (0x0001ffffU 
                                        & ((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i15__DOT__state) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i11__DOT__state) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i7__DOT__state) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i3__DOT__state))) 
                                              << 0x0000000cU) 
                                             | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i14__DOT__state) 
                                                   << 3U) 
                                                  | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i10__DOT__state) 
                                                     << 2U)) 
                                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i6__DOT__state) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i2__DOT__state))) 
                                                << 8U)) 
                                            | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i13__DOT__state) 
                                                   << 3U) 
                                                  | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i9__DOT__state) 
                                                     << 2U)) 
                                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i5__DOT__state) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i1__DOT__state))) 
                                                << 4U) 
                                               | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i12__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i8__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i4__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i0__DOT__state))))) 
                                           + ((((((
                                                   ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i15__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i11__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i7__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i3__DOT__state))) 
                                                 << 0x0000000cU) 
                                                | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                                               | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i13__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i9__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i5__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i1__DOT__state))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i12__DOT__state) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i8__DOT__state) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i4__DOT__state) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i0__DOT__state))))) 
                                              + (IData)(vlSelfRef.Carry_In))));
    ALU__DOT__DIG_Sub_i36__DOT__temp = (0x0001ffffU 
                                        & (((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i15__DOT__state) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i11__DOT__state) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i7__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i3__DOT__state))) 
                                               << 0x0000000cU) 
                                              | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i14__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i10__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i6__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i2__DOT__state))) 
                                                 << 8U)) 
                                             | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i13__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i9__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i5__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i1__DOT__state))) 
                                                 << 4U) 
                                                | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i12__DOT__state) 
                                                     << 3U) 
                                                    | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i8__DOT__state) 
                                                       << 2U)) 
                                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i4__DOT__state) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i0__DOT__state))))) 
                                            - (((((
                                                   ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i15__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i11__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i7__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i3__DOT__state))) 
                                                 << 0x0000000cU) 
                                                | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                                               | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i13__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i9__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i5__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i1__DOT__state))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i12__DOT__state) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i8__DOT__state) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i4__DOT__state) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i0__DOT__state)))))) 
                                           - (IData)(vlSelfRef.Borrow_In)));
    ALU__DOT__SERACC_EN_temp = ((IData)(vlSelfRef.En) 
                                & (0x0eU == (IData)(vlSelfRef.Opcode)));
    ALU__DOT__LSU_EN_temp = ((IData)(vlSelfRef.En) 
                             & (0x0fU == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.Sum = (0x0000ffffU & ALU__DOT__DIG_Add_i35__DOT__temp);
    vlSelfRef.Carry_Out = (1U & (ALU__DOT__DIG_Add_i35__DOT__temp 
                                 >> 0x00000010U));
    vlSelfRef.Borrow_Out = (1U & (ALU__DOT__DIG_Sub_i36__DOT__temp 
                                  >> 0x00000010U));
    vlSelfRef.Sub = (0x0000ffffU & ALU__DOT__DIG_Sub_i36__DOT__temp);
    vlSelfRef.SERACC_EN = ALU__DOT__SERACC_EN_temp;
    vlSelfRef.LSU_EN = ALU__DOT__LSU_EN_temp;
    vlSelfRef.ALU__DOT__s53 = ((~ ((IData)(ALU__DOT__LSU_EN_temp) 
                                   | (IData)(ALU__DOT__SERACC_EN_temp))) 
                               & (IData)(vlSelfRef.En));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (3U 
                                                & ((- (IData)((IData)(vlSelfRef.ALU__DOT__s53))) 
                                                   & (IData)(vlSelfRef.A)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (3U 
                                                & ((- (IData)((IData)(vlSelfRef.ALU__DOT__s53))) 
                                                   & (IData)(vlSelfRef.B)));
}

void VALU___024root___ico_sequent__TOP__1(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__1\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ ALU__DOT__s460;
    ALU__DOT__s460 = 0;
    CData/*3:0*/ ALU__DOT__s461;
    ALU__DOT__s461 = 0;
    CData/*0:0*/ ALU__DOT__s462;
    ALU__DOT__s462 = 0;
    SData/*15:0*/ ALU__DOT__s465;
    ALU__DOT__s465 = 0;
    CData/*1:0*/ ALU__DOT__s466;
    ALU__DOT__s466 = 0;
    SData/*15:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s1;
    ALU__DOT__Barrel_Shifter_i47__DOT__s1 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s6;
    ALU__DOT__Barrel_Shifter_i47__DOT__s6 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s10;
    ALU__DOT__Barrel_Shifter_i47__DOT__s10 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s13;
    ALU__DOT__Barrel_Shifter_i47__DOT__s13 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s16;
    ALU__DOT__Barrel_Shifter_i47__DOT__s16 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s19;
    ALU__DOT__Barrel_Shifter_i47__DOT__s19 = 0;
    // Body
    vlSelfRef.ALU__DOT__s341 = (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s12) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__s8) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)));
    ALU__DOT__s466 = ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.EN)
                       ? 3U : ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.EN)
                                ? 2U : ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.EN)
                                         ? 1U : 0U)));
    ALU__DOT__s462 = (IData)((2U == (IData)(ALU__DOT__s466)));
    if ((2U & (IData)(ALU__DOT__s466))) {
        if ((1U & (IData)(ALU__DOT__s466))) {
            ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i31__DOT__state;
            ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i15__DOT__state) 
                                   << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i11__DOT__state) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i7__DOT__state) 
                                     << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i3__DOT__state))) 
                                << 0x0000000cU) | (
                                                   ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                              | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i13__DOT__state) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i9__DOT__state) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i5__DOT__state) 
                                       << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i1__DOT__state))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i12__DOT__state) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i8__DOT__state) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i4__DOT__state) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i0__DOT__state)))));
        } else {
            ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i32__DOT__state;
            ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i15__DOT__state) 
                                   << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i11__DOT__state) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i7__DOT__state) 
                                     << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i3__DOT__state))) 
                                << 0x0000000cU) | (
                                                   ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                              | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i13__DOT__state) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i9__DOT__state) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i5__DOT__state) 
                                       << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i1__DOT__state))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i12__DOT__state) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i8__DOT__state) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i4__DOT__state) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i0__DOT__state)))));
        }
    } else if ((1U & (IData)(ALU__DOT__s466))) {
        ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i33__DOT__state;
        ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i15__DOT__state) 
                               << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i11__DOT__state) 
                                         << 2U)) | 
                             (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i7__DOT__state) 
                               << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i3__DOT__state))) 
                            << 0x0000000cU) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i14__DOT__state) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i10__DOT__state) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i6__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i2__DOT__state))) 
                                               << 8U)) 
                          | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i13__DOT__state) 
                                 << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i9__DOT__state) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i5__DOT__state) 
                                   << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i1__DOT__state))) 
                              << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i12__DOT__state) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i8__DOT__state) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i4__DOT__state) 
                                          << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i0__DOT__state)))));
    } else {
        ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i34__DOT__state;
        ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i15__DOT__state) 
                               << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i11__DOT__state) 
                                         << 2U)) | 
                             (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i7__DOT__state) 
                               << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i3__DOT__state))) 
                            << 0x0000000cU) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i14__DOT__state) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i10__DOT__state) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i6__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i2__DOT__state))) 
                                               << 8U)) 
                          | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i13__DOT__state) 
                                 << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i9__DOT__state) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i5__DOT__state) 
                                   << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i1__DOT__state))) 
                              << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i12__DOT__state) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i8__DOT__state) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i4__DOT__state) 
                                          << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i0__DOT__state)))));
    }
    ALU__DOT__Barrel_Shifter_i47__DOT__s1 = ((IData)(ALU__DOT__s462)
                                              ? (((
                                                   ((((2U 
                                                       & ((IData)(ALU__DOT__s460) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(ALU__DOT__s460) 
                                                            >> 1U))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((IData)(ALU__DOT__s460) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(ALU__DOT__s460) 
                                                              >> 3U))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((IData)(ALU__DOT__s460) 
                                                            >> 3U)) 
                                                        | (1U 
                                                           & ((IData)(ALU__DOT__s460) 
                                                              >> 5U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & ((IData)(ALU__DOT__s460) 
                                                               >> 7U))))) 
                                                  << 8U) 
                                                 | (((((2U 
                                                        & ((IData)(ALU__DOT__s460) 
                                                           >> 7U)) 
                                                       | (1U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 9U))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 9U)) 
                                                         | (1U 
                                                            & ((IData)(ALU__DOT__s460) 
                                                               >> 0x0000000bU))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 0x0000000bU)) 
                                                         | (1U 
                                                            & ((IData)(ALU__DOT__s460) 
                                                               >> 0x0000000dU))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(ALU__DOT__s460) 
                                                              >> 0x0000000dU)) 
                                                          | (1U 
                                                             & ((IData)(ALU__DOT__s460) 
                                                                >> 0x0000000fU))))))
                                              : (IData)(ALU__DOT__s460));
    ALU__DOT__Barrel_Shifter_i47__DOT__s6 = ((IData)(
                                                     (3U 
                                                      == (IData)(ALU__DOT__s466)))
                                              ? (((IData)(ALU__DOT__Barrel_Shifter_i47__DOT__s1) 
                                                  << 0x00000010U) 
                                                 | (IData)(ALU__DOT__Barrel_Shifter_i47__DOT__s1))
                                              : ((((IData)(
                                                           (((IData)(ALU__DOT__s460) 
                                                             >> 0x0000000fU) 
                                                            & (0U 
                                                               == (IData)(ALU__DOT__s466))))
                                                    ? 0xffffU
                                                    : 0U) 
                                                  << 0x00000010U) 
                                                 | (IData)(ALU__DOT__Barrel_Shifter_i47__DOT__s1)));
    ALU__DOT__Barrel_Shifter_i47__DOT__s10 = ((1U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s6, 1U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s6);
    ALU__DOT__Barrel_Shifter_i47__DOT__s13 = ((2U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s10, 2U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s10);
    ALU__DOT__Barrel_Shifter_i47__DOT__s16 = ((4U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s13, 4U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s13);
    ALU__DOT__Barrel_Shifter_i47__DOT__s19 = ((8U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s16, 8U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s16);
    ALU__DOT__s465 = (0x0000ffffU & ((IData)(ALU__DOT__s462)
                                      ? (((((((2U & 
                                               (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                << 1U)) 
                                              | (1U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 1U))) 
                                             << 6U) 
                                            | (((2U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 1U)) 
                                                | (1U 
                                                   & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                      >> 3U))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                      >> 5U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                       >> 7U))))) 
                                          << 8U) | 
                                         (((((2U & 
                                              (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                               >> 7U)) 
                                             | (1U 
                                                & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                   >> 9U))) 
                                            << 6U) 
                                           | (((2U 
                                                & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                   >> 9U)) 
                                               | (1U 
                                                  & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                     >> 0x0000000bU))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                     >> 0x0000000dU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 0x0000000dU)) 
                                                | (1U 
                                                   & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                      >> 0x0000000fU))))))
                                      : ALU__DOT__Barrel_Shifter_i47__DOT__s19));
    vlSelfRef.SAR = ((0U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
    vlSelfRef.SHR = ((1U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
    vlSelfRef.SHL = ((2U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
    vlSelfRef.ROR = ((3U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
}

void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0(VALU___0316_BitRegister* vlSelf);

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22));
        VALU___0316_BitRegister___ico_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27));
        VALU___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VALU___024root___eval_phase__ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VALU___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VALU___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VALU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VALU___024root___eval_triggers_vec__act(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers_vec__act\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.CLK) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
}

bool VALU___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VALU___024root___nba_sequent__TOP__0(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i0__DOT__state 
        = ((IData)(vlSelfRef.En) & (0U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i1__DOT__state 
        = ((IData)(vlSelfRef.En) & (1U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i2__DOT__state 
        = ((IData)(vlSelfRef.En) & (2U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i3__DOT__state 
        = ((IData)(vlSelfRef.En) & (3U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i4__DOT__state 
        = ((IData)(vlSelfRef.En) & (4U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i5__DOT__state 
        = ((IData)(vlSelfRef.En) & (5U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i6__DOT__state 
        = ((IData)(vlSelfRef.En) & (6U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i7__DOT__state 
        = ((IData)(vlSelfRef.En) & (7U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i8__DOT__state 
        = ((IData)(vlSelfRef.En) & (8U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i11__DOT__state 
        = ((IData)(vlSelfRef.En) & (0x0bU == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i12__DOT__state 
        = ((IData)(vlSelfRef.En) & (0x0cU == (IData)(vlSelfRef.Opcode)));
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.EN) {
        vlSelfRef.ALU__DOT__DIG_Register_BUS_i34__DOT__state 
            = vlSelfRef.ALU__DOT__s341;
    }
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.EN) {
        vlSelfRef.ALU__DOT__DIG_Register_BUS_i31__DOT__state 
            = vlSelfRef.ALU__DOT__s341;
    }
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.EN) {
        vlSelfRef.ALU__DOT__DIG_Register_BUS_i32__DOT__state 
            = vlSelfRef.ALU__DOT__s341;
    }
    if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.EN) {
        vlSelfRef.ALU__DOT__DIG_Register_BUS_i33__DOT__state 
            = vlSelfRef.ALU__DOT__s341;
    }
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i9__DOT__state 
        = ((IData)(vlSelfRef.En) & (9U == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i10__DOT__state 
        = ((IData)(vlSelfRef.En) & (0x0aU == (IData)(vlSelfRef.Opcode)));
    vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i13__DOT__state 
        = ((IData)(vlSelfRef.En) & (0x0dU == (IData)(vlSelfRef.Opcode)));
}

void VALU___024root___nba_sequent__TOP__1(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__1\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ ALU__DOT__s460;
    ALU__DOT__s460 = 0;
    CData/*3:0*/ ALU__DOT__s461;
    ALU__DOT__s461 = 0;
    CData/*0:0*/ ALU__DOT__s462;
    ALU__DOT__s462 = 0;
    SData/*15:0*/ ALU__DOT__s465;
    ALU__DOT__s465 = 0;
    CData/*1:0*/ ALU__DOT__s466;
    ALU__DOT__s466 = 0;
    IData/*16:0*/ ALU__DOT__DIG_Add_i35__DOT__temp;
    ALU__DOT__DIG_Add_i35__DOT__temp = 0;
    IData/*16:0*/ ALU__DOT__DIG_Sub_i36__DOT__temp;
    ALU__DOT__DIG_Sub_i36__DOT__temp = 0;
    SData/*15:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s1;
    ALU__DOT__Barrel_Shifter_i47__DOT__s1 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s6;
    ALU__DOT__Barrel_Shifter_i47__DOT__s6 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s10;
    ALU__DOT__Barrel_Shifter_i47__DOT__s10 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s13;
    ALU__DOT__Barrel_Shifter_i47__DOT__s13 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s16;
    ALU__DOT__Barrel_Shifter_i47__DOT__s16 = 0;
    IData/*31:0*/ ALU__DOT__Barrel_Shifter_i47__DOT__s19;
    ALU__DOT__Barrel_Shifter_i47__DOT__s19 = 0;
    // Body
    vlSelfRef.Not = (0x0000ffffU & (~ (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i15__DOT__state) 
                                            << 3U) 
                                           | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i11__DOT__state) 
                                              << 2U)) 
                                          | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i7__DOT__state) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i3__DOT__state))) 
                                         << 0x0000000cU) 
                                        | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i14__DOT__state) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i10__DOT__state) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i6__DOT__state) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i2__DOT__state))) 
                                           << 8U)) 
                                       | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i13__DOT__state) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i9__DOT__state) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i5__DOT__state) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i1__DOT__state))) 
                                           << 4U) | 
                                          ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i12__DOT__state) 
                                             << 3U) 
                                            | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i8__DOT__state) 
                                               << 2U)) 
                                           | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i4__DOT__state) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19.__PVT__DIG_Register_i0__DOT__state)))))));
    vlSelfRef.mul_low = (0x0000ffffU & VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, 
                                                                 (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i15__DOT__state) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i11__DOT__state) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i7__DOT__state) 
                                                                         << 1U) 
                                                                        | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i3__DOT__state))) 
                                                                    << 0x0000000cU) 
                                                                   | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i14__DOT__state) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i10__DOT__state) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i6__DOT__state) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i2__DOT__state))) 
                                                                      << 8U)) 
                                                                  | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i13__DOT__state) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i9__DOT__state) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i5__DOT__state) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i1__DOT__state))) 
                                                                      << 4U) 
                                                                     | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i12__DOT__state) 
                                                                          << 3U) 
                                                                         | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i8__DOT__state) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i4__DOT__state) 
                                                                            << 1U) 
                                                                           | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9.__PVT__DIG_Register_i0__DOT__state)))))), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i15__DOT__state) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i11__DOT__state) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i7__DOT__state) 
                                                                         << 1U) 
                                                                        | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i3__DOT__state))) 
                                                                    << 0x0000000cU) 
                                                                   | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i14__DOT__state) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i10__DOT__state) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i6__DOT__state) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i2__DOT__state))) 
                                                                      << 8U)) 
                                                                  | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i13__DOT__state) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i9__DOT__state) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i5__DOT__state) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i1__DOT__state))) 
                                                                      << 4U) 
                                                                     | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i12__DOT__state) 
                                                                          << 3U) 
                                                                         | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i8__DOT__state) 
                                                                            << 2U)) 
                                                                        | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i4__DOT__state) 
                                                                            << 1U) 
                                                                           | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10.__PVT__DIG_Register_i0__DOT__state))))))));
    vlSelfRef.mul_high = (VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                        (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i15__DOT__state) 
                                                              << 3U) 
                                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i11__DOT__state) 
                                                                << 2U)) 
                                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i7__DOT__state) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i3__DOT__state))) 
                                                           << 0x0000000cU) 
                                                          | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i14__DOT__state) 
                                                                << 3U) 
                                                               | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i10__DOT__state) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i6__DOT__state) 
                                                                  << 1U) 
                                                                 | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i2__DOT__state))) 
                                                             << 8U)) 
                                                         | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i13__DOT__state) 
                                                                << 3U) 
                                                               | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i9__DOT__state) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i5__DOT__state) 
                                                                  << 1U) 
                                                                 | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i1__DOT__state))) 
                                                             << 4U) 
                                                            | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i12__DOT__state) 
                                                                 << 3U) 
                                                                | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i8__DOT__state) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i4__DOT__state) 
                                                                   << 1U) 
                                                                  | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11.__PVT__DIG_Register_i0__DOT__state)))))), 
                                      VL_EXTENDS_II(32,16, 
                                                    (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i15__DOT__state) 
                                                          << 3U) 
                                                         | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i11__DOT__state) 
                                                            << 2U)) 
                                                        | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i7__DOT__state) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i3__DOT__state))) 
                                                       << 0x0000000cU) 
                                                      | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i14__DOT__state) 
                                                            << 3U) 
                                                           | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i10__DOT__state) 
                                                              << 2U)) 
                                                          | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i6__DOT__state) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i2__DOT__state))) 
                                                         << 8U)) 
                                                     | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i13__DOT__state) 
                                                            << 3U) 
                                                           | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i9__DOT__state) 
                                                              << 2U)) 
                                                          | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i5__DOT__state) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i1__DOT__state))) 
                                                         << 4U) 
                                                        | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i12__DOT__state) 
                                                             << 3U) 
                                                            | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i8__DOT__state) 
                                                               << 2U)) 
                                                           | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i4__DOT__state) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12.__PVT__DIG_Register_i0__DOT__state))))))) 
                          >> 0x00000010U);
    vlSelfRef.AND = ((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i15__DOT__state) 
                           & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i15__DOT__state)) 
                          << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i11__DOT__state) 
                                     & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i11__DOT__state)) 
                                    << 2U)) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i7__DOT__state) 
                                                 & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i7__DOT__state)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i3__DOT__state) 
                                                  & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i3__DOT__state)))) 
                       << 0x0000000cU) | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i14__DOT__state) 
                                              & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i14__DOT__state)) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i10__DOT__state) 
                                                & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i10__DOT__state)) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i6__DOT__state) 
                                                & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i6__DOT__state)) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i2__DOT__state) 
                                                 & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i2__DOT__state)))) 
                                          << 8U)) | 
                     (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i13__DOT__state) 
                           & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i13__DOT__state)) 
                          << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i9__DOT__state) 
                                     & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i9__DOT__state)) 
                                    << 2U)) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i5__DOT__state) 
                                                 & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i5__DOT__state)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i1__DOT__state) 
                                                  & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i1__DOT__state)))) 
                       << 4U) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i12__DOT__state) 
                                    & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i12__DOT__state)) 
                                   << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i8__DOT__state) 
                                              & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i8__DOT__state)) 
                                             << 2U)) 
                                 | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i4__DOT__state) 
                                      & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i4__DOT__state)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13.__PVT__DIG_Register_i0__DOT__state) 
                                               & (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14.__PVT__DIG_Register_i0__DOT__state))))));
    vlSelfRef.XOR = ((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i15__DOT__state) 
                           ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i15__DOT__state)) 
                          << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i11__DOT__state) 
                                     ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i11__DOT__state)) 
                                    << 2U)) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i7__DOT__state) 
                                                 ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i7__DOT__state)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i3__DOT__state) 
                                                  ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i3__DOT__state)))) 
                       << 0x0000000cU) | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i14__DOT__state) 
                                              ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i14__DOT__state)) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i10__DOT__state) 
                                                ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i10__DOT__state)) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i6__DOT__state) 
                                                ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i6__DOT__state)) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i2__DOT__state) 
                                                 ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i2__DOT__state)))) 
                                          << 8U)) | 
                     (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i13__DOT__state) 
                           ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i13__DOT__state)) 
                          << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i9__DOT__state) 
                                     ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i9__DOT__state)) 
                                    << 2U)) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i5__DOT__state) 
                                                 ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i5__DOT__state)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i1__DOT__state) 
                                                  ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i1__DOT__state)))) 
                       << 4U) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i12__DOT__state) 
                                    ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i12__DOT__state)) 
                                   << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i8__DOT__state) 
                                              ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i8__DOT__state)) 
                                             << 2U)) 
                                 | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i4__DOT__state) 
                                      ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i4__DOT__state)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15.__PVT__DIG_Register_i0__DOT__state) 
                                               ^ (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16.__PVT__DIG_Register_i0__DOT__state))))));
    vlSelfRef.OR = ((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i15__DOT__state) 
                          | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i15__DOT__state)) 
                         << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i11__DOT__state) 
                                    | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i11__DOT__state)) 
                                   << 2U)) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i7__DOT__state) 
                                                | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i7__DOT__state)) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i3__DOT__state) 
                                                 | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i3__DOT__state)))) 
                      << 0x0000000cU) | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i14__DOT__state) 
                                             | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i14__DOT__state)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i10__DOT__state) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i10__DOT__state)) 
                                              << 2U)) 
                                          | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i6__DOT__state) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i6__DOT__state)) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i2__DOT__state) 
                                                | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i2__DOT__state)))) 
                                         << 8U)) | 
                    (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i13__DOT__state) 
                          | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i13__DOT__state)) 
                         << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i9__DOT__state) 
                                    | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i9__DOT__state)) 
                                   << 2U)) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i5__DOT__state) 
                                                | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i5__DOT__state)) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i1__DOT__state) 
                                                 | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i1__DOT__state)))) 
                      << 4U) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i12__DOT__state) 
                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i12__DOT__state)) 
                                  << 3U) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i8__DOT__state) 
                                             | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i8__DOT__state)) 
                                            << 2U)) 
                                | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i4__DOT__state) 
                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i4__DOT__state)) 
                                    << 1U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17.__PVT__DIG_Register_i0__DOT__state) 
                                              | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18.__PVT__DIG_Register_i0__DOT__state))))));
    vlSelfRef.SLT = VL_LTS_III(16, (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i15__DOT__state) 
                                         << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i11__DOT__state) 
                                                   << 2U)) 
                                       | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i7__DOT__state) 
                                           << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i3__DOT__state))) 
                                      << 0x0000000cU) 
                                     | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i14__DOT__state) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i10__DOT__state) 
                                           << 2U)) 
                                         | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i6__DOT__state) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i2__DOT__state))) 
                                        << 8U)) | (
                                                   (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i13__DOT__state) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i9__DOT__state) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i5__DOT__state) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i1__DOT__state))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i12__DOT__state) 
                                                        << 3U) 
                                                       | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i8__DOT__state) 
                                                          << 2U)) 
                                                      | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i4__DOT__state) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23.__PVT__DIG_Register_i0__DOT__state))))), 
                               (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i15__DOT__state) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i11__DOT__state) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i7__DOT__state) 
                                       << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i3__DOT__state))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i14__DOT__state) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i10__DOT__state) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i6__DOT__state) 
                                       << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i2__DOT__state))) 
                                  << 8U)) | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i13__DOT__state) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i9__DOT__state) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i5__DOT__state) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i1__DOT__state))) 
                                              << 4U) 
                                             | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i12__DOT__state) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i8__DOT__state) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i4__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24.__PVT__DIG_Register_i0__DOT__state))))));
    vlSelfRef.SLTU = ((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i15__DOT__state) 
                            << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i11__DOT__state) 
                                      << 2U)) | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i7__DOT__state) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i3__DOT__state))) 
                         << 0x0000000cU) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i14__DOT__state) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i10__DOT__state) 
                                                 << 2U)) 
                                             | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i6__DOT__state) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i2__DOT__state))) 
                                            << 8U)) 
                       | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i13__DOT__state) 
                              << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i9__DOT__state) 
                                        << 2U)) | (
                                                   ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i5__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i1__DOT__state))) 
                           << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i12__DOT__state) 
                                       << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i8__DOT__state) 
                                                 << 2U)) 
                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i4__DOT__state) 
                                         << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25.__PVT__DIG_Register_i0__DOT__state))))) 
                      < (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i15__DOT__state) 
                              << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i11__DOT__state) 
                                        << 2U)) | (
                                                   ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i7__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i3__DOT__state))) 
                           << 0x0000000cU) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i14__DOT__state) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i10__DOT__state) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i6__DOT__state) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i2__DOT__state))) 
                                              << 8U)) 
                         | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i13__DOT__state) 
                                << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i9__DOT__state) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i5__DOT__state) 
                                << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i1__DOT__state))) 
                             << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i12__DOT__state) 
                                         << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i8__DOT__state) 
                                                   << 2U)) 
                                       | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i4__DOT__state) 
                                           << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26.__PVT__DIG_Register_i0__DOT__state))))));
    ALU__DOT__DIG_Add_i35__DOT__temp = (0x0001ffffU 
                                        & ((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i15__DOT__state) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i11__DOT__state) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i7__DOT__state) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i3__DOT__state))) 
                                              << 0x0000000cU) 
                                             | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i14__DOT__state) 
                                                   << 3U) 
                                                  | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i10__DOT__state) 
                                                     << 2U)) 
                                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i6__DOT__state) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i2__DOT__state))) 
                                                << 8U)) 
                                            | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i13__DOT__state) 
                                                   << 3U) 
                                                  | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i9__DOT__state) 
                                                     << 2U)) 
                                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i5__DOT__state) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i1__DOT__state))) 
                                                << 4U) 
                                               | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i12__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i8__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i4__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5.__PVT__DIG_Register_i0__DOT__state))))) 
                                           + ((((((
                                                   ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i15__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i11__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i7__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i3__DOT__state))) 
                                                 << 0x0000000cU) 
                                                | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                                               | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i13__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i9__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i5__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i1__DOT__state))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i12__DOT__state) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i8__DOT__state) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i4__DOT__state) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6.__PVT__DIG_Register_i0__DOT__state))))) 
                                              + (IData)(vlSelfRef.Carry_In))));
    ALU__DOT__DIG_Sub_i36__DOT__temp = (0x0001ffffU 
                                        & (((((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i15__DOT__state) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i11__DOT__state) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i7__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i3__DOT__state))) 
                                               << 0x0000000cU) 
                                              | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i14__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i10__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i6__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i2__DOT__state))) 
                                                 << 8U)) 
                                             | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i13__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i9__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i5__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i1__DOT__state))) 
                                                 << 4U) 
                                                | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i12__DOT__state) 
                                                     << 3U) 
                                                    | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i8__DOT__state) 
                                                       << 2U)) 
                                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i4__DOT__state) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7.__PVT__DIG_Register_i0__DOT__state))))) 
                                            - (((((
                                                   ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i15__DOT__state) 
                                                    << 3U) 
                                                   | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i11__DOT__state) 
                                                      << 2U)) 
                                                  | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i7__DOT__state) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i3__DOT__state))) 
                                                 << 0x0000000cU) 
                                                | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                                               | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i13__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i9__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i5__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i1__DOT__state))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i12__DOT__state) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i8__DOT__state) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i4__DOT__state) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8.__PVT__DIG_Register_i0__DOT__state)))))) 
                                           - (IData)(vlSelfRef.Borrow_In)));
    ALU__DOT__s466 = ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.EN)
                       ? 3U : ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.EN)
                                ? 2U : ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.EN)
                                         ? 1U : 0U)));
    vlSelfRef.Sum = (0x0000ffffU & ALU__DOT__DIG_Add_i35__DOT__temp);
    vlSelfRef.Carry_Out = (1U & (ALU__DOT__DIG_Add_i35__DOT__temp 
                                 >> 0x00000010U));
    vlSelfRef.Borrow_Out = (1U & (ALU__DOT__DIG_Sub_i36__DOT__temp 
                                  >> 0x00000010U));
    vlSelfRef.Sub = (0x0000ffffU & ALU__DOT__DIG_Sub_i36__DOT__temp);
    ALU__DOT__s462 = (IData)((2U == (IData)(ALU__DOT__s466)));
    if ((2U & (IData)(ALU__DOT__s466))) {
        if ((1U & (IData)(ALU__DOT__s466))) {
            ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i31__DOT__state;
            ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i15__DOT__state) 
                                   << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i11__DOT__state) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i7__DOT__state) 
                                     << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i3__DOT__state))) 
                                << 0x0000000cU) | (
                                                   ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                              | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i13__DOT__state) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i9__DOT__state) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i5__DOT__state) 
                                       << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i1__DOT__state))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i12__DOT__state) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i8__DOT__state) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i4__DOT__state) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.__PVT__DIG_Register_i0__DOT__state)))));
        } else {
            ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i32__DOT__state;
            ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i15__DOT__state) 
                                   << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i11__DOT__state) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i7__DOT__state) 
                                     << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i3__DOT__state))) 
                                << 0x0000000cU) | (
                                                   ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i14__DOT__state) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i10__DOT__state) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i6__DOT__state) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i2__DOT__state))) 
                                                   << 8U)) 
                              | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i13__DOT__state) 
                                     << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i9__DOT__state) 
                                               << 2U)) 
                                   | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i5__DOT__state) 
                                       << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i1__DOT__state))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i12__DOT__state) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i8__DOT__state) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i4__DOT__state) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.__PVT__DIG_Register_i0__DOT__state)))));
        }
    } else if ((1U & (IData)(ALU__DOT__s466))) {
        ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i33__DOT__state;
        ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i15__DOT__state) 
                               << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i11__DOT__state) 
                                         << 2U)) | 
                             (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i7__DOT__state) 
                               << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i3__DOT__state))) 
                            << 0x0000000cU) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i14__DOT__state) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i10__DOT__state) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i6__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i2__DOT__state))) 
                                               << 8U)) 
                          | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i13__DOT__state) 
                                 << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i9__DOT__state) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i5__DOT__state) 
                                   << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i1__DOT__state))) 
                              << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i12__DOT__state) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i8__DOT__state) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i4__DOT__state) 
                                          << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.__PVT__DIG_Register_i0__DOT__state)))));
    } else {
        ALU__DOT__s461 = vlSelfRef.ALU__DOT__DIG_Register_BUS_i34__DOT__state;
        ALU__DOT__s460 = (((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i15__DOT__state) 
                               << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i11__DOT__state) 
                                         << 2U)) | 
                             (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i7__DOT__state) 
                               << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i3__DOT__state))) 
                            << 0x0000000cU) | (((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i14__DOT__state) 
                                                  << 3U) 
                                                 | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i10__DOT__state) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i6__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i2__DOT__state))) 
                                               << 8U)) 
                          | ((((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i13__DOT__state) 
                                 << 3U) | ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i9__DOT__state) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i5__DOT__state) 
                                   << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i1__DOT__state))) 
                              << 4U) | ((((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i12__DOT__state) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i8__DOT__state) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i4__DOT__state) 
                                          << 1U) | (IData)(vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.__PVT__DIG_Register_i0__DOT__state)))));
    }
    ALU__DOT__Barrel_Shifter_i47__DOT__s1 = ((IData)(ALU__DOT__s462)
                                              ? (((
                                                   ((((2U 
                                                       & ((IData)(ALU__DOT__s460) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(ALU__DOT__s460) 
                                                            >> 1U))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((IData)(ALU__DOT__s460) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(ALU__DOT__s460) 
                                                              >> 3U))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((IData)(ALU__DOT__s460) 
                                                            >> 3U)) 
                                                        | (1U 
                                                           & ((IData)(ALU__DOT__s460) 
                                                              >> 5U))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & ((IData)(ALU__DOT__s460) 
                                                               >> 7U))))) 
                                                  << 8U) 
                                                 | (((((2U 
                                                        & ((IData)(ALU__DOT__s460) 
                                                           >> 7U)) 
                                                       | (1U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 9U))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 9U)) 
                                                         | (1U 
                                                            & ((IData)(ALU__DOT__s460) 
                                                               >> 0x0000000bU))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(ALU__DOT__s460) 
                                                             >> 0x0000000bU)) 
                                                         | (1U 
                                                            & ((IData)(ALU__DOT__s460) 
                                                               >> 0x0000000dU))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(ALU__DOT__s460) 
                                                              >> 0x0000000dU)) 
                                                          | (1U 
                                                             & ((IData)(ALU__DOT__s460) 
                                                                >> 0x0000000fU))))))
                                              : (IData)(ALU__DOT__s460));
    ALU__DOT__Barrel_Shifter_i47__DOT__s6 = ((IData)(
                                                     (3U 
                                                      == (IData)(ALU__DOT__s466)))
                                              ? (((IData)(ALU__DOT__Barrel_Shifter_i47__DOT__s1) 
                                                  << 0x00000010U) 
                                                 | (IData)(ALU__DOT__Barrel_Shifter_i47__DOT__s1))
                                              : ((((IData)(
                                                           (((IData)(ALU__DOT__s460) 
                                                             >> 0x0000000fU) 
                                                            & (0U 
                                                               == (IData)(ALU__DOT__s466))))
                                                    ? 0xffffU
                                                    : 0U) 
                                                  << 0x00000010U) 
                                                 | (IData)(ALU__DOT__Barrel_Shifter_i47__DOT__s1)));
    ALU__DOT__Barrel_Shifter_i47__DOT__s10 = ((1U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s6, 1U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s6);
    ALU__DOT__Barrel_Shifter_i47__DOT__s13 = ((2U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s10, 2U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s10);
    ALU__DOT__Barrel_Shifter_i47__DOT__s16 = ((4U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s13, 4U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s13);
    ALU__DOT__Barrel_Shifter_i47__DOT__s19 = ((8U & (IData)(ALU__DOT__s461))
                                               ? VL_SHIFTR_III(32,32,32, ALU__DOT__Barrel_Shifter_i47__DOT__s16, 8U)
                                               : ALU__DOT__Barrel_Shifter_i47__DOT__s16);
    ALU__DOT__s465 = (0x0000ffffU & ((IData)(ALU__DOT__s462)
                                      ? (((((((2U & 
                                               (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                << 1U)) 
                                              | (1U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 1U))) 
                                             << 6U) 
                                            | (((2U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 1U)) 
                                                | (1U 
                                                   & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                      >> 3U))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                      >> 5U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                       >> 7U))))) 
                                          << 8U) | 
                                         (((((2U & 
                                              (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                               >> 7U)) 
                                             | (1U 
                                                & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                   >> 9U))) 
                                            << 6U) 
                                           | (((2U 
                                                & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                   >> 9U)) 
                                               | (1U 
                                                  & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                     >> 0x0000000bU))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                     >> 0x0000000dU))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                    >> 0x0000000dU)) 
                                                | (1U 
                                                   & (ALU__DOT__Barrel_Shifter_i47__DOT__s19 
                                                      >> 0x0000000fU))))))
                                      : ALU__DOT__Barrel_Shifter_i47__DOT__s19));
    vlSelfRef.SAR = ((0U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
    vlSelfRef.SHR = ((1U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
    vlSelfRef.SHL = ((2U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
    vlSelfRef.ROR = ((3U == (IData)(ALU__DOT__s466))
                      ? (IData)(ALU__DOT__s465) : 0U);
}

void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i12__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i14__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i16__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i18__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i24__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i26__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i9__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i6__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i8__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0(VALU___0316_BitRegister* vlSelf);
void VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__1(VALU___0316_BitRegister* vlSelf);

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i0__DOT__state 
            = ((IData)(vlSelfRef.En) & (0U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i1__DOT__state 
            = ((IData)(vlSelfRef.En) & (1U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i2__DOT__state 
            = ((IData)(vlSelfRef.En) & (2U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i3__DOT__state 
            = ((IData)(vlSelfRef.En) & (3U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i4__DOT__state 
            = ((IData)(vlSelfRef.En) & (4U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i5__DOT__state 
            = ((IData)(vlSelfRef.En) & (5U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i6__DOT__state 
            = ((IData)(vlSelfRef.En) & (6U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i7__DOT__state 
            = ((IData)(vlSelfRef.En) & (7U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i8__DOT__state 
            = ((IData)(vlSelfRef.En) & (8U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i11__DOT__state 
            = ((IData)(vlSelfRef.En) & (0x0bU == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i12__DOT__state 
            = ((IData)(vlSelfRef.En) & (0x0cU == (IData)(vlSelfRef.Opcode)));
        if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20.EN) {
            vlSelfRef.ALU__DOT__DIG_Register_BUS_i34__DOT__state 
                = vlSelfRef.ALU__DOT__s341;
        }
        if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27.EN) {
            vlSelfRef.ALU__DOT__DIG_Register_BUS_i31__DOT__state 
                = vlSelfRef.ALU__DOT__s341;
        }
        if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22.EN) {
            vlSelfRef.ALU__DOT__DIG_Register_BUS_i32__DOT__state 
                = vlSelfRef.ALU__DOT__s341;
        }
        if (vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21.EN) {
            vlSelfRef.ALU__DOT__DIG_Register_BUS_i33__DOT__state 
                = vlSelfRef.ALU__DOT__s341;
        }
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i9__DOT__state 
            = ((IData)(vlSelfRef.En) & (9U == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i10__DOT__state 
            = ((IData)(vlSelfRef.En) & (0x0aU == (IData)(vlSelfRef.Opcode)));
        vlSelfRef.ALU__DOT__ALU_RegCtrl_i1__DOT__DIG_D_FF_1bit_i13__DOT__state 
            = ((IData)(vlSelfRef.En) & (0x0dU == (IData)(vlSelfRef.Opcode)));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i19__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i19));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i12__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i12));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i14__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i14));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i16__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i16));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i18__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i18));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i24__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i24));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i26__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i26));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i9__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i9));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i11__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i11));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i13__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i13));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i15__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i15));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i17__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i17));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i23__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i23));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i25__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i25));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i6__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i6));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i8__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i8));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i5__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i5));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i7__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i7));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i20__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i20));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i21__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i21));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i22__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i22));
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i27__0((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i27));
        VALU___024root___nba_sequent__TOP__1(vlSelf);
        VALU___0316_BitRegister___nba_sequent__TOP__ALU__DOT____0316_BitRegister_i10__1((&vlSymsp->TOP__ALU__DOT____0316_BitRegister_i10));
    }
}

void VALU___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VALU___024root___eval_phase__act(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__act\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VALU___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VALU___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VALU___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VALU___024root___eval_phase__nba(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__nba\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VALU___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VALU___024root___eval_nba(vlSelf);
        VALU___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("ALU.v", 1010, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VALU___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("ALU.v", 1010, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("ALU.v", 1010, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VALU___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VALU___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.En & 0xfeU)))) {
        Verilated::overWidthError("En");
    }
    if (VL_UNLIKELY(((vlSelfRef.Opcode & 0xf0U)))) {
        Verilated::overWidthError("Opcode");
    }
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");
    }
    if (VL_UNLIKELY(((vlSelfRef.Carry_In & 0xfeU)))) {
        Verilated::overWidthError("Carry_In");
    }
    if (VL_UNLIKELY(((vlSelfRef.Borrow_In & 0xfeU)))) {
        Verilated::overWidthError("Borrow_In");
    }
}
#endif  // VL_DEBUG
