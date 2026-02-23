#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetTotalNumSmpl
// Address: 0x168078 - 0x168080
void ADXB_GetTotalNumSmpl_0x168078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetTotalNumSmpl");


    ctx->pc = 0x168078u;

    // 0x168078: 0x3e00008
    ctx->pc = 0x168078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16807Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168080u;
}
