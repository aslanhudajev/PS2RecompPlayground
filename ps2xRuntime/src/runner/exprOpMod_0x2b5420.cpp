#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpMod
// Address: 0x2b5420 - 0x2b5440
void exprOpMod_0x2b5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5420u;

    // 0x2b5420: 0x8ca30010
    ctx->pc = 0x2b5420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b5424: 0x8cc20010
    ctx->pc = 0x2b5424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b5428: 0x62001a
    ctx->pc = 0x2b5428u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2b542c: 0x1810
    ctx->pc = 0x2b542cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2b5430: 0x50400001
    ctx->pc = 0x2B5430u;
    {
        const bool branch_taken_0x2b5430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b5430) {
            ctx->pc = 0x2B5434u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2B5438u;
            goto label_2b5438;
        }
    }
    ctx->pc = 0x2B5438u;
label_2b5438:
    // 0x2b5438: 0x3e00008
    ctx->pc = 0x2B5438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B543Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5438u: goto label_2b5438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5440u;
}
