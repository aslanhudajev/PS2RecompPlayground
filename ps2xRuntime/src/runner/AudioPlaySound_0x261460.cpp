#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlaySound
// Address: 0x261460 - 0x261484
void AudioPlaySound_0x261460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261460u;

    // 0x261460: 0xa0102d
    ctx->pc = 0x261460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261464: 0x10e00004
    ctx->pc = 0x261464u;
    {
        const bool branch_taken_0x261464 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x261468u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x261464) {
            ctx->pc = 0x261478u;
            goto label_261478;
        }
    }
    ctx->pc = 0x26146Cu;
    // 0x26146c: 0x40302d
    ctx->pc = 0x26146cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261470: 0x8088a62
    ctx->pc = 0x261470u;
    ctx->pc = 0x261474u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x261478u;
label_261478:
    // 0x261478: 0x40302d
    ctx->pc = 0x261478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26147c: 0x8088a26
    ctx->pc = 0x26147Cu;
    ctx->pc = 0x261480u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x261484u;
}
