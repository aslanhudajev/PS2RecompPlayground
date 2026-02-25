#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage4EnemyInit
// Address: 0x16e300 - 0x16e364
void stage4EnemyInit_0x16e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage4EnemyInit_0x16e300");
#endif

    ctx->pc = 0x16e300u;

    // 0x16e300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e308: 0xc069134  jal         func_1A44D0
    ctx->pc = 0x16E308u;
    SET_GPR_U32(ctx, 31, 0x16E310u);
    ctx->pc = 0x1A44D0u;
    if (runtime->hasFunction(0x1A44D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E310u; }
        if (ctx->pc != 0x16E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn4_01_Hontai_0x1a44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E310u; }
        if (ctx->pc != 0x16E310u) { return; }
    }
    ctx->pc = 0x16E310u;
    // 0x16e310: 0xc0690f4  jal         func_1A43D0
    ctx->pc = 0x16E310u;
    SET_GPR_U32(ctx, 31, 0x16E318u);
    ctx->pc = 0x1A43D0u;
    if (runtime->hasFunction(0x1A43D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A43D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E318u; }
        if (ctx->pc != 0x16E318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_Hontai_0x1a43d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E318u; }
        if (ctx->pc != 0x16E318u) { return; }
    }
    ctx->pc = 0x16E318u;
    // 0x16e318: 0xc06a0b0  jal         func_1A82C0
    ctx->pc = 0x16E318u;
    SET_GPR_U32(ctx, 31, 0x16E320u);
    ctx->pc = 0x1A82C0u;
    if (runtime->hasFunction(0x1A82C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A82C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E320u; }
        if (ctx->pc != 0x16E320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn4_02_Hontai_0x1a82c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E320u; }
        if (ctx->pc != 0x16E320u) { return; }
    }
    ctx->pc = 0x16E320u;
    // 0x16e320: 0xc06a070  jal         func_1A81C0
    ctx->pc = 0x16E320u;
    SET_GPR_U32(ctx, 31, 0x16E328u);
    ctx->pc = 0x1A81C0u;
    if (runtime->hasFunction(0x1A81C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A81C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E328u; }
        if (ctx->pc != 0x16E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_02_Hontai_0x1a81c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E328u; }
        if (ctx->pc != 0x16E328u) { return; }
    }
    ctx->pc = 0x16E328u;
    // 0x16e328: 0xc069734  jal         func_1A5CD0
    ctx->pc = 0x16E328u;
    SET_GPR_U32(ctx, 31, 0x16E330u);
    ctx->pc = 0x1A5CD0u;
    if (runtime->hasFunction(0x1A5CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E330u; }
        if (ctx->pc != 0x16E330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn4_03_Hontai_0x1a5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E330u; }
        if (ctx->pc != 0x16E330u) { return; }
    }
    ctx->pc = 0x16E330u;
    // 0x16e330: 0xc0696f4  jal         func_1A5BD0
    ctx->pc = 0x16E330u;
    SET_GPR_U32(ctx, 31, 0x16E338u);
    ctx->pc = 0x1A5BD0u;
    if (runtime->hasFunction(0x1A5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E338u; }
        if (ctx->pc != 0x16E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_Hontai_0x1a5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E338u; }
        if (ctx->pc != 0x16E338u) { return; }
    }
    ctx->pc = 0x16E338u;
    // 0x16e338: 0xc069af8  jal         func_1A6BE0
    ctx->pc = 0x16E338u;
    SET_GPR_U32(ctx, 31, 0x16E340u);
    ctx->pc = 0x1A6BE0u;
    if (runtime->hasFunction(0x1A6BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E340u; }
        if (ctx->pc != 0x16E340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn4_04_Hontai_0x1a6be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E340u; }
        if (ctx->pc != 0x16E340u) { return; }
    }
    ctx->pc = 0x16E340u;
    // 0x16e340: 0xc069ab8  jal         func_1A6AE0
    ctx->pc = 0x16E340u;
    SET_GPR_U32(ctx, 31, 0x16E348u);
    ctx->pc = 0x1A6AE0u;
    if (runtime->hasFunction(0x1A6AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E348u; }
        if (ctx->pc != 0x16E348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_04_Hontai_0x1a6ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E348u; }
        if (ctx->pc != 0x16E348u) { return; }
    }
    ctx->pc = 0x16E348u;
    // 0x16e348: 0xc06eed0  jal         func_1BBB40
    ctx->pc = 0x16E348u;
    SET_GPR_U32(ctx, 31, 0x16E350u);
    ctx->pc = 0x1BBB40u;
    if (runtime->hasFunction(0x1BBB40u)) {
        auto targetFn = runtime->lookupFunction(0x1BBB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E350u; }
        if (ctx->pc != 0x16E350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage4Boss_Hontai_0x1bbb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E350u; }
        if (ctx->pc != 0x16E350u) { return; }
    }
    ctx->pc = 0x16E350u;
    // 0x16e350: 0xc06ee9c  jal         func_1BBA70
    ctx->pc = 0x16E350u;
    SET_GPR_U32(ctx, 31, 0x16E358u);
    ctx->pc = 0x1BBA70u;
    if (runtime->hasFunction(0x1BBA70u)) {
        auto targetFn = runtime->lookupFunction(0x1BBA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E358u; }
        if (ctx->pc != 0x16E358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage4Boss_Hontai_0x1bba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E358u; }
        if (ctx->pc != 0x16E358u) { return; }
    }
    ctx->pc = 0x16E358u;
    // 0x16e358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e35c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E35Cu;
            // 0x16e360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E364u;
}
