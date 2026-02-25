#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: VsyncMain
// Address: 0x141900 - 0x14192c
void VsyncMain_0x141900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("VsyncMain_0x141900");
#endif

    ctx->pc = 0x141900u;

    // 0x141900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141908: 0xc055934  jal         func_1564D0
    ctx->pc = 0x141908u;
    SET_GPR_U32(ctx, 31, 0x141910u);
    ctx->pc = 0x1564D0u;
    if (runtime->hasFunction(0x1564D0u)) {
        auto targetFn = runtime->lookupFunction(0x1564D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141910u; }
        if (ctx->pc != 0x141910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadPad_0x1564d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141910u; }
        if (ctx->pc != 0x141910u) { return; }
    }
    ctx->pc = 0x141910u;
    // 0x141910: 0xc0550c0  jal         func_154300
    ctx->pc = 0x141910u;
    SET_GPR_U32(ctx, 31, 0x141918u);
    ctx->pc = 0x154300u;
    if (runtime->hasFunction(0x154300u)) {
        auto targetFn = runtime->lookupFunction(0x154300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141918u; }
        if (ctx->pc != 0x141918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShockPool_0x154300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141918u; }
        if (ctx->pc != 0x141918u) { return; }
    }
    ctx->pc = 0x141918u;
    // 0x141918: 0xc050b14  jal         func_142C50
    ctx->pc = 0x141918u;
    SET_GPR_U32(ctx, 31, 0x141920u);
    ctx->pc = 0x142C50u;
    if (runtime->hasFunction(0x142C50u)) {
        auto targetFn = runtime->lookupFunction(0x142C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141920u; }
        if (ctx->pc != 0x141920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsTaskManager_0x142c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141920u; }
        if (ctx->pc != 0x141920u) { return; }
    }
    ctx->pc = 0x141920u;
    // 0x141920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141924: 0x3e00008  jr          $ra
    ctx->pc = 0x141924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141924u;
            // 0x141928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14192Cu;
}
