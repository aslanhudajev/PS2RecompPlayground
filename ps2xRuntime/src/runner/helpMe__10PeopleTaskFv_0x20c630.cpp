#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: helpMe__10PeopleTaskFv
// Address: 0x20c630 - 0x20c7b4
void helpMe__10PeopleTaskFv_0x20c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("helpMe__10PeopleTaskFv");


    ctx->pc = 0x20c630u;

label_20c630:
    // 0x20c630: 0x27bdffe0
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_20c634:
    // 0x20c634: 0x7fbf0010
    ctx->pc = 0x20c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_20c638:
    // 0x20c638: 0x7fb00000
    ctx->pc = 0x20c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20c63c:
    // 0x20c63c: 0x83838ba8
    ctx->pc = 0x20c63cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_20c640:
    // 0x20c640: 0x70808628
    ctx->pc = 0x20c640u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_20c644:
    // 0x20c644: 0x2c610007
    ctx->pc = 0x20c644u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_20c648:
    // 0x20c648: 0x1020004c
label_20c64c:
    if (ctx->pc == 0x20C64Cu) {
        ctx->pc = 0x20C64Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20C650u;
        goto label_20c650;
    }
    ctx->pc = 0x20C648u;
    {
        const bool branch_taken_0x20c648 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C64Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20c648) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C650u;
label_20c650:
    // 0x20c650: 0x3c04002c
    ctx->pc = 0x20c650u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_20c654:
    // 0x20c654: 0x31880
    ctx->pc = 0x20c654u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20c658:
    // 0x20c658: 0x24840530
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1328));
label_20c65c:
    // 0x20c65c: 0x641821
    ctx->pc = 0x20c65cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20c660:
    // 0x20c660: 0x8c630000
    ctx->pc = 0x20c660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20c664:
    // 0x20c664: 0x600008
label_20c668:
    if (ctx->pc == 0x20C668u) {
        ctx->pc = 0x20C66Cu;
        goto label_20c66c;
    }
    ctx->pc = 0x20C664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C630u: goto label_20c630;
            case 0x20C634u: goto label_20c634;
            case 0x20C638u: goto label_20c638;
            case 0x20C63Cu: goto label_20c63c;
            case 0x20C640u: goto label_20c640;
            case 0x20C644u: goto label_20c644;
            case 0x20C648u: goto label_20c648;
            case 0x20C64Cu: goto label_20c64c;
            case 0x20C650u: goto label_20c650;
            case 0x20C654u: goto label_20c654;
            case 0x20C658u: goto label_20c658;
            case 0x20C65Cu: goto label_20c65c;
            case 0x20C660u: goto label_20c660;
            case 0x20C664u: goto label_20c664;
            case 0x20C668u: goto label_20c668;
            case 0x20C66Cu: goto label_20c66c;
            case 0x20C670u: goto label_20c670;
            case 0x20C674u: goto label_20c674;
            case 0x20C678u: goto label_20c678;
            case 0x20C67Cu: goto label_20c67c;
            case 0x20C680u: goto label_20c680;
            case 0x20C684u: goto label_20c684;
            case 0x20C688u: goto label_20c688;
            case 0x20C68Cu: goto label_20c68c;
            case 0x20C690u: goto label_20c690;
            case 0x20C694u: goto label_20c694;
            case 0x20C698u: goto label_20c698;
            case 0x20C69Cu: goto label_20c69c;
            case 0x20C6A0u: goto label_20c6a0;
            case 0x20C6A4u: goto label_20c6a4;
            case 0x20C6A8u: goto label_20c6a8;
            case 0x20C6ACu: goto label_20c6ac;
            case 0x20C6B0u: goto label_20c6b0;
            case 0x20C6B4u: goto label_20c6b4;
            case 0x20C6B8u: goto label_20c6b8;
            case 0x20C6BCu: goto label_20c6bc;
            case 0x20C6C0u: goto label_20c6c0;
            case 0x20C6C4u: goto label_20c6c4;
            case 0x20C6C8u: goto label_20c6c8;
            case 0x20C6CCu: goto label_20c6cc;
            case 0x20C6D0u: goto label_20c6d0;
            case 0x20C6D4u: goto label_20c6d4;
            case 0x20C6D8u: goto label_20c6d8;
            case 0x20C6DCu: goto label_20c6dc;
            case 0x20C6E0u: goto label_20c6e0;
            case 0x20C6E4u: goto label_20c6e4;
            case 0x20C6E8u: goto label_20c6e8;
            case 0x20C6ECu: goto label_20c6ec;
            case 0x20C6F0u: goto label_20c6f0;
            case 0x20C6F4u: goto label_20c6f4;
            case 0x20C6F8u: goto label_20c6f8;
            case 0x20C6FCu: goto label_20c6fc;
            case 0x20C700u: goto label_20c700;
            case 0x20C704u: goto label_20c704;
            case 0x20C708u: goto label_20c708;
            case 0x20C70Cu: goto label_20c70c;
            case 0x20C710u: goto label_20c710;
            case 0x20C714u: goto label_20c714;
            case 0x20C718u: goto label_20c718;
            case 0x20C71Cu: goto label_20c71c;
            case 0x20C720u: goto label_20c720;
            case 0x20C724u: goto label_20c724;
            case 0x20C728u: goto label_20c728;
            case 0x20C72Cu: goto label_20c72c;
            case 0x20C730u: goto label_20c730;
            case 0x20C734u: goto label_20c734;
            case 0x20C738u: goto label_20c738;
            case 0x20C73Cu: goto label_20c73c;
            case 0x20C740u: goto label_20c740;
            case 0x20C744u: goto label_20c744;
            case 0x20C748u: goto label_20c748;
            case 0x20C74Cu: goto label_20c74c;
            case 0x20C750u: goto label_20c750;
            case 0x20C754u: goto label_20c754;
            case 0x20C758u: goto label_20c758;
            case 0x20C75Cu: goto label_20c75c;
            case 0x20C760u: goto label_20c760;
            case 0x20C764u: goto label_20c764;
            case 0x20C768u: goto label_20c768;
            case 0x20C76Cu: goto label_20c76c;
            case 0x20C770u: goto label_20c770;
            case 0x20C774u: goto label_20c774;
            case 0x20C778u: goto label_20c778;
            case 0x20C77Cu: goto label_20c77c;
            case 0x20C780u: goto label_20c780;
            case 0x20C784u: goto label_20c784;
            case 0x20C788u: goto label_20c788;
            case 0x20C78Cu: goto label_20c78c;
            case 0x20C790u: goto label_20c790;
            case 0x20C794u: goto label_20c794;
            case 0x20C798u: goto label_20c798;
            case 0x20C79Cu: goto label_20c79c;
            case 0x20C7A0u: goto label_20c7a0;
            case 0x20C7A4u: goto label_20c7a4;
            case 0x20C7A8u: goto label_20c7a8;
            case 0x20C7ACu: goto label_20c7ac;
            case 0x20C7B0u: goto label_20c7b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C66Cu;
label_20c66c:
    // 0x20c66c: 0x8e041db0
    ctx->pc = 0x20c66cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c670:
    // 0x20c670: 0x24030001
    ctx->pc = 0x20c670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c674:
    // 0x20c674: 0x14830004
label_20c678:
    if (ctx->pc == 0x20C678u) {
        ctx->pc = 0x20C678u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        ctx->pc = 0x20C67Cu;
        goto label_20c67c;
    }
    ctx->pc = 0x20C674u;
    {
        const bool branch_taken_0x20c674 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C678u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        if (branch_taken_0x20c674) {
            ctx->pc = 0x20C688u;
            goto label_20c688;
        }
    }
    ctx->pc = 0x20C67Cu;
label_20c67c:
    // 0x20c67c: 0x3c030015
    ctx->pc = 0x20c67cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
label_20c680:
    // 0x20c680: 0x1000003e
label_20c684:
    if (ctx->pc == 0x20C684u) {
        ctx->pc = 0x20C684u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x20C688u;
        goto label_20c688;
    }
    ctx->pc = 0x20C680u;
    {
        const bool branch_taken_0x20c680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C684u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x20c680) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C688u;
label_20c688:
    // 0x20c688: 0x1000003c
label_20c68c:
    if (ctx->pc == 0x20C68Cu) {
        ctx->pc = 0x20C68Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 23));
        ctx->pc = 0x20C690u;
        goto label_20c690;
    }
    ctx->pc = 0x20C688u;
    {
        const bool branch_taken_0x20c688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C68Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 23));
        if (branch_taken_0x20c688) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C690u;
label_20c690:
    // 0x20c690: 0x8e041db0
    ctx->pc = 0x20c690u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c694:
    // 0x20c694: 0x24030001
    ctx->pc = 0x20c694u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c698:
    // 0x20c698: 0x10830003
label_20c69c:
    if (ctx->pc == 0x20C69Cu) {
        ctx->pc = 0x20C6A0u;
        goto label_20c6a0;
    }
    ctx->pc = 0x20C698u;
    {
        const bool branch_taken_0x20c698 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20c698) {
            ctx->pc = 0x20C6A8u;
            goto label_20c6a8;
        }
    }
    ctx->pc = 0x20C6A0u;
label_20c6a0:
    // 0x20c6a0: 0xc069fb8
label_20c6a4:
    if (ctx->pc == 0x20C6A4u) {
        ctx->pc = 0x20C6A8u;
        goto label_20c6a8;
    }
    ctx->pc = 0x20C6A0u;
    SET_GPR_U32(ctx, 31, 0x20C6A8u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6A8u; }
        else if (ctx->pc != 0x20C6A8u) { ctx->pc = 0x20C6A8u; }
    }
    if (ctx->pc != 0x20C6A8u) { return; }
    ctx->pc = 0x20C6A8u;
label_20c6a8:
    // 0x20c6a8: 0x8e041db0
    ctx->pc = 0x20c6a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c6ac:
    // 0x20c6ac: 0x24030001
    ctx->pc = 0x20c6acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c6b0:
    // 0x20c6b0: 0x14830003
label_20c6b4:
    if (ctx->pc == 0x20C6B4u) {
        ctx->pc = 0x20C6B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        ctx->pc = 0x20C6B8u;
        goto label_20c6b8;
    }
    ctx->pc = 0x20C6B0u;
    {
        const bool branch_taken_0x20c6b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C6B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x20c6b0) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C6B8u;
label_20c6b8:
    // 0x20c6b8: 0x10000030
label_20c6bc:
    if (ctx->pc == 0x20C6BCu) {
        ctx->pc = 0x20C6BCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 23));
        ctx->pc = 0x20C6C0u;
        goto label_20c6c0;
    }
    ctx->pc = 0x20C6B8u;
    {
        const bool branch_taken_0x20c6b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C6BCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 23));
        if (branch_taken_0x20c6b8) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C6C0u;
label_20c6c0:
    // 0x20c6c0: 0xc069fb8
label_20c6c4:
    if (ctx->pc == 0x20C6C4u) {
        ctx->pc = 0x20C6C8u;
        goto label_20c6c8;
    }
    ctx->pc = 0x20C6C0u;
    SET_GPR_U32(ctx, 31, 0x20C6C8u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6C8u; }
        else if (ctx->pc != 0x20C6C8u) { ctx->pc = 0x20C6C8u; }
    }
    if (ctx->pc != 0x20C6C8u) { return; }
    ctx->pc = 0x20C6C8u;
label_20c6c8:
    // 0x20c6c8: 0x4410004
label_20c6cc:
    if (ctx->pc == 0x20C6CCu) {
        ctx->pc = 0x20C6CCu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C6D0u;
        goto label_20c6d0;
    }
    ctx->pc = 0x20C6C8u;
    {
        const bool branch_taken_0x20c6c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C6CCu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c6c8) {
            ctx->pc = 0x20C6DCu;
            goto label_20c6dc;
        }
    }
    ctx->pc = 0x20C6D0u;
label_20c6d0:
    // 0x20c6d0: 0x10800003
label_20c6d4:
    if (ctx->pc == 0x20C6D4u) {
        ctx->pc = 0x20C6D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        ctx->pc = 0x20C6D8u;
        goto label_20c6d8;
    }
    ctx->pc = 0x20C6D0u;
    {
        const bool branch_taken_0x20c6d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C6D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x20c6d0) {
            ctx->pc = 0x20C6E0u;
            goto label_20c6e0;
        }
    }
    ctx->pc = 0x20C6D8u;
label_20c6d8:
    // 0x20c6d8: 0x2484fffe
    ctx->pc = 0x20c6d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c6dc:
    // 0x20c6dc: 0x3c030008
    ctx->pc = 0x20c6dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_20c6e0:
    // 0x20c6e0: 0x34650019
    ctx->pc = 0x20c6e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 25));
label_20c6e4:
    // 0x20c6e4: 0x34630010
    ctx->pc = 0x20c6e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
label_20c6e8:
    // 0x20c6e8: 0x10000024
label_20c6ec:
    if (ctx->pc == 0x20C6ECu) {
        ctx->pc = 0x20C6ECu;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20C6F0u;
        goto label_20c6f0;
    }
    ctx->pc = 0x20C6E8u;
    {
        const bool branch_taken_0x20c6e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C6ECu;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20c6e8) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C6F0u;
label_20c6f0:
    // 0x20c6f0: 0x8e041db0
    ctx->pc = 0x20c6f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c6f4:
    // 0x20c6f4: 0x24030001
    ctx->pc = 0x20c6f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c6f8:
    // 0x20c6f8: 0x14830003
label_20c6fc:
    if (ctx->pc == 0x20C6FCu) {
        ctx->pc = 0x20C6FCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        ctx->pc = 0x20C700u;
        goto label_20c700;
    }
    ctx->pc = 0x20C6F8u;
    {
        const bool branch_taken_0x20c6f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C6FCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        if (branch_taken_0x20c6f8) {
            ctx->pc = 0x20C708u;
            goto label_20c708;
        }
    }
    ctx->pc = 0x20C700u;
label_20c700:
    // 0x20c700: 0x1000001e
label_20c704:
    if (ctx->pc == 0x20C704u) {
        ctx->pc = 0x20C704u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 23));
        ctx->pc = 0x20C708u;
        goto label_20c708;
    }
    ctx->pc = 0x20C700u;
    {
        const bool branch_taken_0x20c700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C704u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 23));
        if (branch_taken_0x20c700) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C708u;
label_20c708:
    // 0x20c708: 0xc069fb8
label_20c70c:
    if (ctx->pc == 0x20C70Cu) {
        ctx->pc = 0x20C710u;
        goto label_20c710;
    }
    ctx->pc = 0x20C708u;
    SET_GPR_U32(ctx, 31, 0x20C710u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C710u; }
        else if (ctx->pc != 0x20C710u) { ctx->pc = 0x20C710u; }
    }
    if (ctx->pc != 0x20C710u) { return; }
    ctx->pc = 0x20C710u;
label_20c710:
    // 0x20c710: 0x4410004
label_20c714:
    if (ctx->pc == 0x20C714u) {
        ctx->pc = 0x20C714u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C718u;
        goto label_20c718;
    }
    ctx->pc = 0x20C710u;
    {
        const bool branch_taken_0x20c710 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C714u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c710) {
            ctx->pc = 0x20C724u;
            goto label_20c724;
        }
    }
    ctx->pc = 0x20C718u;
label_20c718:
    // 0x20c718: 0x10800003
label_20c71c:
    if (ctx->pc == 0x20C71Cu) {
        ctx->pc = 0x20C71Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        ctx->pc = 0x20C720u;
        goto label_20c720;
    }
    ctx->pc = 0x20C718u;
    {
        const bool branch_taken_0x20c718 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C71Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
        if (branch_taken_0x20c718) {
            ctx->pc = 0x20C728u;
            goto label_20c728;
        }
    }
    ctx->pc = 0x20C720u;
label_20c720:
    // 0x20c720: 0x2484fffe
    ctx->pc = 0x20c720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c724:
    // 0x20c724: 0x3c030009
    ctx->pc = 0x20c724u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
label_20c728:
    // 0x20c728: 0x34650019
    ctx->pc = 0x20c728u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 25));
label_20c72c:
    // 0x20c72c: 0x34630010
    ctx->pc = 0x20c72cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
label_20c730:
    // 0x20c730: 0x10000012
label_20c734:
    if (ctx->pc == 0x20C734u) {
        ctx->pc = 0x20C734u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20C738u;
        goto label_20c738;
    }
    ctx->pc = 0x20C730u;
    {
        const bool branch_taken_0x20c730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C734u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20c730) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C738u;
label_20c738:
    // 0x20c738: 0x8e041db0
    ctx->pc = 0x20c738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
label_20c73c:
    // 0x20c73c: 0x24030001
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20c740:
    // 0x20c740: 0x14830003
label_20c744:
    if (ctx->pc == 0x20C744u) {
        ctx->pc = 0x20C744u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        ctx->pc = 0x20C748u;
        goto label_20c748;
    }
    ctx->pc = 0x20C740u;
    {
        const bool branch_taken_0x20c740 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C744u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        if (branch_taken_0x20c740) {
            ctx->pc = 0x20C750u;
            goto label_20c750;
        }
    }
    ctx->pc = 0x20C748u;
label_20c748:
    // 0x20c748: 0x1000000c
label_20c74c:
    if (ctx->pc == 0x20C74Cu) {
        ctx->pc = 0x20C74Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x20C750u;
        goto label_20c750;
    }
    ctx->pc = 0x20C748u;
    {
        const bool branch_taken_0x20c748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C74Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x20c748) {
            ctx->pc = 0x20C77Cu;
            goto label_20c77c;
        }
    }
    ctx->pc = 0x20C750u;
label_20c750:
    // 0x20c750: 0xc069fb8
label_20c754:
    if (ctx->pc == 0x20C754u) {
        ctx->pc = 0x20C758u;
        goto label_20c758;
    }
    ctx->pc = 0x20C750u;
    SET_GPR_U32(ctx, 31, 0x20C758u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C758u; }
        else if (ctx->pc != 0x20C758u) { ctx->pc = 0x20C758u; }
    }
    if (ctx->pc != 0x20C758u) { return; }
    ctx->pc = 0x20C758u;
label_20c758:
    // 0x20c758: 0x4410004
label_20c75c:
    if (ctx->pc == 0x20C75Cu) {
        ctx->pc = 0x20C75Cu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20C760u;
        goto label_20c760;
    }
    ctx->pc = 0x20C758u;
    {
        const bool branch_taken_0x20c758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C75Cu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20c758) {
            ctx->pc = 0x20C76Cu;
            goto label_20c76c;
        }
    }
    ctx->pc = 0x20C760u;
label_20c760:
    // 0x20c760: 0x10800003
label_20c764:
    if (ctx->pc == 0x20C764u) {
        ctx->pc = 0x20C764u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        ctx->pc = 0x20C768u;
        goto label_20c768;
    }
    ctx->pc = 0x20C760u;
    {
        const bool branch_taken_0x20c760 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C764u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        if (branch_taken_0x20c760) {
            ctx->pc = 0x20C770u;
            goto label_20c770;
        }
    }
    ctx->pc = 0x20C768u;
label_20c768:
    // 0x20c768: 0x2484fffe
    ctx->pc = 0x20c768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20c76c:
    // 0x20c76c: 0x3c03000a
    ctx->pc = 0x20c76cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
label_20c770:
    // 0x20c770: 0x34650019
    ctx->pc = 0x20c770u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 25));
label_20c774:
    // 0x20c774: 0x34630017
    ctx->pc = 0x20c774u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 23));
label_20c778:
    // 0x20c778: 0x64280a
    ctx->pc = 0x20c778u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_20c77c:
    // 0x20c77c: 0x10a00009
label_20c780:
    if (ctx->pc == 0x20C780u) {
        ctx->pc = 0x20C784u;
        goto label_20c784;
    }
    ctx->pc = 0x20C77Cu;
    {
        const bool branch_taken_0x20c77c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c77c) {
            ctx->pc = 0x20C7A4u;
            goto label_20c7a4;
        }
    }
    ctx->pc = 0x20C784u;
label_20c784:
    // 0x20c784: 0xae051e5c
    ctx->pc = 0x20c784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7772), GPR_U32(ctx, 5));
label_20c788:
    // 0x20c788: 0x82030024
    ctx->pc = 0x20c788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_20c78c:
    // 0x20c78c: 0x3c020051
    ctx->pc = 0x20c78cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_20c790:
    // 0x20c790: 0x244434f0
    ctx->pc = 0x20c790u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_20c794:
    // 0x20c794: 0x70003e28
    ctx->pc = 0x20c794u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20c798:
    // 0x20c798: 0x24080040
    ctx->pc = 0x20c798u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_20c79c:
    // 0x20c79c: 0xc086018
label_20c7a0:
    if (ctx->pc == 0x20C7A0u) {
        ctx->pc = 0x20C7A0u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x20C7A4u;
        goto label_20c7a4;
    }
    ctx->pc = 0x20C79Cu;
    SET_GPR_U32(ctx, 31, 0x20C7A4u);
    ctx->pc = 0x20C7A0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C7A4u; }
        else if (ctx->pc != 0x20C7A4u) { ctx->pc = 0x20C7A4u; }
    }
    if (ctx->pc != 0x20C7A4u) { return; }
    ctx->pc = 0x20C7A4u;
label_20c7a4:
    // 0x20c7a4: 0x7bbf0010
    ctx->pc = 0x20c7a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c7a8:
    // 0x20c7a8: 0x7bb00000
    ctx->pc = 0x20c7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20c7ac:
    // 0x20c7ac: 0x3e00008
label_20c7b0:
    if (ctx->pc == 0x20C7B0u) {
        ctx->pc = 0x20C7B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20C7B4u;
        goto label_fallthrough_0x20c7ac;
    }
    ctx->pc = 0x20C7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C7B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C630u: goto label_20c630;
            case 0x20C634u: goto label_20c634;
            case 0x20C638u: goto label_20c638;
            case 0x20C63Cu: goto label_20c63c;
            case 0x20C640u: goto label_20c640;
            case 0x20C644u: goto label_20c644;
            case 0x20C648u: goto label_20c648;
            case 0x20C64Cu: goto label_20c64c;
            case 0x20C650u: goto label_20c650;
            case 0x20C654u: goto label_20c654;
            case 0x20C658u: goto label_20c658;
            case 0x20C65Cu: goto label_20c65c;
            case 0x20C660u: goto label_20c660;
            case 0x20C664u: goto label_20c664;
            case 0x20C668u: goto label_20c668;
            case 0x20C66Cu: goto label_20c66c;
            case 0x20C670u: goto label_20c670;
            case 0x20C674u: goto label_20c674;
            case 0x20C678u: goto label_20c678;
            case 0x20C67Cu: goto label_20c67c;
            case 0x20C680u: goto label_20c680;
            case 0x20C684u: goto label_20c684;
            case 0x20C688u: goto label_20c688;
            case 0x20C68Cu: goto label_20c68c;
            case 0x20C690u: goto label_20c690;
            case 0x20C694u: goto label_20c694;
            case 0x20C698u: goto label_20c698;
            case 0x20C69Cu: goto label_20c69c;
            case 0x20C6A0u: goto label_20c6a0;
            case 0x20C6A4u: goto label_20c6a4;
            case 0x20C6A8u: goto label_20c6a8;
            case 0x20C6ACu: goto label_20c6ac;
            case 0x20C6B0u: goto label_20c6b0;
            case 0x20C6B4u: goto label_20c6b4;
            case 0x20C6B8u: goto label_20c6b8;
            case 0x20C6BCu: goto label_20c6bc;
            case 0x20C6C0u: goto label_20c6c0;
            case 0x20C6C4u: goto label_20c6c4;
            case 0x20C6C8u: goto label_20c6c8;
            case 0x20C6CCu: goto label_20c6cc;
            case 0x20C6D0u: goto label_20c6d0;
            case 0x20C6D4u: goto label_20c6d4;
            case 0x20C6D8u: goto label_20c6d8;
            case 0x20C6DCu: goto label_20c6dc;
            case 0x20C6E0u: goto label_20c6e0;
            case 0x20C6E4u: goto label_20c6e4;
            case 0x20C6E8u: goto label_20c6e8;
            case 0x20C6ECu: goto label_20c6ec;
            case 0x20C6F0u: goto label_20c6f0;
            case 0x20C6F4u: goto label_20c6f4;
            case 0x20C6F8u: goto label_20c6f8;
            case 0x20C6FCu: goto label_20c6fc;
            case 0x20C700u: goto label_20c700;
            case 0x20C704u: goto label_20c704;
            case 0x20C708u: goto label_20c708;
            case 0x20C70Cu: goto label_20c70c;
            case 0x20C710u: goto label_20c710;
            case 0x20C714u: goto label_20c714;
            case 0x20C718u: goto label_20c718;
            case 0x20C71Cu: goto label_20c71c;
            case 0x20C720u: goto label_20c720;
            case 0x20C724u: goto label_20c724;
            case 0x20C728u: goto label_20c728;
            case 0x20C72Cu: goto label_20c72c;
            case 0x20C730u: goto label_20c730;
            case 0x20C734u: goto label_20c734;
            case 0x20C738u: goto label_20c738;
            case 0x20C73Cu: goto label_20c73c;
            case 0x20C740u: goto label_20c740;
            case 0x20C744u: goto label_20c744;
            case 0x20C748u: goto label_20c748;
            case 0x20C74Cu: goto label_20c74c;
            case 0x20C750u: goto label_20c750;
            case 0x20C754u: goto label_20c754;
            case 0x20C758u: goto label_20c758;
            case 0x20C75Cu: goto label_20c75c;
            case 0x20C760u: goto label_20c760;
            case 0x20C764u: goto label_20c764;
            case 0x20C768u: goto label_20c768;
            case 0x20C76Cu: goto label_20c76c;
            case 0x20C770u: goto label_20c770;
            case 0x20C774u: goto label_20c774;
            case 0x20C778u: goto label_20c778;
            case 0x20C77Cu: goto label_20c77c;
            case 0x20C780u: goto label_20c780;
            case 0x20C784u: goto label_20c784;
            case 0x20C788u: goto label_20c788;
            case 0x20C78Cu: goto label_20c78c;
            case 0x20C790u: goto label_20c790;
            case 0x20C794u: goto label_20c794;
            case 0x20C798u: goto label_20c798;
            case 0x20C79Cu: goto label_20c79c;
            case 0x20C7A0u: goto label_20c7a0;
            case 0x20C7A4u: goto label_20c7a4;
            case 0x20C7A8u: goto label_20c7a8;
            case 0x20C7ACu: goto label_20c7ac;
            case 0x20C7B0u: goto label_20c7b0;
            default: break;
        }
        return;
    }
label_fallthrough_0x20c7ac:
    ctx->pc = 0x20C7B4u;
}
