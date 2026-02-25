#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _defStopDMA
// Address: 0x12c980 - 0x12c9a4
void _defStopDMA_0x12c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_defStopDMA_0x12c980");
#endif

    ctx->pc = 0x12c980u;

    // 0x12c980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c988: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c98c: 0xc0472e4  jal         func_11CB90
    ctx->pc = 0x12C98Cu;
    SET_GPR_U32(ctx, 31, 0x12C994u);
    ctx->pc = 0x12C990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C98Cu;
            // 0x12c990: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CB90u;
    if (runtime->hasFunction(0x11CB90u)) {
        auto targetFn = runtime->lookupFunction(0x11CB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C994u; }
        if (ctx->pc != 0x12C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceIpuStopDMA_0x11cb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C994u; }
        if (ctx->pc != 0x12C994u) { return; }
    }
    ctx->pc = 0x12C994u;
    // 0x12c994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C99Cu;
            // 0x12c9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C9A4u;
}
