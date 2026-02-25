#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getTbp
// Address: 0x11b1d8 - 0x11b1e4
void getTbp_0x11b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getTbp_0x11b1d8");
#endif

    ctx->pc = 0x11b1d8u;

    // 0x11b1d8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11b1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1DCu;
            // 0x11b1e0: 0x8c627228  lw          $v0, 0x7228($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B1E4u;
}
