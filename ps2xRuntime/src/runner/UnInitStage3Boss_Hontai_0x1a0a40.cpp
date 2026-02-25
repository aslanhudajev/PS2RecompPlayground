#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStage3Boss_Hontai
// Address: 0x1a0a40 - 0x1a0a8c
void UnInitStage3Boss_Hontai_0x1a0a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStage3Boss_Hontai_0x1a0a40");
#endif

    ctx->pc = 0x1a0a40u;

    // 0x1a0a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0a48: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A0A48u;
    SET_GPR_U32(ctx, 31, 0x1A0A50u);
    ctx->pc = 0x1A0A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A48u;
            // 0x1a0a4c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A50u; }
        if (ctx->pc != 0x1A0A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A50u; }
        if (ctx->pc != 0x1A0A50u) { return; }
    }
    ctx->pc = 0x1A0A50u;
    // 0x1a0a50: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1A0A50u;
    SET_GPR_U32(ctx, 31, 0x1A0A58u);
    ctx->pc = 0x1A0A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A50u;
            // 0x1a0a54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A58u; }
        if (ctx->pc != 0x1A0A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A58u; }
        if (ctx->pc != 0x1A0A58u) { return; }
    }
    ctx->pc = 0x1A0A58u;
    // 0x1a0a58: 0xc060680  jal         func_181A00
    ctx->pc = 0x1A0A58u;
    SET_GPR_U32(ctx, 31, 0x1A0A60u);
    ctx->pc = 0x1A0A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A58u;
            // 0x1a0a5c: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A60u; }
        if (ctx->pc != 0x1A0A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A60u; }
        if (ctx->pc != 0x1A0A60u) { return; }
    }
    ctx->pc = 0x1A0A60u;
    // 0x1a0a60: 0xc060680  jal         func_181A00
    ctx->pc = 0x1A0A60u;
    SET_GPR_U32(ctx, 31, 0x1A0A68u);
    ctx->pc = 0x1A0A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A60u;
            // 0x1a0a64: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A68u; }
        if (ctx->pc != 0x1A0A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A68u; }
        if (ctx->pc != 0x1A0A68u) { return; }
    }
    ctx->pc = 0x1A0A68u;
    // 0x1a0a68: 0xc060680  jal         func_181A00
    ctx->pc = 0x1A0A68u;
    SET_GPR_U32(ctx, 31, 0x1A0A70u);
    ctx->pc = 0x1A0A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A68u;
            // 0x1a0a6c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A70u; }
        if (ctx->pc != 0x1A0A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A70u; }
        if (ctx->pc != 0x1A0A70u) { return; }
    }
    ctx->pc = 0x1A0A70u;
    // 0x1a0a70: 0xc060680  jal         func_181A00
    ctx->pc = 0x1A0A70u;
    SET_GPR_U32(ctx, 31, 0x1A0A78u);
    ctx->pc = 0x1A0A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A70u;
            // 0x1a0a74: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A78u; }
        if (ctx->pc != 0x1A0A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A78u; }
        if (ctx->pc != 0x1A0A78u) { return; }
    }
    ctx->pc = 0x1A0A78u;
    // 0x1a0a78: 0xc060680  jal         func_181A00
    ctx->pc = 0x1A0A78u;
    SET_GPR_U32(ctx, 31, 0x1A0A80u);
    ctx->pc = 0x1A0A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A78u;
            // 0x1a0a7c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A80u; }
        if (ctx->pc != 0x1A0A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A80u; }
        if (ctx->pc != 0x1A0A80u) { return; }
    }
    ctx->pc = 0x1A0A80u;
    // 0x1a0a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A84u;
            // 0x1a0a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0A8Cu;
}
