#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGoodWizard
// Address: 0x261108 - 0x261158
void AudioGoodWizard_0x261108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261108u;

    // 0x261108: 0x2484ffde
    ctx->pc = 0x261108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967262));
    // 0x26110c: 0x3c020034
    ctx->pc = 0x26110cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261110: 0x2442e250
    ctx->pc = 0x261110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x261114: 0x52880
    ctx->pc = 0x261114u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x261118: 0x42140
    ctx->pc = 0x261118u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x26111c: 0xa42821
    ctx->pc = 0x26111cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x261120: 0xa22821
    ctx->pc = 0x261120u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x261124: 0x8ca50000
    ctx->pc = 0x261124u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261128: 0x4a00009
    ctx->pc = 0x261128u;
    {
        const bool branch_taken_0x261128 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x26112Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x261128) {
            ctx->pc = 0x261150u;
            goto label_261150;
        }
    }
    ctx->pc = 0x261130u;
    // 0x261130: 0x240600e0
    ctx->pc = 0x261130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x261134: 0x2407007f
    ctx->pc = 0x261134u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 127));
    // 0x261138: 0x3c01bf80
    ctx->pc = 0x261138u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x26113c: 0x44816000
    ctx->pc = 0x26113cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x261140: 0x3c014120
    ctx->pc = 0x261140u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x261144: 0x44816800
    ctx->pc = 0x261144u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x261148: 0x8088bd2
    ctx->pc = 0x261148u;
    ctx->pc = 0x26114Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x222F48u;
    AudioAnyQueAdd4_0x222f48(rdram, ctx, runtime); return;
    ctx->pc = 0x261150u;
label_261150:
    // 0x261150: 0x3e00008
    ctx->pc = 0x261150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261150u: goto label_261150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261158u;
}
