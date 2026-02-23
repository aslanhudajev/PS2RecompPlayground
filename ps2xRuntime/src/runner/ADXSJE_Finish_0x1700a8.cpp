#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_Finish
// Address: 0x1700a8 - 0x1700bc
void ADXSJE_Finish_0x1700a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_Finish");


    ctx->pc = 0x1700a8u;

    // 0x1700a8: 0x3c040023
    ctx->pc = 0x1700a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1700ac: 0x282d
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700b0: 0x24845bc0
    ctx->pc = 0x1700b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23488));
    // 0x1700b4: 0x8050cfe
    ctx->pc = 0x1700B4u;
    ctx->pc = 0x1700B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5696));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1700BCu;
}
