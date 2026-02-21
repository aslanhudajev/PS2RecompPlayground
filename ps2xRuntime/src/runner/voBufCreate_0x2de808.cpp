#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufCreate
// Address: 0x2de808 - 0x2de858
void voBufCreate_0x2de808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de808u;

    // 0x2de808: 0xac850000
    ctx->pc = 0x2de808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2de80c: 0xac860004
    ctx->pc = 0x2de80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2de810: 0xac870010
    ctx->pc = 0x2de810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2de814: 0xac80000c
    ctx->pc = 0x2de814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2de818: 0xac800008
    ctx->pc = 0x2de818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2de81c: 0x18e0000c
    ctx->pc = 0x2DE81Cu;
    {
        const bool branch_taken_0x2de81c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2DE820u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2de81c) {
            ctx->pc = 0x2DE850u;
            goto label_2de850;
        }
    }
    ctx->pc = 0x2DE824u;
    // 0x2de824: 0x3c060003
    ctx->pc = 0x2de824u;
    SET_GPR_U32(ctx, 6, ((uint32_t)3 << 16));
    // 0x2de828: 0x34c69240
    ctx->pc = 0x2de828u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 37440));
    // 0x2de82c: 0x0
    ctx->pc = 0x2de82cu;
    // NOP
label_2de830:
    // 0x2de830: 0x8c830004
    ctx->pc = 0x2de830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2de834: 0xa61018
    ctx->pc = 0x2de834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2de838: 0x431021
    ctx->pc = 0x2de838u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2de83c: 0xac400000
    ctx->pc = 0x2de83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2de840: 0x24a50001
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2de844: 0xa7102a
    ctx->pc = 0x2de844u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x2de848: 0x1440fff9
    ctx->pc = 0x2DE848u;
    {
        const bool branch_taken_0x2de848 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2de848) {
            ctx->pc = 0x2DE830u;
            goto label_2de830;
        }
    }
    ctx->pc = 0x2DE850u;
label_2de850:
    // 0x2de850: 0x3e00008
    ctx->pc = 0x2DE850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE830u: goto label_2de830;
            case 0x2DE850u: goto label_2de850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE858u;
}
