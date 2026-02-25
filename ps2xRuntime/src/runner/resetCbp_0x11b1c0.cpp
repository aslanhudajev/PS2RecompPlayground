#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: resetCbp
// Address: 0x11b1c0 - 0x11b1d4
void resetCbp_0x11b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("resetCbp_0x11b1c0");
#endif

    ctx->pc = 0x11b1c0u;

    // 0x11b1c0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11b1c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11b1c8: 0xac44722c  sw          $a0, 0x722C($v0)
    ctx->pc = 0x11b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29228), GPR_U32(ctx, 4));
    // 0x11b1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1CCu;
            // 0x11b1d0: 0xac647234  sw          $a0, 0x7234($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B1D4u;
}
