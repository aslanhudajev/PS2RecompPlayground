#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setAlphaSup__7CFcvTRSFi
// Address: 0x1e9360 - 0x1e9390
void setAlphaSup__7CFcvTRSFi_0x1e9360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setAlphaSup__7CFcvTRSFi");


    ctx->pc = 0x1e9360u;

    // 0x1e9360: 0x10a00005
    ctx->pc = 0x1E9360u;
    {
        const bool branch_taken_0x1e9360 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9360) {
            ctx->pc = 0x1E9378u;
            goto label_1e9378;
        }
    }
    ctx->pc = 0x1E9368u;
    // 0x1e9368: 0x8c8300ec
    ctx->pc = 0x1e9368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e936c: 0x34630200
    ctx->pc = 0x1e936cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 512));
    // 0x1e9370: 0x10000005
    ctx->pc = 0x1E9370u;
    {
        const bool branch_taken_0x1e9370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9374u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        if (branch_taken_0x1e9370) {
            ctx->pc = 0x1E9388u;
            goto label_1e9388;
        }
    }
    ctx->pc = 0x1E9378u;
label_1e9378:
    // 0x1e9378: 0x8c8500ec
    ctx->pc = 0x1e9378u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e937c: 0x2403fdff
    ctx->pc = 0x1e937cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1e9380: 0xa31824
    ctx->pc = 0x1e9380u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e9384: 0xac8300ec
    ctx->pc = 0x1e9384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
label_1e9388:
    // 0x1e9388: 0x3e00008
    ctx->pc = 0x1E9388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9378u: goto label_1e9378;
            case 0x1E9388u: goto label_1e9388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9390u;
}
