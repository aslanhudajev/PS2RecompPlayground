#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStageex1Boss_Hontai
// Address: 0x1d5d30 - 0x1d5d7c
void UnInitStageex1Boss_Hontai_0x1d5d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStageex1Boss_Hontai_0x1d5d30");
#endif

    ctx->pc = 0x1d5d30u;

    // 0x1d5d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5d38: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D5D38u;
    SET_GPR_U32(ctx, 31, 0x1D5D40u);
    ctx->pc = 0x1D5D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D38u;
            // 0x1d5d3c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D40u; }
        if (ctx->pc != 0x1D5D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D40u; }
        if (ctx->pc != 0x1D5D40u) { return; }
    }
    ctx->pc = 0x1D5D40u;
    // 0x1d5d40: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1D5D40u;
    SET_GPR_U32(ctx, 31, 0x1D5D48u);
    ctx->pc = 0x1D5D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D40u;
            // 0x1d5d44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D48u; }
        if (ctx->pc != 0x1D5D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D48u; }
        if (ctx->pc != 0x1D5D48u) { return; }
    }
    ctx->pc = 0x1D5D48u;
    // 0x1d5d48: 0xc060680  jal         func_181A00
    ctx->pc = 0x1D5D48u;
    SET_GPR_U32(ctx, 31, 0x1D5D50u);
    ctx->pc = 0x1D5D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D48u;
            // 0x1d5d4c: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D50u; }
        if (ctx->pc != 0x1D5D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D50u; }
        if (ctx->pc != 0x1D5D50u) { return; }
    }
    ctx->pc = 0x1D5D50u;
    // 0x1d5d50: 0xc060680  jal         func_181A00
    ctx->pc = 0x1D5D50u;
    SET_GPR_U32(ctx, 31, 0x1D5D58u);
    ctx->pc = 0x1D5D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D50u;
            // 0x1d5d54: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D58u; }
        if (ctx->pc != 0x1D5D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D58u; }
        if (ctx->pc != 0x1D5D58u) { return; }
    }
    ctx->pc = 0x1D5D58u;
    // 0x1d5d58: 0xc060680  jal         func_181A00
    ctx->pc = 0x1D5D58u;
    SET_GPR_U32(ctx, 31, 0x1D5D60u);
    ctx->pc = 0x1D5D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D58u;
            // 0x1d5d5c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D60u; }
        if (ctx->pc != 0x1D5D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D60u; }
        if (ctx->pc != 0x1D5D60u) { return; }
    }
    ctx->pc = 0x1D5D60u;
    // 0x1d5d60: 0xc060680  jal         func_181A00
    ctx->pc = 0x1D5D60u;
    SET_GPR_U32(ctx, 31, 0x1D5D68u);
    ctx->pc = 0x1D5D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D60u;
            // 0x1d5d64: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D68u; }
        if (ctx->pc != 0x1D5D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D68u; }
        if (ctx->pc != 0x1D5D68u) { return; }
    }
    ctx->pc = 0x1D5D68u;
    // 0x1d5d68: 0xc060680  jal         func_181A00
    ctx->pc = 0x1D5D68u;
    SET_GPR_U32(ctx, 31, 0x1D5D70u);
    ctx->pc = 0x1D5D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D68u;
            // 0x1d5d6c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D70u; }
        if (ctx->pc != 0x1D5D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D70u; }
        if (ctx->pc != 0x1D5D70u) { return; }
    }
    ctx->pc = 0x1D5D70u;
    // 0x1d5d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D74u;
            // 0x1d5d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5D7Cu;
}
