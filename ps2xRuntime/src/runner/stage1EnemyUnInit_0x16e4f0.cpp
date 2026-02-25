#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage1EnemyUnInit
// Address: 0x16e4f0 - 0x16e52c
void stage1EnemyUnInit_0x16e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage1EnemyUnInit_0x16e4f0");
#endif

    ctx->pc = 0x16e4f0u;

    // 0x16e4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e4f8: 0xc07a31c  jal         func_1E8C70
    ctx->pc = 0x16E4F8u;
    SET_GPR_U32(ctx, 31, 0x16E500u);
    ctx->pc = 0x1E8C70u;
    if (runtime->hasFunction(0x1E8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1E8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E500u; }
        if (ctx->pc != 0x16E500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn1_01_Hontai_0x1e8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E500u; }
        if (ctx->pc != 0x16E500u) { return; }
    }
    ctx->pc = 0x16E500u;
    // 0x16e500: 0xc07a67c  jal         func_1E99F0
    ctx->pc = 0x16E500u;
    SET_GPR_U32(ctx, 31, 0x16E508u);
    ctx->pc = 0x1E99F0u;
    if (runtime->hasFunction(0x1E99F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E99F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E508u; }
        if (ctx->pc != 0x16E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn1_02_Hontai_0x1e99f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E508u; }
        if (ctx->pc != 0x16E508u) { return; }
    }
    ctx->pc = 0x16E508u;
    // 0x16e508: 0xc0798fc  jal         func_1E63F0
    ctx->pc = 0x16E508u;
    SET_GPR_U32(ctx, 31, 0x16E510u);
    ctx->pc = 0x1E63F0u;
    if (runtime->hasFunction(0x1E63F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E63F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E510u; }
        if (ctx->pc != 0x16E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn1_03_Hontai_0x1e63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E510u; }
        if (ctx->pc != 0x16E510u) { return; }
    }
    ctx->pc = 0x16E510u;
    // 0x16e510: 0xc079d40  jal         func_1E7500
    ctx->pc = 0x16E510u;
    SET_GPR_U32(ctx, 31, 0x16E518u);
    ctx->pc = 0x1E7500u;
    if (runtime->hasFunction(0x1E7500u)) {
        auto targetFn = runtime->lookupFunction(0x1E7500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E518u; }
        if (ctx->pc != 0x16E518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn1_04_Hontai_0x1e7500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E518u; }
        if (ctx->pc != 0x16E518u) { return; }
    }
    ctx->pc = 0x16E518u;
    // 0x16e518: 0xc058708  jal         func_161C20
    ctx->pc = 0x16E518u;
    SET_GPR_U32(ctx, 31, 0x16E520u);
    ctx->pc = 0x161C20u;
    if (runtime->hasFunction(0x161C20u)) {
        auto targetFn = runtime->lookupFunction(0x161C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E520u; }
        if (ctx->pc != 0x16E520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage1Boss_Hontai_0x161c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E520u; }
        if (ctx->pc != 0x16E520u) { return; }
    }
    ctx->pc = 0x16E520u;
    // 0x16e520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e524: 0x3e00008  jr          $ra
    ctx->pc = 0x16E524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E524u;
            // 0x16e528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E52Cu;
}
