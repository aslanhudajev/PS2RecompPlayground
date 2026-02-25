#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage4EnemyUnInit
// Address: 0x16e2c0 - 0x16e2fc
void stage4EnemyUnInit_0x16e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage4EnemyUnInit_0x16e2c0");
#endif

    ctx->pc = 0x16e2c0u;

    // 0x16e2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e2c8: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x16E2C8u;
    SET_GPR_U32(ctx, 31, 0x16E2D0u);
    ctx->pc = 0x1A43A0u;
    if (runtime->hasFunction(0x1A43A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A43A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2D0u; }
        if (ctx->pc != 0x16E2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn4_01_Hontai_0x1a43a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2D0u; }
        if (ctx->pc != 0x16E2D0u) { return; }
    }
    ctx->pc = 0x16E2D0u;
    // 0x16e2d0: 0xc06a06c  jal         func_1A81B0
    ctx->pc = 0x16E2D0u;
    SET_GPR_U32(ctx, 31, 0x16E2D8u);
    ctx->pc = 0x1A81B0u;
    if (runtime->hasFunction(0x1A81B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A81B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2D8u; }
        if (ctx->pc != 0x16E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn4_02_Hontai_0x1a81b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2D8u; }
        if (ctx->pc != 0x16E2D8u) { return; }
    }
    ctx->pc = 0x16E2D8u;
    // 0x16e2d8: 0xc0696f0  jal         func_1A5BC0
    ctx->pc = 0x16E2D8u;
    SET_GPR_U32(ctx, 31, 0x16E2E0u);
    ctx->pc = 0x1A5BC0u;
    if (runtime->hasFunction(0x1A5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E0u; }
        if (ctx->pc != 0x16E2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn4_03_Hontai_0x1a5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E0u; }
        if (ctx->pc != 0x16E2E0u) { return; }
    }
    ctx->pc = 0x16E2E0u;
    // 0x16e2e0: 0xc069ab4  jal         func_1A6AD0
    ctx->pc = 0x16E2E0u;
    SET_GPR_U32(ctx, 31, 0x16E2E8u);
    ctx->pc = 0x1A6AD0u;
    if (runtime->hasFunction(0x1A6AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E8u; }
        if (ctx->pc != 0x16E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn4_04_Hontai_0x1a6ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E8u; }
        if (ctx->pc != 0x16E2E8u) { return; }
    }
    ctx->pc = 0x16E2E8u;
    // 0x16e2e8: 0xc06ee90  jal         func_1BBA40
    ctx->pc = 0x16E2E8u;
    SET_GPR_U32(ctx, 31, 0x16E2F0u);
    ctx->pc = 0x1BBA40u;
    if (runtime->hasFunction(0x1BBA40u)) {
        auto targetFn = runtime->lookupFunction(0x1BBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F0u; }
        if (ctx->pc != 0x16E2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage4Boss_Hontai_0x1bba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F0u; }
        if (ctx->pc != 0x16E2F0u) { return; }
    }
    ctx->pc = 0x16E2F0u;
    // 0x16e2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E2F4u;
            // 0x16e2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E2FCu;
}
