#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetLpStartOfst
// Address: 0x1680a0 - 0x1680a8
void ADXB_GetLpStartOfst_0x1680a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetLpStartOfst");


    ctx->pc = 0x1680a0u;

    // 0x1680a0: 0x3e00008
    ctx->pc = 0x1680A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1680A8u;
}
