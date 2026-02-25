#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getCbp
// Address: 0x11b1e8 - 0x11b1f4
void getCbp_0x11b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getCbp_0x11b1e8");
#endif

    ctx->pc = 0x11b1e8u;

    // 0x11b1e8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11b1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1ECu;
            // 0x11b1f0: 0x8c62722c  lw          $v0, 0x722C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B1F4u;
}
