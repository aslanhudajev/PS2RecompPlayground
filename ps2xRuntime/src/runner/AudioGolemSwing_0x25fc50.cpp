#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGolemSwing
// Address: 0x25fc50 - 0x25fc68
void AudioGolemSwing_0x25fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fc50u;

    // 0x25fc50: 0x80282d
    ctx->pc = 0x25fc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc54: 0x3c020034
    ctx->pc = 0x25fc54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25fc58: 0x8c44dab8
    ctx->pc = 0x25fc58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957752)));
    // 0x25fc5c: 0x240600e0
    ctx->pc = 0x25fc5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fc60: 0x8088a62
    ctx->pc = 0x25FC60u;
    ctx->pc = 0x25FC64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FC68u;
}
