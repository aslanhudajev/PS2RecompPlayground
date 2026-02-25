#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage8EnemyInit
// Address: 0x16dff0 - 0x16e05c
void stage8EnemyInit_0x16dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage8EnemyInit_0x16dff0");
#endif

    ctx->pc = 0x16dff0u;

    // 0x16dff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dff8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x16DFF8u;
    SET_GPR_U32(ctx, 31, 0x16E000u);
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E000u; }
        if (ctx->pc != 0x16E000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage8bossbrokenInit_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E000u; }
        if (ctx->pc != 0x16E000u) { return; }
    }
    ctx->pc = 0x16E000u;
    // 0x16e000: 0xc078280  jal         func_1E0A00
    ctx->pc = 0x16E000u;
    SET_GPR_U32(ctx, 31, 0x16E008u);
    ctx->pc = 0x1E0A00u;
    if (runtime->hasFunction(0x1E0A00u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E008u; }
        if (ctx->pc != 0x16E008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage8Boss_Hontai_0x1e0a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E008u; }
        if (ctx->pc != 0x16E008u) { return; }
    }
    ctx->pc = 0x16E008u;
    // 0x16e008: 0xc07823c  jal         func_1E08F0
    ctx->pc = 0x16E008u;
    SET_GPR_U32(ctx, 31, 0x16E010u);
    ctx->pc = 0x1E08F0u;
    if (runtime->hasFunction(0x1E08F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E08F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E010u; }
        if (ctx->pc != 0x16E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage8Boss_Hontai_0x1e08f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E010u; }
        if (ctx->pc != 0x16E010u) { return; }
    }
    ctx->pc = 0x16E010u;
    // 0x16e010: 0xc07b49c  jal         func_1ED270
    ctx->pc = 0x16E010u;
    SET_GPR_U32(ctx, 31, 0x16E018u);
    ctx->pc = 0x1ED270u;
    if (runtime->hasFunction(0x1ED270u)) {
        auto targetFn = runtime->lookupFunction(0x1ED270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E018u; }
        if (ctx->pc != 0x16E018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage8TrueBoss_Hontai_0x1ed270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E018u; }
        if (ctx->pc != 0x16E018u) { return; }
    }
    ctx->pc = 0x16E018u;
    // 0x16e018: 0xc07b464  jal         func_1ED190
    ctx->pc = 0x16E018u;
    SET_GPR_U32(ctx, 31, 0x16E020u);
    ctx->pc = 0x1ED190u;
    if (runtime->hasFunction(0x1ED190u)) {
        auto targetFn = runtime->lookupFunction(0x1ED190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E020u; }
        if (ctx->pc != 0x16E020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage8TrueBoss_Hontai_0x1ed190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E020u; }
        if (ctx->pc != 0x16E020u) { return; }
    }
    ctx->pc = 0x16E020u;
    // 0x16e020: 0xc078d6c  jal         func_1E35B0
    ctx->pc = 0x16E020u;
    SET_GPR_U32(ctx, 31, 0x16E028u);
    ctx->pc = 0x1E35B0u;
    if (runtime->hasFunction(0x1E35B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E35B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E028u; }
        if (ctx->pc != 0x16E028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn8_bit_Hontai_0x1e35b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E028u; }
        if (ctx->pc != 0x16E028u) { return; }
    }
    ctx->pc = 0x16E028u;
    // 0x16e028: 0xc078ce0  jal         func_1E3380
    ctx->pc = 0x16E028u;
    SET_GPR_U32(ctx, 31, 0x16E030u);
    ctx->pc = 0x1E3380u;
    if (runtime->hasFunction(0x1E3380u)) {
        auto targetFn = runtime->lookupFunction(0x1E3380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E030u; }
        if (ctx->pc != 0x16E030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bit_Hontai_0x1e3380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E030u; }
        if (ctx->pc != 0x16E030u) { return; }
    }
    ctx->pc = 0x16E030u;
    // 0x16e030: 0xc079688  jal         func_1E5A20
    ctx->pc = 0x16E030u;
    SET_GPR_U32(ctx, 31, 0x16E038u);
    ctx->pc = 0x1E5A20u;
    if (runtime->hasFunction(0x1E5A20u)) {
        auto targetFn = runtime->lookupFunction(0x1E5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E038u; }
        if (ctx->pc != 0x16E038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn8_kirai_Hontai_0x1e5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E038u; }
        if (ctx->pc != 0x16E038u) { return; }
    }
    ctx->pc = 0x16E038u;
    // 0x16e038: 0xc079654  jal         func_1E5950
    ctx->pc = 0x16E038u;
    SET_GPR_U32(ctx, 31, 0x16E040u);
    ctx->pc = 0x1E5950u;
    if (runtime->hasFunction(0x1E5950u)) {
        auto targetFn = runtime->lookupFunction(0x1E5950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E040u; }
        if (ctx->pc != 0x16E040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_Hontai_0x1e5950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E040u; }
        if (ctx->pc != 0x16E040u) { return; }
    }
    ctx->pc = 0x16E040u;
    // 0x16e040: 0xc06fdb0  jal         func_1BF6C0
    ctx->pc = 0x16E040u;
    SET_GPR_U32(ctx, 31, 0x16E048u);
    ctx->pc = 0x1BF6C0u;
    if (runtime->hasFunction(0x1BF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E048u; }
        if (ctx->pc != 0x16E048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn_Pika_Hontai_0x1bf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E048u; }
        if (ctx->pc != 0x16E048u) { return; }
    }
    ctx->pc = 0x16E048u;
    // 0x16e048: 0xc06fd74  jal         func_1BF5D0
    ctx->pc = 0x16E048u;
    SET_GPR_U32(ctx, 31, 0x16E050u);
    ctx->pc = 0x1BF5D0u;
    if (runtime->hasFunction(0x1BF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E050u; }
        if (ctx->pc != 0x16E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_Hontai_0x1bf5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E050u; }
        if (ctx->pc != 0x16E050u) { return; }
    }
    ctx->pc = 0x16E050u;
    // 0x16e050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e054: 0x3e00008  jr          $ra
    ctx->pc = 0x16E054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E054u;
            // 0x16e058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E05Cu;
}
