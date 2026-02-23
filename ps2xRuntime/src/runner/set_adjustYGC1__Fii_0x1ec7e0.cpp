#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set_adjustYGC1__Fii
// Address: 0x1ec7e0 - 0x1ec82c
void set_adjustYGC1__Fii_0x1ec7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set_adjustYGC1__Fii");


    ctx->pc = 0x1ec7e0u;

    // 0x1ec7e0: 0x43140
    ctx->pc = 0x1ec7e0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ec7e4: 0x24a4ff20
    ctx->pc = 0x1ec7e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x1ec7e8: 0x41900
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ec7ec: 0x642021
    ctx->pc = 0x1ec7ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec7f0: 0x418c0
    ctx->pc = 0x1ec7f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ec7f4: 0x642023
    ctx->pc = 0x1ec7f4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec7f8: 0x3c030050
    ctx->pc = 0x1ec7f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ec7fc: 0x24630dcc
    ctx->pc = 0x1ec7fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3532));
    // 0x1ec800: 0x661821
    ctx->pc = 0x1ec800u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ec804: 0x8c630000
    ctx->pc = 0x1ec804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec808: 0x14600002
    ctx->pc = 0x1EC808u;
    {
        const bool branch_taken_0x1ec808 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC80Cu;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1ec808) {
            ctx->pc = 0x1EC814u;
            goto label_1ec814;
        }
    }
    ctx->pc = 0x1EC810u;
    // 0x1ec810: 0x1cd
    ctx->pc = 0x1ec810u;
    runtime->handleBreak(rdram, ctx);
label_1ec814:
    // 0x1ec814: 0x3c030050
    ctx->pc = 0x1ec814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ec818: 0x24630dc4
    ctx->pc = 0x1ec818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3524));
    // 0x1ec81c: 0x2012
    ctx->pc = 0x1ec81cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1ec820: 0x661821
    ctx->pc = 0x1ec820u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ec824: 0x3e00008
    ctx->pc = 0x1EC824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC828u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC814u: goto label_1ec814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC82Cu;
}
