#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: mpegRestartDMA
// Address: 0x18a4d0 - 0x18a4f4
void mpegRestartDMA_0x18a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("mpegRestartDMA_0x18a4d0");
#endif

    ctx->pc = 0x18a4d0u;

    // 0x18a4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a4d4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a4dc: 0xc062604  jal         func_189810
    ctx->pc = 0x18A4DCu;
    SET_GPR_U32(ctx, 31, 0x18A4E4u);
    ctx->pc = 0x18A4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4DCu;
            // 0x18a4e0: 0x2484fe48  addiu       $a0, $a0, -0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189810u;
    if (runtime->hasFunction(0x189810u)) {
        auto targetFn = runtime->lookupFunction(0x189810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4E4u; }
        if (ctx->pc != 0x18A4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufRestartDMA_0x189810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4E4u; }
        if (ctx->pc != 0x18A4E4u) { return; }
    }
    ctx->pc = 0x18A4E4u;
    // 0x18a4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18A4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4ECu;
            // 0x18a4f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A4F4u;
}
