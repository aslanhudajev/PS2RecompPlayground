#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufBeginGet
// Address: 0x2ddb60 - 0x2ddbac
void readBufBeginGet_0x2ddb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ddb60u;

    // 0x2ddb60: 0x3c020005
    ctx->pc = 0x2ddb60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2ddb64: 0x821821
    ctx->pc = 0x2ddb64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ddb68: 0x8c660004
    ctx->pc = 0x2ddb68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ddb6c: 0x50c0000d
    ctx->pc = 0x2DDB6Cu;
    {
        const bool branch_taken_0x2ddb6c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ddb6c) {
            ctx->pc = 0x2DDB70u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
            ctx->pc = 0x2DDBA4u;
            goto label_2ddba4;
        }
    }
    ctx->pc = 0x2DDB74u;
    // 0x2ddb74: 0x8c620000
    ctx->pc = 0x2ddb74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddb78: 0x461023
    ctx->pc = 0x2ddb78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ddb7c: 0x8c630008
    ctx->pc = 0x2ddb7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ddb80: 0x431021
    ctx->pc = 0x2ddb80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ddb84: 0x43001a
    ctx->pc = 0x2ddb84u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2ddb88: 0x1010
    ctx->pc = 0x2ddb88u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2ddb8c: 0x50600001
    ctx->pc = 0x2DDB8Cu;
    {
        const bool branch_taken_0x2ddb8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ddb8c) {
            ctx->pc = 0x2DDB90u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DDB94u;
            goto label_2ddb94;
        }
    }
    ctx->pc = 0x2DDB94u;
label_2ddb94:
    // 0x2ddb94: 0x821021
    ctx->pc = 0x2ddb94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ddb98: 0xaca20000
    ctx->pc = 0x2ddb98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ddb9c: 0x3c020005
    ctx->pc = 0x2ddb9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2ddba0: 0x821021
    ctx->pc = 0x2ddba0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ddba4:
    // 0x2ddba4: 0x3e00008
    ctx->pc = 0x2DDBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDBA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DDB94u: goto label_2ddb94;
            case 0x2DDBA4u: goto label_2ddba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DDBACu;
}
