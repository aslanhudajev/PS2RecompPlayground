#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTurboDefense
// Address: 0x25ebd0 - 0x25ebf8
void AudioTurboDefense_0x25ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ebd0u;

    // 0x25ebd0: 0x24022b00
    ctx->pc = 0x25ebd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ebd4: 0x822818
    ctx->pc = 0x25ebd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ebd8: 0x3c020032
    ctx->pc = 0x25ebd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25ebdc: 0x24421be0
    ctx->pc = 0x25ebdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25ebe0: 0xa22821
    ctx->pc = 0x25ebe0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ebe4: 0x24040005
    ctx->pc = 0x25ebe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x25ebe8: 0x24a50050
    ctx->pc = 0x25ebe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
    // 0x25ebec: 0x2406007f
    ctx->pc = 0x25ebecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25ebf0: 0x8088a26
    ctx->pc = 0x25EBF0u;
    ctx->pc = 0x25EBF4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EBF8u;
}
