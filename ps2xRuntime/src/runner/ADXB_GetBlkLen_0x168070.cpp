#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetBlkLen
// Address: 0x168070 - 0x168078
void ADXB_GetBlkLen_0x168070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetBlkLen");


    ctx->pc = 0x168070u;

    // 0x168070: 0x3e00008
    ctx->pc = 0x168070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168074u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168078u;
}
