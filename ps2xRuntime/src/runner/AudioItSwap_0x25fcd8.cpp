#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioItSwap
// Address: 0x25fcd8 - 0x25fcec
void AudioItSwap_0x25fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fcd8u;

    // 0x25fcd8: 0x80282d
    ctx->pc = 0x25fcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fcdc: 0x2404003a
    ctx->pc = 0x25fcdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 58));
    // 0x25fce0: 0x240600b4
    ctx->pc = 0x25fce0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
    // 0x25fce4: 0x8088a26
    ctx->pc = 0x25FCE4u;
    ctx->pc = 0x25FCE8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25FCECu;
}
