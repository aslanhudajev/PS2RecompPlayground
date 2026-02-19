#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioDeathLaugh
// Address: 0x25d230 - 0x25d244
void AudioDeathLaugh_0x25d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d230u;

    // 0x25d230: 0x80282d
    ctx->pc = 0x25d230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d234: 0x24040068
    ctx->pc = 0x25d234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 104));
    // 0x25d238: 0x240600e0
    ctx->pc = 0x25d238u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25d23c: 0x8088a26
    ctx->pc = 0x25D23Cu;
    ctx->pc = 0x25D240u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25D244u;
}
