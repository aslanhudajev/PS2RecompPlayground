#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufPutTs
// Address: 0x11ccb0 - 0x11cd9c
void viBufPutTs_0x11ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ccb0u;

    // 0x11ccb0: 0x27bdffc0
    ctx->pc = 0x11ccb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ccb4: 0xffb20020
    ctx->pc = 0x11ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11ccb8: 0xffb10010
    ctx->pc = 0x11ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ccbc: 0x902d
    ctx->pc = 0x11ccbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccc0: 0xffb00000
    ctx->pc = 0x11ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ccc4: 0xa0882d
    ctx->pc = 0x11ccc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccc8: 0xffbf0030
    ctx->pc = 0x11ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11cccc: 0x80802d
    ctx->pc = 0x11ccccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccd0: 0xc0438b8
    ctx->pc = 0x11CCD0u;
    SET_GPR_U32(ctx, 31, 0x11CCD8u);
    ctx->pc = 0x11CCD4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCD8u; }
    }
    if (ctx->pc != 0x11CCD8u) { return; }
    ctx->pc = 0x11CCD8u;
    // 0x11ccd8: 0x8e030058
    ctx->pc = 0x11ccd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x11ccdc: 0x8e020054
    ctx->pc = 0x11ccdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11cce0: 0x62182a
    ctx->pc = 0x11cce0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x11cce4: 0x10600024
    ctx->pc = 0x11CCE4u;
    {
        const bool branch_taken_0x11cce4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CCE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cce4) {
            ctx->pc = 0x11CD78u;
            goto label_11cd78;
        }
    }
    ctx->pc = 0x11CCECu;
    // 0x11ccec: 0xc0472d0
    ctx->pc = 0x11CCECu;
    SET_GPR_U32(ctx, 31, 0x11CCF4u);
    ctx->pc = 0x11CCF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11CB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufModifyPts_0x11cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCF4u; }
    }
    if (ctx->pc != 0x11CCF4u) { return; }
    ctx->pc = 0x11CCF4u;
    // 0x11ccf4: 0xde240000
    ctx->pc = 0x11ccf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ccf8: 0x4830005
    ctx->pc = 0x11CCF8u;
    {
        const bool branch_taken_0x11ccf8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11ccf8) {
            ctx->pc = 0x11CCFCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->pc = 0x11CD10u;
            goto label_11cd10;
        }
    }
    ctx->pc = 0x11CD00u;
    // 0x11cd00: 0xde220008
    ctx->pc = 0x11cd00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11cd04: 0x440001c
    ctx->pc = 0x11CD04u;
    {
        const bool branch_taken_0x11cd04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11CD08u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11cd04) {
            ctx->pc = 0x11CD78u;
            goto label_11cd78;
        }
    }
    ctx->pc = 0x11CD0Cu;
    // 0x11cd0c: 0x8e02005c
    ctx->pc = 0x11cd0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_11cd10:
    // 0x11cd10: 0x24070018
    ctx->pc = 0x11cd10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x11cd14: 0x8e060050
    ctx->pc = 0x11cd14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x11cd18: 0x471018
    ctx->pc = 0x11cd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x11cd1c: 0x8e230010
    ctx->pc = 0x11cd1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11cd20: 0x461021
    ctx->pc = 0x11cd20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11cd24: 0xac430010
    ctx->pc = 0x11cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x11cd28: 0xfc440000
    ctx->pc = 0x11cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x11cd2c: 0x8e04005c
    ctx->pc = 0x11cd2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x11cd30: 0x8e250014
    ctx->pc = 0x11cd30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11cd34: 0x871818
    ctx->pc = 0x11cd34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x11cd38: 0x662021
    ctx->pc = 0x11cd38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11cd3c: 0xde230008
    ctx->pc = 0x11cd3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11cd40: 0xac850014
    ctx->pc = 0x11cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x11cd44: 0xfc430008
    ctx->pc = 0x11cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x11cd48: 0x8e03005c
    ctx->pc = 0x11cd48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x11cd4c: 0x8e040054
    ctx->pc = 0x11cd4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11cd50: 0x24630001
    ctx->pc = 0x11cd50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cd54: 0x8e020058
    ctx->pc = 0x11cd54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x11cd58: 0x64001a
    ctx->pc = 0x11cd58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11cd5c: 0x24420001
    ctx->pc = 0x11cd5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cd60: 0xae020058
    ctx->pc = 0x11cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x11cd64: 0x50800001
    ctx->pc = 0x11CD64u;
    {
        const bool branch_taken_0x11cd64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x11cd64) {
            ctx->pc = 0x11CD68u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11CD6Cu;
            goto label_11cd6c;
        }
    }
    ctx->pc = 0x11CD6Cu;
label_11cd6c:
    // 0x11cd6c: 0x2810
    ctx->pc = 0x11cd6cu;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x11cd70: 0xae05005c
    ctx->pc = 0x11cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x11cd74: 0x24120001
    ctx->pc = 0x11cd74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_11cd78:
    // 0x11cd78: 0xc0438b0
    ctx->pc = 0x11CD78u;
    SET_GPR_U32(ctx, 31, 0x11CD80u);
    ctx->pc = 0x11CD7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD80u; }
    }
    if (ctx->pc != 0x11CD80u) { return; }
    ctx->pc = 0x11CD80u;
    // 0x11cd80: 0x240102d
    ctx->pc = 0x11cd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd84: 0xdfbf0030
    ctx->pc = 0x11cd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cd88: 0xdfb20020
    ctx->pc = 0x11cd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cd8c: 0xdfb10010
    ctx->pc = 0x11cd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cd90: 0xdfb00000
    ctx->pc = 0x11cd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cd94: 0x3e00008
    ctx->pc = 0x11CD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CD98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CD10u: goto label_11cd10;
            case 0x11CD6Cu: goto label_11cd6c;
            case 0x11CD78u: goto label_11cd78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CD9Cu;
}
