#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnemyWeaponHit
// Address: 0x25fbf8 - 0x25fc08
void AudioEnemyWeaponHit_0x25fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fbf8u;

    // 0x25fbf8: 0x2404003c
    ctx->pc = 0x25fbf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x25fbfc: 0x2406007f
    ctx->pc = 0x25fbfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25fc00: 0x8088a62
    ctx->pc = 0x25FC00u;
    ctx->pc = 0x25FC04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 120));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FC08u;
}
