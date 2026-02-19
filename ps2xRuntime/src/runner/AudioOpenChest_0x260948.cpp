#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioOpenChest
// Address: 0x260948 - 0x26095c
void AudioOpenChest_0x260948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260948u;

    // 0x260948: 0x80282d
    ctx->pc = 0x260948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26094c: 0x2404002c
    ctx->pc = 0x26094cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
    // 0x260950: 0x2406007f
    ctx->pc = 0x260950u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260954: 0x8088a62
    ctx->pc = 0x260954u;
    ctx->pc = 0x260958u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x26095Cu;
}
