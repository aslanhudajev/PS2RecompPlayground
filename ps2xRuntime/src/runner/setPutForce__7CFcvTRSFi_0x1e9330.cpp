#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setPutForce__7CFcvTRSFi
// Address: 0x1e9330 - 0x1e9360
void setPutForce__7CFcvTRSFi_0x1e9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setPutForce__7CFcvTRSFi");


    ctx->pc = 0x1e9330u;

    // 0x1e9330: 0x10a00005
    ctx->pc = 0x1E9330u;
    {
        const bool branch_taken_0x1e9330 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9330) {
            ctx->pc = 0x1E9348u;
            goto label_1e9348;
        }
    }
    ctx->pc = 0x1E9338u;
    // 0x1e9338: 0x8c8300ec
    ctx->pc = 0x1e9338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e933c: 0x34630040
    ctx->pc = 0x1e933cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64));
    // 0x1e9340: 0x10000005
    ctx->pc = 0x1E9340u;
    {
        const bool branch_taken_0x1e9340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9344u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        if (branch_taken_0x1e9340) {
            ctx->pc = 0x1E9358u;
            goto label_1e9358;
        }
    }
    ctx->pc = 0x1E9348u;
label_1e9348:
    // 0x1e9348: 0x8c8500ec
    ctx->pc = 0x1e9348u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e934c: 0x2403ffbf
    ctx->pc = 0x1e934cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1e9350: 0xa31824
    ctx->pc = 0x1e9350u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e9354: 0xac8300ec
    ctx->pc = 0x1e9354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
label_1e9358:
    // 0x1e9358: 0x3e00008
    ctx->pc = 0x1E9358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9348u: goto label_1e9348;
            case 0x1E9358u: goto label_1e9358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9360u;
}
