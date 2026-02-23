#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_GetSfreq
// Address: 0x166750 - 0x166758
void ADXAMP_GetSfreq_0x166750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_GetSfreq");


    ctx->pc = 0x166750u;

    // 0x166750: 0x3e00008
    ctx->pc = 0x166750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166754u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166758u;
}
