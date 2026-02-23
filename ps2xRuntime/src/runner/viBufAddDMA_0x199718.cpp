#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufAddDMA
// Address: 0x199718 - 0x199908
void viBufAddDMA_0x199718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufAddDMA");


    ctx->pc = 0x199718u;

    // 0x199718: 0x27bdff80
    ctx->pc = 0x199718u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19971c: 0xffb60060
    ctx->pc = 0x19971cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x199720: 0xffb20020
    ctx->pc = 0x199720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x199724: 0xb02d
    ctx->pc = 0x199724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199728: 0xffbf0070
    ctx->pc = 0x199728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19972c: 0x80902d
    ctx->pc = 0x19972cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199730: 0xffb50050
    ctx->pc = 0x199730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x199734: 0xffb40040
    ctx->pc = 0x199734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x199738: 0xffb30030
    ctx->pc = 0x199738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19973c: 0xffb10010
    ctx->pc = 0x19973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x199740: 0xffb00000
    ctx->pc = 0x199740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199744: 0xc055248
    ctx->pc = 0x199744u;
    SET_GPR_U32(ctx, 31, 0x19974Cu);
    ctx->pc = 0x199748u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19974Cu; }
        else if (ctx->pc != 0x19974Cu) { ctx->pc = 0x19974Cu; }
    }
    if (ctx->pc != 0x19974Cu) { return; }
    ctx->pc = 0x19974Cu;
    // 0x19974c: 0x8e430044
    ctx->pc = 0x19974cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x199750: 0x14600005
    ctx->pc = 0x199750u;
    {
        const bool branch_taken_0x199750 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x199750) {
            ctx->pc = 0x199768u;
            goto label_199768;
        }
    }
    ctx->pc = 0x199758u;
    // 0x199758: 0xc055240
    ctx->pc = 0x199758u;
    SET_GPR_U32(ctx, 31, 0x199760u);
    ctx->pc = 0x19975Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199760u; }
        else if (ctx->pc != 0x199760u) { ctx->pc = 0x199760u; }
    }
    if (ctx->pc != 0x199760u) { return; }
    ctx->pc = 0x199760u;
    // 0x199760: 0x1000005f
    ctx->pc = 0x199760u;
    {
        const bool branch_taken_0x199760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x199764u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x199760) {
            ctx->pc = 0x1998E0u;
            goto label_1998e0;
        }
    }
    ctx->pc = 0x199768u;
label_199768:
    // 0x199768: 0xc0664c4
    ctx->pc = 0x199768u;
    SET_GPR_U32(ctx, 31, 0x199770u);
    ctx->pc = 0x19976Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x199310u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x199310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199770u; }
        else if (ctx->pc != 0x199770u) { ctx->pc = 0x199770u; }
    }
    if (ctx->pc != 0x199770u) { return; }
    ctx->pc = 0x199770u;
    // 0x199770: 0x3c021000
    ctx->pc = 0x199770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x199774: 0x3c031000
    ctx->pc = 0x199774u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x199778: 0x3442b400
    ctx->pc = 0x199778u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x19977c: 0x3463b410
    ctx->pc = 0x19977cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x199780: 0x8c550000
    ctx->pc = 0x199780u;
    SET_GPR_U32(ctx, 21, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x199784: 0x240202d
    ctx->pc = 0x199784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199788: 0xc066496
    ctx->pc = 0x199788u;
    SET_GPR_U32(ctx, 31, 0x199790u);
    ctx->pc = 0x19978Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x199258u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x199258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199790u; }
        else if (ctx->pc != 0x199790u) { ctx->pc = 0x199790u; }
    }
    if (ctx->pc != 0x199790u) { return; }
    ctx->pc = 0x199790u;
    // 0x199790: 0x8e470008
    ctx->pc = 0x199790u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x199794: 0x2406ffff
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199798: 0x8e43000c
    ctx->pc = 0x199798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x19979c: 0x471021
    ctx->pc = 0x19979cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1997a0: 0x50e00001
    ctx->pc = 0x1997A0u;
    {
        const bool branch_taken_0x1997a0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1997a0) {
            ctx->pc = 0x1997A4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1997A8u;
            goto label_1997a8;
        }
    }
    ctx->pc = 0x1997A8u;
label_1997a8:
    // 0x1997a8: 0x431023
    ctx->pc = 0x1997a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1997ac: 0x47001a
    ctx->pc = 0x1997acu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1997b0: 0x8e420010
    ctx->pc = 0x1997b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1997b4: 0x2010
    ctx->pc = 0x1997b4u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x1997b8: 0x641821
    ctx->pc = 0x1997b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1997bc: 0x441023
    ctx->pc = 0x1997bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1997c0: 0x67001a
    ctx->pc = 0x1997c0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1997c4: 0xae420010
    ctx->pc = 0x1997c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1997c8: 0x2810
    ctx->pc = 0x1997c8u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1997cc: 0xa24021
    ctx->pc = 0x1997ccu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1997d0: 0xae45000c
    ctx->pc = 0x1997d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
    // 0x1997d4: 0x107001a
    ctx->pc = 0x1997d4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1997d8: 0x8e430014
    ctx->pc = 0x1997d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1997dc: 0xc3302a
    ctx->pc = 0x1997dcu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x1997e0: 0x246207ff
    ctx->pc = 0x1997e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1997e4: 0x66100b
    ctx->pc = 0x1997e4u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x1997e8: 0x29ac3
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1997ec: 0x1322c0
    ctx->pc = 0x1997ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 11));
    // 0x1997f0: 0x641823
    ctx->pc = 0x1997f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1997f4: 0x8010
    ctx->pc = 0x1997f4u;
    SET_GPR_U32(ctx, 16, ctx->hi);
    // 0x1997f8: 0x1a600011
    ctx->pc = 0x1997F8u;
    {
        const bool branch_taken_0x1997f8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1997FCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x1997f8) {
            ctx->pc = 0x199840u;
            goto label_199840;
        }
    }
    ctx->pc = 0x199800u;
    // 0x199800: 0x24e2ffff
    ctx->pc = 0x199800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x199804: 0x50e00001
    ctx->pc = 0x199804u;
    {
        const bool branch_taken_0x199804 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x199804) {
            ctx->pc = 0x199808u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19980Cu;
            goto label_19980c;
        }
    }
    ctx->pc = 0x19980Cu;
label_19980c:
    // 0x19980c: 0x1021021
    ctx->pc = 0x19980cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x199810: 0x8e430000
    ctx->pc = 0x199810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199814: 0x47001a
    ctx->pc = 0x199814u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x199818: 0x8e480004
    ctx->pc = 0x199818u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19981c: 0x24060003
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x199820: 0x24070080
    ctx->pc = 0x199820u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    // 0x199824: 0x24160001
    ctx->pc = 0x199824u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x199828: 0x2010
    ctx->pc = 0x199828u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x19982c: 0x42ac0
    ctx->pc = 0x19982cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 11));
    // 0x199830: 0x42100
    ctx->pc = 0x199830u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x199834: 0x652821
    ctx->pc = 0x199834u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199838: 0xc0664de
    ctx->pc = 0x199838u;
    SET_GPR_U32(ctx, 31, 0x199840u);
    ctx->pc = 0x19983Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->pc = 0x199378u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x199378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199840u; }
        else if (ctx->pc != 0x199840u) { ctx->pc = 0x199840u; }
    }
    if (ctx->pc != 0x199840u) { return; }
    ctx->pc = 0x199840u;
label_199840:
    // 0x199840: 0x1a600018
    ctx->pc = 0x199840u;
    {
        const bool branch_taken_0x199840 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x199844u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x199840) {
            ctx->pc = 0x1998A4u;
            goto label_1998a4;
        }
    }
    ctx->pc = 0x199848u;
    // 0x199848: 0x2674ffff
    ctx->pc = 0x199848u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x19984c: 0x0
    ctx->pc = 0x19984cu;
    // NOP
label_199850:
    // 0x199850: 0x2343826
    ctx->pc = 0x199850u;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x199854: 0x8e430004
    ctx->pc = 0x199854u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x199858: 0x8e420000
    ctx->pc = 0x199858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19985c: 0x24060003
    ctx->pc = 0x19985cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x199860: 0x102100
    ctx->pc = 0x199860u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x199864: 0x102ac0
    ctx->pc = 0x199864u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 11));
    // 0x199868: 0x7300a
    ctx->pc = 0x199868u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
    // 0x19986c: 0x642021
    ctx->pc = 0x19986cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199870: 0x452821
    ctx->pc = 0x199870u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x199874: 0xc0664de
    ctx->pc = 0x199874u;
    SET_GPR_U32(ctx, 31, 0x19987Cu);
    ctx->pc = 0x199878u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x199378u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x199378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19987Cu; }
        else if (ctx->pc != 0x19987Cu) { ctx->pc = 0x19987Cu; }
    }
    if (ctx->pc != 0x19987Cu) { return; }
    ctx->pc = 0x19987Cu;
    // 0x19987c: 0x26310001
    ctx->pc = 0x19987cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x199880: 0x8e420008
    ctx->pc = 0x199880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x199884: 0x26030001
    ctx->pc = 0x199884u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 1));
    // 0x199888: 0x233282a
    ctx->pc = 0x199888u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x19988c: 0x62001a
    ctx->pc = 0x19988cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x199890: 0x50400001
    ctx->pc = 0x199890u;
    {
        const bool branch_taken_0x199890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x199890) {
            ctx->pc = 0x199894u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x199898u;
            goto label_199898;
        }
    }
    ctx->pc = 0x199898u;
label_199898:
    // 0x199898: 0x2010
    ctx->pc = 0x199898u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x19989c: 0x14a0ffec
    ctx->pc = 0x19989Cu;
    {
        const bool branch_taken_0x19989c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1998A0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19989c) {
            ctx->pc = 0x199850u;
            goto label_199850;
        }
    }
    ctx->pc = 0x1998A4u;
label_1998a4:
    // 0x1998a4: 0x8e420010
    ctx->pc = 0x1998a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1998a8: 0x531021
    ctx->pc = 0x1998a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1998ac: 0x10400009
    ctx->pc = 0x1998ACu;
    {
        const bool branch_taken_0x1998ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1998B0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1998ac) {
            ctx->pc = 0x1998D4u;
            goto label_1998d4;
        }
    }
    ctx->pc = 0x1998B4u;
    // 0x1998b4: 0x12c00005
    ctx->pc = 0x1998B4u;
    {
        const bool branch_taken_0x1998b4 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1998B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
        if (branch_taken_0x1998b4) {
            ctx->pc = 0x1998CCu;
            goto label_1998cc;
        }
    }
    ctx->pc = 0x1998BCu;
    // 0x1998bc: 0x3c033000
    ctx->pc = 0x1998bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
    // 0x1998c0: 0x3442ffff
    ctx->pc = 0x1998c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1998c4: 0x2a21024
    ctx->pc = 0x1998c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1998c8: 0x43a825
    ctx->pc = 0x1998c8u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1998cc:
    // 0x1998cc: 0xc0664c4
    ctx->pc = 0x1998CCu;
    SET_GPR_U32(ctx, 31, 0x1998D4u);
    ctx->pc = 0x1998D0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 21), 256));
    ctx->pc = 0x199310u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x199310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998D4u; }
        else if (ctx->pc != 0x1998D4u) { ctx->pc = 0x1998D4u; }
    }
    if (ctx->pc != 0x1998D4u) { return; }
    ctx->pc = 0x1998D4u;
label_1998d4:
    // 0x1998d4: 0xc055240
    ctx->pc = 0x1998D4u;
    SET_GPR_U32(ctx, 31, 0x1998DCu);
    ctx->pc = 0x1998D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998DCu; }
        else if (ctx->pc != 0x1998DCu) { ctx->pc = 0x1998DCu; }
    }
    if (ctx->pc != 0x1998DCu) { return; }
    ctx->pc = 0x1998DCu;
    // 0x1998dc: 0x24020001
    ctx->pc = 0x1998dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1998e0:
    // 0x1998e0: 0xdfbf0070
    ctx->pc = 0x1998e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1998e4: 0xdfb60060
    ctx->pc = 0x1998e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1998e8: 0xdfb50050
    ctx->pc = 0x1998e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1998ec: 0xdfb40040
    ctx->pc = 0x1998ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1998f0: 0xdfb30030
    ctx->pc = 0x1998f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1998f4: 0xdfb20020
    ctx->pc = 0x1998f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1998f8: 0xdfb10010
    ctx->pc = 0x1998f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1998fc: 0xdfb00000
    ctx->pc = 0x1998fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199900: 0x3e00008
    ctx->pc = 0x199900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199904u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199768u: goto label_199768;
            case 0x1997A8u: goto label_1997a8;
            case 0x19980Cu: goto label_19980c;
            case 0x199840u: goto label_199840;
            case 0x199850u: goto label_199850;
            case 0x199898u: goto label_199898;
            case 0x1998A4u: goto label_1998a4;
            case 0x1998CCu: goto label_1998cc;
            case 0x1998D4u: goto label_1998d4;
            case 0x1998E0u: goto label_1998e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199908u;
}
