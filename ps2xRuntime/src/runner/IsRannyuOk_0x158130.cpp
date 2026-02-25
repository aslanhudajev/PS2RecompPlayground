#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: IsRannyuOk
// Address: 0x158130 - 0x15813c
void IsRannyuOk_0x158130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("IsRannyuOk_0x158130");
#endif

    ctx->pc = 0x158130u;

    // 0x158130: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158134: 0x3e00008  jr          $ra
    ctx->pc = 0x158134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158134u;
            // 0x158138: 0x8c222c80  lw          $v0, 0x2C80($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11392)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15813Cu;
}
