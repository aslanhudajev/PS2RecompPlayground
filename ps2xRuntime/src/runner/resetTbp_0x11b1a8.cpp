#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: resetTbp
// Address: 0x11b1a8 - 0x11b1bc
void resetTbp_0x11b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("resetTbp_0x11b1a8");
#endif

    ctx->pc = 0x11b1a8u;

    // 0x11b1a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11b1ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11b1b0: 0xac447228  sw          $a0, 0x7228($v0)
    ctx->pc = 0x11b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29224), GPR_U32(ctx, 4));
    // 0x11b1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1B4u;
            // 0x11b1b8: 0xac647230  sw          $a0, 0x7230($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29232), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B1BCu;
}
