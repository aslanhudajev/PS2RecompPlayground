#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGauntletR
// Address: 0x25eba8 - 0x25ebd0
void AudioGauntletR_0x25eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25eba8u;

    // 0x25eba8: 0x24022b00
    ctx->pc = 0x25eba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ebac: 0x822818
    ctx->pc = 0x25ebacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ebb0: 0x3c020032
    ctx->pc = 0x25ebb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25ebb4: 0x24421be0
    ctx->pc = 0x25ebb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25ebb8: 0xa22821
    ctx->pc = 0x25ebb8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ebbc: 0x2404005d
    ctx->pc = 0x25ebbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 93));
    // 0x25ebc0: 0x24a50040
    ctx->pc = 0x25ebc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25ebc4: 0x240600e0
    ctx->pc = 0x25ebc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ebc8: 0x8088a26
    ctx->pc = 0x25EBC8u;
    ctx->pc = 0x25EBCCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EBD0u;
}
