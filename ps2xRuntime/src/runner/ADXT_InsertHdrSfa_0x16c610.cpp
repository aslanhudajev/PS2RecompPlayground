#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_InsertHdrSfa
// Address: 0x16c610 - 0x16c814
void ADXT_InsertHdrSfa_0x16c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_InsertHdrSfa");


    ctx->pc = 0x16c610u;

label_16c610:
    // 0x16c610: 0x27bdff60
    ctx->pc = 0x16c610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_16c614:
    // 0x16c614: 0xffb40070
    ctx->pc = 0x16c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_16c618:
    // 0x16c618: 0xffb30060
    ctx->pc = 0x16c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_16c61c:
    // 0x16c61c: 0xe0a02d
    ctx->pc = 0x16c61cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c620:
    // 0x16c620: 0xffb20050
    ctx->pc = 0x16c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_16c624:
    // 0x16c624: 0xc0982d
    ctx->pc = 0x16c624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c628:
    // 0x16c628: 0xffb10040
    ctx->pc = 0x16c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_16c62c:
    // 0x16c62c: 0xa0902d
    ctx->pc = 0x16c62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c630:
    // 0x16c630: 0xffb50080
    ctx->pc = 0x16c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_16c634:
    // 0x16c634: 0xffb00030
    ctx->pc = 0x16c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_16c638:
    // 0x16c638: 0xffbf0090
    ctx->pc = 0x16c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_16c63c:
    // 0x16c63c: 0xc05c024
label_16c640:
    if (ctx->pc == 0x16C640u) {
        ctx->pc = 0x16C640u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C644u;
        goto label_16c644;
    }
    ctx->pc = 0x16C63Cu;
    SET_GPR_U32(ctx, 31, 0x16C644u);
    ctx->pc = 0x16C640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170090u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_Init_0x170090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C644u; }
        else if (ctx->pc != 0x16C644u) { ctx->pc = 0x16C644u; }
    }
    if (ctx->pc != 0x16C644u) { return; }
    ctx->pc = 0x16C644u;
label_16c644:
    // 0x16c644: 0x3c040023
    ctx->pc = 0x16c644u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_16c648:
    // 0x16c648: 0x24050400
    ctx->pc = 0x16c648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
label_16c64c:
    // 0x16c64c: 0x2484e280
    ctx->pc = 0x16c64cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959744));
label_16c650:
    // 0x16c650: 0xc05f128
label_16c654:
    if (ctx->pc == 0x16C654u) {
        ctx->pc = 0x16C654u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C658u;
        goto label_16c658;
    }
    ctx->pc = 0x16C650u;
    SET_GPR_U32(ctx, 31, 0x16C658u);
    ctx->pc = 0x16C654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C658u; }
        else if (ctx->pc != 0x16C658u) { ctx->pc = 0x16C658u; }
    }
    if (ctx->pc != 0x16C658u) { return; }
    ctx->pc = 0x16C658u;
label_16c658:
    // 0x16c658: 0x3c100023
    ctx->pc = 0x16c658u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
label_16c65c:
    // 0x16c65c: 0x40a82d
    ctx->pc = 0x16c65cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c660:
    // 0x16c660: 0x2610e680
    ctx->pc = 0x16c660u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294960768));
label_16c664:
    // 0x16c664: 0x24050400
    ctx->pc = 0x16c664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
label_16c668:
    // 0x16c668: 0x200202d
    ctx->pc = 0x16c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c66c:
    // 0x16c66c: 0xc05f128
label_16c670:
    if (ctx->pc == 0x16C670u) {
        ctx->pc = 0x16C670u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C674u;
        goto label_16c674;
    }
    ctx->pc = 0x16C66Cu;
    SET_GPR_U32(ctx, 31, 0x16C674u);
    ctx->pc = 0x16C670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C674u; }
        else if (ctx->pc != 0x16C674u) { ctx->pc = 0x16C674u; }
    }
    if (ctx->pc != 0x16C674u) { return; }
    ctx->pc = 0x16C674u;
label_16c674:
    // 0x16c674: 0x26040020
    ctx->pc = 0x16c674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
label_16c678:
    // 0x16c678: 0xafa20000
    ctx->pc = 0x16c678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_16c67c:
    // 0x16c67c: 0x24050400
    ctx->pc = 0x16c67cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
label_16c680:
    // 0x16c680: 0xc05f128
label_16c684:
    if (ctx->pc == 0x16C684u) {
        ctx->pc = 0x16C684u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C688u;
        goto label_16c688;
    }
    ctx->pc = 0x16C680u;
    SET_GPR_U32(ctx, 31, 0x16C688u);
    ctx->pc = 0x16C684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C688u; }
        else if (ctx->pc != 0x16C688u) { ctx->pc = 0x16C688u; }
    }
    if (ctx->pc != 0x16C688u) { return; }
    ctx->pc = 0x16C688u;
label_16c688:
    // 0x16c688: 0x8e300014
    ctx->pc = 0x16c688u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_16c68c:
    // 0x16c68c: 0x24040002
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_16c690:
    // 0x16c690: 0xafa20004
    ctx->pc = 0x16c690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_16c694:
    // 0x16c694: 0x3a0282d
    ctx->pc = 0x16c694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16c698:
    // 0x16c698: 0xc05c030
label_16c69c:
    if (ctx->pc == 0x16C69Cu) {
        ctx->pc = 0x16C69Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C6A0u;
        goto label_16c6a0;
    }
    ctx->pc = 0x16C698u;
    SET_GPR_U32(ctx, 31, 0x16C6A0u);
    ctx->pc = 0x16C69Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1700C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_Create_0x1700c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6A0u; }
        else if (ctx->pc != 0x16C6A0u) { ctx->pc = 0x16C6A0u; }
    }
    if (ctx->pc != 0x16C6A0u) { return; }
    ctx->pc = 0x16C6A0u;
label_16c6a0:
    // 0x16c6a0: 0x40882d
    ctx->pc = 0x16c6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c6a4:
    // 0x16c6a4: 0x260302d
    ctx->pc = 0x16c6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c6a8:
    // 0x16c6a8: 0x240282d
    ctx->pc = 0x16c6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c6ac:
    // 0x16c6ac: 0x280382d
    ctx->pc = 0x16c6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16c6b0:
    // 0x16c6b0: 0xc05c0fe
label_16c6b4:
    if (ctx->pc == 0x16C6B4u) {
        ctx->pc = 0x16C6B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C6B8u;
        goto label_16c6b8;
    }
    ctx->pc = 0x16C6B0u;
    SET_GPR_U32(ctx, 31, 0x16C6B8u);
    ctx->pc = 0x16C6B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1703F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_SetConfigSfa_0x1703f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6B8u; }
        else if (ctx->pc != 0x16C6B8u) { ctx->pc = 0x16C6B8u; }
    }
    if (ctx->pc != 0x16C6B8u) { return; }
    ctx->pc = 0x16C6B8u;
label_16c6b8:
    // 0x16c6b8: 0xc05c0be
label_16c6bc:
    if (ctx->pc == 0x16C6BCu) {
        ctx->pc = 0x16C6BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C6C0u;
        goto label_16c6c0;
    }
    ctx->pc = 0x16C6B8u;
    SET_GPR_U32(ctx, 31, 0x16C6C0u);
    ctx->pc = 0x16C6BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1702F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_Start_0x1702f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6C0u; }
        else if (ctx->pc != 0x16C6C0u) { ctx->pc = 0x16C6C0u; }
    }
    if (ctx->pc != 0x16C6C0u) { return; }
    ctx->pc = 0x16C6C0u;
label_16c6c0:
    // 0x16c6c0: 0xc05c17c
label_16c6c4:
    if (ctx->pc == 0x16C6C4u) {
        ctx->pc = 0x16C6C8u;
        goto label_16c6c8;
    }
    ctx->pc = 0x16C6C0u;
    SET_GPR_U32(ctx, 31, 0x16C6C8u);
    ctx->pc = 0x1705F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_ExecServer_0x1705f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6C8u; }
        else if (ctx->pc != 0x16C6C8u) { ctx->pc = 0x16C6C8u; }
    }
    if (ctx->pc != 0x16C6C8u) { return; }
    ctx->pc = 0x16C6C8u;
label_16c6c8:
    // 0x16c6c8: 0x8ea20000
    ctx->pc = 0x16c6c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16c6cc:
    // 0x16c6cc: 0x27b30010
    ctx->pc = 0x16c6ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
label_16c6d0:
    // 0x16c6d0: 0x2a0202d
    ctx->pc = 0x16c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16c6d4:
    // 0x16c6d4: 0x24050001
    ctx->pc = 0x16c6d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16c6d8:
    // 0x16c6d8: 0x8c430018
    ctx->pc = 0x16c6d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16c6dc:
    // 0x16c6dc: 0x24060400
    ctx->pc = 0x16c6dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
label_16c6e0:
    // 0x16c6e0: 0x60f809
label_16c6e4:
    if (ctx->pc == 0x16C6E4u) {
        ctx->pc = 0x16C6E4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C6E8u;
        goto label_16c6e8;
    }
    ctx->pc = 0x16C6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C6E8u);
        ctx->pc = 0x16C6E4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C6E8u; }
            if (ctx->pc != 0x16C6E8u) { return; }
        }
    }
    ctx->pc = 0x16C6E8u;
label_16c6e8:
    // 0x16c6e8: 0x8fa20014
    ctx->pc = 0x16c6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_16c6ec:
    // 0x16c6ec: 0x54400009
label_16c6f0:
    if (ctx->pc == 0x16C6F0u) {
        ctx->pc = 0x16C6F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16C6F4u;
        goto label_16c6f4;
    }
    ctx->pc = 0x16C6ECu;
    {
        const bool branch_taken_0x16c6ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16c6ec) {
            ctx->pc = 0x16C6F0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16C714u;
            goto label_16c714;
        }
    }
    ctx->pc = 0x16C6F4u;
label_16c6f4:
    // 0x16c6f4: 0x0
    ctx->pc = 0x16c6f4u;
    // NOP
label_16c6f8:
    // 0x16c6f8: 0x0
    ctx->pc = 0x16c6f8u;
    // NOP
label_16c6fc:
    // 0x16c6fc: 0x0
    ctx->pc = 0x16c6fcu;
    // NOP
label_16c700:
    // 0x16c700: 0x0
    ctx->pc = 0x16c700u;
    // NOP
label_16c704:
    // 0x16c704: 0x0
    ctx->pc = 0x16c704u;
    // NOP
label_16c708:
    // 0x16c708: 0x0
    ctx->pc = 0x16c708u;
    // NOP
label_16c70c:
    // 0x16c70c: 0x1000fffa
label_16c710:
    if (ctx->pc == 0x16C710u) {
        ctx->pc = 0x16C714u;
        goto label_16c714;
    }
    ctx->pc = 0x16C70Cu;
    {
        const bool branch_taken_0x16c70c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16c70c) {
            ctx->pc = 0x16C6F8u;
            goto label_16c6f8;
        }
    }
    ctx->pc = 0x16C714u;
label_16c714:
    // 0x16c714: 0x27b20020
    ctx->pc = 0x16c714u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 32));
label_16c718:
    // 0x16c718: 0x8fa60014
    ctx->pc = 0x16c718u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_16c71c:
    // 0x16c71c: 0x200202d
    ctx->pc = 0x16c71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c720:
    // 0x16c720: 0x8c430018
    ctx->pc = 0x16c720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16c724:
    // 0x16c724: 0x282d
    ctx->pc = 0x16c724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c728:
    // 0x16c728: 0x60f809
label_16c72c:
    if (ctx->pc == 0x16C72Cu) {
        ctx->pc = 0x16C72Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C730u;
        goto label_16c730;
    }
    ctx->pc = 0x16C728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C730u);
        ctx->pc = 0x16C72Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C730u; }
            if (ctx->pc != 0x16C730u) { return; }
        }
    }
    ctx->pc = 0x16C730u;
label_16c730:
    // 0x16c730: 0x8fa20024
    ctx->pc = 0x16c730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_16c734:
    // 0x16c734: 0x8fa30014
    ctx->pc = 0x16c734u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_16c738:
    // 0x16c738: 0x43102a
    ctx->pc = 0x16c738u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_16c73c:
    // 0x16c73c: 0x10400009
label_16c740:
    if (ctx->pc == 0x16C740u) {
        ctx->pc = 0x16C740u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16C744u;
        goto label_16c744;
    }
    ctx->pc = 0x16C73Cu;
    {
        const bool branch_taken_0x16c73c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C740u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16c73c) {
            ctx->pc = 0x16C764u;
            goto label_16c764;
        }
    }
    ctx->pc = 0x16C744u;
label_16c744:
    // 0x16c744: 0x0
    ctx->pc = 0x16c744u;
    // NOP
label_16c748:
    // 0x16c748: 0x0
    ctx->pc = 0x16c748u;
    // NOP
label_16c74c:
    // 0x16c74c: 0x0
    ctx->pc = 0x16c74cu;
    // NOP
label_16c750:
    // 0x16c750: 0x0
    ctx->pc = 0x16c750u;
    // NOP
label_16c754:
    // 0x16c754: 0x0
    ctx->pc = 0x16c754u;
    // NOP
label_16c758:
    // 0x16c758: 0x0
    ctx->pc = 0x16c758u;
    // NOP
label_16c75c:
    // 0x16c75c: 0x1000fffa
label_16c760:
    if (ctx->pc == 0x16C760u) {
        ctx->pc = 0x16C764u;
        goto label_16c764;
    }
    ctx->pc = 0x16C75Cu;
    {
        const bool branch_taken_0x16c75c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16c75c) {
            ctx->pc = 0x16C748u;
            goto label_16c748;
        }
    }
    ctx->pc = 0x16C764u;
label_16c764:
    // 0x16c764: 0x8fa50010
    ctx->pc = 0x16c764u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c768:
    // 0x16c768: 0xc050c90
label_16c76c:
    if (ctx->pc == 0x16C76Cu) {
        ctx->pc = 0x16C76Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x16C770u;
        goto label_16c770;
    }
    ctx->pc = 0x16C768u;
    SET_GPR_U32(ctx, 31, 0x16C770u);
    ctx->pc = 0x16C76Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C770u; }
        else if (ctx->pc != 0x16C770u) { ctx->pc = 0x16C770u; }
    }
    if (ctx->pc != 0x16C770u) { return; }
    ctx->pc = 0x16C770u;
label_16c770:
    // 0x16c770: 0x8ea30000
    ctx->pc = 0x16c770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16c774:
    // 0x16c774: 0x260302d
    ctx->pc = 0x16c774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c778:
    // 0x16c778: 0x2a0202d
    ctx->pc = 0x16c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16c77c:
    // 0x16c77c: 0x8c620020
    ctx->pc = 0x16c77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16c780:
    // 0x16c780: 0x40f809
label_16c784:
    if (ctx->pc == 0x16C784u) {
        ctx->pc = 0x16C784u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C788u;
        goto label_16c788;
    }
    ctx->pc = 0x16C780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C788u);
        ctx->pc = 0x16C784u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C788u; }
            if (ctx->pc != 0x16C788u) { return; }
        }
    }
    ctx->pc = 0x16C788u;
label_16c788:
    // 0x16c788: 0x8e030000
    ctx->pc = 0x16c788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16c78c:
    // 0x16c78c: 0x200202d
    ctx->pc = 0x16c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c790:
    // 0x16c790: 0x240302d
    ctx->pc = 0x16c790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c794:
    // 0x16c794: 0x8c620020
    ctx->pc = 0x16c794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16c798:
    // 0x16c798: 0x40f809
label_16c79c:
    if (ctx->pc == 0x16C79Cu) {
        ctx->pc = 0x16C79Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16C7A0u;
        goto label_16c7a0;
    }
    ctx->pc = 0x16C798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C7A0u);
        ctx->pc = 0x16C79Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C7A0u; }
            if (ctx->pc != 0x16C7A0u) { return; }
        }
    }
    ctx->pc = 0x16C7A0u;
label_16c7a0:
    // 0x16c7a0: 0xc05c0c6
label_16c7a4:
    if (ctx->pc == 0x16C7A4u) {
        ctx->pc = 0x16C7A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C7A8u;
        goto label_16c7a8;
    }
    ctx->pc = 0x16C7A0u;
    SET_GPR_U32(ctx, 31, 0x16C7A8u);
    ctx->pc = 0x16C7A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170318u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_Stop_0x170318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7A8u; }
        else if (ctx->pc != 0x16C7A8u) { ctx->pc = 0x16C7A8u; }
    }
    if (ctx->pc != 0x16C7A8u) { return; }
    ctx->pc = 0x16C7A8u;
label_16c7a8:
    // 0x16c7a8: 0xc05c0a2
label_16c7ac:
    if (ctx->pc == 0x16C7ACu) {
        ctx->pc = 0x16C7ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C7B0u;
        goto label_16c7b0;
    }
    ctx->pc = 0x16C7A8u;
    SET_GPR_U32(ctx, 31, 0x16C7B0u);
    ctx->pc = 0x16C7ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170288u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_Destroy_0x170288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7B0u; }
        else if (ctx->pc != 0x16C7B0u) { ctx->pc = 0x16C7B0u; }
    }
    if (ctx->pc != 0x16C7B0u) { return; }
    ctx->pc = 0x16C7B0u;
label_16c7b0:
    // 0x16c7b0: 0x8ea30000
    ctx->pc = 0x16c7b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16c7b4:
    // 0x16c7b4: 0x8c62000c
    ctx->pc = 0x16c7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16c7b8:
    // 0x16c7b8: 0x40f809
label_16c7bc:
    if (ctx->pc == 0x16C7BCu) {
        ctx->pc = 0x16C7BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C7C0u;
        goto label_16c7c0;
    }
    ctx->pc = 0x16C7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C7C0u);
        ctx->pc = 0x16C7BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C7C0u; }
            if (ctx->pc != 0x16C7C0u) { return; }
        }
    }
    ctx->pc = 0x16C7C0u;
label_16c7c0:
    // 0x16c7c0: 0x8fa40004
    ctx->pc = 0x16c7c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16c7c4:
    // 0x16c7c4: 0x8c830000
    ctx->pc = 0x16c7c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16c7c8:
    // 0x16c7c8: 0x8c62000c
    ctx->pc = 0x16c7c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16c7cc:
    // 0x16c7cc: 0x40f809
label_16c7d0:
    if (ctx->pc == 0x16C7D0u) {
        ctx->pc = 0x16C7D4u;
        goto label_16c7d4;
    }
    ctx->pc = 0x16C7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C7D4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C7D4u; }
            if (ctx->pc != 0x16C7D4u) { return; }
        }
    }
    ctx->pc = 0x16C7D4u;
label_16c7d4:
    // 0x16c7d4: 0x8fa40000
    ctx->pc = 0x16c7d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16c7d8:
    // 0x16c7d8: 0x8c830000
    ctx->pc = 0x16c7d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16c7dc:
    // 0x16c7dc: 0x8c62000c
    ctx->pc = 0x16c7dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16c7e0:
    // 0x16c7e0: 0x40f809
label_16c7e4:
    if (ctx->pc == 0x16C7E4u) {
        ctx->pc = 0x16C7E8u;
        goto label_16c7e8;
    }
    ctx->pc = 0x16C7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C7E8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C7E8u; }
            if (ctx->pc != 0x16C7E8u) { return; }
        }
    }
    ctx->pc = 0x16C7E8u;
label_16c7e8:
    // 0x16c7e8: 0xc05c02a
label_16c7ec:
    if (ctx->pc == 0x16C7ECu) {
        ctx->pc = 0x16C7F0u;
        goto label_16c7f0;
    }
    ctx->pc = 0x16C7E8u;
    SET_GPR_U32(ctx, 31, 0x16C7F0u);
    ctx->pc = 0x1700A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_Finish_0x1700a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7F0u; }
        else if (ctx->pc != 0x16C7F0u) { ctx->pc = 0x16C7F0u; }
    }
    if (ctx->pc != 0x16C7F0u) { return; }
    ctx->pc = 0x16C7F0u;
label_16c7f0:
    // 0x16c7f0: 0xdfbf0090
    ctx->pc = 0x16c7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16c7f4:
    // 0x16c7f4: 0xdfb50080
    ctx->pc = 0x16c7f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16c7f8:
    // 0x16c7f8: 0xdfb40070
    ctx->pc = 0x16c7f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16c7fc:
    // 0x16c7fc: 0xdfb30060
    ctx->pc = 0x16c7fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16c800:
    // 0x16c800: 0xdfb20050
    ctx->pc = 0x16c800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16c804:
    // 0x16c804: 0xdfb10040
    ctx->pc = 0x16c804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16c808:
    // 0x16c808: 0xdfb00030
    ctx->pc = 0x16c808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16c80c:
    // 0x16c80c: 0x3e00008
label_16c810:
    if (ctx->pc == 0x16C810u) {
        ctx->pc = 0x16C810u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x16C814u;
        goto label_fallthrough_0x16c80c;
    }
    ctx->pc = 0x16C80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C810u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C610u: goto label_16c610;
            case 0x16C614u: goto label_16c614;
            case 0x16C618u: goto label_16c618;
            case 0x16C61Cu: goto label_16c61c;
            case 0x16C620u: goto label_16c620;
            case 0x16C624u: goto label_16c624;
            case 0x16C628u: goto label_16c628;
            case 0x16C62Cu: goto label_16c62c;
            case 0x16C630u: goto label_16c630;
            case 0x16C634u: goto label_16c634;
            case 0x16C638u: goto label_16c638;
            case 0x16C63Cu: goto label_16c63c;
            case 0x16C640u: goto label_16c640;
            case 0x16C644u: goto label_16c644;
            case 0x16C648u: goto label_16c648;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C650u: goto label_16c650;
            case 0x16C654u: goto label_16c654;
            case 0x16C658u: goto label_16c658;
            case 0x16C65Cu: goto label_16c65c;
            case 0x16C660u: goto label_16c660;
            case 0x16C664u: goto label_16c664;
            case 0x16C668u: goto label_16c668;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C670u: goto label_16c670;
            case 0x16C674u: goto label_16c674;
            case 0x16C678u: goto label_16c678;
            case 0x16C67Cu: goto label_16c67c;
            case 0x16C680u: goto label_16c680;
            case 0x16C684u: goto label_16c684;
            case 0x16C688u: goto label_16c688;
            case 0x16C68Cu: goto label_16c68c;
            case 0x16C690u: goto label_16c690;
            case 0x16C694u: goto label_16c694;
            case 0x16C698u: goto label_16c698;
            case 0x16C69Cu: goto label_16c69c;
            case 0x16C6A0u: goto label_16c6a0;
            case 0x16C6A4u: goto label_16c6a4;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6ACu: goto label_16c6ac;
            case 0x16C6B0u: goto label_16c6b0;
            case 0x16C6B4u: goto label_16c6b4;
            case 0x16C6B8u: goto label_16c6b8;
            case 0x16C6BCu: goto label_16c6bc;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6C4u: goto label_16c6c4;
            case 0x16C6C8u: goto label_16c6c8;
            case 0x16C6CCu: goto label_16c6cc;
            case 0x16C6D0u: goto label_16c6d0;
            case 0x16C6D4u: goto label_16c6d4;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6DCu: goto label_16c6dc;
            case 0x16C6E0u: goto label_16c6e0;
            case 0x16C6E4u: goto label_16c6e4;
            case 0x16C6E8u: goto label_16c6e8;
            case 0x16C6ECu: goto label_16c6ec;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C6F4u: goto label_16c6f4;
            case 0x16C6F8u: goto label_16c6f8;
            case 0x16C6FCu: goto label_16c6fc;
            case 0x16C700u: goto label_16c700;
            case 0x16C704u: goto label_16c704;
            case 0x16C708u: goto label_16c708;
            case 0x16C70Cu: goto label_16c70c;
            case 0x16C710u: goto label_16c710;
            case 0x16C714u: goto label_16c714;
            case 0x16C718u: goto label_16c718;
            case 0x16C71Cu: goto label_16c71c;
            case 0x16C720u: goto label_16c720;
            case 0x16C724u: goto label_16c724;
            case 0x16C728u: goto label_16c728;
            case 0x16C72Cu: goto label_16c72c;
            case 0x16C730u: goto label_16c730;
            case 0x16C734u: goto label_16c734;
            case 0x16C738u: goto label_16c738;
            case 0x16C73Cu: goto label_16c73c;
            case 0x16C740u: goto label_16c740;
            case 0x16C744u: goto label_16c744;
            case 0x16C748u: goto label_16c748;
            case 0x16C74Cu: goto label_16c74c;
            case 0x16C750u: goto label_16c750;
            case 0x16C754u: goto label_16c754;
            case 0x16C758u: goto label_16c758;
            case 0x16C75Cu: goto label_16c75c;
            case 0x16C760u: goto label_16c760;
            case 0x16C764u: goto label_16c764;
            case 0x16C768u: goto label_16c768;
            case 0x16C76Cu: goto label_16c76c;
            case 0x16C770u: goto label_16c770;
            case 0x16C774u: goto label_16c774;
            case 0x16C778u: goto label_16c778;
            case 0x16C77Cu: goto label_16c77c;
            case 0x16C780u: goto label_16c780;
            case 0x16C784u: goto label_16c784;
            case 0x16C788u: goto label_16c788;
            case 0x16C78Cu: goto label_16c78c;
            case 0x16C790u: goto label_16c790;
            case 0x16C794u: goto label_16c794;
            case 0x16C798u: goto label_16c798;
            case 0x16C79Cu: goto label_16c79c;
            case 0x16C7A0u: goto label_16c7a0;
            case 0x16C7A4u: goto label_16c7a4;
            case 0x16C7A8u: goto label_16c7a8;
            case 0x16C7ACu: goto label_16c7ac;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7B4u: goto label_16c7b4;
            case 0x16C7B8u: goto label_16c7b8;
            case 0x16C7BCu: goto label_16c7bc;
            case 0x16C7C0u: goto label_16c7c0;
            case 0x16C7C4u: goto label_16c7c4;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7CCu: goto label_16c7cc;
            case 0x16C7D0u: goto label_16c7d0;
            case 0x16C7D4u: goto label_16c7d4;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7E4u: goto label_16c7e4;
            case 0x16C7E8u: goto label_16c7e8;
            case 0x16C7ECu: goto label_16c7ec;
            case 0x16C7F0u: goto label_16c7f0;
            case 0x16C7F4u: goto label_16c7f4;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C7FCu: goto label_16c7fc;
            case 0x16C800u: goto label_16c800;
            case 0x16C804u: goto label_16c804;
            case 0x16C808u: goto label_16c808;
            case 0x16C80Cu: goto label_16c80c;
            case 0x16C810u: goto label_16c810;
            default: break;
        }
        return;
    }
label_fallthrough_0x16c80c:
    ctx->pc = 0x16C814u;
}
