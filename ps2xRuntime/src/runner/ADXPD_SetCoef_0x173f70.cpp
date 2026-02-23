#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_SetCoef
// Address: 0x173f70 - 0x173f84
void ADXPD_SetCoef_0x173f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_SetCoef");


    ctx->pc = 0x173f70u;

    // 0x173f70: 0x80102d
    ctx->pc = 0x173f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f74: 0xc0202d
    ctx->pc = 0x173f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f78: 0x24470032
    ctx->pc = 0x173f78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 50));
    // 0x173f7c: 0x805a4f8
    ctx->pc = 0x173F7Cu;
    ctx->pc = 0x173F80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 48));
    ctx->pc = 0x1693E0u;
    ADX_GetCoefficient_0x1693e0(rdram, ctx, runtime); return;
    ctx->pc = 0x173F84u;
}
