#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTentacle
// Address: 0x25ff18 - 0x25ff30
void AudioTentacle_0x25ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ff18u;

    // 0x25ff18: 0x80282d
    ctx->pc = 0x25ff18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ff1c: 0x3c040025
    ctx->pc = 0x25ff1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x25ff20: 0x34840001
    ctx->pc = 0x25ff20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 1));
    // 0x25ff24: 0x240600e0
    ctx->pc = 0x25ff24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ff28: 0x8088a62
    ctx->pc = 0x25FF28u;
    ctx->pc = 0x25FF2Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FF30u;
}
