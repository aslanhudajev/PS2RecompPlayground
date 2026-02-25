#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage1EnemyInit
// Address: 0x16e530 - 0x16e594
void stage1EnemyInit_0x16e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage1EnemyInit_0x16e530");
#endif

    ctx->pc = 0x16e530u;

    // 0x16e530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e538: 0xc07a368  jal         func_1E8DA0
    ctx->pc = 0x16E538u;
    SET_GPR_U32(ctx, 31, 0x16E540u);
    ctx->pc = 0x1E8DA0u;
    if (runtime->hasFunction(0x1E8DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E540u; }
        if (ctx->pc != 0x16E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn1_01_Hontai_0x1e8da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E540u; }
        if (ctx->pc != 0x16E540u) { return; }
    }
    ctx->pc = 0x16E540u;
    // 0x16e540: 0xc07a328  jal         func_1E8CA0
    ctx->pc = 0x16E540u;
    SET_GPR_U32(ctx, 31, 0x16E548u);
    ctx->pc = 0x1E8CA0u;
    if (runtime->hasFunction(0x1E8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E548u; }
        if (ctx->pc != 0x16E548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_Hontai_0x1e8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E548u; }
        if (ctx->pc != 0x16E548u) { return; }
    }
    ctx->pc = 0x16E548u;
    // 0x16e548: 0xc07a6bc  jal         func_1E9AF0
    ctx->pc = 0x16E548u;
    SET_GPR_U32(ctx, 31, 0x16E550u);
    ctx->pc = 0x1E9AF0u;
    if (runtime->hasFunction(0x1E9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E550u; }
        if (ctx->pc != 0x16E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn1_02_Hontai_0x1e9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E550u; }
        if (ctx->pc != 0x16E550u) { return; }
    }
    ctx->pc = 0x16E550u;
    // 0x16e550: 0xc07a680  jal         func_1E9A00
    ctx->pc = 0x16E550u;
    SET_GPR_U32(ctx, 31, 0x16E558u);
    ctx->pc = 0x1E9A00u;
    if (runtime->hasFunction(0x1E9A00u)) {
        auto targetFn = runtime->lookupFunction(0x1E9A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E558u; }
        if (ctx->pc != 0x16E558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_Hontai_0x1e9a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E558u; }
        if (ctx->pc != 0x16E558u) { return; }
    }
    ctx->pc = 0x16E558u;
    // 0x16e558: 0xc07993c  jal         func_1E64F0
    ctx->pc = 0x16E558u;
    SET_GPR_U32(ctx, 31, 0x16E560u);
    ctx->pc = 0x1E64F0u;
    if (runtime->hasFunction(0x1E64F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E64F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E560u; }
        if (ctx->pc != 0x16E560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn1_03_Hontai_0x1e64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E560u; }
        if (ctx->pc != 0x16E560u) { return; }
    }
    ctx->pc = 0x16E560u;
    // 0x16e560: 0xc079900  jal         func_1E6400
    ctx->pc = 0x16E560u;
    SET_GPR_U32(ctx, 31, 0x16E568u);
    ctx->pc = 0x1E6400u;
    if (runtime->hasFunction(0x1E6400u)) {
        auto targetFn = runtime->lookupFunction(0x1E6400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E568u; }
        if (ctx->pc != 0x16E568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_03_Hontai_0x1e6400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E568u; }
        if (ctx->pc != 0x16E568u) { return; }
    }
    ctx->pc = 0x16E568u;
    // 0x16e568: 0xc079d80  jal         func_1E7600
    ctx->pc = 0x16E568u;
    SET_GPR_U32(ctx, 31, 0x16E570u);
    ctx->pc = 0x1E7600u;
    if (runtime->hasFunction(0x1E7600u)) {
        auto targetFn = runtime->lookupFunction(0x1E7600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E570u; }
        if (ctx->pc != 0x16E570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn1_04_Hontai_0x1e7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E570u; }
        if (ctx->pc != 0x16E570u) { return; }
    }
    ctx->pc = 0x16E570u;
    // 0x16e570: 0xc079d44  jal         func_1E7510
    ctx->pc = 0x16E570u;
    SET_GPR_U32(ctx, 31, 0x16E578u);
    ctx->pc = 0x1E7510u;
    if (runtime->hasFunction(0x1E7510u)) {
        auto targetFn = runtime->lookupFunction(0x1E7510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E578u; }
        if (ctx->pc != 0x16E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_04_Hontai_0x1e7510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E578u; }
        if (ctx->pc != 0x16E578u) { return; }
    }
    ctx->pc = 0x16E578u;
    // 0x16e578: 0xc0587fc  jal         func_161FF0
    ctx->pc = 0x16E578u;
    SET_GPR_U32(ctx, 31, 0x16E580u);
    ctx->pc = 0x161FF0u;
    if (runtime->hasFunction(0x161FF0u)) {
        auto targetFn = runtime->lookupFunction(0x161FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E580u; }
        if (ctx->pc != 0x16E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage1Boss_Hontai_0x161ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E580u; }
        if (ctx->pc != 0x16E580u) { return; }
    }
    ctx->pc = 0x16E580u;
    // 0x16e580: 0xc05871c  jal         func_161C70
    ctx->pc = 0x16E580u;
    SET_GPR_U32(ctx, 31, 0x16E588u);
    ctx->pc = 0x161C70u;
    if (runtime->hasFunction(0x161C70u)) {
        auto targetFn = runtime->lookupFunction(0x161C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E588u; }
        if (ctx->pc != 0x16E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage1Boss_Hontai_0x161c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E588u; }
        if (ctx->pc != 0x16E588u) { return; }
    }
    ctx->pc = 0x16E588u;
    // 0x16e588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e58c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E58Cu;
            // 0x16e590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E594u;
}
