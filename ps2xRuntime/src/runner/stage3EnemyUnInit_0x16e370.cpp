#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage3EnemyUnInit
// Address: 0x16e370 - 0x16e3b4
void stage3EnemyUnInit_0x16e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage3EnemyUnInit_0x16e370");
#endif

    ctx->pc = 0x16e370u;

    // 0x16e370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e378: 0xc066d5c  jal         func_19B570
    ctx->pc = 0x16E378u;
    SET_GPR_U32(ctx, 31, 0x16E380u);
    ctx->pc = 0x19B570u;
    if (runtime->hasFunction(0x19B570u)) {
        auto targetFn = runtime->lookupFunction(0x19B570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E380u; }
        if (ctx->pc != 0x16E380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn3_01_Hontai_0x19b570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E380u; }
        if (ctx->pc != 0x16E380u) { return; }
    }
    ctx->pc = 0x16E380u;
    // 0x16e380: 0xc066fe4  jal         func_19BF90
    ctx->pc = 0x16E380u;
    SET_GPR_U32(ctx, 31, 0x16E388u);
    ctx->pc = 0x19BF90u;
    if (runtime->hasFunction(0x19BF90u)) {
        auto targetFn = runtime->lookupFunction(0x19BF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E388u; }
        if (ctx->pc != 0x16E388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn3_02_Hontai_0x19bf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E388u; }
        if (ctx->pc != 0x16E388u) { return; }
    }
    ctx->pc = 0x16E388u;
    // 0x16e388: 0xc0672b4  jal         func_19CAD0
    ctx->pc = 0x16E388u;
    SET_GPR_U32(ctx, 31, 0x16E390u);
    ctx->pc = 0x19CAD0u;
    if (runtime->hasFunction(0x19CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E390u; }
        if (ctx->pc != 0x16E390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn3_03_Hontai_0x19cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E390u; }
        if (ctx->pc != 0x16E390u) { return; }
    }
    ctx->pc = 0x16E390u;
    // 0x16e390: 0xc067ca8  jal         func_19F2A0
    ctx->pc = 0x16E390u;
    SET_GPR_U32(ctx, 31, 0x16E398u);
    ctx->pc = 0x19F2A0u;
    if (runtime->hasFunction(0x19F2A0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E398u; }
        if (ctx->pc != 0x16E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn3_04_Hontai_0x19f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E398u; }
        if (ctx->pc != 0x16E398u) { return; }
    }
    ctx->pc = 0x16E398u;
    // 0x16e398: 0xc068290  jal         func_1A0A40
    ctx->pc = 0x16E398u;
    SET_GPR_U32(ctx, 31, 0x16E3A0u);
    ctx->pc = 0x1A0A40u;
    if (runtime->hasFunction(0x1A0A40u)) {
        auto targetFn = runtime->lookupFunction(0x1A0A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3A0u; }
        if (ctx->pc != 0x16E3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage3Boss_Hontai_0x1a0a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3A0u; }
        if (ctx->pc != 0x16E3A0u) { return; }
    }
    ctx->pc = 0x16E3A0u;
    // 0x16e3a0: 0xc06fd70  jal         func_1BF5C0
    ctx->pc = 0x16E3A0u;
    SET_GPR_U32(ctx, 31, 0x16E3A8u);
    ctx->pc = 0x1BF5C0u;
    if (runtime->hasFunction(0x1BF5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3A8u; }
        if (ctx->pc != 0x16E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn_Pika_Hontai_0x1bf5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3A8u; }
        if (ctx->pc != 0x16E3A8u) { return; }
    }
    ctx->pc = 0x16E3A8u;
    // 0x16e3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16E3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E3ACu;
            // 0x16e3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E3B4u;
}
