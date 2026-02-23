#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setPutCam__7CFcvTRSFi
// Address: 0x1e7b90 - 0x1e7bc0
void setPutCam__7CFcvTRSFi_0x1e7b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setPutCam__7CFcvTRSFi");


    ctx->pc = 0x1e7b90u;

    // 0x1e7b90: 0x10a00005
    ctx->pc = 0x1E7B90u;
    {
        const bool branch_taken_0x1e7b90 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7b90) {
            ctx->pc = 0x1E7BA8u;
            goto label_1e7ba8;
        }
    }
    ctx->pc = 0x1E7B98u;
    // 0x1e7b98: 0x8c8300ec
    ctx->pc = 0x1e7b98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7b9c: 0x34630080
    ctx->pc = 0x1e7b9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 128));
    // 0x1e7ba0: 0x10000005
    ctx->pc = 0x1E7BA0u;
    {
        const bool branch_taken_0x1e7ba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7BA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        if (branch_taken_0x1e7ba0) {
            ctx->pc = 0x1E7BB8u;
            goto label_1e7bb8;
        }
    }
    ctx->pc = 0x1E7BA8u;
label_1e7ba8:
    // 0x1e7ba8: 0x8c8500ec
    ctx->pc = 0x1e7ba8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7bac: 0x2403ff7f
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1e7bb0: 0xa31824
    ctx->pc = 0x1e7bb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e7bb4: 0xac8300ec
    ctx->pc = 0x1e7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
label_1e7bb8:
    // 0x1e7bb8: 0x3e00008
    ctx->pc = 0x1E7BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7BA8u: goto label_1e7ba8;
            case 0x1E7BB8u: goto label_1e7bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7BC0u;
}
