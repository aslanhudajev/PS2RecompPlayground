#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufBeginPut
// Address: 0x199560 - 0x199648
void viBufBeginPut_0x199560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufBeginPut");


    ctx->pc = 0x199560u;

    // 0x199560: 0x27bdffa0
    ctx->pc = 0x199560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x199564: 0xffb40040
    ctx->pc = 0x199564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x199568: 0xffb30030
    ctx->pc = 0x199568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19956c: 0xe0a02d
    ctx->pc = 0x19956cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199570: 0xffb20020
    ctx->pc = 0x199570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x199574: 0xa0982d
    ctx->pc = 0x199574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199578: 0xffb10010
    ctx->pc = 0x199578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19957c: 0x100902d
    ctx->pc = 0x19957cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199580: 0xffb00000
    ctx->pc = 0x199580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199584: 0xc0882d
    ctx->pc = 0x199584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199588: 0xffbf0050
    ctx->pc = 0x199588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19958c: 0x80802d
    ctx->pc = 0x19958cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199590: 0xc055248
    ctx->pc = 0x199590u;
    SET_GPR_U32(ctx, 31, 0x199598u);
    ctx->pc = 0x199594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199598u; }
        else if (ctx->pc != 0x199598u) { ctx->pc = 0x199598u; }
    }
    if (ctx->pc != 0x199598u) { return; }
    ctx->pc = 0x199598u;
    // 0x199598: 0x8e030010
    ctx->pc = 0x199598u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19959c: 0x8e02000c
    ctx->pc = 0x19959cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1995a0: 0x8e050014
    ctx->pc = 0x1995a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1995a4: 0x24660002
    ctx->pc = 0x1995a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 2));
    // 0x1995a8: 0x431021
    ctx->pc = 0x1995a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1995ac: 0x8e040018
    ctx->pc = 0x1995acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1995b0: 0x212c0
    ctx->pc = 0x1995b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1995b4: 0x8e030008
    ctx->pc = 0x1995b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1995b8: 0x451021
    ctx->pc = 0x1995b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1995bc: 0x50800001
    ctx->pc = 0x1995BCu;
    {
        const bool branch_taken_0x1995bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1995bc) {
            ctx->pc = 0x1995C0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1995C4u;
            goto label_1995c4;
        }
    }
    ctx->pc = 0x1995C4u;
label_1995c4:
    // 0x1995c4: 0x44001a
    ctx->pc = 0x1995c4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1995c8: 0x661823
    ctx->pc = 0x1995c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1995cc: 0x31ac0
    ctx->pc = 0x1995ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x1995d0: 0x652823
    ctx->pc = 0x1995d0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1995d4: 0x3810
    ctx->pc = 0x1995d4u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x1995d8: 0x872023
    ctx->pc = 0x1995d8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1995dc: 0x85102a
    ctx->pc = 0x1995dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x1995e0: 0x54400008
    ctx->pc = 0x1995E0u;
    {
        const bool branch_taken_0x1995e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1995e0) {
            ctx->pc = 0x1995E4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->pc = 0x199604u;
            goto label_199604;
        }
    }
    ctx->pc = 0x1995E8u;
    // 0x1995e8: 0x8e020000
    ctx->pc = 0x1995e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1995ec: 0xae250000
    ctx->pc = 0x1995ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1995f0: 0x471021
    ctx->pc = 0x1995f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1995f4: 0xae400000
    ctx->pc = 0x1995f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1995f8: 0xae620000
    ctx->pc = 0x1995f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1995fc: 0x10000009
    ctx->pc = 0x1995FCu;
    {
        const bool branch_taken_0x1995fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x199600u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1995fc) {
            ctx->pc = 0x199624u;
            goto label_199624;
        }
    }
    ctx->pc = 0x199604u;
label_199604:
    // 0x199604: 0x8e020000
    ctx->pc = 0x199604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199608: 0x8e030018
    ctx->pc = 0x199608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19960c: 0x472021
    ctx->pc = 0x19960cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x199610: 0x671823
    ctx->pc = 0x199610u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x199614: 0xae640000
    ctx->pc = 0x199614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x199618: 0xa31823
    ctx->pc = 0x199618u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19961c: 0xae820000
    ctx->pc = 0x19961cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x199620: 0xae430000
    ctx->pc = 0x199620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_199624:
    // 0x199624: 0x8e040040
    ctx->pc = 0x199624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x199628: 0xdfbf0050
    ctx->pc = 0x199628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19962c: 0xdfb40040
    ctx->pc = 0x19962cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199630: 0xdfb30030
    ctx->pc = 0x199630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199634: 0xdfb20020
    ctx->pc = 0x199634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199638: 0xdfb10010
    ctx->pc = 0x199638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19963c: 0xdfb00000
    ctx->pc = 0x19963cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199640: 0x8055240
    ctx->pc = 0x199640u;
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x154900u;
    SignalSema_0x154900(rdram, ctx, runtime); return;
    ctx->pc = 0x199648u;
}
