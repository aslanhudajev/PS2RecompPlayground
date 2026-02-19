#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLevitatedown
// Address: 0x2605b8 - 0x2605e0
void AudioLevitatedown_0x2605b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2605b8u;

    // 0x2605b8: 0x24022b00
    ctx->pc = 0x2605b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2605bc: 0x822818
    ctx->pc = 0x2605bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2605c0: 0x3c020032
    ctx->pc = 0x2605c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2605c4: 0x24421be0
    ctx->pc = 0x2605c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x2605c8: 0xa22821
    ctx->pc = 0x2605c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2605cc: 0x24040059
    ctx->pc = 0x2605ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 89));
    // 0x2605d0: 0x24a50040
    ctx->pc = 0x2605d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2605d4: 0x240600e0
    ctx->pc = 0x2605d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2605d8: 0x8088a26
    ctx->pc = 0x2605D8u;
    ctx->pc = 0x2605DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x2605E0u;
}
