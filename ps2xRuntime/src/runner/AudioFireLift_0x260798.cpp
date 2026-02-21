#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFireLift
// Address: 0x260798 - 0x2607b0
void AudioFireLift_0x260798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260798u;

    // 0x260798: 0x80282d
    ctx->pc = 0x260798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26079c: 0x3c040026
    ctx->pc = 0x26079cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x2607a0: 0x34840004
    ctx->pc = 0x2607a0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 4));
    // 0x2607a4: 0x240600e0
    ctx->pc = 0x2607a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2607a8: 0x8088a26
    ctx->pc = 0x2607A8u;
    ctx->pc = 0x2607ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x2607B0u;
}
