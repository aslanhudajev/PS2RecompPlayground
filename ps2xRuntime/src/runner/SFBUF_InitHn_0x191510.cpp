#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_InitHn
// Address: 0x191510 - 0x191664
void SFBUF_InitHn_0x191510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_InitHn");


    ctx->pc = 0x191510u;

    // 0x191510: 0x27bdff80
    ctx->pc = 0x191510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x191514: 0xffb40060
    ctx->pc = 0x191514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x191518: 0xffb30050
    ctx->pc = 0x191518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x19151c: 0x80a02d
    ctx->pc = 0x19151cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191520: 0xffb20040
    ctx->pc = 0x191520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x191524: 0x3a0202d
    ctx->pc = 0x191524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191528: 0xffb10030
    ctx->pc = 0x191528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x19152c: 0xa0902d
    ctx->pc = 0x19152cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191530: 0xffb00020
    ctx->pc = 0x191530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x191534: 0xffbf0070
    ctx->pc = 0x191534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x191538: 0xc0802d
    ctx->pc = 0x191538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19153c: 0x26110008
    ctx->pc = 0x19153cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 8));
    // 0x191540: 0x8e060004
    ctx->pc = 0x191540u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191544: 0xc06459a
    ctx->pc = 0x191544u;
    SET_GPR_U32(ctx, 31, 0x19154Cu);
    ctx->pc = 0x191548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191668u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_MakeBufPtr_0x191668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19154Cu; }
        else if (ctx->pc != 0x19154Cu) { ctx->pc = 0x19154Cu; }
    }
    if (ctx->pc != 0x19154Cu) { return; }
    ctx->pc = 0x19154Cu;
    // 0x19154c: 0x8e020028
    ctx->pc = 0x19154cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x191550: 0x240202d
    ctx->pc = 0x191550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191554: 0x8e030008
    ctx->pc = 0x191554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191558: 0x3a0282d
    ctx->pc = 0x191558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19155c: 0x50400001
    ctx->pc = 0x19155Cu;
    {
        const bool branch_taken_0x19155c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19155c) {
            ctx->pc = 0x191560u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x191564u;
            goto label_191564;
        }
    }
    ctx->pc = 0x191564u;
label_191564:
    // 0x191564: 0x220302d
    ctx->pc = 0x191564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191568: 0x62001a
    ctx->pc = 0x191568u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19156c: 0x4010
    ctx->pc = 0x19156cu;
    SET_GPR_U32(ctx, 8, ctx->hi);
    // 0x191570: 0xc0645a6
    ctx->pc = 0x191570u;
    SET_GPR_U32(ctx, 31, 0x191578u);
    ctx->pc = 0x191574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191698u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitRingSj_0x191698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191578u; }
        else if (ctx->pc != 0x191578u) { ctx->pc = 0x191578u; }
    }
    if (ctx->pc != 0x191578u) { return; }
    ctx->pc = 0x191578u;
    // 0x191578: 0x40802d
    ctx->pc = 0x191578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19157c: 0x240202d
    ctx->pc = 0x19157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191580: 0x3a0282d
    ctx->pc = 0x191580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191584: 0x220302d
    ctx->pc = 0x191584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191588: 0x24070001
    ctx->pc = 0x191588u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19158c: 0xc0645a6
    ctx->pc = 0x19158Cu;
    SET_GPR_U32(ctx, 31, 0x191594u);
    ctx->pc = 0x191590u;
    SET_GPR_U32(ctx, 8, ((uint32_t)5 << 16));
    ctx->pc = 0x191698u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitRingSj_0x191698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191594u; }
        else if (ctx->pc != 0x191594u) { ctx->pc = 0x191594u; }
    }
    if (ctx->pc != 0x191594u) { return; }
    ctx->pc = 0x191594u;
    // 0x191594: 0x40982d
    ctx->pc = 0x191594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191598: 0x240202d
    ctx->pc = 0x191598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19159c: 0x3a0282d
    ctx->pc = 0x19159cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915a0: 0x220302d
    ctx->pc = 0x1915a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915a4: 0x24070002
    ctx->pc = 0x1915a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1915a8: 0xc0645a6
    ctx->pc = 0x1915A8u;
    SET_GPR_U32(ctx, 31, 0x1915B0u);
    ctx->pc = 0x1915ACu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191698u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitRingSj_0x191698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915B0u; }
        else if (ctx->pc != 0x1915B0u) { ctx->pc = 0x1915B0u; }
    }
    if (ctx->pc != 0x1915B0u) { return; }
    ctx->pc = 0x1915B0u;
    // 0x1915b0: 0x16000005
    ctx->pc = 0x1915B0u;
    {
        const bool branch_taken_0x1915b0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1915b0) {
            ctx->pc = 0x1915C8u;
            goto label_1915c8;
        }
    }
    ctx->pc = 0x1915B8u;
    // 0x1915b8: 0x16600003
    ctx->pc = 0x1915B8u;
    {
        const bool branch_taken_0x1915b8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x1915b8) {
            ctx->pc = 0x1915C8u;
            goto label_1915c8;
        }
    }
    ctx->pc = 0x1915C0u;
    // 0x1915c0: 0x10400007
    ctx->pc = 0x1915C0u;
    {
        const bool branch_taken_0x1915c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1915C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1915c0) {
            ctx->pc = 0x1915E0u;
            goto label_1915e0;
        }
    }
    ctx->pc = 0x1915C8u;
label_1915c8:
    // 0x1915c8: 0x3c05ff00
    ctx->pc = 0x1915c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1915cc: 0x280202d
    ctx->pc = 0x1915ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915d0: 0xc064ea0
    ctx->pc = 0x1915D0u;
    SET_GPR_U32(ctx, 31, 0x1915D8u);
    ctx->pc = 0x1915D4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1034));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915D8u; }
        else if (ctx->pc != 0x1915D8u) { ctx->pc = 0x1915D8u; }
    }
    if (ctx->pc != 0x1915D8u) { return; }
    ctx->pc = 0x1915D8u;
    // 0x1915d8: 0x1000001b
    ctx->pc = 0x1915D8u;
    {
        const bool branch_taken_0x1915d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1915DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x1915d8) {
            ctx->pc = 0x191648u;
            goto label_191648;
        }
    }
    ctx->pc = 0x1915E0u;
label_1915e0:
    // 0x1915e0: 0x3a0282d
    ctx->pc = 0x1915e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915e4: 0x220302d
    ctx->pc = 0x1915e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915e8: 0xc064618
    ctx->pc = 0x1915E8u;
    SET_GPR_U32(ctx, 31, 0x1915F0u);
    ctx->pc = 0x1915ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x191860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitVfrmBuf_0x191860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915F0u; }
        else if (ctx->pc != 0x1915F0u) { ctx->pc = 0x1915F0u; }
    }
    if (ctx->pc != 0x1915F0u) { return; }
    ctx->pc = 0x1915F0u;
    // 0x1915f0: 0x240202d
    ctx->pc = 0x1915f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915f4: 0x3a0282d
    ctx->pc = 0x1915f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915f8: 0x220302d
    ctx->pc = 0x1915f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915fc: 0xc064640
    ctx->pc = 0x1915FCu;
    SET_GPR_U32(ctx, 31, 0x191604u);
    ctx->pc = 0x191600u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x191900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitAringBuf_0x191900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191604u; }
        else if (ctx->pc != 0x191604u) { ctx->pc = 0x191604u; }
    }
    if (ctx->pc != 0x191604u) { return; }
    ctx->pc = 0x191604u;
    // 0x191604: 0x240202d
    ctx->pc = 0x191604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191608: 0x3a0282d
    ctx->pc = 0x191608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19160c: 0x220302d
    ctx->pc = 0x19160cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191610: 0xc064618
    ctx->pc = 0x191610u;
    SET_GPR_U32(ctx, 31, 0x191618u);
    ctx->pc = 0x191614u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x191860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitVfrmBuf_0x191860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191618u; }
        else if (ctx->pc != 0x191618u) { ctx->pc = 0x191618u; }
    }
    if (ctx->pc != 0x191618u) { return; }
    ctx->pc = 0x191618u;
    // 0x191618: 0x240202d
    ctx->pc = 0x191618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19161c: 0x3a0282d
    ctx->pc = 0x19161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191620: 0x220302d
    ctx->pc = 0x191620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191624: 0xc064640
    ctx->pc = 0x191624u;
    SET_GPR_U32(ctx, 31, 0x19162Cu);
    ctx->pc = 0x191628u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x191900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitAringBuf_0x191900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19162Cu; }
        else if (ctx->pc != 0x19162Cu) { ctx->pc = 0x19162Cu; }
    }
    if (ctx->pc != 0x19162Cu) { return; }
    ctx->pc = 0x19162Cu;
    // 0x19162c: 0x240202d
    ctx->pc = 0x19162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191630: 0x220302d
    ctx->pc = 0x191630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191634: 0x3a0282d
    ctx->pc = 0x191634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191638: 0xc064686
    ctx->pc = 0x191638u;
    SET_GPR_U32(ctx, 31, 0x191640u);
    ctx->pc = 0x19163Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x191A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitUoSjBuf_0x191a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191640u; }
        else if (ctx->pc != 0x191640u) { ctx->pc = 0x191640u; }
    }
    if (ctx->pc != 0x191640u) { return; }
    ctx->pc = 0x191640u;
    // 0x191640: 0x102d
    ctx->pc = 0x191640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191644: 0xdfbf0070
    ctx->pc = 0x191644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_191648:
    // 0x191648: 0xdfb40060
    ctx->pc = 0x191648u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19164c: 0xdfb30050
    ctx->pc = 0x19164cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191650: 0xdfb20040
    ctx->pc = 0x191650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191654: 0xdfb10030
    ctx->pc = 0x191654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191658: 0xdfb00020
    ctx->pc = 0x191658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19165c: 0x3e00008
    ctx->pc = 0x19165Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191564u: goto label_191564;
            case 0x1915C8u: goto label_1915c8;
            case 0x1915E0u: goto label_1915e0;
            case 0x191648u: goto label_191648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191664u;
}
