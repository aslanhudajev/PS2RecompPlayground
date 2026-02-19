#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGauntletL
// Address: 0x25eb80 - 0x25eba8
void AudioGauntletL_0x25eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25eb80u;

    // 0x25eb80: 0x24022b00
    ctx->pc = 0x25eb80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25eb84: 0x822818
    ctx->pc = 0x25eb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25eb88: 0x3c020032
    ctx->pc = 0x25eb88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25eb8c: 0x24421be0
    ctx->pc = 0x25eb8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25eb90: 0xa22821
    ctx->pc = 0x25eb90u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25eb94: 0x2404005c
    ctx->pc = 0x25eb94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 92));
    // 0x25eb98: 0x24a50040
    ctx->pc = 0x25eb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25eb9c: 0x240600e0
    ctx->pc = 0x25eb9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25eba0: 0x8088a26
    ctx->pc = 0x25EBA0u;
    ctx->pc = 0x25EBA4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EBA8u;
}
