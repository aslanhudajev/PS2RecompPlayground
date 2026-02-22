#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _InitSys
// Address: 0x115068 - 0x11508c
void ps2__InitSys_0x115068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115068u;

    // 0x115068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11506c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11506cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115070: 0xc04540a  jal         func_115028
    ctx->pc = 0x115070u;
    SET_GPR_U32(ctx, 31, 0x115078u);
    ctx->pc = 0x115028u;
    if (runtime->hasFunction(0x115028u)) {
        auto targetFn = runtime->lookupFunction(0x115028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115078u; }
        if (ctx->pc != 0x115078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSysCall_0x115028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115078u; }
        if (ctx->pc != 0x115078u) { return; }
    }
    ctx->pc = 0x115078u;
    // 0x115078: 0xc043b34  jal         func_10ECD0
    ctx->pc = 0x115078u;
    SET_GPR_U32(ctx, 31, 0x115080u);
    ctx->pc = 0x10ECD0u;
    if (runtime->hasFunction(0x10ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x10ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115080u; }
        if (ctx->pc != 0x115080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitAlarm_0x10ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115080u; }
        if (ctx->pc != 0x115080u) { return; }
    }
    ctx->pc = 0x115080u;
    // 0x115080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115084: 0x804545a  j           func_115168
    ctx->pc = 0x115084u;
    ctx->pc = 0x115088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115084u;
            // 0x115088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115168u;
    if (runtime->hasFunction(0x115168u)) {
        auto targetFn = runtime->lookupFunction(0x115168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitThread_0x115168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11508Cu;
}
