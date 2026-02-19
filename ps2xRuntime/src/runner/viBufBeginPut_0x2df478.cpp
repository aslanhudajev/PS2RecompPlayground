#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufBeginPut
// Address: 0x2df478 - 0x2df568
void viBufBeginPut_0x2df478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df478u;

    // 0x2df478: 0x27bdffa0
    ctx->pc = 0x2df478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2df47c: 0xffbf0050
    ctx->pc = 0x2df47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2df480: 0xffb40040
    ctx->pc = 0x2df480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2df484: 0xffb30030
    ctx->pc = 0x2df484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2df488: 0xffb20020
    ctx->pc = 0x2df488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2df48c: 0xffb10010
    ctx->pc = 0x2df48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2df490: 0xffb00000
    ctx->pc = 0x2df490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df494: 0x80802d
    ctx->pc = 0x2df494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df498: 0xa0882d
    ctx->pc = 0x2df498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df49c: 0xc0902d
    ctx->pc = 0x2df49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4a0: 0xe0982d
    ctx->pc = 0x2df4a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4a4: 0x100a02d
    ctx->pc = 0x2df4a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4a8: 0xc0c0d88
    ctx->pc = 0x2DF4A8u;
    SET_GPR_U32(ctx, 31, 0x2DF4B0u);
    ctx->pc = 0x2DF4ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF4B0u; }
    }
    if (ctx->pc != 0x2DF4B0u) { return; }
    ctx->pc = 0x2DF4B0u;
    // 0x2df4b0: 0x8e03000c
    ctx->pc = 0x2df4b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2df4b4: 0x8e020010
    ctx->pc = 0x2df4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2df4b8: 0x621821
    ctx->pc = 0x2df4b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df4bc: 0x31ac0
    ctx->pc = 0x2df4bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x2df4c0: 0x24420002
    ctx->pc = 0x2df4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x2df4c4: 0x8e040008
    ctx->pc = 0x2df4c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df4c8: 0x822023
    ctx->pc = 0x2df4c8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2df4cc: 0x422c0
    ctx->pc = 0x2df4ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 11));
    // 0x2df4d0: 0x8e050014
    ctx->pc = 0x2df4d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2df4d4: 0x651821
    ctx->pc = 0x2df4d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2df4d8: 0x8e020018
    ctx->pc = 0x2df4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2df4dc: 0x62001a
    ctx->pc = 0x2df4dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df4e0: 0x1810
    ctx->pc = 0x2df4e0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2df4e4: 0x50400001
    ctx->pc = 0x2DF4E4u;
    {
        const bool branch_taken_0x2df4e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df4e4) {
            ctx->pc = 0x2DF4E8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF4ECu;
            goto label_2df4ec;
        }
    }
    ctx->pc = 0x2DF4ECu;
label_2df4ec:
    // 0x2df4ec: 0x852023
    ctx->pc = 0x2df4ecu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df4f0: 0x431023
    ctx->pc = 0x2df4f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df4f4: 0x44102a
    ctx->pc = 0x2df4f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2df4f8: 0x14400007
    ctx->pc = 0x2DF4F8u;
    {
        const bool branch_taken_0x2df4f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DF4FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2df4f8) {
            ctx->pc = 0x2DF518u;
            goto label_2df518;
        }
    }
    ctx->pc = 0x2DF500u;
    // 0x2df500: 0x621021
    ctx->pc = 0x2df500u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df504: 0xae220000
    ctx->pc = 0x2df504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2df508: 0xae440000
    ctx->pc = 0x2df508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2df50c: 0xae600000
    ctx->pc = 0x2df50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2df510: 0x1000000c
    ctx->pc = 0x2DF510u;
    {
        const bool branch_taken_0x2df510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF514u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2df510) {
            ctx->pc = 0x2DF544u;
            goto label_2df544;
        }
    }
    ctx->pc = 0x2DF518u;
label_2df518:
    // 0x2df518: 0x621021
    ctx->pc = 0x2df518u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df51c: 0xae220000
    ctx->pc = 0x2df51cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2df520: 0x8e020018
    ctx->pc = 0x2df520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2df524: 0x431023
    ctx->pc = 0x2df524u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df528: 0xae420000
    ctx->pc = 0x2df528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2df52c: 0x8e020000
    ctx->pc = 0x2df52cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df530: 0xae620000
    ctx->pc = 0x2df530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2df534: 0x8e020018
    ctx->pc = 0x2df534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2df538: 0x431023
    ctx->pc = 0x2df538u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df53c: 0x821023
    ctx->pc = 0x2df53cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2df540: 0xae820000
    ctx->pc = 0x2df540u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2df544:
    // 0x2df544: 0x8e040040
    ctx->pc = 0x2df544u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2df548: 0xdfbf0050
    ctx->pc = 0x2df548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df54c: 0xdfb40040
    ctx->pc = 0x2df54cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df550: 0xdfb30030
    ctx->pc = 0x2df550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df554: 0xdfb20020
    ctx->pc = 0x2df554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df558: 0xdfb10010
    ctx->pc = 0x2df558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df55c: 0xdfb00000
    ctx->pc = 0x2df55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df560: 0x80c0d80
    ctx->pc = 0x2DF560u;
    ctx->pc = 0x2DF564u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x303600u;
    SignalSema_0x303600(rdram, ctx, runtime); return;
    ctx->pc = 0x2DF568u;
}
