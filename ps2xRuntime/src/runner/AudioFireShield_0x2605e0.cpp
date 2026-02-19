#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFireShield
// Address: 0x2605e0 - 0x260608
void AudioFireShield_0x2605e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2605e0u;

    // 0x2605e0: 0x24022b00
    ctx->pc = 0x2605e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2605e4: 0x822818
    ctx->pc = 0x2605e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2605e8: 0x3c020032
    ctx->pc = 0x2605e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2605ec: 0x24421be0
    ctx->pc = 0x2605ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x2605f0: 0xa22821
    ctx->pc = 0x2605f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2605f4: 0x2404004a
    ctx->pc = 0x2605f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 74));
    // 0x2605f8: 0x24a50040
    ctx->pc = 0x2605f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2605fc: 0x240600e0
    ctx->pc = 0x2605fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260600: 0x8088a26
    ctx->pc = 0x260600u;
    ctx->pc = 0x260604u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260608u;
}
