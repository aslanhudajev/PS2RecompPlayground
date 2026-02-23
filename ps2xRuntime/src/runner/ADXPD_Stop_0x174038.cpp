#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_Stop
// Address: 0x174038 - 0x174050
void ADXPD_Stop_0x174038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_Stop");


    ctx->pc = 0x174038u;

    // 0x174038: 0x80102d
    ctx->pc = 0x174038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17403c: 0x282d
    ctx->pc = 0x17403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174040: 0x24440028
    ctx->pc = 0x174040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 40));
    // 0x174044: 0xac40000c
    ctx->pc = 0x174044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x174048: 0x8050cfe
    ctx->pc = 0x174048u;
    ctx->pc = 0x17404Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x174050u;
}
