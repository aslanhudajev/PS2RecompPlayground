#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage6EnemyUnInit
// Address: 0x16e100 - 0x16e15c
void stage6EnemyUnInit_0x16e100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage6EnemyUnInit_0x16e100");
#endif

    ctx->pc = 0x16e100u;

    // 0x16e100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e108: 0xc06a5c8  jal         func_1A9720
    ctx->pc = 0x16E108u;
    SET_GPR_U32(ctx, 31, 0x16E110u);
    ctx->pc = 0x1A9720u;
    if (runtime->hasFunction(0x1A9720u)) {
        auto targetFn = runtime->lookupFunction(0x1A9720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E110u; }
        if (ctx->pc != 0x16E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn6_01_Hontai_0x1a9720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E110u; }
        if (ctx->pc != 0x16E110u) { return; }
    }
    ctx->pc = 0x16E110u;
    // 0x16e110: 0xc06a924  jal         func_1AA490
    ctx->pc = 0x16E110u;
    SET_GPR_U32(ctx, 31, 0x16E118u);
    ctx->pc = 0x1AA490u;
    if (runtime->hasFunction(0x1AA490u)) {
        auto targetFn = runtime->lookupFunction(0x1AA490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E118u; }
        if (ctx->pc != 0x16E118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn6_02_Hontai_0x1aa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E118u; }
        if (ctx->pc != 0x16E118u) { return; }
    }
    ctx->pc = 0x16E118u;
    // 0x16e118: 0xc06ae4c  jal         func_1AB930
    ctx->pc = 0x16E118u;
    SET_GPR_U32(ctx, 31, 0x16E120u);
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E120u; }
        if (ctx->pc != 0x16E120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn6_03_Hontai_0x1ab930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E120u; }
        if (ctx->pc != 0x16E120u) { return; }
    }
    ctx->pc = 0x16E120u;
    // 0x16e120: 0xc06b364  jal         func_1ACD90
    ctx->pc = 0x16E120u;
    SET_GPR_U32(ctx, 31, 0x16E128u);
    ctx->pc = 0x1ACD90u;
    if (runtime->hasFunction(0x1ACD90u)) {
        auto targetFn = runtime->lookupFunction(0x1ACD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E128u; }
        if (ctx->pc != 0x16E128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn6_04_Hontai_0x1acd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E128u; }
        if (ctx->pc != 0x16E128u) { return; }
    }
    ctx->pc = 0x16E128u;
    // 0x16e128: 0xc06b658  jal         func_1AD960
    ctx->pc = 0x16E128u;
    SET_GPR_U32(ctx, 31, 0x16E130u);
    ctx->pc = 0x1AD960u;
    if (runtime->hasFunction(0x1AD960u)) {
        auto targetFn = runtime->lookupFunction(0x1AD960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E130u; }
        if (ctx->pc != 0x16E130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn6_05_Hontai_0x1ad960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E130u; }
        if (ctx->pc != 0x16E130u) { return; }
    }
    ctx->pc = 0x16E130u;
    // 0x16e130: 0xc06bac8  jal         func_1AEB20
    ctx->pc = 0x16E130u;
    SET_GPR_U32(ctx, 31, 0x16E138u);
    ctx->pc = 0x1AEB20u;
    if (runtime->hasFunction(0x1AEB20u)) {
        auto targetFn = runtime->lookupFunction(0x1AEB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E138u; }
        if (ctx->pc != 0x16E138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn6_06_Hontai_0x1aeb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E138u; }
        if (ctx->pc != 0x16E138u) { return; }
    }
    ctx->pc = 0x16E138u;
    // 0x16e138: 0xc06b8b8  jal         func_1AE2E0
    ctx->pc = 0x16E138u;
    SET_GPR_U32(ctx, 31, 0x16E140u);
    ctx->pc = 0x1AE2E0u;
    if (runtime->hasFunction(0x1AE2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E140u; }
        if (ctx->pc != 0x16E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn6_07_Hontai_0x1ae2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E140u; }
        if (ctx->pc != 0x16E140u) { return; }
    }
    ctx->pc = 0x16E140u;
    // 0x16e140: 0xc071150  jal         func_1C4540
    ctx->pc = 0x16E140u;
    SET_GPR_U32(ctx, 31, 0x16E148u);
    ctx->pc = 0x1C4540u;
    if (runtime->hasFunction(0x1C4540u)) {
        auto targetFn = runtime->lookupFunction(0x1C4540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E148u; }
        if (ctx->pc != 0x16E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage6Boss_Hontai_0x1c4540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E148u; }
        if (ctx->pc != 0x16E148u) { return; }
    }
    ctx->pc = 0x16E148u;
    // 0x16e148: 0xc06fd70  jal         func_1BF5C0
    ctx->pc = 0x16E148u;
    SET_GPR_U32(ctx, 31, 0x16E150u);
    ctx->pc = 0x1BF5C0u;
    if (runtime->hasFunction(0x1BF5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E150u; }
        if (ctx->pc != 0x16E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn_Pika_Hontai_0x1bf5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E150u; }
        if (ctx->pc != 0x16E150u) { return; }
    }
    ctx->pc = 0x16E150u;
    // 0x16e150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e154: 0x3e00008  jr          $ra
    ctx->pc = 0x16E154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E154u;
            // 0x16e158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E15Cu;
}
