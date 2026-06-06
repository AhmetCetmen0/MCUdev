// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VALU_H_
#define VERILATED_VALU_H_  // guard

#include "verilated.h"

class VALU__Syms;
class VALU___024root;
class VALU___0316_BitRegister;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VALU VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VALU__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&En,0,0);
    VL_IN8(&Opcode,3,0);
    VL_IN8(&Carry_In,0,0);
    VL_IN8(&Borrow_In,0,0);
    VL_OUT8(&Carry_Out,0,0);
    VL_OUT8(&Borrow_Out,0,0);
    VL_OUT8(&SLT,0,0);
    VL_OUT8(&LSU_EN,0,0);
    VL_OUT8(&SLTU,0,0);
    VL_OUT8(&SERACC_EN,0,0);
    VL_IN16(&A,15,0);
    VL_IN16(&B,15,0);
    VL_OUT16(&Sum,15,0);
    VL_OUT16(&Sub,15,0);
    VL_OUT16(&mul_low,15,0);
    VL_OUT16(&mul_high,15,0);
    VL_OUT16(&AND,15,0);
    VL_OUT16(&XOR,15,0);
    VL_OUT16(&OR,15,0);
    VL_OUT16(&Not,15,0);
    VL_OUT16(&SAR,15,0);
    VL_OUT16(&SHR,15,0);
    VL_OUT16(&SHL,15,0);
    VL_OUT16(&ROR,15,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i5;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i6;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i7;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i8;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i9;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i10;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i11;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i12;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i13;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i14;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i15;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i16;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i17;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i18;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i19;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i20;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i21;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i22;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i23;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i24;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i25;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i26;
    VALU___0316_BitRegister* const __PVT__ALU__DOT____0316_BitRegister_i27;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VALU___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VALU(VerilatedContext* contextp, const char* name = "TOP");
    explicit VALU(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VALU();
  private:
    VL_UNCOPYABLE(VALU);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
