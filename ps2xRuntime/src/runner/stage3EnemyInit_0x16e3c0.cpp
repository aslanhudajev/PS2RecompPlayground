#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage3EnemyInit
// Address: 0x16e3c0 - 0x16e434
void stage3EnemyInit_0x16e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage3EnemyInit_0x16e3c0");
#endif

    ctx->pc = 0x16e3c0u;

    // 0x16e3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e3c8: 0xc066da8  jal         func_19B6A0
    ctx->pc = 0x16E3C8u;
    SET_GPR_U32(ctx, 31, 0x16E3D0u);
    ctx->pc = 0x19B6A0u;
    if (runtime->hasFunction(0x19B6A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3D0u; }
        if (ctx->pc != 0x16E3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn3_01_Hontai_0x19b6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3D0u; }
        if (ctx->pc != 0x16E3D0u) { return; }
    }
    ctx->pc = 0x16E3D0u;
    // 0x16e3d0: 0xc066d68  jal         func_19B5A0
    ctx->pc = 0x16E3D0u;
    SET_GPR_U32(ctx, 31, 0x16E3D8u);
    ctx->pc = 0x19B5A0u;
    if (runtime->hasFunction(0x19B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3D8u; }
        if (ctx->pc != 0x16E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_Hontai_0x19b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3D8u; }
        if (ctx->pc != 0x16E3D8u) { return; }
    }
    ctx->pc = 0x16E3D8u;
    // 0x16e3d8: 0xc067028  jal         func_19C0A0
    ctx->pc = 0x16E3D8u;
    SET_GPR_U32(ctx, 31, 0x16E3E0u);
    ctx->pc = 0x19C0A0u;
    if (runtime->hasFunction(0x19C0A0u)) {
        auto targetFn = runtime->lookupFunction(0x19C0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3E0u; }
        if (ctx->pc != 0x16E3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn3_02_Hontai_0x19c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3E0u; }
        if (ctx->pc != 0x16E3E0u) { return; }
    }
    ctx->pc = 0x16E3E0u;
    // 0x16e3e0: 0xc066fe8  jal         func_19BFA0
    ctx->pc = 0x16E3E0u;
    SET_GPR_U32(ctx, 31, 0x16E3E8u);
    ctx->pc = 0x19BFA0u;
    if (runtime->hasFunction(0x19BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3E8u; }
        if (ctx->pc != 0x16E3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_02_Hontai_0x19bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3E8u; }
        if (ctx->pc != 0x16E3E8u) { return; }
    }
    ctx->pc = 0x16E3E8u;
    // 0x16e3e8: 0xc0672f8  jal         func_19CBE0
    ctx->pc = 0x16E3E8u;
    SET_GPR_U32(ctx, 31, 0x16E3F0u);
    ctx->pc = 0x19CBE0u;
    if (runtime->hasFunction(0x19CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3F0u; }
        if (ctx->pc != 0x16E3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn3_03_Hontai_0x19cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3F0u; }
        if (ctx->pc != 0x16E3F0u) { return; }
    }
    ctx->pc = 0x16E3F0u;
    // 0x16e3f0: 0xc0672b8  jal         func_19CAE0
    ctx->pc = 0x16E3F0u;
    SET_GPR_U32(ctx, 31, 0x16E3F8u);
    ctx->pc = 0x19CAE0u;
    if (runtime->hasFunction(0x19CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3F8u; }
        if (ctx->pc != 0x16E3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_03_Hontai_0x19cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3F8u; }
        if (ctx->pc != 0x16E3F8u) { return; }
    }
    ctx->pc = 0x16E3F8u;
    // 0x16e3f8: 0xc067cec  jal         func_19F3B0
    ctx->pc = 0x16E3F8u;
    SET_GPR_U32(ctx, 31, 0x16E400u);
    ctx->pc = 0x19F3B0u;
    if (runtime->hasFunction(0x19F3B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E400u; }
        if (ctx->pc != 0x16E400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn3_04_Hontai_0x19f3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E400u; }
        if (ctx->pc != 0x16E400u) { return; }
    }
    ctx->pc = 0x16E400u;
    // 0x16e400: 0xc067cac  jal         func_19F2B0
    ctx->pc = 0x16E400u;
    SET_GPR_U32(ctx, 31, 0x16E408u);
    ctx->pc = 0x19F2B0u;
    if (runtime->hasFunction(0x19F2B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E408u; }
        if (ctx->pc != 0x16E408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_04_Hontai_0x19f2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E408u; }
        if (ctx->pc != 0x16E408u) { return; }
    }
    ctx->pc = 0x16E408u;
    // 0x16e408: 0xc068384  jal         func_1A0E10
    ctx->pc = 0x16E408u;
    SET_GPR_U32(ctx, 31, 0x16E410u);
    ctx->pc = 0x1A0E10u;
    if (runtime->hasFunction(0x1A0E10u)) {
        auto targetFn = runtime->lookupFunction(0x1A0E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E410u; }
        if (ctx->pc != 0x16E410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage3Boss_Hontai_0x1a0e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E410u; }
        if (ctx->pc != 0x16E410u) { return; }
    }
    ctx->pc = 0x16E410u;
    // 0x16e410: 0xc0682a4  jal         func_1A0A90
    ctx->pc = 0x16E410u;
    SET_GPR_U32(ctx, 31, 0x16E418u);
    ctx->pc = 0x1A0A90u;
    if (runtime->hasFunction(0x1A0A90u)) {
        auto targetFn = runtime->lookupFunction(0x1A0A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E418u; }
        if (ctx->pc != 0x16E418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage3Boss_Hontai_0x1a0a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E418u; }
        if (ctx->pc != 0x16E418u) { return; }
    }
    ctx->pc = 0x16E418u;
    // 0x16e418: 0xc06fdb0  jal         func_1BF6C0
    ctx->pc = 0x16E418u;
    SET_GPR_U32(ctx, 31, 0x16E420u);
    ctx->pc = 0x1BF6C0u;
    if (runtime->hasFunction(0x1BF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E420u; }
        if (ctx->pc != 0x16E420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn_Pika_Hontai_0x1bf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E420u; }
        if (ctx->pc != 0x16E420u) { return; }
    }
    ctx->pc = 0x16E420u;
    // 0x16e420: 0xc06fd74  jal         func_1BF5D0
    ctx->pc = 0x16E420u;
    SET_GPR_U32(ctx, 31, 0x16E428u);
    ctx->pc = 0x1BF5D0u;
    if (runtime->hasFunction(0x1BF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E428u; }
        if (ctx->pc != 0x16E428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_Hontai_0x1bf5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E428u; }
        if (ctx->pc != 0x16E428u) { return; }
    }
    ctx->pc = 0x16E428u;
    // 0x16e428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E42Cu;
            // 0x16e430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E434u;
}
