#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ChkBufSiz
// Address: 0x197720 - 0x19786c
void sfmpv_ChkBufSiz_0x197720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ChkBufSiz");


    ctx->pc = 0x197720u;

    // 0x197720: 0x27bdfff0
    ctx->pc = 0x197720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197724: 0x80502d
    ctx->pc = 0x197724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197728: 0xffbf0000
    ctx->pc = 0x197728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19772c: 0x25473744
    ctx->pc = 0x19772cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 10), 14148));
    // 0x197730: 0x2404ffc0
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x197734: 0x254e3740
    ctx->pc = 0x197734u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 10), 14144));
    // 0x197738: 0x8ce20020
    ctx->pc = 0x197738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x19773c: 0x8cab0000
    ctx->pc = 0x19773cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197740: 0x8ce30008
    ctx->pc = 0x197740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x197744: 0x2442003f
    ctx->pc = 0x197744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x197748: 0x8cec001c
    ctx->pc = 0x197748u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x19774c: 0x446824
    ctx->pc = 0x19774cu;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197750: 0x6b182a
    ctx->pc = 0x197750u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 11)));
    // 0x197754: 0x1460000f
    ctx->pc = 0x197754u;
    {
        const bool branch_taken_0x197754 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x197758u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x197754) {
            ctx->pc = 0x197794u;
            goto label_197794;
        }
    }
    ctx->pc = 0x19775Cu;
    // 0x19775c: 0x8d423744
    ctx->pc = 0x19775cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 14148)));
    // 0x197760: 0x21040
    ctx->pc = 0x197760u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x197764: 0x4b102a
    ctx->pc = 0x197764u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 11)));
    // 0x197768: 0x1440000a
    ctx->pc = 0x197768u;
    {
        const bool branch_taken_0x197768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x197768) {
            ctx->pc = 0x197794u;
            goto label_197794;
        }
    }
    ctx->pc = 0x197770u;
    // 0x197770: 0x8ce2000c
    ctx->pc = 0x197770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x197774: 0x49102a
    ctx->pc = 0x197774u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 9)));
    // 0x197778: 0x14400006
    ctx->pc = 0x197778u;
    {
        const bool branch_taken_0x197778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x197778) {
            ctx->pc = 0x197794u;
            goto label_197794;
        }
    }
    ctx->pc = 0x197780u;
    // 0x197780: 0x8ce20004
    ctx->pc = 0x197780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x197784: 0x21040
    ctx->pc = 0x197784u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x197788: 0x49102a
    ctx->pc = 0x197788u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 9)));
    // 0x19778c: 0x50400007
    ctx->pc = 0x19778Cu;
    {
        const bool branch_taken_0x19778c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19778c) {
            ctx->pc = 0x197790u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
            ctx->pc = 0x1977ACu;
            goto label_1977ac;
        }
    }
    ctx->pc = 0x197794u;
label_197794:
    // 0x197794: 0x3c05ff00
    ctx->pc = 0x197794u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x197798: 0x140202d
    ctx->pc = 0x197798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19779c: 0xc064ea0
    ctx->pc = 0x19779Cu;
    SET_GPR_U32(ctx, 31, 0x1977A4u);
    ctx->pc = 0x1977A0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3863));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977A4u; }
        else if (ctx->pc != 0x1977A4u) { ctx->pc = 0x1977A4u; }
    }
    if (ctx->pc != 0x1977A4u) { return; }
    ctx->pc = 0x1977A4u;
    // 0x1977a4: 0x1000002f
    ctx->pc = 0x1977A4u;
    {
        const bool branch_taken_0x1977a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1977A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1977a4) {
            ctx->pc = 0x197864u;
            goto label_197864;
        }
    }
    ctx->pc = 0x1977ACu;
label_1977ac:
    // 0x1977ac: 0x2406ffff
    ctx->pc = 0x1977acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1977b0: 0x8ce70014
    ctx->pc = 0x1977b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1977b4: 0xc9282a
    ctx->pc = 0x1977b4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 9)));
    // 0x1977b8: 0xc2402a
    ctx->pc = 0x1977b8u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x1977bc: 0x2443000f
    ctx->pc = 0x1977bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 15));
    // 0x1977c0: 0x48180b
    ctx->pc = 0x1977c0u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x1977c4: 0x2524000f
    ctx->pc = 0x1977c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 15));
    // 0x1977c8: 0x125200b
    ctx->pc = 0x1977c8u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 9));
    // 0x1977cc: 0xcb402a
    ctx->pc = 0x1977ccu;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 11)));
    // 0x1977d0: 0x24e2000f
    ctx->pc = 0x1977d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 15));
    // 0x1977d4: 0xc7302a
    ctx->pc = 0x1977d4u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x1977d8: 0x2565000f
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 11), 15));
    // 0x1977dc: 0xe6100b
    ctx->pc = 0x1977dcu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
    // 0x1977e0: 0x168280b
    ctx->pc = 0x1977e0u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 11));
    // 0x1977e4: 0x42103
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1977e8: 0x31903
    ctx->pc = 0x1977e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1977ec: 0x52903
    ctx->pc = 0x1977ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1977f0: 0x42280
    ctx->pc = 0x1977f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 10));
    // 0x1977f4: 0x21103
    ctx->pc = 0x1977f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1977f8: 0x31a80
    ctx->pc = 0x1977f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 10));
    // 0x1977fc: 0xa43818
    ctx->pc = 0x1977fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x197800: 0x431018
    ctx->pc = 0x197800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x197804: 0x47102b
    ctx->pc = 0x197804u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x197808: 0x10400006
    ctx->pc = 0x197808u;
    {
        const bool branch_taken_0x197808 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19780Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197808) {
            ctx->pc = 0x197824u;
            goto label_197824;
        }
    }
    ctx->pc = 0x197810u;
    // 0x197810: 0x3c05ff00
    ctx->pc = 0x197810u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x197814: 0xc064ea0
    ctx->pc = 0x197814u;
    SET_GPR_U32(ctx, 31, 0x19781Cu);
    ctx->pc = 0x197818u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3864));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19781Cu; }
        else if (ctx->pc != 0x19781Cu) { ctx->pc = 0x19781Cu; }
    }
    if (ctx->pc != 0x19781Cu) { return; }
    ctx->pc = 0x19781Cu;
    // 0x19781c: 0x10000011
    ctx->pc = 0x19781Cu;
    {
        const bool branch_taken_0x19781c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197820u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x19781c) {
            ctx->pc = 0x197864u;
            goto label_197864;
        }
    }
    ctx->pc = 0x197824u;
label_197824:
    // 0x197824: 0x2582ffff
    ctx->pc = 0x197824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x197828: 0x2c420010
    ctx->pc = 0x197828u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 16));
    // 0x19782c: 0x54400007
    ctx->pc = 0x19782Cu;
    {
        const bool branch_taken_0x19782c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19782c) {
            ctx->pc = 0x197830u;
            WRITE32(ADD32(GPR_U32(ctx, 14), 204), GPR_U32(ctx, 12));
            ctx->pc = 0x19784Cu;
            goto label_19784c;
        }
    }
    ctx->pc = 0x197834u;
    // 0x197834: 0x3c05ff00
    ctx->pc = 0x197834u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x197838: 0x140202d
    ctx->pc = 0x197838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19783c: 0xc064ea0
    ctx->pc = 0x19783Cu;
    SET_GPR_U32(ctx, 31, 0x197844u);
    ctx->pc = 0x197840u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3865));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197844u; }
        else if (ctx->pc != 0x197844u) { ctx->pc = 0x197844u; }
    }
    if (ctx->pc != 0x197844u) { return; }
    ctx->pc = 0x197844u;
    // 0x197844: 0x10000007
    ctx->pc = 0x197844u;
    {
        const bool branch_taken_0x197844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197848u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x197844) {
            ctx->pc = 0x197864u;
            goto label_197864;
        }
    }
    ctx->pc = 0x19784Cu;
label_19784c:
    // 0x19784c: 0x25443810
    ctx->pc = 0x19784cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 14352));
    // 0x197850: 0x1a0282d
    ctx->pc = 0x197850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197854: 0xc0661f8
    ctx->pc = 0x197854u;
    SET_GPR_U32(ctx, 31, 0x19785Cu);
    ctx->pc = 0x197858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1987E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_InitFrmObj_0x1987e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19785Cu; }
        else if (ctx->pc != 0x19785Cu) { ctx->pc = 0x19785Cu; }
    }
    if (ctx->pc != 0x19785Cu) { return; }
    ctx->pc = 0x19785Cu;
    // 0x19785c: 0x102d
    ctx->pc = 0x19785cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197860: 0xdfbf0000
    ctx->pc = 0x197860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197864:
    // 0x197864: 0x3e00008
    ctx->pc = 0x197864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197794u: goto label_197794;
            case 0x1977ACu: goto label_1977ac;
            case 0x197824u: goto label_197824;
            case 0x19784Cu: goto label_19784c;
            case 0x197864u: goto label_197864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19786Cu;
}
