#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSecretTimer
// Address: 0x25d738 - 0x25d764
void AudioSecretTimer_0x25d738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d738u;

    // 0x25d738: 0x14800003
    ctx->pc = 0x25D738u;
    {
        const bool branch_taken_0x25d738 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D73Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x25d738) {
            ctx->pc = 0x25D748u;
            goto label_25d748;
        }
    }
    ctx->pc = 0x25D740u;
    // 0x25d740: 0x10000004
    ctx->pc = 0x25D740u;
    {
        const bool branch_taken_0x25d740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D744u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x25d740) {
            ctx->pc = 0x25D754u;
            goto label_25d754;
        }
    }
    ctx->pc = 0x25D748u;
label_25d748:
    // 0x25d748: 0x24040017
    ctx->pc = 0x25d748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
    // 0x25d74c: 0x24020018
    ctx->pc = 0x25d74cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x25d750: 0x43200b
    ctx->pc = 0x25d750u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_25d754:
    // 0x25d754: 0x282d
    ctx->pc = 0x25d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d758: 0x2406007f
    ctx->pc = 0x25d758u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25d75c: 0x8088a26
    ctx->pc = 0x25D75Cu;
    ctx->pc = 0x25D760u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25D764u;
}
