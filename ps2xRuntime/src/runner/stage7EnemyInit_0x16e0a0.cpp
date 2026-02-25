#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage7EnemyInit
// Address: 0x16e0a0 - 0x16e0f4
void stage7EnemyInit_0x16e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage7EnemyInit_0x16e0a0");
#endif

    ctx->pc = 0x16e0a0u;

    // 0x16e0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e0a8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x16E0A8u;
    SET_GPR_U32(ctx, 31, 0x16E0B0u);
    ctx->pc = 0x1AF4B0u;
    if (runtime->hasFunction(0x1AF4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0B0u; }
        if (ctx->pc != 0x16E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn7_01_Hontai_0x1af4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0B0u; }
        if (ctx->pc != 0x16E0B0u) { return; }
    }
    ctx->pc = 0x16E0B0u;
    // 0x16e0b0: 0xc06bcec  jal         func_1AF3B0
    ctx->pc = 0x16E0B0u;
    SET_GPR_U32(ctx, 31, 0x16E0B8u);
    ctx->pc = 0x1AF3B0u;
    if (runtime->hasFunction(0x1AF3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0B8u; }
        if (ctx->pc != 0x16E0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_Hontai_0x1af3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0B8u; }
        if (ctx->pc != 0x16E0B8u) { return; }
    }
    ctx->pc = 0x16E0B8u;
    // 0x16e0b8: 0xc06c0f4  jal         func_1B03D0
    ctx->pc = 0x16E0B8u;
    SET_GPR_U32(ctx, 31, 0x16E0C0u);
    ctx->pc = 0x1B03D0u;
    if (runtime->hasFunction(0x1B03D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B03D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0C0u; }
        if (ctx->pc != 0x16E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn7_02_Hontai_0x1b03d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0C0u; }
        if (ctx->pc != 0x16E0C0u) { return; }
    }
    ctx->pc = 0x16E0C0u;
    // 0x16e0c0: 0xc06c0b4  jal         func_1B02D0
    ctx->pc = 0x16E0C0u;
    SET_GPR_U32(ctx, 31, 0x16E0C8u);
    ctx->pc = 0x1B02D0u;
    if (runtime->hasFunction(0x1B02D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0C8u; }
        if (ctx->pc != 0x16E0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_Hontai_0x1b02d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0C8u; }
        if (ctx->pc != 0x16E0C8u) { return; }
    }
    ctx->pc = 0x16E0C8u;
    // 0x16e0c8: 0xc06c5ec  jal         func_1B17B0
    ctx->pc = 0x16E0C8u;
    SET_GPR_U32(ctx, 31, 0x16E0D0u);
    ctx->pc = 0x1B17B0u;
    if (runtime->hasFunction(0x1B17B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B17B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0D0u; }
        if (ctx->pc != 0x16E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn7_03_Hontai_0x1b17b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0D0u; }
        if (ctx->pc != 0x16E0D0u) { return; }
    }
    ctx->pc = 0x16E0D0u;
    // 0x16e0d0: 0xc06c5ac  jal         func_1B16B0
    ctx->pc = 0x16E0D0u;
    SET_GPR_U32(ctx, 31, 0x16E0D8u);
    ctx->pc = 0x1B16B0u;
    if (runtime->hasFunction(0x1B16B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B16B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0D8u; }
        if (ctx->pc != 0x16E0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_Hontai_0x1b16b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0D8u; }
        if (ctx->pc != 0x16E0D8u) { return; }
    }
    ctx->pc = 0x16E0D8u;
    // 0x16e0d8: 0xc06e154  jal         func_1B8550
    ctx->pc = 0x16E0D8u;
    SET_GPR_U32(ctx, 31, 0x16E0E0u);
    ctx->pc = 0x1B8550u;
    if (runtime->hasFunction(0x1B8550u)) {
        auto targetFn = runtime->lookupFunction(0x1B8550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0E0u; }
        if (ctx->pc != 0x16E0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage7Boss_Hontai_0x1b8550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0E0u; }
        if (ctx->pc != 0x16E0E0u) { return; }
    }
    ctx->pc = 0x16E0E0u;
    // 0x16e0e0: 0xc06e00c  jal         func_1B8030
    ctx->pc = 0x16E0E0u;
    SET_GPR_U32(ctx, 31, 0x16E0E8u);
    ctx->pc = 0x1B8030u;
    if (runtime->hasFunction(0x1B8030u)) {
        auto targetFn = runtime->lookupFunction(0x1B8030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0E8u; }
        if (ctx->pc != 0x16E0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage7Boss_Hontai_0x1b8030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0E8u; }
        if (ctx->pc != 0x16E0E8u) { return; }
    }
    ctx->pc = 0x16E0E8u;
    // 0x16e0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x16E0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E0ECu;
            // 0x16e0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E0F4u;
}
