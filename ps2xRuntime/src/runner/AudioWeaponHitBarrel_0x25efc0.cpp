#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWeaponHitBarrel
// Address: 0x25efc0 - 0x25efd4
void AudioWeaponHitBarrel_0x25efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25efc0u;

    // 0x25efc0: 0x80282d
    ctx->pc = 0x25efc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25efc4: 0x2404003c
    ctx->pc = 0x25efc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x25efc8: 0x2406007f
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25efcc: 0x8088a62
    ctx->pc = 0x25EFCCu;
    ctx->pc = 0x25EFD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 120));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25EFD4u;
}
