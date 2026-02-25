#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage8EnemyUnInit
// Address: 0x16dfb0 - 0x16dfec
void stage8EnemyUnInit_0x16dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage8EnemyUnInit_0x16dfb0");
#endif

    ctx->pc = 0x16dfb0u;

    // 0x16dfb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dfb8: 0xc07822c  jal         func_1E08B0
    ctx->pc = 0x16DFB8u;
    SET_GPR_U32(ctx, 31, 0x16DFC0u);
    ctx->pc = 0x1E08B0u;
    if (runtime->hasFunction(0x1E08B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E08B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFC0u; }
        if (ctx->pc != 0x16DFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage8Boss_Hontai_0x1e08b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFC0u; }
        if (ctx->pc != 0x16DFC0u) { return; }
    }
    ctx->pc = 0x16DFC0u;
    // 0x16dfc0: 0xc07b460  jal         func_1ED180
    ctx->pc = 0x16DFC0u;
    SET_GPR_U32(ctx, 31, 0x16DFC8u);
    ctx->pc = 0x1ED180u;
    if (runtime->hasFunction(0x1ED180u)) {
        auto targetFn = runtime->lookupFunction(0x1ED180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFC8u; }
        if (ctx->pc != 0x16DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage8TrueBoss_Hontai_0x1ed180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFC8u; }
        if (ctx->pc != 0x16DFC8u) { return; }
    }
    ctx->pc = 0x16DFC8u;
    // 0x16dfc8: 0xc078cd4  jal         func_1E3350
    ctx->pc = 0x16DFC8u;
    SET_GPR_U32(ctx, 31, 0x16DFD0u);
    ctx->pc = 0x1E3350u;
    if (runtime->hasFunction(0x1E3350u)) {
        auto targetFn = runtime->lookupFunction(0x1E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFD0u; }
        if (ctx->pc != 0x16DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn8_bit_Hontai_0x1e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFD0u; }
        if (ctx->pc != 0x16DFD0u) { return; }
    }
    ctx->pc = 0x16DFD0u;
    // 0x16dfd0: 0xc079650  jal         func_1E5940
    ctx->pc = 0x16DFD0u;
    SET_GPR_U32(ctx, 31, 0x16DFD8u);
    ctx->pc = 0x1E5940u;
    if (runtime->hasFunction(0x1E5940u)) {
        auto targetFn = runtime->lookupFunction(0x1E5940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFD8u; }
        if (ctx->pc != 0x16DFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn8_kirai_Hontai_0x1e5940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFD8u; }
        if (ctx->pc != 0x16DFD8u) { return; }
    }
    ctx->pc = 0x16DFD8u;
    // 0x16dfd8: 0xc06fd70  jal         func_1BF5C0
    ctx->pc = 0x16DFD8u;
    SET_GPR_U32(ctx, 31, 0x16DFE0u);
    ctx->pc = 0x1BF5C0u;
    if (runtime->hasFunction(0x1BF5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFE0u; }
        if (ctx->pc != 0x16DFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn_Pika_Hontai_0x1bf5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFE0u; }
        if (ctx->pc != 0x16DFE0u) { return; }
    }
    ctx->pc = 0x16DFE0u;
    // 0x16dfe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DFE4u;
            // 0x16dfe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DFECu;
}
