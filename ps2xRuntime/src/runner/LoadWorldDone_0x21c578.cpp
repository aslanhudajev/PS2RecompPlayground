#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadWorldDone
// Address: 0x21c578 - 0x21c748
void LoadWorldDone_0x21c578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c578u;

label_21c578:
    // 0x21c578: 0x27bdffc0
    ctx->pc = 0x21c578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_21c57c:
    // 0x21c57c: 0xffbf0030
    ctx->pc = 0x21c57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_21c580:
    // 0x21c580: 0xffb20020
    ctx->pc = 0x21c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_21c584:
    // 0x21c584: 0xffb10010
    ctx->pc = 0x21c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_21c588:
    // 0x21c588: 0xffb00000
    ctx->pc = 0x21c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21c58c:
    // 0x21c58c: 0x3c02003c
    ctx->pc = 0x21c58cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21c590:
    // 0x21c590: 0x8c42d58c
    ctx->pc = 0x21c590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956428)));
label_21c594:
    // 0x21c594: 0x4410003
label_21c598:
    if (ctx->pc == 0x21C598u) {
        ctx->pc = 0x21C598u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C59Cu;
        goto label_21c59c;
    }
    ctx->pc = 0x21C594u;
    {
        const bool branch_taken_0x21c594 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21C598u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c594) {
            ctx->pc = 0x21C5A4u;
            goto label_21c5a4;
        }
    }
    ctx->pc = 0x21C59Cu;
label_21c59c:
    // 0x21c59c: 0x10000064
label_21c5a0:
    if (ctx->pc == 0x21C5A0u) {
        ctx->pc = 0x21C5A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21C5A4u;
        goto label_21c5a4;
    }
    ctx->pc = 0x21C59Cu;
    {
        const bool branch_taken_0x21c59c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C5A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21c59c) {
            ctx->pc = 0x21C730u;
            goto label_21c730;
        }
    }
    ctx->pc = 0x21C5A4u;
label_21c5a4:
    // 0x21c5a4: 0x3c02003c
    ctx->pc = 0x21c5a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21c5a8:
    // 0x21c5a8: 0x8c43d58c
    ctx->pc = 0x21c5a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956428)));
label_21c5ac:
    // 0x21c5ac: 0x2c620006
    ctx->pc = 0x21c5acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_21c5b0:
    // 0x21c5b0: 0x1040fffa
label_21c5b4:
    if (ctx->pc == 0x21C5B4u) {
        ctx->pc = 0x21C5B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x21C5B8u;
        goto label_21c5b8;
    }
    ctx->pc = 0x21C5B0u;
    {
        const bool branch_taken_0x21c5b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C5B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x21c5b0) {
            ctx->pc = 0x21C59Cu;
            goto label_21c59c;
        }
    }
    ctx->pc = 0x21C5B8u;
label_21c5b8:
    // 0x21c5b8: 0x244264a0
    ctx->pc = 0x21c5b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25760));
label_21c5bc:
    // 0x21c5bc: 0x31880
    ctx->pc = 0x21c5bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_21c5c0:
    // 0x21c5c0: 0x621821
    ctx->pc = 0x21c5c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21c5c4:
    // 0x21c5c4: 0x8c620000
    ctx->pc = 0x21c5c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21c5c8:
    // 0x21c5c8: 0x400008
label_21c5cc:
    if (ctx->pc == 0x21C5CCu) {
        ctx->pc = 0x21C5D0u;
        goto label_21c5d0;
    }
    ctx->pc = 0x21C5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C578u: goto label_21c578;
            case 0x21C57Cu: goto label_21c57c;
            case 0x21C580u: goto label_21c580;
            case 0x21C584u: goto label_21c584;
            case 0x21C588u: goto label_21c588;
            case 0x21C58Cu: goto label_21c58c;
            case 0x21C590u: goto label_21c590;
            case 0x21C594u: goto label_21c594;
            case 0x21C598u: goto label_21c598;
            case 0x21C59Cu: goto label_21c59c;
            case 0x21C5A0u: goto label_21c5a0;
            case 0x21C5A4u: goto label_21c5a4;
            case 0x21C5A8u: goto label_21c5a8;
            case 0x21C5ACu: goto label_21c5ac;
            case 0x21C5B0u: goto label_21c5b0;
            case 0x21C5B4u: goto label_21c5b4;
            case 0x21C5B8u: goto label_21c5b8;
            case 0x21C5BCu: goto label_21c5bc;
            case 0x21C5C0u: goto label_21c5c0;
            case 0x21C5C4u: goto label_21c5c4;
            case 0x21C5C8u: goto label_21c5c8;
            case 0x21C5CCu: goto label_21c5cc;
            case 0x21C5D0u: goto label_21c5d0;
            case 0x21C5D4u: goto label_21c5d4;
            case 0x21C5D8u: goto label_21c5d8;
            case 0x21C5DCu: goto label_21c5dc;
            case 0x21C5E0u: goto label_21c5e0;
            case 0x21C5E4u: goto label_21c5e4;
            case 0x21C5E8u: goto label_21c5e8;
            case 0x21C5ECu: goto label_21c5ec;
            case 0x21C5F0u: goto label_21c5f0;
            case 0x21C5F4u: goto label_21c5f4;
            case 0x21C5F8u: goto label_21c5f8;
            case 0x21C5FCu: goto label_21c5fc;
            case 0x21C600u: goto label_21c600;
            case 0x21C604u: goto label_21c604;
            case 0x21C608u: goto label_21c608;
            case 0x21C60Cu: goto label_21c60c;
            case 0x21C610u: goto label_21c610;
            case 0x21C614u: goto label_21c614;
            case 0x21C618u: goto label_21c618;
            case 0x21C61Cu: goto label_21c61c;
            case 0x21C620u: goto label_21c620;
            case 0x21C624u: goto label_21c624;
            case 0x21C628u: goto label_21c628;
            case 0x21C62Cu: goto label_21c62c;
            case 0x21C630u: goto label_21c630;
            case 0x21C634u: goto label_21c634;
            case 0x21C638u: goto label_21c638;
            case 0x21C63Cu: goto label_21c63c;
            case 0x21C640u: goto label_21c640;
            case 0x21C644u: goto label_21c644;
            case 0x21C648u: goto label_21c648;
            case 0x21C64Cu: goto label_21c64c;
            case 0x21C650u: goto label_21c650;
            case 0x21C654u: goto label_21c654;
            case 0x21C658u: goto label_21c658;
            case 0x21C65Cu: goto label_21c65c;
            case 0x21C660u: goto label_21c660;
            case 0x21C664u: goto label_21c664;
            case 0x21C668u: goto label_21c668;
            case 0x21C66Cu: goto label_21c66c;
            case 0x21C670u: goto label_21c670;
            case 0x21C674u: goto label_21c674;
            case 0x21C678u: goto label_21c678;
            case 0x21C67Cu: goto label_21c67c;
            case 0x21C680u: goto label_21c680;
            case 0x21C684u: goto label_21c684;
            case 0x21C688u: goto label_21c688;
            case 0x21C68Cu: goto label_21c68c;
            case 0x21C690u: goto label_21c690;
            case 0x21C694u: goto label_21c694;
            case 0x21C698u: goto label_21c698;
            case 0x21C69Cu: goto label_21c69c;
            case 0x21C6A0u: goto label_21c6a0;
            case 0x21C6A4u: goto label_21c6a4;
            case 0x21C6A8u: goto label_21c6a8;
            case 0x21C6ACu: goto label_21c6ac;
            case 0x21C6B0u: goto label_21c6b0;
            case 0x21C6B4u: goto label_21c6b4;
            case 0x21C6B8u: goto label_21c6b8;
            case 0x21C6BCu: goto label_21c6bc;
            case 0x21C6C0u: goto label_21c6c0;
            case 0x21C6C4u: goto label_21c6c4;
            case 0x21C6C8u: goto label_21c6c8;
            case 0x21C6CCu: goto label_21c6cc;
            case 0x21C6D0u: goto label_21c6d0;
            case 0x21C6D4u: goto label_21c6d4;
            case 0x21C6D8u: goto label_21c6d8;
            case 0x21C6DCu: goto label_21c6dc;
            case 0x21C6E0u: goto label_21c6e0;
            case 0x21C6E4u: goto label_21c6e4;
            case 0x21C6E8u: goto label_21c6e8;
            case 0x21C6ECu: goto label_21c6ec;
            case 0x21C6F0u: goto label_21c6f0;
            case 0x21C6F4u: goto label_21c6f4;
            case 0x21C6F8u: goto label_21c6f8;
            case 0x21C6FCu: goto label_21c6fc;
            case 0x21C700u: goto label_21c700;
            case 0x21C704u: goto label_21c704;
            case 0x21C708u: goto label_21c708;
            case 0x21C70Cu: goto label_21c70c;
            case 0x21C710u: goto label_21c710;
            case 0x21C714u: goto label_21c714;
            case 0x21C718u: goto label_21c718;
            case 0x21C71Cu: goto label_21c71c;
            case 0x21C720u: goto label_21c720;
            case 0x21C724u: goto label_21c724;
            case 0x21C728u: goto label_21c728;
            case 0x21C72Cu: goto label_21c72c;
            case 0x21C730u: goto label_21c730;
            case 0x21C734u: goto label_21c734;
            case 0x21C738u: goto label_21c738;
            case 0x21C73Cu: goto label_21c73c;
            case 0x21C740u: goto label_21c740;
            case 0x21C744u: goto label_21c744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C5D0u;
label_21c5d0:
    // 0x21c5d0: 0x3c120032
    ctx->pc = 0x21c5d0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
label_21c5d4:
    // 0x21c5d4: 0x8e42faa0
    ctx->pc = 0x21c5d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294965920)));
label_21c5d8:
    // 0x21c5d8: 0x10400013
label_21c5dc:
    if (ctx->pc == 0x21C5DCu) {
        ctx->pc = 0x21C5DCu;
        SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
        ctx->pc = 0x21C5E0u;
        goto label_21c5e0;
    }
    ctx->pc = 0x21C5D8u;
    {
        const bool branch_taken_0x21c5d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C5DCu;
        SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
        if (branch_taken_0x21c5d8) {
            ctx->pc = 0x21C628u;
            goto label_21c628;
        }
    }
    ctx->pc = 0x21C5E0u;
label_21c5e0:
    // 0x21c5e0: 0x2624fb60
    ctx->pc = 0x21c5e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294966112));
label_21c5e4:
    // 0x21c5e4: 0x3c10003a
    ctx->pc = 0x21c5e4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_21c5e8:
    // 0x21c5e8: 0xc0b4ed2
label_21c5ec:
    if (ctx->pc == 0x21C5ECu) {
        ctx->pc = 0x21C5ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25656));
        ctx->pc = 0x21C5F0u;
        goto label_21c5f0;
    }
    ctx->pc = 0x21C5E8u;
    SET_GPR_U32(ctx, 31, 0x21C5F0u);
    ctx->pc = 0x21C5ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25656));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C5F0u; }
    }
    if (ctx->pc != 0x21C5F0u) { return; }
    ctx->pc = 0x21C5F0u;
label_21c5f0:
    // 0x21c5f0: 0x2624fb60
    ctx->pc = 0x21c5f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294966112));
label_21c5f4:
    // 0x21c5f4: 0x26056438
    ctx->pc = 0x21c5f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25656));
label_21c5f8:
    // 0x21c5f8: 0x302d
    ctx->pc = 0x21c5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c5fc:
    // 0x21c5fc: 0x40382d
    ctx->pc = 0x21c5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c600:
    // 0x21c600: 0x8e48faa0
    ctx->pc = 0x21c600u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 4294965920)));
label_21c604:
    // 0x21c604: 0x3c090022
    ctx->pc = 0x21c604u;
    SET_GPR_U32(ctx, 9, ((uint32_t)34 << 16));
label_21c608:
    // 0x21c608: 0xc0b5094
label_21c60c:
    if (ctx->pc == 0x21C60Cu) {
        ctx->pc = 0x21C60Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294952272));
        ctx->pc = 0x21C610u;
        goto label_21c610;
    }
    ctx->pc = 0x21C608u;
    SET_GPR_U32(ctx, 31, 0x21C610u);
    ctx->pc = 0x21C60Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294952272));
    ctx->pc = 0x2D4250u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFileRead_0x2d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C610u; }
    }
    if (ctx->pc != 0x21C610u) { return; }
    ctx->pc = 0x21C610u;
label_21c610:
    // 0x21c610: 0x3c030032
    ctx->pc = 0x21c610u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_21c614:
    // 0x21c614: 0xac62fbac
    ctx->pc = 0x21c614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966188), GPR_U32(ctx, 2));
label_21c618:
    // 0x21c618: 0x3c03003c
    ctx->pc = 0x21c618u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21c61c:
    // 0x21c61c: 0x24020001
    ctx->pc = 0x21c61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21c620:
    // 0x21c620: 0x10000042
label_21c624:
    if (ctx->pc == 0x21C624u) {
        ctx->pc = 0x21C624u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        ctx->pc = 0x21C628u;
        goto label_21c628;
    }
    ctx->pc = 0x21C620u;
    {
        const bool branch_taken_0x21c620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C624u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        if (branch_taken_0x21c620) {
            ctx->pc = 0x21C72Cu;
            goto label_21c72c;
        }
    }
    ctx->pc = 0x21C628u;
label_21c628:
    // 0x21c628: 0x3c03003c
    ctx->pc = 0x21c628u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21c62c:
    // 0x21c62c: 0x24020002
    ctx->pc = 0x21c62cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_21c630:
    // 0x21c630: 0x1000003e
label_21c634:
    if (ctx->pc == 0x21C634u) {
        ctx->pc = 0x21C634u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        ctx->pc = 0x21C638u;
        goto label_21c638;
    }
    ctx->pc = 0x21C630u;
    {
        const bool branch_taken_0x21c630 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C634u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        if (branch_taken_0x21c630) {
            ctx->pc = 0x21C72Cu;
            goto label_21c72c;
        }
    }
    ctx->pc = 0x21C638u;
label_21c638:
    // 0x21c638: 0x3c020032
    ctx->pc = 0x21c638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21c63c:
    // 0x21c63c: 0x8c43fbac
    ctx->pc = 0x21c63cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966188)));
label_21c640:
    // 0x21c640: 0x8c620010
    ctx->pc = 0x21c640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_21c644:
    // 0x21c644: 0x10400039
label_21c648:
    if (ctx->pc == 0x21C648u) {
        ctx->pc = 0x21C648u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x21C64Cu;
        goto label_21c64c;
    }
    ctx->pc = 0x21C644u;
    {
        const bool branch_taken_0x21c644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C648u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21c644) {
            ctx->pc = 0x21C72Cu;
            goto label_21c72c;
        }
    }
    ctx->pc = 0x21C64Cu;
label_21c64c:
    // 0x21c64c: 0xac620010
    ctx->pc = 0x21c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_21c650:
    // 0x21c650: 0x3c04003c
    ctx->pc = 0x21c650u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_21c654:
    // 0x21c654: 0x10000023
label_21c658:
    if (ctx->pc == 0x21C658u) {
        ctx->pc = 0x21C658u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x21C65Cu;
        goto label_21c65c;
    }
    ctx->pc = 0x21C654u;
    {
        const bool branch_taken_0x21c654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C658u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x21c654) {
            ctx->pc = 0x21C6E4u;
            goto label_21c6e4;
        }
    }
    ctx->pc = 0x21C65Cu;
label_21c65c:
    // 0x21c65c: 0x3c120032
    ctx->pc = 0x21c65cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
label_21c660:
    // 0x21c660: 0x8e42faa4
    ctx->pc = 0x21c660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294965924)));
label_21c664:
    // 0x21c664: 0x10400013
label_21c668:
    if (ctx->pc == 0x21C668u) {
        ctx->pc = 0x21C668u;
        SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
        ctx->pc = 0x21C66Cu;
        goto label_21c66c;
    }
    ctx->pc = 0x21C664u;
    {
        const bool branch_taken_0x21c664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C668u;
        SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
        if (branch_taken_0x21c664) {
            ctx->pc = 0x21C6B4u;
            goto label_21c6b4;
        }
    }
    ctx->pc = 0x21C66Cu;
label_21c66c:
    // 0x21c66c: 0x2624fb60
    ctx->pc = 0x21c66cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294966112));
label_21c670:
    // 0x21c670: 0x3c10003a
    ctx->pc = 0x21c670u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_21c674:
    // 0x21c674: 0xc0b4ed2
label_21c678:
    if (ctx->pc == 0x21C678u) {
        ctx->pc = 0x21C678u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25728));
        ctx->pc = 0x21C67Cu;
        goto label_21c67c;
    }
    ctx->pc = 0x21C674u;
    SET_GPR_U32(ctx, 31, 0x21C67Cu);
    ctx->pc = 0x21C678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25728));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C67Cu; }
    }
    if (ctx->pc != 0x21C67Cu) { return; }
    ctx->pc = 0x21C67Cu;
label_21c67c:
    // 0x21c67c: 0x2624fb60
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294966112));
label_21c680:
    // 0x21c680: 0x26056480
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25728));
label_21c684:
    // 0x21c684: 0x302d
    ctx->pc = 0x21c684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c688:
    // 0x21c688: 0x40382d
    ctx->pc = 0x21c688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c68c:
    // 0x21c68c: 0x8e48faa4
    ctx->pc = 0x21c68cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 4294965924)));
label_21c690:
    // 0x21c690: 0x3c090022
    ctx->pc = 0x21c690u;
    SET_GPR_U32(ctx, 9, ((uint32_t)34 << 16));
label_21c694:
    // 0x21c694: 0xc0b5094
label_21c698:
    if (ctx->pc == 0x21C698u) {
        ctx->pc = 0x21C698u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294952272));
        ctx->pc = 0x21C69Cu;
        goto label_21c69c;
    }
    ctx->pc = 0x21C694u;
    SET_GPR_U32(ctx, 31, 0x21C69Cu);
    ctx->pc = 0x21C698u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294952272));
    ctx->pc = 0x2D4250u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFileRead_0x2d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C69Cu; }
    }
    if (ctx->pc != 0x21C69Cu) { return; }
    ctx->pc = 0x21C69Cu;
label_21c69c:
    // 0x21c69c: 0x3c030032
    ctx->pc = 0x21c69cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_21c6a0:
    // 0x21c6a0: 0xac62fbac
    ctx->pc = 0x21c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966188), GPR_U32(ctx, 2));
label_21c6a4:
    // 0x21c6a4: 0x3c03003c
    ctx->pc = 0x21c6a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21c6a8:
    // 0x21c6a8: 0x24020003
    ctx->pc = 0x21c6a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_21c6ac:
    // 0x21c6ac: 0x1000001f
label_21c6b0:
    if (ctx->pc == 0x21C6B0u) {
        ctx->pc = 0x21C6B0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        ctx->pc = 0x21C6B4u;
        goto label_21c6b4;
    }
    ctx->pc = 0x21C6ACu;
    {
        const bool branch_taken_0x21c6ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C6B0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        if (branch_taken_0x21c6ac) {
            ctx->pc = 0x21C72Cu;
            goto label_21c72c;
        }
    }
    ctx->pc = 0x21C6B4u;
label_21c6b4:
    // 0x21c6b4: 0x3c03003c
    ctx->pc = 0x21c6b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21c6b8:
    // 0x21c6b8: 0x24020004
    ctx->pc = 0x21c6b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_21c6bc:
    // 0x21c6bc: 0x1000001b
label_21c6c0:
    if (ctx->pc == 0x21C6C0u) {
        ctx->pc = 0x21C6C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        ctx->pc = 0x21C6C4u;
        goto label_21c6c4;
    }
    ctx->pc = 0x21C6BCu;
    {
        const bool branch_taken_0x21c6bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C6C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        if (branch_taken_0x21c6bc) {
            ctx->pc = 0x21C72Cu;
            goto label_21c72c;
        }
    }
    ctx->pc = 0x21C6C4u;
label_21c6c4:
    // 0x21c6c4: 0x3c020032
    ctx->pc = 0x21c6c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21c6c8:
    // 0x21c6c8: 0x8c43fbac
    ctx->pc = 0x21c6c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966188)));
label_21c6cc:
    // 0x21c6cc: 0x8c620010
    ctx->pc = 0x21c6ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_21c6d0:
    // 0x21c6d0: 0x10400016
label_21c6d4:
    if (ctx->pc == 0x21C6D4u) {
        ctx->pc = 0x21C6D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x21C6D8u;
        goto label_21c6d8;
    }
    ctx->pc = 0x21C6D0u;
    {
        const bool branch_taken_0x21c6d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C6D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21c6d0) {
            ctx->pc = 0x21C72Cu;
            goto label_21c72c;
        }
    }
    ctx->pc = 0x21C6D8u;
label_21c6d8:
    // 0x21c6d8: 0xac620010
    ctx->pc = 0x21c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_21c6dc:
    // 0x21c6dc: 0x3c04003c
    ctx->pc = 0x21c6dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_21c6e0:
    // 0x21c6e0: 0x24020004
    ctx->pc = 0x21c6e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_21c6e4:
    // 0x21c6e4: 0x24030064
    ctx->pc = 0x21c6e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
label_21c6e8:
    // 0x21c6e8: 0x65100b
    ctx->pc = 0x21c6e8u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_21c6ec:
    // 0x21c6ec: 0x1000000f
label_21c6f0:
    if (ctx->pc == 0x21C6F0u) {
        ctx->pc = 0x21C6F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956428), GPR_U32(ctx, 2));
        ctx->pc = 0x21C6F4u;
        goto label_21c6f4;
    }
    ctx->pc = 0x21C6ECu;
    {
        const bool branch_taken_0x21c6ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C6F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956428), GPR_U32(ctx, 2));
        if (branch_taken_0x21c6ec) {
            ctx->pc = 0x21C72Cu;
            goto label_21c72c;
        }
    }
    ctx->pc = 0x21C6F4u;
label_21c6f4:
    // 0x21c6f4: 0x3c100032
    ctx->pc = 0x21c6f4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_21c6f8:
    // 0x21c6f8: 0x2610f9f8
    ctx->pc = 0x21c6f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294965752));
label_21c6fc:
    // 0x21c6fc: 0x3c04003a
    ctx->pc = 0x21c6fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_21c700:
    // 0x21c700: 0x24846490
    ctx->pc = 0x21c700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25744));
label_21c704:
    // 0x21c704: 0x282d
    ctx->pc = 0x21c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c708:
    // 0x21c708: 0x8e060084
    ctx->pc = 0x21c708u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_21c70c:
    // 0x21c70c: 0xc0382d
    ctx->pc = 0x21c70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21c710:
    // 0x21c710: 0xc0b1b56
label_21c714:
    if (ctx->pc == 0x21C714u) {
        ctx->pc = 0x21C714u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21C718u;
        goto label_21c718;
    }
    ctx->pc = 0x21C710u;
    SET_GPR_U32(ctx, 31, 0x21C718u);
    ctx->pc = 0x21C714u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C718u; }
    }
    if (ctx->pc != 0x21C718u) { return; }
    ctx->pc = 0x21C718u;
label_21c718:
    // 0x21c718: 0xae020088
    ctx->pc = 0x21c718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_21c71c:
    // 0x21c71c: 0x3c03003c
    ctx->pc = 0x21c71cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21c720:
    // 0x21c720: 0x24020005
    ctx->pc = 0x21c720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_21c724:
    // 0x21c724: 0x1000ff9d
label_21c728:
    if (ctx->pc == 0x21C728u) {
        ctx->pc = 0x21C728u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        ctx->pc = 0x21C72Cu;
        goto label_21c72c;
    }
    ctx->pc = 0x21C724u;
    {
        const bool branch_taken_0x21c724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C728u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        if (branch_taken_0x21c724) {
            ctx->pc = 0x21C59Cu;
            goto label_21c59c;
        }
    }
    ctx->pc = 0x21C72Cu;
label_21c72c:
    // 0x21c72c: 0x102d
    ctx->pc = 0x21c72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c730:
    // 0x21c730: 0xdfbf0030
    ctx->pc = 0x21c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21c734:
    // 0x21c734: 0xdfb20020
    ctx->pc = 0x21c734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21c738:
    // 0x21c738: 0xdfb10010
    ctx->pc = 0x21c738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21c73c:
    // 0x21c73c: 0xdfb00000
    ctx->pc = 0x21c73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c740:
    // 0x21c740: 0x3e00008
label_21c744:
    if (ctx->pc == 0x21C744u) {
        ctx->pc = 0x21C744u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x21C748u;
        goto label_fallthrough_0x21c740;
    }
    ctx->pc = 0x21C740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C744u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C578u: goto label_21c578;
            case 0x21C57Cu: goto label_21c57c;
            case 0x21C580u: goto label_21c580;
            case 0x21C584u: goto label_21c584;
            case 0x21C588u: goto label_21c588;
            case 0x21C58Cu: goto label_21c58c;
            case 0x21C590u: goto label_21c590;
            case 0x21C594u: goto label_21c594;
            case 0x21C598u: goto label_21c598;
            case 0x21C59Cu: goto label_21c59c;
            case 0x21C5A0u: goto label_21c5a0;
            case 0x21C5A4u: goto label_21c5a4;
            case 0x21C5A8u: goto label_21c5a8;
            case 0x21C5ACu: goto label_21c5ac;
            case 0x21C5B0u: goto label_21c5b0;
            case 0x21C5B4u: goto label_21c5b4;
            case 0x21C5B8u: goto label_21c5b8;
            case 0x21C5BCu: goto label_21c5bc;
            case 0x21C5C0u: goto label_21c5c0;
            case 0x21C5C4u: goto label_21c5c4;
            case 0x21C5C8u: goto label_21c5c8;
            case 0x21C5CCu: goto label_21c5cc;
            case 0x21C5D0u: goto label_21c5d0;
            case 0x21C5D4u: goto label_21c5d4;
            case 0x21C5D8u: goto label_21c5d8;
            case 0x21C5DCu: goto label_21c5dc;
            case 0x21C5E0u: goto label_21c5e0;
            case 0x21C5E4u: goto label_21c5e4;
            case 0x21C5E8u: goto label_21c5e8;
            case 0x21C5ECu: goto label_21c5ec;
            case 0x21C5F0u: goto label_21c5f0;
            case 0x21C5F4u: goto label_21c5f4;
            case 0x21C5F8u: goto label_21c5f8;
            case 0x21C5FCu: goto label_21c5fc;
            case 0x21C600u: goto label_21c600;
            case 0x21C604u: goto label_21c604;
            case 0x21C608u: goto label_21c608;
            case 0x21C60Cu: goto label_21c60c;
            case 0x21C610u: goto label_21c610;
            case 0x21C614u: goto label_21c614;
            case 0x21C618u: goto label_21c618;
            case 0x21C61Cu: goto label_21c61c;
            case 0x21C620u: goto label_21c620;
            case 0x21C624u: goto label_21c624;
            case 0x21C628u: goto label_21c628;
            case 0x21C62Cu: goto label_21c62c;
            case 0x21C630u: goto label_21c630;
            case 0x21C634u: goto label_21c634;
            case 0x21C638u: goto label_21c638;
            case 0x21C63Cu: goto label_21c63c;
            case 0x21C640u: goto label_21c640;
            case 0x21C644u: goto label_21c644;
            case 0x21C648u: goto label_21c648;
            case 0x21C64Cu: goto label_21c64c;
            case 0x21C650u: goto label_21c650;
            case 0x21C654u: goto label_21c654;
            case 0x21C658u: goto label_21c658;
            case 0x21C65Cu: goto label_21c65c;
            case 0x21C660u: goto label_21c660;
            case 0x21C664u: goto label_21c664;
            case 0x21C668u: goto label_21c668;
            case 0x21C66Cu: goto label_21c66c;
            case 0x21C670u: goto label_21c670;
            case 0x21C674u: goto label_21c674;
            case 0x21C678u: goto label_21c678;
            case 0x21C67Cu: goto label_21c67c;
            case 0x21C680u: goto label_21c680;
            case 0x21C684u: goto label_21c684;
            case 0x21C688u: goto label_21c688;
            case 0x21C68Cu: goto label_21c68c;
            case 0x21C690u: goto label_21c690;
            case 0x21C694u: goto label_21c694;
            case 0x21C698u: goto label_21c698;
            case 0x21C69Cu: goto label_21c69c;
            case 0x21C6A0u: goto label_21c6a0;
            case 0x21C6A4u: goto label_21c6a4;
            case 0x21C6A8u: goto label_21c6a8;
            case 0x21C6ACu: goto label_21c6ac;
            case 0x21C6B0u: goto label_21c6b0;
            case 0x21C6B4u: goto label_21c6b4;
            case 0x21C6B8u: goto label_21c6b8;
            case 0x21C6BCu: goto label_21c6bc;
            case 0x21C6C0u: goto label_21c6c0;
            case 0x21C6C4u: goto label_21c6c4;
            case 0x21C6C8u: goto label_21c6c8;
            case 0x21C6CCu: goto label_21c6cc;
            case 0x21C6D0u: goto label_21c6d0;
            case 0x21C6D4u: goto label_21c6d4;
            case 0x21C6D8u: goto label_21c6d8;
            case 0x21C6DCu: goto label_21c6dc;
            case 0x21C6E0u: goto label_21c6e0;
            case 0x21C6E4u: goto label_21c6e4;
            case 0x21C6E8u: goto label_21c6e8;
            case 0x21C6ECu: goto label_21c6ec;
            case 0x21C6F0u: goto label_21c6f0;
            case 0x21C6F4u: goto label_21c6f4;
            case 0x21C6F8u: goto label_21c6f8;
            case 0x21C6FCu: goto label_21c6fc;
            case 0x21C700u: goto label_21c700;
            case 0x21C704u: goto label_21c704;
            case 0x21C708u: goto label_21c708;
            case 0x21C70Cu: goto label_21c70c;
            case 0x21C710u: goto label_21c710;
            case 0x21C714u: goto label_21c714;
            case 0x21C718u: goto label_21c718;
            case 0x21C71Cu: goto label_21c71c;
            case 0x21C720u: goto label_21c720;
            case 0x21C724u: goto label_21c724;
            case 0x21C728u: goto label_21c728;
            case 0x21C72Cu: goto label_21c72c;
            case 0x21C730u: goto label_21c730;
            case 0x21C734u: goto label_21c734;
            case 0x21C738u: goto label_21c738;
            case 0x21C73Cu: goto label_21c73c;
            case 0x21C740u: goto label_21c740;
            case 0x21C744u: goto label_21c744;
            default: break;
        }
        return;
    }
label_fallthrough_0x21c740:
    ctx->pc = 0x21C748u;
}
