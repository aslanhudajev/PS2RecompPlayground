#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_GetStat
// Address: 0x173fb0 - 0x173fb8
void ADXPD_GetStat_0x173fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_GetStat");


    ctx->pc = 0x173fb0u;

    // 0x173fb0: 0x3e00008
    ctx->pc = 0x173FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173FB8u;
}
