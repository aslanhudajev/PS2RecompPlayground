#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_Init
// Address: 0x170090 - 0x1700a4
void ADXSJE_Init_0x170090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_Init");


    ctx->pc = 0x170090u;

    // 0x170090: 0x3c040023
    ctx->pc = 0x170090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x170094: 0x282d
    ctx->pc = 0x170094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170098: 0x24845bc0
    ctx->pc = 0x170098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23488));
    // 0x17009c: 0x8050cfe
    ctx->pc = 0x17009Cu;
    ctx->pc = 0x1700A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5696));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1700A4u;
}
