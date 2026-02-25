#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX1EnemyUnInit
// Address: 0x16dee0 - 0x16df24
void stageEX1EnemyUnInit_0x16dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX1EnemyUnInit_0x16dee0");
#endif

    ctx->pc = 0x16dee0u;

    // 0x16dee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dee8: 0xc0726c4  jal         func_1C9B10
    ctx->pc = 0x16DEE8u;
    SET_GPR_U32(ctx, 31, 0x16DEF0u);
    ctx->pc = 0x1C9B10u;
    if (runtime->hasFunction(0x1C9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1C9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEF0u; }
        if (ctx->pc != 0x16DEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex1_01_Hontai_0x1c9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEF0u; }
        if (ctx->pc != 0x16DEF0u) { return; }
    }
    ctx->pc = 0x16DEF0u;
    // 0x16def0: 0xc073184  jal         func_1CC610
    ctx->pc = 0x16DEF0u;
    SET_GPR_U32(ctx, 31, 0x16DEF8u);
    ctx->pc = 0x1CC610u;
    if (runtime->hasFunction(0x1CC610u)) {
        auto targetFn = runtime->lookupFunction(0x1CC610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEF8u; }
        if (ctx->pc != 0x16DEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex1_02_Hontai_0x1cc610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEF8u; }
        if (ctx->pc != 0x16DEF8u) { return; }
    }
    ctx->pc = 0x16DEF8u;
    // 0x16def8: 0xc0722c0  jal         func_1C8B00
    ctx->pc = 0x16DEF8u;
    SET_GPR_U32(ctx, 31, 0x16DF00u);
    ctx->pc = 0x1C8B00u;
    if (runtime->hasFunction(0x1C8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1C8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF00u; }
        if (ctx->pc != 0x16DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex1_03_Hontai_0x1c8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF00u; }
        if (ctx->pc != 0x16DF00u) { return; }
    }
    ctx->pc = 0x16DF00u;
    // 0x16df00: 0xc07376c  jal         func_1CDDB0
    ctx->pc = 0x16DF00u;
    SET_GPR_U32(ctx, 31, 0x16DF08u);
    ctx->pc = 0x1CDDB0u;
    if (runtime->hasFunction(0x1CDDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF08u; }
        if (ctx->pc != 0x16DF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex1_04_Hontai_0x1cddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF08u; }
        if (ctx->pc != 0x16DF08u) { return; }
    }
    ctx->pc = 0x16DF08u;
    // 0x16df08: 0xc071f80  jal         func_1C7E00
    ctx->pc = 0x16DF08u;
    SET_GPR_U32(ctx, 31, 0x16DF10u);
    ctx->pc = 0x1C7E00u;
    if (runtime->hasFunction(0x1C7E00u)) {
        auto targetFn = runtime->lookupFunction(0x1C7E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF10u; }
        if (ctx->pc != 0x16DF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex1_05_Hontai_0x1c7e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF10u; }
        if (ctx->pc != 0x16DF10u) { return; }
    }
    ctx->pc = 0x16DF10u;
    // 0x16df10: 0xc07574c  jal         func_1D5D30
    ctx->pc = 0x16DF10u;
    SET_GPR_U32(ctx, 31, 0x16DF18u);
    ctx->pc = 0x1D5D30u;
    if (runtime->hasFunction(0x1D5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF18u; }
        if (ctx->pc != 0x16DF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStageex1Boss_Hontai_0x1d5d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF18u; }
        if (ctx->pc != 0x16DF18u) { return; }
    }
    ctx->pc = 0x16DF18u;
    // 0x16df18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df1c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF1Cu;
            // 0x16df20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DF24u;
}
