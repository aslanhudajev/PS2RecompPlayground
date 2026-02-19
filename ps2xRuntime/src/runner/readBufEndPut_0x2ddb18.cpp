#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufEndPut
// Address: 0x2ddb18 - 0x2ddb5c
void readBufEndPut_0x2ddb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ddb18u;

    // 0x2ddb18: 0x3c020005
    ctx->pc = 0x2ddb18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2ddb1c: 0x822021
    ctx->pc = 0x2ddb1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ddb20: 0x8c860008
    ctx->pc = 0x2ddb20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ddb24: 0x8c870004
    ctx->pc = 0x2ddb24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ddb28: 0xc71023
    ctx->pc = 0x2ddb28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ddb2c: 0xa2182a
    ctx->pc = 0x2ddb2cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2ddb30: 0xa3100b
    ctx->pc = 0x2ddb30u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x2ddb34: 0x8c830000
    ctx->pc = 0x2ddb34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ddb38: 0x431821
    ctx->pc = 0x2ddb38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ddb3c: 0x66001a
    ctx->pc = 0x2ddb3cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2ddb40: 0x1810
    ctx->pc = 0x2ddb40u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2ddb44: 0x50c00001
    ctx->pc = 0x2DDB44u;
    {
        const bool branch_taken_0x2ddb44 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ddb44) {
            ctx->pc = 0x2DDB48u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DDB4Cu;
            goto label_2ddb4c;
        }
    }
    ctx->pc = 0x2DDB4Cu;
label_2ddb4c:
    // 0x2ddb4c: 0xac830000
    ctx->pc = 0x2ddb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ddb50: 0x473821
    ctx->pc = 0x2ddb50u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ddb54: 0x3e00008
    ctx->pc = 0x2DDB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB58u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DDB4Cu: goto label_2ddb4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DDB5Cu;
}
