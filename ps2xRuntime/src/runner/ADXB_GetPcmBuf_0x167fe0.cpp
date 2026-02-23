#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetPcmBuf
// Address: 0x167fe0 - 0x167fe8
void ADXB_GetPcmBuf_0x167fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetPcmBuf");


    ctx->pc = 0x167fe0u;

    // 0x167fe0: 0x3e00008
    ctx->pc = 0x167FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167FE8u;
}
