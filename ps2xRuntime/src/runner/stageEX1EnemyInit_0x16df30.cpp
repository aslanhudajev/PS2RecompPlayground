#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX1EnemyInit
// Address: 0x16df30 - 0x16dfa4
void stageEX1EnemyInit_0x16df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX1EnemyInit_0x16df30");
#endif

    ctx->pc = 0x16df30u;

    // 0x16df30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16df34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16df34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16df38: 0xc072710  jal         func_1C9C40
    ctx->pc = 0x16DF38u;
    SET_GPR_U32(ctx, 31, 0x16DF40u);
    ctx->pc = 0x1C9C40u;
    if (runtime->hasFunction(0x1C9C40u)) {
        auto targetFn = runtime->lookupFunction(0x1C9C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF40u; }
        if (ctx->pc != 0x16DF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex1_01_Hontai_0x1c9c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF40u; }
        if (ctx->pc != 0x16DF40u) { return; }
    }
    ctx->pc = 0x16DF40u;
    // 0x16df40: 0xc0726d0  jal         func_1C9B40
    ctx->pc = 0x16DF40u;
    SET_GPR_U32(ctx, 31, 0x16DF48u);
    ctx->pc = 0x1C9B40u;
    if (runtime->hasFunction(0x1C9B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C9B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF48u; }
        if (ctx->pc != 0x16DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_01_Hontai_0x1c9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF48u; }
        if (ctx->pc != 0x16DF48u) { return; }
    }
    ctx->pc = 0x16DF48u;
    // 0x16df48: 0xc0731c8  jal         func_1CC720
    ctx->pc = 0x16DF48u;
    SET_GPR_U32(ctx, 31, 0x16DF50u);
    ctx->pc = 0x1CC720u;
    if (runtime->hasFunction(0x1CC720u)) {
        auto targetFn = runtime->lookupFunction(0x1CC720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF50u; }
        if (ctx->pc != 0x16DF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex1_02_Hontai_0x1cc720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF50u; }
        if (ctx->pc != 0x16DF50u) { return; }
    }
    ctx->pc = 0x16DF50u;
    // 0x16df50: 0xc073188  jal         func_1CC620
    ctx->pc = 0x16DF50u;
    SET_GPR_U32(ctx, 31, 0x16DF58u);
    ctx->pc = 0x1CC620u;
    if (runtime->hasFunction(0x1CC620u)) {
        auto targetFn = runtime->lookupFunction(0x1CC620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF58u; }
        if (ctx->pc != 0x16DF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_Hontai_0x1cc620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF58u; }
        if (ctx->pc != 0x16DF58u) { return; }
    }
    ctx->pc = 0x16DF58u;
    // 0x16df58: 0xc072304  jal         func_1C8C10
    ctx->pc = 0x16DF58u;
    SET_GPR_U32(ctx, 31, 0x16DF60u);
    ctx->pc = 0x1C8C10u;
    if (runtime->hasFunction(0x1C8C10u)) {
        auto targetFn = runtime->lookupFunction(0x1C8C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF60u; }
        if (ctx->pc != 0x16DF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex1_03_Hontai_0x1c8c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF60u; }
        if (ctx->pc != 0x16DF60u) { return; }
    }
    ctx->pc = 0x16DF60u;
    // 0x16df60: 0xc0722c4  jal         func_1C8B10
    ctx->pc = 0x16DF60u;
    SET_GPR_U32(ctx, 31, 0x16DF68u);
    ctx->pc = 0x1C8B10u;
    if (runtime->hasFunction(0x1C8B10u)) {
        auto targetFn = runtime->lookupFunction(0x1C8B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF68u; }
        if (ctx->pc != 0x16DF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_Hontai_0x1c8b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF68u; }
        if (ctx->pc != 0x16DF68u) { return; }
    }
    ctx->pc = 0x16DF68u;
    // 0x16df68: 0xc0737b0  jal         func_1CDEC0
    ctx->pc = 0x16DF68u;
    SET_GPR_U32(ctx, 31, 0x16DF70u);
    ctx->pc = 0x1CDEC0u;
    if (runtime->hasFunction(0x1CDEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF70u; }
        if (ctx->pc != 0x16DF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex1_04_Hontai_0x1cdec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF70u; }
        if (ctx->pc != 0x16DF70u) { return; }
    }
    ctx->pc = 0x16DF70u;
    // 0x16df70: 0xc073770  jal         func_1CDDC0
    ctx->pc = 0x16DF70u;
    SET_GPR_U32(ctx, 31, 0x16DF78u);
    ctx->pc = 0x1CDDC0u;
    if (runtime->hasFunction(0x1CDDC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF78u; }
        if (ctx->pc != 0x16DF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_Hontai_0x1cddc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF78u; }
        if (ctx->pc != 0x16DF78u) { return; }
    }
    ctx->pc = 0x16DF78u;
    // 0x16df78: 0xc071fbc  jal         func_1C7EF0
    ctx->pc = 0x16DF78u;
    SET_GPR_U32(ctx, 31, 0x16DF80u);
    ctx->pc = 0x1C7EF0u;
    if (runtime->hasFunction(0x1C7EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C7EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF80u; }
        if (ctx->pc != 0x16DF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex1_05_Hontai_0x1c7ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF80u; }
        if (ctx->pc != 0x16DF80u) { return; }
    }
    ctx->pc = 0x16DF80u;
    // 0x16df80: 0xc071f84  jal         func_1C7E10
    ctx->pc = 0x16DF80u;
    SET_GPR_U32(ctx, 31, 0x16DF88u);
    ctx->pc = 0x1C7E10u;
    if (runtime->hasFunction(0x1C7E10u)) {
        auto targetFn = runtime->lookupFunction(0x1C7E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF88u; }
        if (ctx->pc != 0x16DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_05_Hontai_0x1c7e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF88u; }
        if (ctx->pc != 0x16DF88u) { return; }
    }
    ctx->pc = 0x16DF88u;
    // 0x16df88: 0xc075840  jal         func_1D6100
    ctx->pc = 0x16DF88u;
    SET_GPR_U32(ctx, 31, 0x16DF90u);
    ctx->pc = 0x1D6100u;
    if (runtime->hasFunction(0x1D6100u)) {
        auto targetFn = runtime->lookupFunction(0x1D6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF90u; }
        if (ctx->pc != 0x16DF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStageex1Boss_Hontai_0x1d6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF90u; }
        if (ctx->pc != 0x16DF90u) { return; }
    }
    ctx->pc = 0x16DF90u;
    // 0x16df90: 0xc075760  jal         func_1D5D80
    ctx->pc = 0x16DF90u;
    SET_GPR_U32(ctx, 31, 0x16DF98u);
    ctx->pc = 0x1D5D80u;
    if (runtime->hasFunction(0x1D5D80u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF98u; }
        if (ctx->pc != 0x16DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStageex1Boss_Hontai_0x1d5d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF98u; }
        if (ctx->pc != 0x16DF98u) { return; }
    }
    ctx->pc = 0x16DF98u;
    // 0x16df98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16df98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df9c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF9Cu;
            // 0x16dfa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DFA4u;
}
