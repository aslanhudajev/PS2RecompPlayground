#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStage4Boss_Hontai
// Address: 0x1bba40 - 0x1bba6c
void UnInitStage4Boss_Hontai_0x1bba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStage4Boss_Hontai_0x1bba40");
#endif

    ctx->pc = 0x1bba40u;

    // 0x1bba40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bba44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bba48: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1BBA48u;
    SET_GPR_U32(ctx, 31, 0x1BBA50u);
    ctx->pc = 0x1BBA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA48u;
            // 0x1bba4c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA50u; }
        if (ctx->pc != 0x1BBA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA50u; }
        if (ctx->pc != 0x1BBA50u) { return; }
    }
    ctx->pc = 0x1BBA50u;
    // 0x1bba50: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1BBA50u;
    SET_GPR_U32(ctx, 31, 0x1BBA58u);
    ctx->pc = 0x1BBA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA50u;
            // 0x1bba54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA58u; }
        if (ctx->pc != 0x1BBA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA58u; }
        if (ctx->pc != 0x1BBA58u) { return; }
    }
    ctx->pc = 0x1BBA58u;
    // 0x1bba58: 0xc060680  jal         func_181A00
    ctx->pc = 0x1BBA58u;
    SET_GPR_U32(ctx, 31, 0x1BBA60u);
    ctx->pc = 0x1BBA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA58u;
            // 0x1bba5c: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA60u; }
        if (ctx->pc != 0x1BBA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA60u; }
        if (ctx->pc != 0x1BBA60u) { return; }
    }
    ctx->pc = 0x1BBA60u;
    // 0x1bba60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bba60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bba64: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA64u;
            // 0x1bba68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBA6Cu;
}
