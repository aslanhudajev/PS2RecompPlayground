#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSuicideBomb
// Address: 0x25fe58 - 0x25fe6c
void AudioSuicideBomb_0x25fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fe58u;

    // 0x25fe58: 0x80282d
    ctx->pc = 0x25fe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe5c: 0x24040038
    ctx->pc = 0x25fe5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
    // 0x25fe60: 0x240600e0
    ctx->pc = 0x25fe60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fe64: 0x8088a62
    ctx->pc = 0x25FE64u;
    ctx->pc = 0x25FE68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FE6Cu;
}
