#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CB_DelayTh
// Address: 0x117628 - 0x11764c
void CB_DelayTh_0x117628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117628u;

    // 0x117628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11762c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117630: 0xc0438b4  jal         func_10E2D0
    ctx->pc = 0x117630u;
    SET_GPR_U32(ctx, 31, 0x117638u);
    ctx->pc = 0x117634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117630u;
            // 0x117634: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2D0u;
    if (runtime->hasFunction(0x10E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117638u; }
        if (ctx->pc != 0x117638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x10e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117638u; }
        if (ctx->pc != 0x117638u) { return; }
    }
    ctx->pc = 0x117638u;
    // 0x117638: 0xf  sync
    ctx->pc = 0x117638u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11763c: 0x42000038  ei
    ctx->pc = 0x11763cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x117640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117644: 0x3e00008  jr          $ra
    ctx->pc = 0x117644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117644u;
            // 0x117648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11764Cu;
}
