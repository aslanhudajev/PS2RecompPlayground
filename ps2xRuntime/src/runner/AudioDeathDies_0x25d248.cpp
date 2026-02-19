#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioDeathDies
// Address: 0x25d248 - 0x25d25c
void AudioDeathDies_0x25d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d248u;

    // 0x25d248: 0x80282d
    ctx->pc = 0x25d248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d24c: 0x24040065
    ctx->pc = 0x25d24cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 101));
    // 0x25d250: 0x2406007f
    ctx->pc = 0x25d250u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25d254: 0x8088a26
    ctx->pc = 0x25D254u;
    ctx->pc = 0x25D258u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25D25Cu;
}
