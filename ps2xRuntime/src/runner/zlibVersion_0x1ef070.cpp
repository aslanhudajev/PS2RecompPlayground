#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: zlibVersion
// Address: 0x1ef070 - 0x1ef07c
void zlibVersion_0x1ef070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("zlibVersion_0x1ef070");
#endif

    ctx->pc = 0x1ef070u;

    // 0x1ef070: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef074: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF074u;
            // 0x1ef078: 0x24423690  addiu       $v0, $v0, 0x3690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13968));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF07Cu;
}
