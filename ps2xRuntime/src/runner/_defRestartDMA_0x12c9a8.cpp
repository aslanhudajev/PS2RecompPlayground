#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _defRestartDMA
// Address: 0x12c9a8 - 0x12c9cc
void _defRestartDMA_0x12c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_defRestartDMA_0x12c9a8");
#endif

    ctx->pc = 0x12c9a8u;

    // 0x12c9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c9b0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x12c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c9b4: 0xc04731e  jal         func_11CC78
    ctx->pc = 0x12C9B4u;
    SET_GPR_U32(ctx, 31, 0x12C9BCu);
    ctx->pc = 0x12C9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9B4u;
            // 0x12c9b8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CC78u;
    if (runtime->hasFunction(0x11CC78u)) {
        auto targetFn = runtime->lookupFunction(0x11CC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C9BCu; }
        if (ctx->pc != 0x12C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceIpuRestartDMA_0x11cc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C9BCu; }
        if (ctx->pc != 0x12C9BCu) { return; }
    }
    ctx->pc = 0x12C9BCu;
    // 0x12c9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9C4u;
            // 0x12c9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C9CCu;
}
