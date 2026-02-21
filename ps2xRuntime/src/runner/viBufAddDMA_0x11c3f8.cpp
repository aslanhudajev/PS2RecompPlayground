#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufAddDMA
// Address: 0x11c3f8 - 0x11c5e8
void viBufAddDMA_0x11c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c3f8u;

    // 0x11c3f8: 0x27bdff80
    ctx->pc = 0x11c3f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11c3fc: 0xffb60060
    ctx->pc = 0x11c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11c400: 0xffb20020
    ctx->pc = 0x11c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c404: 0xb02d
    ctx->pc = 0x11c404u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c408: 0xffbf0070
    ctx->pc = 0x11c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11c40c: 0x80902d
    ctx->pc = 0x11c40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c410: 0xffb50050
    ctx->pc = 0x11c410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11c414: 0xffb40040
    ctx->pc = 0x11c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11c418: 0xffb30030
    ctx->pc = 0x11c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11c41c: 0xffb10010
    ctx->pc = 0x11c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c420: 0xffb00000
    ctx->pc = 0x11c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c424: 0xc0438b8
    ctx->pc = 0x11C424u;
    SET_GPR_U32(ctx, 31, 0x11C42Cu);
    ctx->pc = 0x11C428u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C42Cu; }
    }
    if (ctx->pc != 0x11C42Cu) { return; }
    ctx->pc = 0x11C42Cu;
    // 0x11c42c: 0x8e430044
    ctx->pc = 0x11c42cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x11c430: 0x14600005
    ctx->pc = 0x11C430u;
    {
        const bool branch_taken_0x11c430 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11C434u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x11c430) {
            ctx->pc = 0x11C448u;
            goto label_11c448;
        }
    }
    ctx->pc = 0x11C438u;
    // 0x11c438: 0xc04647a
    ctx->pc = 0x11C438u;
    SET_GPR_U32(ctx, 31, 0x11C440u);
    ctx->pc = 0x11C43Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18240));
    ctx->pc = 0x1191E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x1191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C440u; }
    }
    if (ctx->pc != 0x11C440u) { return; }
    ctx->pc = 0x11C440u;
    // 0x11c440: 0x1000005f
    ctx->pc = 0x11C440u;
    {
        const bool branch_taken_0x11c440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C444u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c440) {
            ctx->pc = 0x11C5C0u;
            goto label_11c5c0;
        }
    }
    ctx->pc = 0x11C448u;
label_11c448:
    // 0x11c448: 0xc04701c
    ctx->pc = 0x11C448u;
    SET_GPR_U32(ctx, 31, 0x11C450u);
    ctx->pc = 0x11C44Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x11C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C450u; }
    }
    if (ctx->pc != 0x11C450u) { return; }
    ctx->pc = 0x11C450u;
    // 0x11c450: 0x3c021000
    ctx->pc = 0x11c450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11c454: 0x3c031000
    ctx->pc = 0x11c454u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11c458: 0x3442b400
    ctx->pc = 0x11c458u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x11c45c: 0x3463b410
    ctx->pc = 0x11c45cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x11c460: 0x8c550000
    ctx->pc = 0x11c460u;
    SET_GPR_U32(ctx, 21, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x11c464: 0x240202d
    ctx->pc = 0x11c464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c468: 0xc046ff2
    ctx->pc = 0x11C468u;
    SET_GPR_U32(ctx, 31, 0x11C470u);
    ctx->pc = 0x11C46Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x11BFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x11bfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C470u; }
    }
    if (ctx->pc != 0x11C470u) { return; }
    ctx->pc = 0x11C470u;
    // 0x11c470: 0x8e470008
    ctx->pc = 0x11c470u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11c474: 0x2406ffff
    ctx->pc = 0x11c474u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c478: 0x8e43000c
    ctx->pc = 0x11c478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11c47c: 0x471021
    ctx->pc = 0x11c47cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11c480: 0x50e00001
    ctx->pc = 0x11C480u;
    {
        const bool branch_taken_0x11c480 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c480) {
            ctx->pc = 0x11C484u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C488u;
            goto label_11c488;
        }
    }
    ctx->pc = 0x11C488u;
label_11c488:
    // 0x11c488: 0x431023
    ctx->pc = 0x11c488u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c48c: 0x47001a
    ctx->pc = 0x11c48cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c490: 0x8e420010
    ctx->pc = 0x11c490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11c494: 0x2010
    ctx->pc = 0x11c494u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x11c498: 0x641821
    ctx->pc = 0x11c498u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11c49c: 0x441023
    ctx->pc = 0x11c49cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c4a0: 0x67001a
    ctx->pc = 0x11c4a0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c4a4: 0xae420010
    ctx->pc = 0x11c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x11c4a8: 0x2810
    ctx->pc = 0x11c4a8u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x11c4ac: 0xa24021
    ctx->pc = 0x11c4acu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c4b0: 0xae45000c
    ctx->pc = 0x11c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
    // 0x11c4b4: 0x107001a
    ctx->pc = 0x11c4b4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c4b8: 0x8e430014
    ctx->pc = 0x11c4b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11c4bc: 0xc3302a
    ctx->pc = 0x11c4bcu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x11c4c0: 0x246207ff
    ctx->pc = 0x11c4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11c4c4: 0x66100b
    ctx->pc = 0x11c4c4u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x11c4c8: 0x29ac3
    ctx->pc = 0x11c4c8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x11c4cc: 0x1322c0
    ctx->pc = 0x11c4ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 11));
    // 0x11c4d0: 0x641823
    ctx->pc = 0x11c4d0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11c4d4: 0x8010
    ctx->pc = 0x11c4d4u;
    SET_GPR_U32(ctx, 16, ctx->hi);
    // 0x11c4d8: 0x1a600011
    ctx->pc = 0x11C4D8u;
    {
        const bool branch_taken_0x11c4d8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11C4DCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x11c4d8) {
            ctx->pc = 0x11C520u;
            goto label_11c520;
        }
    }
    ctx->pc = 0x11C4E0u;
    // 0x11c4e0: 0x24e2ffff
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11c4e4: 0x50e00001
    ctx->pc = 0x11C4E4u;
    {
        const bool branch_taken_0x11c4e4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c4e4) {
            ctx->pc = 0x11C4E8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C4ECu;
            goto label_11c4ec;
        }
    }
    ctx->pc = 0x11C4ECu;
label_11c4ec:
    // 0x11c4ec: 0x1021021
    ctx->pc = 0x11c4ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x11c4f0: 0x8e430000
    ctx->pc = 0x11c4f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c4f4: 0x47001a
    ctx->pc = 0x11c4f4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c4f8: 0x8e480004
    ctx->pc = 0x11c4f8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11c4fc: 0x24060003
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c500: 0x24070080
    ctx->pc = 0x11c500u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    // 0x11c504: 0x24160001
    ctx->pc = 0x11c504u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c508: 0x2010
    ctx->pc = 0x11c508u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x11c50c: 0x42ac0
    ctx->pc = 0x11c50cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 11));
    // 0x11c510: 0x42100
    ctx->pc = 0x11c510u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x11c514: 0x652821
    ctx->pc = 0x11c514u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11c518: 0xc047036
    ctx->pc = 0x11C518u;
    SET_GPR_U32(ctx, 31, 0x11C520u);
    ctx->pc = 0x11C51Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->pc = 0x11C0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x11c0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C520u; }
    }
    if (ctx->pc != 0x11C520u) { return; }
    ctx->pc = 0x11C520u;
label_11c520:
    // 0x11c520: 0x1a600018
    ctx->pc = 0x11C520u;
    {
        const bool branch_taken_0x11c520 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11C524u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c520) {
            ctx->pc = 0x11C584u;
            goto label_11c584;
        }
    }
    ctx->pc = 0x11C528u;
    // 0x11c528: 0x2674ffff
    ctx->pc = 0x11c528u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11c52c: 0x0
    ctx->pc = 0x11c52cu;
    // NOP
label_11c530:
    // 0x11c530: 0x2343826
    ctx->pc = 0x11c530u;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x11c534: 0x8e430004
    ctx->pc = 0x11c534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11c538: 0x8e420000
    ctx->pc = 0x11c538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c53c: 0x24060003
    ctx->pc = 0x11c53cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c540: 0x102100
    ctx->pc = 0x11c540u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x11c544: 0x102ac0
    ctx->pc = 0x11c544u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 11));
    // 0x11c548: 0x7300a
    ctx->pc = 0x11c548u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
    // 0x11c54c: 0x642021
    ctx->pc = 0x11c54cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11c550: 0x452821
    ctx->pc = 0x11c550u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c554: 0xc047036
    ctx->pc = 0x11C554u;
    SET_GPR_U32(ctx, 31, 0x11C55Cu);
    ctx->pc = 0x11C558u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x11C0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x11c0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C55Cu; }
    }
    if (ctx->pc != 0x11C55Cu) { return; }
    ctx->pc = 0x11C55Cu;
    // 0x11c55c: 0x26310001
    ctx->pc = 0x11c55cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x11c560: 0x8e420008
    ctx->pc = 0x11c560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11c564: 0x26030001
    ctx->pc = 0x11c564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 1));
    // 0x11c568: 0x233282a
    ctx->pc = 0x11c568u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x11c56c: 0x62001a
    ctx->pc = 0x11c56cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c570: 0x50400001
    ctx->pc = 0x11C570u;
    {
        const bool branch_taken_0x11c570 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c570) {
            ctx->pc = 0x11C574u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C578u;
            goto label_11c578;
        }
    }
    ctx->pc = 0x11C578u;
label_11c578:
    // 0x11c578: 0x2010
    ctx->pc = 0x11c578u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x11c57c: 0x14a0ffec
    ctx->pc = 0x11C57Cu;
    {
        const bool branch_taken_0x11c57c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x11C580u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c57c) {
            ctx->pc = 0x11C530u;
            goto label_11c530;
        }
    }
    ctx->pc = 0x11C584u;
label_11c584:
    // 0x11c584: 0x8e420010
    ctx->pc = 0x11c584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11c588: 0x531021
    ctx->pc = 0x11c588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11c58c: 0x10400009
    ctx->pc = 0x11C58Cu;
    {
        const bool branch_taken_0x11c58c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C590u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x11c58c) {
            ctx->pc = 0x11C5B4u;
            goto label_11c5b4;
        }
    }
    ctx->pc = 0x11C594u;
    // 0x11c594: 0x12c00005
    ctx->pc = 0x11C594u;
    {
        const bool branch_taken_0x11c594 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C598u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
        if (branch_taken_0x11c594) {
            ctx->pc = 0x11C5ACu;
            goto label_11c5ac;
        }
    }
    ctx->pc = 0x11C59Cu;
    // 0x11c59c: 0x3c033000
    ctx->pc = 0x11c59cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
    // 0x11c5a0: 0x3442ffff
    ctx->pc = 0x11c5a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11c5a4: 0x2a21024
    ctx->pc = 0x11c5a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11c5a8: 0x43a825
    ctx->pc = 0x11c5a8u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11c5ac:
    // 0x11c5ac: 0xc04701c
    ctx->pc = 0x11C5ACu;
    SET_GPR_U32(ctx, 31, 0x11C5B4u);
    ctx->pc = 0x11C5B0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 21), 256));
    ctx->pc = 0x11C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5B4u; }
    }
    if (ctx->pc != 0x11C5B4u) { return; }
    ctx->pc = 0x11C5B4u;
label_11c5b4:
    // 0x11c5b4: 0xc0438b0
    ctx->pc = 0x11C5B4u;
    SET_GPR_U32(ctx, 31, 0x11C5BCu);
    ctx->pc = 0x11C5B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5BCu; }
    }
    if (ctx->pc != 0x11C5BCu) { return; }
    ctx->pc = 0x11C5BCu;
    // 0x11c5bc: 0x24020001
    ctx->pc = 0x11c5bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11c5c0:
    // 0x11c5c0: 0xdfbf0070
    ctx->pc = 0x11c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c5c4: 0xdfb60060
    ctx->pc = 0x11c5c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c5c8: 0xdfb50050
    ctx->pc = 0x11c5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c5cc: 0xdfb40040
    ctx->pc = 0x11c5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c5d0: 0xdfb30030
    ctx->pc = 0x11c5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c5d4: 0xdfb20020
    ctx->pc = 0x11c5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c5d8: 0xdfb10010
    ctx->pc = 0x11c5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c5dc: 0xdfb00000
    ctx->pc = 0x11c5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c5e0: 0x3e00008
    ctx->pc = 0x11C5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C448u: goto label_11c448;
            case 0x11C488u: goto label_11c488;
            case 0x11C4ECu: goto label_11c4ec;
            case 0x11C520u: goto label_11c520;
            case 0x11C530u: goto label_11c530;
            case 0x11C578u: goto label_11c578;
            case 0x11C584u: goto label_11c584;
            case 0x11C5ACu: goto label_11c5ac;
            case 0x11C5B4u: goto label_11c5b4;
            case 0x11C5C0u: goto label_11c5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C5E8u;
}
