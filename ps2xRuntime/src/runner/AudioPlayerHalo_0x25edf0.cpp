#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerHalo
// Address: 0x25edf0 - 0x25ee18
void AudioPlayerHalo_0x25edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25edf0u;

    // 0x25edf0: 0x24022b00
    ctx->pc = 0x25edf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25edf4: 0x822818
    ctx->pc = 0x25edf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25edf8: 0x3c020032
    ctx->pc = 0x25edf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25edfc: 0x24421be0
    ctx->pc = 0x25edfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25ee00: 0xa22821
    ctx->pc = 0x25ee00u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ee04: 0x24040052
    ctx->pc = 0x25ee04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 82));
    // 0x25ee08: 0x24a50040
    ctx->pc = 0x25ee08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25ee0c: 0x240600e0
    ctx->pc = 0x25ee0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ee10: 0x8088a26
    ctx->pc = 0x25EE10u;
    ctx->pc = 0x25EE14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EE18u;
}
