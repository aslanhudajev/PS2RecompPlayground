#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage5EnemyInit
// Address: 0x16e250 - 0x16e2b4
void stage5EnemyInit_0x16e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage5EnemyInit_0x16e250");
#endif

    ctx->pc = 0x16e250u;

    // 0x16e250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e258: 0xc06d038  jal         func_1B40E0
    ctx->pc = 0x16E258u;
    SET_GPR_U32(ctx, 31, 0x16E260u);
    ctx->pc = 0x1B40E0u;
    if (runtime->hasFunction(0x1B40E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B40E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E260u; }
        if (ctx->pc != 0x16E260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn5_01_Hontai_0x1b40e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E260u; }
        if (ctx->pc != 0x16E260u) { return; }
    }
    ctx->pc = 0x16E260u;
    // 0x16e260: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x16E260u;
    SET_GPR_U32(ctx, 31, 0x16E268u);
    ctx->pc = 0x1B3FE0u;
    if (runtime->hasFunction(0x1B3FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E268u; }
        if (ctx->pc != 0x16E268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_Hontai_0x1b3fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E268u; }
        if (ctx->pc != 0x16E268u) { return; }
    }
    ctx->pc = 0x16E268u;
    // 0x16e268: 0xc06d388  jal         func_1B4E20
    ctx->pc = 0x16E268u;
    SET_GPR_U32(ctx, 31, 0x16E270u);
    ctx->pc = 0x1B4E20u;
    if (runtime->hasFunction(0x1B4E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B4E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E270u; }
        if (ctx->pc != 0x16E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn5_02_Hontai_0x1b4e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E270u; }
        if (ctx->pc != 0x16E270u) { return; }
    }
    ctx->pc = 0x16E270u;
    // 0x16e270: 0xc06d348  jal         func_1B4D20
    ctx->pc = 0x16E270u;
    SET_GPR_U32(ctx, 31, 0x16E278u);
    ctx->pc = 0x1B4D20u;
    if (runtime->hasFunction(0x1B4D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B4D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E278u; }
        if (ctx->pc != 0x16E278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_Hontai_0x1b4d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E278u; }
        if (ctx->pc != 0x16E278u) { return; }
    }
    ctx->pc = 0x16E278u;
    // 0x16e278: 0xc06d6bc  jal         func_1B5AF0
    ctx->pc = 0x16E278u;
    SET_GPR_U32(ctx, 31, 0x16E280u);
    ctx->pc = 0x1B5AF0u;
    if (runtime->hasFunction(0x1B5AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E280u; }
        if (ctx->pc != 0x16E280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn5_03_Hontai_0x1b5af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E280u; }
        if (ctx->pc != 0x16E280u) { return; }
    }
    ctx->pc = 0x16E280u;
    // 0x16e280: 0xc06d67c  jal         func_1B59F0
    ctx->pc = 0x16E280u;
    SET_GPR_U32(ctx, 31, 0x16E288u);
    ctx->pc = 0x1B59F0u;
    if (runtime->hasFunction(0x1B59F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B59F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E288u; }
        if (ctx->pc != 0x16E288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_Hontai_0x1b59f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E288u; }
        if (ctx->pc != 0x16E288u) { return; }
    }
    ctx->pc = 0x16E288u;
    // 0x16e288: 0xc070004  jal         func_1C0010
    ctx->pc = 0x16E288u;
    SET_GPR_U32(ctx, 31, 0x16E290u);
    ctx->pc = 0x1C0010u;
    if (runtime->hasFunction(0x1C0010u)) {
        auto targetFn = runtime->lookupFunction(0x1C0010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E290u; }
        if (ctx->pc != 0x16E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage5Boss_Hontai_0x1c0010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E290u; }
        if (ctx->pc != 0x16E290u) { return; }
    }
    ctx->pc = 0x16E290u;
    // 0x16e290: 0xc06ff78  jal         func_1BFDE0
    ctx->pc = 0x16E290u;
    SET_GPR_U32(ctx, 31, 0x16E298u);
    ctx->pc = 0x1BFDE0u;
    if (runtime->hasFunction(0x1BFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E298u; }
        if (ctx->pc != 0x16E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage5Boss_Hontai_0x1bfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E298u; }
        if (ctx->pc != 0x16E298u) { return; }
    }
    ctx->pc = 0x16E298u;
    // 0x16e298: 0xc06fdb0  jal         func_1BF6C0
    ctx->pc = 0x16E298u;
    SET_GPR_U32(ctx, 31, 0x16E2A0u);
    ctx->pc = 0x1BF6C0u;
    if (runtime->hasFunction(0x1BF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2A0u; }
        if (ctx->pc != 0x16E2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn_Pika_Hontai_0x1bf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2A0u; }
        if (ctx->pc != 0x16E2A0u) { return; }
    }
    ctx->pc = 0x16E2A0u;
    // 0x16e2a0: 0xc06fd74  jal         func_1BF5D0
    ctx->pc = 0x16E2A0u;
    SET_GPR_U32(ctx, 31, 0x16E2A8u);
    ctx->pc = 0x1BF5D0u;
    if (runtime->hasFunction(0x1BF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2A8u; }
        if (ctx->pc != 0x16E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_Hontai_0x1bf5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2A8u; }
        if (ctx->pc != 0x16E2A8u) { return; }
    }
    ctx->pc = 0x16E2A8u;
    // 0x16e2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16E2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E2ACu;
            // 0x16e2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E2B4u;
}
