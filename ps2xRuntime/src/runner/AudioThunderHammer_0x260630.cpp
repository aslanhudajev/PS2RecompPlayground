#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioThunderHammer
// Address: 0x260630 - 0x260658
void AudioThunderHammer_0x260630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260630u;

    // 0x260630: 0x24022b00
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x260634: 0x822818
    ctx->pc = 0x260634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x260638: 0x3c020032
    ctx->pc = 0x260638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26063c: 0x24421be0
    ctx->pc = 0x26063cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x260640: 0xa22821
    ctx->pc = 0x260640u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x260644: 0x24040050
    ctx->pc = 0x260644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x260648: 0x24a50040
    ctx->pc = 0x260648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x26064c: 0x240600e0
    ctx->pc = 0x26064cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260650: 0x8088a26
    ctx->pc = 0x260650u;
    ctx->pc = 0x260654u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260658u;
}
