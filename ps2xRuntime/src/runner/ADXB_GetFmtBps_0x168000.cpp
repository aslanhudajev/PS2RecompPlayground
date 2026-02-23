#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetFmtBps
// Address: 0x168000 - 0x168008
void ADXB_GetFmtBps_0x168000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetFmtBps");


    ctx->pc = 0x168000u;

    // 0x168000: 0x3e00008
    ctx->pc = 0x168000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168004u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168008u;
}
