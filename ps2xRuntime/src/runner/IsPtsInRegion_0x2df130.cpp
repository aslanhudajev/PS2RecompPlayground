#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: IsPtsInRegion
// Address: 0x2df130 - 0x2df150
void IsPtsInRegion_0x2df130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df130u;

    // 0x2df130: 0x872021
    ctx->pc = 0x2df130u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2df134: 0x852023
    ctx->pc = 0x2df134u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df138: 0x87001a
    ctx->pc = 0x2df138u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df13c: 0x1010
    ctx->pc = 0x2df13cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2df140: 0x50e00001
    ctx->pc = 0x2DF140u;
    {
        const bool branch_taken_0x2df140 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df140) {
            ctx->pc = 0x2DF144u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF148u;
            goto label_2df148;
        }
    }
    ctx->pc = 0x2DF148u;
label_2df148:
    // 0x2df148: 0x3e00008
    ctx->pc = 0x2DF148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF14Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF148u: goto label_2df148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF150u;
}
