#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GameCameraInit
// Address: 0x2a2108 - 0x2a2124
void GameCameraInit_0x2a2108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2108u;

    // 0x2a2108: 0x3c020036
    ctx->pc = 0x2a2108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a210c: 0xac40db6c
    ctx->pc = 0x2a210cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957932), GPR_U32(ctx, 0));
    // 0x2a2110: 0x3c040036
    ctx->pc = 0x2a2110u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x2a2114: 0x2484dd90
    ctx->pc = 0x2a2114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958480));
    // 0x2a2118: 0x282d
    ctx->pc = 0x2a2118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a211c: 0x80becc6
    ctx->pc = 0x2A211Cu;
    ctx->pc = 0x2A2120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 96));
    ctx->pc = 0x2FB318u;
    memset_0x2fb318(rdram, ctx, runtime); return;
    ctx->pc = 0x2A2124u;
}
