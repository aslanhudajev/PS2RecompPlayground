#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX2EnemyUnInit
// Address: 0x16de00 - 0x16de4c
void stageEX2EnemyUnInit_0x16de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX2EnemyUnInit_0x16de00");
#endif

    ctx->pc = 0x16de00u;

    // 0x16de00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16de04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16de08: 0xc074424  jal         func_1D1090
    ctx->pc = 0x16DE08u;
    SET_GPR_U32(ctx, 31, 0x16DE10u);
    ctx->pc = 0x1D1090u;
    if (runtime->hasFunction(0x1D1090u)) {
        auto targetFn = runtime->lookupFunction(0x1D1090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE10u; }
        if (ctx->pc != 0x16DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex2_01_Hontai_0x1d1090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE10u; }
        if (ctx->pc != 0x16DE10u) { return; }
    }
    ctx->pc = 0x16DE10u;
    // 0x16de10: 0xc074a0c  jal         func_1D2830
    ctx->pc = 0x16DE10u;
    SET_GPR_U32(ctx, 31, 0x16DE18u);
    ctx->pc = 0x1D2830u;
    if (runtime->hasFunction(0x1D2830u)) {
        auto targetFn = runtime->lookupFunction(0x1D2830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE18u; }
        if (ctx->pc != 0x16DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex2_02_Hontai_0x1d2830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE18u; }
        if (ctx->pc != 0x16DE18u) { return; }
    }
    ctx->pc = 0x16DE18u;
    // 0x16de18: 0xc073e40  jal         func_1CF900
    ctx->pc = 0x16DE18u;
    SET_GPR_U32(ctx, 31, 0x16DE20u);
    ctx->pc = 0x1CF900u;
    if (runtime->hasFunction(0x1CF900u)) {
        auto targetFn = runtime->lookupFunction(0x1CF900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE20u; }
        if (ctx->pc != 0x16DE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex2_03_Hontai_0x1cf900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE20u; }
        if (ctx->pc != 0x16DE20u) { return; }
    }
    ctx->pc = 0x16DE20u;
    // 0x16de20: 0xc075034  jal         func_1D40D0
    ctx->pc = 0x16DE20u;
    SET_GPR_U32(ctx, 31, 0x16DE28u);
    ctx->pc = 0x1D40D0u;
    if (runtime->hasFunction(0x1D40D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D40D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE28u; }
        if (ctx->pc != 0x16DE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex2_04_Hontai_0x1d40d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE28u; }
        if (ctx->pc != 0x16DE28u) { return; }
    }
    ctx->pc = 0x16DE28u;
    // 0x16de28: 0xc073b14  jal         func_1CEC50
    ctx->pc = 0x16DE28u;
    SET_GPR_U32(ctx, 31, 0x16DE30u);
    ctx->pc = 0x1CEC50u;
    if (runtime->hasFunction(0x1CEC50u)) {
        auto targetFn = runtime->lookupFunction(0x1CEC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE30u; }
        if (ctx->pc != 0x16DE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEnex2_05_Hontai_0x1cec50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE30u; }
        if (ctx->pc != 0x16DE30u) { return; }
    }
    ctx->pc = 0x16DE30u;
    // 0x16de30: 0xc076ea8  jal         func_1DBAA0
    ctx->pc = 0x16DE30u;
    SET_GPR_U32(ctx, 31, 0x16DE38u);
    ctx->pc = 0x1DBAA0u;
    if (runtime->hasFunction(0x1DBAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE38u; }
        if (ctx->pc != 0x16DE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStageex2Boss_Hontai_0x1dbaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE38u; }
        if (ctx->pc != 0x16DE38u) { return; }
    }
    ctx->pc = 0x16DE38u;
    // 0x16de38: 0xc06fd70  jal         func_1BF5C0
    ctx->pc = 0x16DE38u;
    SET_GPR_U32(ctx, 31, 0x16DE40u);
    ctx->pc = 0x1BF5C0u;
    if (runtime->hasFunction(0x1BF5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE40u; }
        if (ctx->pc != 0x16DE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn_Pika_Hontai_0x1bf5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE40u; }
        if (ctx->pc != 0x16DE40u) { return; }
    }
    ctx->pc = 0x16DE40u;
    // 0x16de40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16de40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16de44: 0x3e00008  jr          $ra
    ctx->pc = 0x16DE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE44u;
            // 0x16de48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DE4Cu;
}
