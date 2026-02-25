#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: mpegStopDMA
// Address: 0x18a500 - 0x18a524
void mpegStopDMA_0x18a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("mpegStopDMA_0x18a500");
#endif

    ctx->pc = 0x18a500u;

    // 0x18a500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a504: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a50c: 0xc0626d4  jal         func_189B50
    ctx->pc = 0x18A50Cu;
    SET_GPR_U32(ctx, 31, 0x18A514u);
    ctx->pc = 0x18A510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A50Cu;
            // 0x18a510: 0x2484fe48  addiu       $a0, $a0, -0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189B50u;
    if (runtime->hasFunction(0x189B50u)) {
        auto targetFn = runtime->lookupFunction(0x189B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A514u; }
        if (ctx->pc != 0x18A514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA_0x189b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A514u; }
        if (ctx->pc != 0x18A514u) { return; }
    }
    ctx->pc = 0x18A514u;
    // 0x18a514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a51c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A51Cu;
            // 0x18a520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A524u;
}
