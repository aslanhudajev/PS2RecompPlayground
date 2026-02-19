#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioDemonFireBall
// Address: 0x25fc88 - 0x25fcd4
void AudioDemonFireBall_0x25fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fc88u;

    // 0x25fc88: 0x80282d
    ctx->pc = 0x25fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc8c: 0x3c020034
    ctx->pc = 0x25fc8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25fc90: 0x8c43e7f0
    ctx->pc = 0x25fc90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25fc94: 0x3c040026
    ctx->pc = 0x25fc94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x25fc98: 0x34840027
    ctx->pc = 0x25fc98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 39));
    // 0x25fc9c: 0x3c060027
    ctx->pc = 0x25fc9cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)39 << 16));
    // 0x25fca0: 0x34c60032
    ctx->pc = 0x25fca0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 50));
    // 0x25fca4: 0x38620003
    ctx->pc = 0x25fca4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 3));
    // 0x25fca8: 0xc2200a
    ctx->pc = 0x25fca8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
    // 0x25fcac: 0x3c060028
    ctx->pc = 0x25fcacu;
    SET_GPR_U32(ctx, 6, ((uint32_t)40 << 16));
    // 0x25fcb0: 0x38620004
    ctx->pc = 0x25fcb0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
    // 0x25fcb4: 0xc2200a
    ctx->pc = 0x25fcb4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
    // 0x25fcb8: 0x3c020038
    ctx->pc = 0x25fcb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x25fcbc: 0x3442001f
    ctx->pc = 0x25fcbcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 31));
    // 0x25fcc0: 0x38630006
    ctx->pc = 0x25fcc0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 6));
    // 0x25fcc4: 0x43200a
    ctx->pc = 0x25fcc4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x25fcc8: 0x2406007f
    ctx->pc = 0x25fcc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25fccc: 0x8088a62
    ctx->pc = 0x25FCCCu;
    ctx->pc = 0x25FCD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FCD4u;
}
