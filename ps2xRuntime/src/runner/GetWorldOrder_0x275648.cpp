#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetWorldOrder
// Address: 0x275648 - 0x275684
void GetWorldOrder_0x275648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x275648u;

    // 0x275648: 0x182d
    ctx->pc = 0x275648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27564c: 0x3c020034
    ctx->pc = 0x27564cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275650: 0x2445fb38
    ctx->pc = 0x275650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966072));
    // 0x275654: 0x31080
    ctx->pc = 0x275654u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_275658:
    // 0x275658: 0x451021
    ctx->pc = 0x275658u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27565c: 0x8c420000
    ctx->pc = 0x27565cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275660: 0x54440003
    ctx->pc = 0x275660u;
    {
        const bool branch_taken_0x275660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x275660) {
            ctx->pc = 0x275664u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x275670u;
            goto label_275670;
        }
    }
    ctx->pc = 0x275668u;
    // 0x275668: 0x3e00008
    ctx->pc = 0x275668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27566Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275658u: goto label_275658;
            case 0x275670u: goto label_275670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275670u;
label_275670:
    // 0x275670: 0x2c62000e
    ctx->pc = 0x275670u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
    // 0x275674: 0x1440fff8
    ctx->pc = 0x275674u;
    {
        const bool branch_taken_0x275674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275678u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x275674) {
            ctx->pc = 0x275658u;
            goto label_275658;
        }
    }
    ctx->pc = 0x27567Cu;
    // 0x27567c: 0x3e00008
    ctx->pc = 0x27567Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275680u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275658u: goto label_275658;
            case 0x275670u: goto label_275670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275684u;
}
