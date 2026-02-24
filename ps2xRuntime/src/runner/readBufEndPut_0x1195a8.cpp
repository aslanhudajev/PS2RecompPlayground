#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufEndPut
// Address: 0x1195a8 - 0x1195ec
void readBufEndPut_0x1195a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1195a8u;

    // 0x1195a8: 0x3c020005
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)5 << 16));
    // 0x1195ac: 0x822021
    ctx->pc = 0x1195acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1195b0: 0x8c870008
    ctx->pc = 0x1195b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1195b4: 0x8c880004
    ctx->pc = 0x1195b4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1195b8: 0x8c860000
    ctx->pc = 0x1195b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1195bc: 0x50e00001
    ctx->pc = 0x1195BCu;
    {
        const bool branch_taken_0x1195bc = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1195bc) {
            ctx->pc = 0x1195C0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1195C4u;
            goto label_1195c4;
        }
    }
    ctx->pc = 0x1195C4u;
label_1195c4:
    // 0x1195c4: 0xe81023
    ctx->pc = 0x1195c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1195c8: 0xa2182a
    ctx->pc = 0x1195c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1195cc: 0xa3100b
    ctx->pc = 0x1195ccu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x1195d0: 0xc23021
    ctx->pc = 0x1195d0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1195d4: 0x1024021
    ctx->pc = 0x1195d4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1195d8: 0xc7001a
    ctx->pc = 0x1195d8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1195dc: 0xac880004
    ctx->pc = 0x1195dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x1195e0: 0x1810
    ctx->pc = 0x1195e0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1195e4: 0x3e00008
    ctx->pc = 0x1195E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195E8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1195C4u: goto label_1195c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1195ECu;
}
