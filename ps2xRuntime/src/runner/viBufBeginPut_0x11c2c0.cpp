#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufBeginPut
// Address: 0x11c2c0 - 0x11c3a8
void viBufBeginPut_0x11c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c2c0u;

    // 0x11c2c0: 0x27bdffa0
    ctx->pc = 0x11c2c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c2c4: 0xffb40040
    ctx->pc = 0x11c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11c2c8: 0xffb30030
    ctx->pc = 0x11c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11c2cc: 0xe0a02d
    ctx->pc = 0x11c2ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2d0: 0xffb20020
    ctx->pc = 0x11c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c2d4: 0xa0982d
    ctx->pc = 0x11c2d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2d8: 0xffb10010
    ctx->pc = 0x11c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c2dc: 0x100902d
    ctx->pc = 0x11c2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2e0: 0xffb00000
    ctx->pc = 0x11c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c2e4: 0xc0882d
    ctx->pc = 0x11c2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2e8: 0xffbf0050
    ctx->pc = 0x11c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11c2ec: 0x80802d
    ctx->pc = 0x11c2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2f0: 0xc0438b8
    ctx->pc = 0x11C2F0u;
    SET_GPR_U32(ctx, 31, 0x11C2F8u);
    ctx->pc = 0x11C2F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C2F8u; }
    }
    if (ctx->pc != 0x11C2F8u) { return; }
    ctx->pc = 0x11C2F8u;
    // 0x11c2f8: 0x8e030010
    ctx->pc = 0x11c2f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c2fc: 0x8e02000c
    ctx->pc = 0x11c2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11c300: 0x8e050014
    ctx->pc = 0x11c300u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11c304: 0x24660002
    ctx->pc = 0x11c304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 2));
    // 0x11c308: 0x431021
    ctx->pc = 0x11c308u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c30c: 0x8e040018
    ctx->pc = 0x11c30cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11c310: 0x212c0
    ctx->pc = 0x11c310u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x11c314: 0x8e030008
    ctx->pc = 0x11c314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11c318: 0x451021
    ctx->pc = 0x11c318u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c31c: 0x50800001
    ctx->pc = 0x11C31Cu;
    {
        const bool branch_taken_0x11c31c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c31c) {
            ctx->pc = 0x11C320u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C324u;
            goto label_11c324;
        }
    }
    ctx->pc = 0x11C324u;
label_11c324:
    // 0x11c324: 0x44001a
    ctx->pc = 0x11c324u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c328: 0x661823
    ctx->pc = 0x11c328u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11c32c: 0x31ac0
    ctx->pc = 0x11c32cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x11c330: 0x652823
    ctx->pc = 0x11c330u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11c334: 0x3810
    ctx->pc = 0x11c334u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x11c338: 0x872023
    ctx->pc = 0x11c338u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x11c33c: 0x85102a
    ctx->pc = 0x11c33cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x11c340: 0x54400008
    ctx->pc = 0x11C340u;
    {
        const bool branch_taken_0x11c340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11c340) {
            ctx->pc = 0x11C344u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->pc = 0x11C364u;
            goto label_11c364;
        }
    }
    ctx->pc = 0x11C348u;
    // 0x11c348: 0x8e020000
    ctx->pc = 0x11c348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c34c: 0xae250000
    ctx->pc = 0x11c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x11c350: 0x471021
    ctx->pc = 0x11c350u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11c354: 0xae400000
    ctx->pc = 0x11c354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x11c358: 0xae620000
    ctx->pc = 0x11c358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x11c35c: 0x10000009
    ctx->pc = 0x11C35Cu;
    {
        const bool branch_taken_0x11c35c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C360u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x11c35c) {
            ctx->pc = 0x11C384u;
            goto label_11c384;
        }
    }
    ctx->pc = 0x11C364u;
label_11c364:
    // 0x11c364: 0x8e020000
    ctx->pc = 0x11c364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c368: 0x8e030018
    ctx->pc = 0x11c368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11c36c: 0x472021
    ctx->pc = 0x11c36cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11c370: 0x671823
    ctx->pc = 0x11c370u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11c374: 0xae640000
    ctx->pc = 0x11c374u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x11c378: 0xa31823
    ctx->pc = 0x11c378u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11c37c: 0xae820000
    ctx->pc = 0x11c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x11c380: 0xae430000
    ctx->pc = 0x11c380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_11c384:
    // 0x11c384: 0x8e040040
    ctx->pc = 0x11c384u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c388: 0xdfbf0050
    ctx->pc = 0x11c388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c38c: 0xdfb40040
    ctx->pc = 0x11c38cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c390: 0xdfb30030
    ctx->pc = 0x11c390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c394: 0xdfb20020
    ctx->pc = 0x11c394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c398: 0xdfb10010
    ctx->pc = 0x11c398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c39c: 0xdfb00000
    ctx->pc = 0x11c39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c3a0: 0x80438b0
    ctx->pc = 0x11C3A0u;
    ctx->pc = 0x11C3A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x10E2C0u;
    SignalSema_0x10e2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x11C3A8u;
}
