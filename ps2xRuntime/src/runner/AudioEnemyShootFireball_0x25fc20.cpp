#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnemyShootFireball
// Address: 0x25fc20 - 0x25fc34
void AudioEnemyShootFireball_0x25fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fc20u;

    // 0x25fc20: 0x80282d
    ctx->pc = 0x25fc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc24: 0x24040032
    ctx->pc = 0x25fc24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 50));
    // 0x25fc28: 0x2406007f
    ctx->pc = 0x25fc28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25fc2c: 0x8088a62
    ctx->pc = 0x25FC2Cu;
    ctx->pc = 0x25FC30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 126));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FC34u;
}
