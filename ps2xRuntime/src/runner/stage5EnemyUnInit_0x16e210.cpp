#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage5EnemyUnInit
// Address: 0x16e210 - 0x16e24c
void stage5EnemyUnInit_0x16e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage5EnemyUnInit_0x16e210");
#endif

    ctx->pc = 0x16e210u;

    // 0x16e210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e218: 0xc06cfec  jal         func_1B3FB0
    ctx->pc = 0x16E218u;
    SET_GPR_U32(ctx, 31, 0x16E220u);
    ctx->pc = 0x1B3FB0u;
    if (runtime->hasFunction(0x1B3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E220u; }
        if (ctx->pc != 0x16E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn5_01_Hontai_0x1b3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E220u; }
        if (ctx->pc != 0x16E220u) { return; }
    }
    ctx->pc = 0x16E220u;
    // 0x16e220: 0xc06d344  jal         func_1B4D10
    ctx->pc = 0x16E220u;
    SET_GPR_U32(ctx, 31, 0x16E228u);
    ctx->pc = 0x1B4D10u;
    if (runtime->hasFunction(0x1B4D10u)) {
        auto targetFn = runtime->lookupFunction(0x1B4D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E228u; }
        if (ctx->pc != 0x16E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn5_02_Hontai_0x1b4d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E228u; }
        if (ctx->pc != 0x16E228u) { return; }
    }
    ctx->pc = 0x16E228u;
    // 0x16e228: 0xc06d678  jal         func_1B59E0
    ctx->pc = 0x16E228u;
    SET_GPR_U32(ctx, 31, 0x16E230u);
    ctx->pc = 0x1B59E0u;
    if (runtime->hasFunction(0x1B59E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B59E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E230u; }
        if (ctx->pc != 0x16E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn5_03_Hontai_0x1b59e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E230u; }
        if (ctx->pc != 0x16E230u) { return; }
    }
    ctx->pc = 0x16E230u;
    // 0x16e230: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x16E230u;
    SET_GPR_U32(ctx, 31, 0x16E238u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E238u; }
        if (ctx->pc != 0x16E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage5Boss_Hontai_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E238u; }
        if (ctx->pc != 0x16E238u) { return; }
    }
    ctx->pc = 0x16E238u;
    // 0x16e238: 0xc06fd70  jal         func_1BF5C0
    ctx->pc = 0x16E238u;
    SET_GPR_U32(ctx, 31, 0x16E240u);
    ctx->pc = 0x1BF5C0u;
    if (runtime->hasFunction(0x1BF5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E240u; }
        if (ctx->pc != 0x16E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn_Pika_Hontai_0x1bf5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E240u; }
        if (ctx->pc != 0x16E240u) { return; }
    }
    ctx->pc = 0x16E240u;
    // 0x16e240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e244: 0x3e00008  jr          $ra
    ctx->pc = 0x16E244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E244u;
            // 0x16e248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E24Cu;
}
