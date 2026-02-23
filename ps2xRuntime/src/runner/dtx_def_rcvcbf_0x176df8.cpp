#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dtx_def_rcvcbf
// Address: 0x176df8 - 0x176e08
void dtx_def_rcvcbf_0x176df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dtx_def_rcvcbf");


    ctx->pc = 0x176df8u;

    // 0x176df8: 0x8f82828c
    ctx->pc = 0x176df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
    // 0x176dfc: 0x24420001
    ctx->pc = 0x176dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x176e00: 0x3e00008
    ctx->pc = 0x176E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E04u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176E08u;
}
