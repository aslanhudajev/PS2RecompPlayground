#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetLpEndOfst
// Address: 0x1680b0 - 0x1680b8
void ADXB_GetLpEndOfst_0x1680b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetLpEndOfst");


    ctx->pc = 0x1680b0u;

    // 0x1680b0: 0x3e00008
    ctx->pc = 0x1680B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1680B8u;
}
