#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage7EnemyUnInit
// Address: 0x16e060 - 0x16e094
void stage7EnemyUnInit_0x16e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage7EnemyUnInit_0x16e060");
#endif

    ctx->pc = 0x16e060u;

    // 0x16e060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e068: 0xc06bce0  jal         func_1AF380
    ctx->pc = 0x16E068u;
    SET_GPR_U32(ctx, 31, 0x16E070u);
    ctx->pc = 0x1AF380u;
    if (runtime->hasFunction(0x1AF380u)) {
        auto targetFn = runtime->lookupFunction(0x1AF380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E070u; }
        if (ctx->pc != 0x16E070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn7_01_Hontai_0x1af380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E070u; }
        if (ctx->pc != 0x16E070u) { return; }
    }
    ctx->pc = 0x16E070u;
    // 0x16e070: 0xc06c0b0  jal         func_1B02C0
    ctx->pc = 0x16E070u;
    SET_GPR_U32(ctx, 31, 0x16E078u);
    ctx->pc = 0x1B02C0u;
    if (runtime->hasFunction(0x1B02C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E078u; }
        if (ctx->pc != 0x16E078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn7_02_Hontai_0x1b02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E078u; }
        if (ctx->pc != 0x16E078u) { return; }
    }
    ctx->pc = 0x16E078u;
    // 0x16e078: 0xc06c5a8  jal         func_1B16A0
    ctx->pc = 0x16E078u;
    SET_GPR_U32(ctx, 31, 0x16E080u);
    ctx->pc = 0x1B16A0u;
    if (runtime->hasFunction(0x1B16A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B16A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E080u; }
        if (ctx->pc != 0x16E080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn7_03_Hontai_0x1b16a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E080u; }
        if (ctx->pc != 0x16E080u) { return; }
    }
    ctx->pc = 0x16E080u;
    // 0x16e080: 0xc06dff0  jal         func_1B7FC0
    ctx->pc = 0x16E080u;
    SET_GPR_U32(ctx, 31, 0x16E088u);
    ctx->pc = 0x1B7FC0u;
    if (runtime->hasFunction(0x1B7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E088u; }
        if (ctx->pc != 0x16E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage7Boss_Hontai_0x1b7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E088u; }
        if (ctx->pc != 0x16E088u) { return; }
    }
    ctx->pc = 0x16E088u;
    // 0x16e088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e08c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E08Cu;
            // 0x16e090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E094u;
}
