#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioUngrow
// Address: 0x260578 - 0x2605a0
void AudioUngrow_0x260578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260578u;

    // 0x260578: 0x24022b00
    ctx->pc = 0x260578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x26057c: 0x822818
    ctx->pc = 0x26057cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x260580: 0x3c020032
    ctx->pc = 0x260580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x260584: 0x24421be0
    ctx->pc = 0x260584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x260588: 0xa22821
    ctx->pc = 0x260588u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26058c: 0x24040057
    ctx->pc = 0x26058cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 87));
    // 0x260590: 0x24a50040
    ctx->pc = 0x260590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x260594: 0x240600e0
    ctx->pc = 0x260594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260598: 0x8088a26
    ctx->pc = 0x260598u;
    ctx->pc = 0x26059Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x2605A0u;
}
