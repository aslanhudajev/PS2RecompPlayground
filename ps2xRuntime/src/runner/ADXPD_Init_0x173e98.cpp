#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_Init
// Address: 0x173e98 - 0x173eac
void ADXPD_Init_0x173e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_Init");


    ctx->pc = 0x173e98u;

    // 0x173e98: 0x3c040024
    ctx->pc = 0x173e98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x173e9c: 0x282d
    ctx->pc = 0x173e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ea0: 0x248485c0
    ctx->pc = 0x173ea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936000));
    // 0x173ea4: 0x8050cfe
    ctx->pc = 0x173EA4u;
    ctx->pc = 0x173EA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 416));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x173EACu;
}
