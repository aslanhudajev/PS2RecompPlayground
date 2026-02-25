#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage6EnemyInit
// Address: 0x16e160 - 0x16e204
void stage6EnemyInit_0x16e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage6EnemyInit_0x16e160");
#endif

    ctx->pc = 0x16e160u;

    // 0x16e160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e168: 0xc06a614  jal         func_1A9850
    ctx->pc = 0x16E168u;
    SET_GPR_U32(ctx, 31, 0x16E170u);
    ctx->pc = 0x1A9850u;
    if (runtime->hasFunction(0x1A9850u)) {
        auto targetFn = runtime->lookupFunction(0x1A9850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E170u; }
        if (ctx->pc != 0x16E170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn6_01_Hontai_0x1a9850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E170u; }
        if (ctx->pc != 0x16E170u) { return; }
    }
    ctx->pc = 0x16E170u;
    // 0x16e170: 0xc06a5d4  jal         func_1A9750
    ctx->pc = 0x16E170u;
    SET_GPR_U32(ctx, 31, 0x16E178u);
    ctx->pc = 0x1A9750u;
    if (runtime->hasFunction(0x1A9750u)) {
        auto targetFn = runtime->lookupFunction(0x1A9750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E178u; }
        if (ctx->pc != 0x16E178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_01_Hontai_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E178u; }
        if (ctx->pc != 0x16E178u) { return; }
    }
    ctx->pc = 0x16E178u;
    // 0x16e178: 0xc06a968  jal         func_1AA5A0
    ctx->pc = 0x16E178u;
    SET_GPR_U32(ctx, 31, 0x16E180u);
    ctx->pc = 0x1AA5A0u;
    if (runtime->hasFunction(0x1AA5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E180u; }
        if (ctx->pc != 0x16E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn6_02_Hontai_0x1aa5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E180u; }
        if (ctx->pc != 0x16E180u) { return; }
    }
    ctx->pc = 0x16E180u;
    // 0x16e180: 0xc06a928  jal         func_1AA4A0
    ctx->pc = 0x16E180u;
    SET_GPR_U32(ctx, 31, 0x16E188u);
    ctx->pc = 0x1AA4A0u;
    if (runtime->hasFunction(0x1AA4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E188u; }
        if (ctx->pc != 0x16E188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_Hontai_0x1aa4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E188u; }
        if (ctx->pc != 0x16E188u) { return; }
    }
    ctx->pc = 0x16E188u;
    // 0x16e188: 0xc06ae90  jal         func_1ABA40
    ctx->pc = 0x16E188u;
    SET_GPR_U32(ctx, 31, 0x16E190u);
    ctx->pc = 0x1ABA40u;
    if (runtime->hasFunction(0x1ABA40u)) {
        auto targetFn = runtime->lookupFunction(0x1ABA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E190u; }
        if (ctx->pc != 0x16E190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn6_03_Hontai_0x1aba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E190u; }
        if (ctx->pc != 0x16E190u) { return; }
    }
    ctx->pc = 0x16E190u;
    // 0x16e190: 0xc06ae50  jal         func_1AB940
    ctx->pc = 0x16E190u;
    SET_GPR_U32(ctx, 31, 0x16E198u);
    ctx->pc = 0x1AB940u;
    if (runtime->hasFunction(0x1AB940u)) {
        auto targetFn = runtime->lookupFunction(0x1AB940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E198u; }
        if (ctx->pc != 0x16E198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_03_Hontai_0x1ab940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E198u; }
        if (ctx->pc != 0x16E198u) { return; }
    }
    ctx->pc = 0x16E198u;
    // 0x16e198: 0xc06b3a4  jal         func_1ACE90
    ctx->pc = 0x16E198u;
    SET_GPR_U32(ctx, 31, 0x16E1A0u);
    ctx->pc = 0x1ACE90u;
    if (runtime->hasFunction(0x1ACE90u)) {
        auto targetFn = runtime->lookupFunction(0x1ACE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1A0u; }
        if (ctx->pc != 0x16E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn6_04_Hontai_0x1ace90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1A0u; }
        if (ctx->pc != 0x16E1A0u) { return; }
    }
    ctx->pc = 0x16E1A0u;
    // 0x16e1a0: 0xc06b368  jal         func_1ACDA0
    ctx->pc = 0x16E1A0u;
    SET_GPR_U32(ctx, 31, 0x16E1A8u);
    ctx->pc = 0x1ACDA0u;
    if (runtime->hasFunction(0x1ACDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ACDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1A8u; }
        if (ctx->pc != 0x16E1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_Hontai_0x1acda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1A8u; }
        if (ctx->pc != 0x16E1A8u) { return; }
    }
    ctx->pc = 0x16E1A8u;
    // 0x16e1a8: 0xc06b698  jal         func_1ADA60
    ctx->pc = 0x16E1A8u;
    SET_GPR_U32(ctx, 31, 0x16E1B0u);
    ctx->pc = 0x1ADA60u;
    if (runtime->hasFunction(0x1ADA60u)) {
        auto targetFn = runtime->lookupFunction(0x1ADA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1B0u; }
        if (ctx->pc != 0x16E1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn6_05_Hontai_0x1ada60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1B0u; }
        if (ctx->pc != 0x16E1B0u) { return; }
    }
    ctx->pc = 0x16E1B0u;
    // 0x16e1b0: 0xc06b65c  jal         func_1AD970
    ctx->pc = 0x16E1B0u;
    SET_GPR_U32(ctx, 31, 0x16E1B8u);
    ctx->pc = 0x1AD970u;
    if (runtime->hasFunction(0x1AD970u)) {
        auto targetFn = runtime->lookupFunction(0x1AD970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1B8u; }
        if (ctx->pc != 0x16E1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_Hontai_0x1ad970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1B8u; }
        if (ctx->pc != 0x16E1B8u) { return; }
    }
    ctx->pc = 0x16E1B8u;
    // 0x16e1b8: 0xc06bb08  jal         func_1AEC20
    ctx->pc = 0x16E1B8u;
    SET_GPR_U32(ctx, 31, 0x16E1C0u);
    ctx->pc = 0x1AEC20u;
    if (runtime->hasFunction(0x1AEC20u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1C0u; }
        if (ctx->pc != 0x16E1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn6_06_Hontai_0x1aec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1C0u; }
        if (ctx->pc != 0x16E1C0u) { return; }
    }
    ctx->pc = 0x16E1C0u;
    // 0x16e1c0: 0xc06bacc  jal         func_1AEB30
    ctx->pc = 0x16E1C0u;
    SET_GPR_U32(ctx, 31, 0x16E1C8u);
    ctx->pc = 0x1AEB30u;
    if (runtime->hasFunction(0x1AEB30u)) {
        auto targetFn = runtime->lookupFunction(0x1AEB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1C8u; }
        if (ctx->pc != 0x16E1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_Hontai_0x1aeb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1C8u; }
        if (ctx->pc != 0x16E1C8u) { return; }
    }
    ctx->pc = 0x16E1C8u;
    // 0x16e1c8: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x16E1C8u;
    SET_GPR_U32(ctx, 31, 0x16E1D0u);
    ctx->pc = 0x1AE3E0u;
    if (runtime->hasFunction(0x1AE3E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1D0u; }
        if (ctx->pc != 0x16E1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn6_07_Hontai_0x1ae3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1D0u; }
        if (ctx->pc != 0x16E1D0u) { return; }
    }
    ctx->pc = 0x16E1D0u;
    // 0x16e1d0: 0xc06b8bc  jal         func_1AE2F0
    ctx->pc = 0x16E1D0u;
    SET_GPR_U32(ctx, 31, 0x16E1D8u);
    ctx->pc = 0x1AE2F0u;
    if (runtime->hasFunction(0x1AE2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1D8u; }
        if (ctx->pc != 0x16E1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_07_Hontai_0x1ae2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1D8u; }
        if (ctx->pc != 0x16E1D8u) { return; }
    }
    ctx->pc = 0x16E1D8u;
    // 0x16e1d8: 0xc0711ec  jal         func_1C47B0
    ctx->pc = 0x16E1D8u;
    SET_GPR_U32(ctx, 31, 0x16E1E0u);
    ctx->pc = 0x1C47B0u;
    if (runtime->hasFunction(0x1C47B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C47B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1E0u; }
        if (ctx->pc != 0x16E1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage6Boss_Hontai_0x1c47b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1E0u; }
        if (ctx->pc != 0x16E1E0u) { return; }
    }
    ctx->pc = 0x16E1E0u;
    // 0x16e1e0: 0xc071160  jal         func_1C4580
    ctx->pc = 0x16E1E0u;
    SET_GPR_U32(ctx, 31, 0x16E1E8u);
    ctx->pc = 0x1C4580u;
    if (runtime->hasFunction(0x1C4580u)) {
        auto targetFn = runtime->lookupFunction(0x1C4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1E8u; }
        if (ctx->pc != 0x16E1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage6Boss_Hontai_0x1c4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1E8u; }
        if (ctx->pc != 0x16E1E8u) { return; }
    }
    ctx->pc = 0x16E1E8u;
    // 0x16e1e8: 0xc06fdb0  jal         func_1BF6C0
    ctx->pc = 0x16E1E8u;
    SET_GPR_U32(ctx, 31, 0x16E1F0u);
    ctx->pc = 0x1BF6C0u;
    if (runtime->hasFunction(0x1BF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1F0u; }
        if (ctx->pc != 0x16E1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn_Pika_Hontai_0x1bf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1F0u; }
        if (ctx->pc != 0x16E1F0u) { return; }
    }
    ctx->pc = 0x16E1F0u;
    // 0x16e1f0: 0xc06fd74  jal         func_1BF5D0
    ctx->pc = 0x16E1F0u;
    SET_GPR_U32(ctx, 31, 0x16E1F8u);
    ctx->pc = 0x1BF5D0u;
    if (runtime->hasFunction(0x1BF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1F8u; }
        if (ctx->pc != 0x16E1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_Hontai_0x1bf5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1F8u; }
        if (ctx->pc != 0x16E1F8u) { return; }
    }
    ctx->pc = 0x16E1F8u;
    // 0x16e1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16E1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E1FCu;
            // 0x16e200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E204u;
}
