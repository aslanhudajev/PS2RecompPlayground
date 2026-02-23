#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVERR_Init
// Address: 0x186010 - 0x18601c
void MPVERR_Init_0x186010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVERR_Init");


    ctx->pc = 0x186010u;

    // 0x186010: 0x3c040024
    ctx->pc = 0x186010u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x186014: 0x8061808
    ctx->pc = 0x186014u;
    ctx->pc = 0x186018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6672));
    ctx->pc = 0x186020u;
    MPVERR_InitErrInf_0x186020(rdram, ctx, runtime); return;
    ctx->pc = 0x18601Cu;
}
