#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioDeathShatter
// Address: 0x25d218 - 0x25d22c
void AudioDeathShatter_0x25d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d218u;

    // 0x25d218: 0x80282d
    ctx->pc = 0x25d218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d21c: 0x24040067
    ctx->pc = 0x25d21cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
    // 0x25d220: 0x240600e0
    ctx->pc = 0x25d220u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25d224: 0x8088a26
    ctx->pc = 0x25D224u;
    ctx->pc = 0x25D228u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25D22Cu;
}
