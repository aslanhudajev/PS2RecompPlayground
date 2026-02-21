#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetPlayerMissiles
// Address: 0x28f128 - 0x28f13c
void ResetPlayerMissiles_0x28f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28f128u;

    // 0x28f128: 0x3c040035
    ctx->pc = 0x28f128u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28f12c: 0x2484f590
    ctx->pc = 0x28f12cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964624));
    // 0x28f130: 0x282d
    ctx->pc = 0x28f130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f134: 0x80becc6
    ctx->pc = 0x28F134u;
    ctx->pc = 0x28F138u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FB318u;
    memset_0x2fb318(rdram, ctx, runtime); return;
    ctx->pc = 0x28F13Cu;
}
