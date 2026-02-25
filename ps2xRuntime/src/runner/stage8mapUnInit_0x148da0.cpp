#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage8mapUnInit
// Address: 0x148da0 - 0x148e2c
void stage8mapUnInit_0x148da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage8mapUnInit_0x148da0");
#endif

    ctx->pc = 0x148da0u;

    // 0x148da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148da8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148DA8u;
    SET_GPR_U32(ctx, 31, 0x148DB0u);
    ctx->pc = 0x148DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DA8u;
            // 0x148dac: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DB0u; }
        if (ctx->pc != 0x148DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DB0u; }
        if (ctx->pc != 0x148DB0u) { return; }
    }
    ctx->pc = 0x148DB0u;
    // 0x148db0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x148DB0u;
    SET_GPR_U32(ctx, 31, 0x148DB8u);
    ctx->pc = 0x148DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DB0u;
            // 0x148db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DB8u; }
        if (ctx->pc != 0x148DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DB8u; }
        if (ctx->pc != 0x148DB8u) { return; }
    }
    ctx->pc = 0x148DB8u;
    // 0x148db8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148DB8u;
    SET_GPR_U32(ctx, 31, 0x148DC0u);
    ctx->pc = 0x148DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DB8u;
            // 0x148dbc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DC0u; }
        if (ctx->pc != 0x148DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DC0u; }
        if (ctx->pc != 0x148DC0u) { return; }
    }
    ctx->pc = 0x148DC0u;
    // 0x148dc0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x148DC0u;
    SET_GPR_U32(ctx, 31, 0x148DC8u);
    ctx->pc = 0x148DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DC0u;
            // 0x148dc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DC8u; }
        if (ctx->pc != 0x148DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DC8u; }
        if (ctx->pc != 0x148DC8u) { return; }
    }
    ctx->pc = 0x148DC8u;
    // 0x148dc8: 0xc060680  jal         func_181A00
    ctx->pc = 0x148DC8u;
    SET_GPR_U32(ctx, 31, 0x148DD0u);
    ctx->pc = 0x148DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DC8u;
            // 0x148dcc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DD0u; }
        if (ctx->pc != 0x148DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DD0u; }
        if (ctx->pc != 0x148DD0u) { return; }
    }
    ctx->pc = 0x148DD0u;
    // 0x148dd0: 0xc060680  jal         func_181A00
    ctx->pc = 0x148DD0u;
    SET_GPR_U32(ctx, 31, 0x148DD8u);
    ctx->pc = 0x148DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DD0u;
            // 0x148dd4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DD8u; }
        if (ctx->pc != 0x148DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DD8u; }
        if (ctx->pc != 0x148DD8u) { return; }
    }
    ctx->pc = 0x148DD8u;
    // 0x148dd8: 0xc060680  jal         func_181A00
    ctx->pc = 0x148DD8u;
    SET_GPR_U32(ctx, 31, 0x148DE0u);
    ctx->pc = 0x148DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DD8u;
            // 0x148ddc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DE0u; }
        if (ctx->pc != 0x148DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DE0u; }
        if (ctx->pc != 0x148DE0u) { return; }
    }
    ctx->pc = 0x148DE0u;
    // 0x148de0: 0xc060680  jal         func_181A00
    ctx->pc = 0x148DE0u;
    SET_GPR_U32(ctx, 31, 0x148DE8u);
    ctx->pc = 0x148DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DE0u;
            // 0x148de4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DE8u; }
        if (ctx->pc != 0x148DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DE8u; }
        if (ctx->pc != 0x148DE8u) { return; }
    }
    ctx->pc = 0x148DE8u;
    // 0x148de8: 0xc060680  jal         func_181A00
    ctx->pc = 0x148DE8u;
    SET_GPR_U32(ctx, 31, 0x148DF0u);
    ctx->pc = 0x148DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DE8u;
            // 0x148dec: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DF0u; }
        if (ctx->pc != 0x148DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DF0u; }
        if (ctx->pc != 0x148DF0u) { return; }
    }
    ctx->pc = 0x148DF0u;
    // 0x148df0: 0xc060680  jal         func_181A00
    ctx->pc = 0x148DF0u;
    SET_GPR_U32(ctx, 31, 0x148DF8u);
    ctx->pc = 0x148DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DF0u;
            // 0x148df4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DF8u; }
        if (ctx->pc != 0x148DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148DF8u; }
        if (ctx->pc != 0x148DF8u) { return; }
    }
    ctx->pc = 0x148DF8u;
    // 0x148df8: 0xc060680  jal         func_181A00
    ctx->pc = 0x148DF8u;
    SET_GPR_U32(ctx, 31, 0x148E00u);
    ctx->pc = 0x148DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148DF8u;
            // 0x148dfc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E00u; }
        if (ctx->pc != 0x148E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E00u; }
        if (ctx->pc != 0x148E00u) { return; }
    }
    ctx->pc = 0x148E00u;
    // 0x148e00: 0xc060680  jal         func_181A00
    ctx->pc = 0x148E00u;
    SET_GPR_U32(ctx, 31, 0x148E08u);
    ctx->pc = 0x148E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E00u;
            // 0x148e04: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E08u; }
        if (ctx->pc != 0x148E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E08u; }
        if (ctx->pc != 0x148E08u) { return; }
    }
    ctx->pc = 0x148E08u;
    // 0x148e08: 0xc060680  jal         func_181A00
    ctx->pc = 0x148E08u;
    SET_GPR_U32(ctx, 31, 0x148E10u);
    ctx->pc = 0x148E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E08u;
            // 0x148e0c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E10u; }
        if (ctx->pc != 0x148E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E10u; }
        if (ctx->pc != 0x148E10u) { return; }
    }
    ctx->pc = 0x148E10u;
    // 0x148e10: 0xc060680  jal         func_181A00
    ctx->pc = 0x148E10u;
    SET_GPR_U32(ctx, 31, 0x148E18u);
    ctx->pc = 0x148E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E10u;
            // 0x148e14: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E18u; }
        if (ctx->pc != 0x148E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E18u; }
        if (ctx->pc != 0x148E18u) { return; }
    }
    ctx->pc = 0x148E18u;
    // 0x148e18: 0xc060680  jal         func_181A00
    ctx->pc = 0x148E18u;
    SET_GPR_U32(ctx, 31, 0x148E20u);
    ctx->pc = 0x148E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E18u;
            // 0x148e1c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E20u; }
        if (ctx->pc != 0x148E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E20u; }
        if (ctx->pc != 0x148E20u) { return; }
    }
    ctx->pc = 0x148E20u;
    // 0x148e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148e24: 0x3e00008  jr          $ra
    ctx->pc = 0x148E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148E24u;
            // 0x148e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148E2Cu;
}
