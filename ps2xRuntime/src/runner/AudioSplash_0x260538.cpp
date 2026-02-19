#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSplash
// Address: 0x260538 - 0x26054c
void AudioSplash_0x260538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260538u;

    // 0x260538: 0x80282d
    ctx->pc = 0x260538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26053c: 0x24040024
    ctx->pc = 0x26053cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
    // 0x260540: 0x240600b4
    ctx->pc = 0x260540u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
    // 0x260544: 0x8088a62
    ctx->pc = 0x260544u;
    ctx->pc = 0x260548u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 120));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x26054Cu;
}
