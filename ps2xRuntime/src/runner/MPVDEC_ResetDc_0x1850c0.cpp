#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVDEC_ResetDc
// Address: 0x1850c0 - 0x1850d4
void MPVDEC_ResetDc_0x1850c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVDEC_ResetDc");


    ctx->pc = 0x1850c0u;

    // 0x1850c0: 0x24020400
    ctx->pc = 0x1850c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1850c4: 0xac8202b0
    ctx->pc = 0x1850c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 2));
    // 0x1850c8: 0xac8202ac
    ctx->pc = 0x1850c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 684), GPR_U32(ctx, 2));
    // 0x1850cc: 0x3e00008
    ctx->pc = 0x1850CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1850D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1850D4u;
}
