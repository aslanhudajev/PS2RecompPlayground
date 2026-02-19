#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugObjStart
// Address: 0x2bd8e8 - 0x2bd938
void pbDebugObjStart_0x2bd8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bd8e8u;

    // 0x2bd8e8: 0x8c820070
    ctx->pc = 0x2bd8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2bd8ec: 0x8c43002c
    ctx->pc = 0x2bd8ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2bd8f0: 0x3c020037
    ctx->pc = 0x2bd8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd8f4: 0x8c422740
    ctx->pc = 0x2bd8f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bd8f8: 0xac450034
    ctx->pc = 0x2bd8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x2bd8fc: 0xac440038
    ctx->pc = 0x2bd8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x2bd900: 0x14600003
    ctx->pc = 0x2BD900u;
    {
        const bool branch_taken_0x2bd900 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD904u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bd900) {
            ctx->pc = 0x2BD910u;
            goto label_2bd910;
        }
    }
    ctx->pc = 0x2BD908u;
    // 0x2bd908: 0x3c02003b
    ctx->pc = 0x2bd908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd90c: 0x244368f8
    ctx->pc = 0x2bd90cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 26872));
label_2bd910:
    // 0x2bd910: 0xacc3003c
    ctx->pc = 0x2bd910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x2bd914: 0x3c020037
    ctx->pc = 0x2bd914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd918: 0x8c422740
    ctx->pc = 0x2bd918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bd91c: 0x8c420000
    ctx->pc = 0x2bd91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd920: 0x10400003
    ctx->pc = 0x2BD920u;
    {
        const bool branch_taken_0x2bd920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd920) {
            ctx->pc = 0x2BD930u;
            goto label_2bd930;
        }
    }
    ctx->pc = 0x2BD928u;
    // 0x2bd928: 0x80af5a0
    ctx->pc = 0x2BD928u;
    ctx->pc = 0x2BD680u;
    pbDebugObjSStep_0x2bd680(rdram, ctx, runtime); return;
    ctx->pc = 0x2BD930u;
label_2bd930:
    // 0x2bd930: 0x3e00008
    ctx->pc = 0x2BD930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BD910u: goto label_2bd910;
            case 0x2BD930u: goto label_2bd930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BD938u;
}
