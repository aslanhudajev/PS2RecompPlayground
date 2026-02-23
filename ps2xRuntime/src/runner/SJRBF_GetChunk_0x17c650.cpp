#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_GetChunk
// Address: 0x17c650 - 0x17c798
void SJRBF_GetChunk_0x17c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_GetChunk");


    ctx->pc = 0x17c650u;

label_17c650:
    // 0x17c650: 0x27bdffb0
    ctx->pc = 0x17c650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_17c654:
    // 0x17c654: 0xffb30030
    ctx->pc = 0x17c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17c658:
    // 0x17c658: 0xffb20020
    ctx->pc = 0x17c658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17c65c:
    // 0x17c65c: 0xc0982d
    ctx->pc = 0x17c65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c660:
    // 0x17c660: 0xffb10010
    ctx->pc = 0x17c660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17c664:
    // 0x17c664: 0xa0902d
    ctx->pc = 0x17c664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c668:
    // 0x17c668: 0xffb00000
    ctx->pc = 0x17c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c66c:
    // 0x17c66c: 0xe0882d
    ctx->pc = 0x17c66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17c670:
    // 0x17c670: 0xffbf0040
    ctx->pc = 0x17c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17c674:
    // 0x17c674: 0xc05efbc
label_17c678:
    if (ctx->pc == 0x17C678u) {
        ctx->pc = 0x17C678u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C67Cu;
        goto label_17c67c;
    }
    ctx->pc = 0x17C674u;
    SET_GPR_U32(ctx, 31, 0x17C67Cu);
    ctx->pc = 0x17C678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C67Cu; }
        else if (ctx->pc != 0x17C67Cu) { ctx->pc = 0x17C67Cu; }
    }
    if (ctx->pc != 0x17C67Cu) { return; }
    ctx->pc = 0x17C67Cu;
label_17c67c:
    // 0x17c67c: 0x1640001c
label_17c680:
    if (ctx->pc == 0x17C680u) {
        ctx->pc = 0x17C680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17C684u;
        goto label_17c684;
    }
    ctx->pc = 0x17C67Cu;
    {
        const bool branch_taken_0x17c67c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17c67c) {
            ctx->pc = 0x17C6F0u;
            goto label_17c6f0;
        }
    }
    ctx->pc = 0x17C684u;
label_17c684:
    // 0x17c684: 0x8e030014
    ctx->pc = 0x17c684u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17c688:
    // 0x17c688: 0x8e020020
    ctx->pc = 0x17c688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c68c:
    // 0x17c68c: 0x8e040024
    ctx->pc = 0x17c68cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_17c690:
    // 0x17c690: 0x8e050010
    ctx->pc = 0x17c690u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c694:
    // 0x17c694: 0x431023
    ctx->pc = 0x17c694u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c698:
    // 0x17c698: 0x441021
    ctx->pc = 0x17c698u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17c69c:
    // 0x17c69c: 0x8e06001c
    ctx->pc = 0x17c69cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17c6a0:
    // 0x17c6a0: 0xa2182a
    ctx->pc = 0x17c6a0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_17c6a4:
    // 0x17c6a4: 0xa3100b
    ctx->pc = 0x17c6a4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
label_17c6a8:
    // 0x17c6a8: 0x53202a
    ctx->pc = 0x17c6a8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_17c6ac:
    // 0x17c6ac: 0x264100a
    ctx->pc = 0x17c6acu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
label_17c6b0:
    // 0x17c6b0: 0xae220004
    ctx->pc = 0x17c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_17c6b4:
    // 0x17c6b4: 0x8e040014
    ctx->pc = 0x17c6b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17c6b8:
    // 0x17c6b8: 0x8e030020
    ctx->pc = 0x17c6b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c6bc:
    // 0x17c6bc: 0x821021
    ctx->pc = 0x17c6bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17c6c0:
    // 0x17c6c0: 0xc43021
    ctx->pc = 0x17c6c0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_17c6c4:
    // 0x17c6c4: 0x43001a
    ctx->pc = 0x17c6c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17c6c8:
    // 0x17c6c8: 0xae260000
    ctx->pc = 0x17c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_17c6cc:
    // 0x17c6cc: 0x50600001
label_17c6d0:
    if (ctx->pc == 0x17C6D0u) {
        ctx->pc = 0x17C6D0u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x17C6D4u;
        goto label_17c6d4;
    }
    ctx->pc = 0x17C6CCu;
    {
        const bool branch_taken_0x17c6cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c6cc) {
            ctx->pc = 0x17C6D0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17C6D4u;
            goto label_17c6d4;
        }
    }
    ctx->pc = 0x17C6D4u;
label_17c6d4:
    // 0x17c6d4: 0x8e020010
    ctx->pc = 0x17c6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c6d8:
    // 0x17c6d8: 0x2810
    ctx->pc = 0x17c6d8u;
    SET_GPR_U32(ctx, 5, ctx->hi);
label_17c6dc:
    // 0x17c6dc: 0xae050014
    ctx->pc = 0x17c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
label_17c6e0:
    // 0x17c6e0: 0x8e230004
    ctx->pc = 0x17c6e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c6e4:
    // 0x17c6e4: 0x431023
    ctx->pc = 0x17c6e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c6e8:
    // 0x17c6e8: 0x10000024
label_17c6ec:
    if (ctx->pc == 0x17C6ECu) {
        ctx->pc = 0x17C6ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x17C6F0u;
        goto label_17c6f0;
    }
    ctx->pc = 0x17C6E8u;
    {
        const bool branch_taken_0x17c6e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C6ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x17c6e8) {
            ctx->pc = 0x17C77Cu;
            goto label_17c77c;
        }
    }
    ctx->pc = 0x17C6F0u;
label_17c6f0:
    // 0x17c6f0: 0x5642001c
label_17c6f4:
    if (ctx->pc == 0x17C6F4u) {
        ctx->pc = 0x17C6F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x17C6F8u;
        goto label_17c6f8;
    }
    ctx->pc = 0x17C6F0u;
    {
        const bool branch_taken_0x17c6f0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x17c6f0) {
            ctx->pc = 0x17C6F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x17C764u;
            goto label_17c764;
        }
    }
    ctx->pc = 0x17C6F8u;
label_17c6f8:
    // 0x17c6f8: 0x8e030018
    ctx->pc = 0x17c6f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17c6fc:
    // 0x17c6fc: 0x8e020020
    ctx->pc = 0x17c6fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c700:
    // 0x17c700: 0x8e040024
    ctx->pc = 0x17c700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_17c704:
    // 0x17c704: 0x8e05000c
    ctx->pc = 0x17c704u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c708:
    // 0x17c708: 0x431023
    ctx->pc = 0x17c708u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c70c:
    // 0x17c70c: 0x441021
    ctx->pc = 0x17c70cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17c710:
    // 0x17c710: 0x8e06001c
    ctx->pc = 0x17c710u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17c714:
    // 0x17c714: 0xa2182a
    ctx->pc = 0x17c714u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_17c718:
    // 0x17c718: 0xa3100b
    ctx->pc = 0x17c718u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
label_17c71c:
    // 0x17c71c: 0x53202a
    ctx->pc = 0x17c71cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_17c720:
    // 0x17c720: 0x264100a
    ctx->pc = 0x17c720u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
label_17c724:
    // 0x17c724: 0xae220004
    ctx->pc = 0x17c724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_17c728:
    // 0x17c728: 0x8e040018
    ctx->pc = 0x17c728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17c72c:
    // 0x17c72c: 0x8e030020
    ctx->pc = 0x17c72cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c730:
    // 0x17c730: 0x821021
    ctx->pc = 0x17c730u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17c734:
    // 0x17c734: 0xc43021
    ctx->pc = 0x17c734u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_17c738:
    // 0x17c738: 0x43001a
    ctx->pc = 0x17c738u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17c73c:
    // 0x17c73c: 0xae260000
    ctx->pc = 0x17c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_17c740:
    // 0x17c740: 0x50600001
label_17c744:
    if (ctx->pc == 0x17C744u) {
        ctx->pc = 0x17C744u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x17C748u;
        goto label_17c748;
    }
    ctx->pc = 0x17C740u;
    {
        const bool branch_taken_0x17c740 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c740) {
            ctx->pc = 0x17C744u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17C748u;
            goto label_17c748;
        }
    }
    ctx->pc = 0x17C748u;
label_17c748:
    // 0x17c748: 0x8e02000c
    ctx->pc = 0x17c748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c74c:
    // 0x17c74c: 0x2810
    ctx->pc = 0x17c74cu;
    SET_GPR_U32(ctx, 5, ctx->hi);
label_17c750:
    // 0x17c750: 0xae050018
    ctx->pc = 0x17c750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
label_17c754:
    // 0x17c754: 0x8e230004
    ctx->pc = 0x17c754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c758:
    // 0x17c758: 0x431023
    ctx->pc = 0x17c758u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c75c:
    // 0x17c75c: 0x10000007
label_17c760:
    if (ctx->pc == 0x17C760u) {
        ctx->pc = 0x17C760u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x17C764u;
        goto label_17c764;
    }
    ctx->pc = 0x17C75Cu;
    {
        const bool branch_taken_0x17c75c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C760u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x17c75c) {
            ctx->pc = 0x17C77Cu;
            goto label_17c77c;
        }
    }
    ctx->pc = 0x17C764u;
label_17c764:
    // 0x17c764: 0xae200000
    ctx->pc = 0x17c764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17c768:
    // 0x17c768: 0x10400004
label_17c76c:
    if (ctx->pc == 0x17C76Cu) {
        ctx->pc = 0x17C76Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17C770u;
        goto label_17c770;
    }
    ctx->pc = 0x17C768u;
    {
        const bool branch_taken_0x17c768 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C76Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17c768) {
            ctx->pc = 0x17C77Cu;
            goto label_17c77c;
        }
    }
    ctx->pc = 0x17C770u;
label_17c770:
    // 0x17c770: 0x8e04002c
    ctx->pc = 0x17c770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17c774:
    // 0x17c774: 0x40f809
label_17c778:
    if (ctx->pc == 0x17C778u) {
        ctx->pc = 0x17C778u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C77Cu;
        goto label_17c77c;
    }
    ctx->pc = 0x17C774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C77Cu);
        ctx->pc = 0x17C778u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C650u: goto label_17c650;
            case 0x17C654u: goto label_17c654;
            case 0x17C658u: goto label_17c658;
            case 0x17C65Cu: goto label_17c65c;
            case 0x17C660u: goto label_17c660;
            case 0x17C664u: goto label_17c664;
            case 0x17C668u: goto label_17c668;
            case 0x17C66Cu: goto label_17c66c;
            case 0x17C670u: goto label_17c670;
            case 0x17C674u: goto label_17c674;
            case 0x17C678u: goto label_17c678;
            case 0x17C67Cu: goto label_17c67c;
            case 0x17C680u: goto label_17c680;
            case 0x17C684u: goto label_17c684;
            case 0x17C688u: goto label_17c688;
            case 0x17C68Cu: goto label_17c68c;
            case 0x17C690u: goto label_17c690;
            case 0x17C694u: goto label_17c694;
            case 0x17C698u: goto label_17c698;
            case 0x17C69Cu: goto label_17c69c;
            case 0x17C6A0u: goto label_17c6a0;
            case 0x17C6A4u: goto label_17c6a4;
            case 0x17C6A8u: goto label_17c6a8;
            case 0x17C6ACu: goto label_17c6ac;
            case 0x17C6B0u: goto label_17c6b0;
            case 0x17C6B4u: goto label_17c6b4;
            case 0x17C6B8u: goto label_17c6b8;
            case 0x17C6BCu: goto label_17c6bc;
            case 0x17C6C0u: goto label_17c6c0;
            case 0x17C6C4u: goto label_17c6c4;
            case 0x17C6C8u: goto label_17c6c8;
            case 0x17C6CCu: goto label_17c6cc;
            case 0x17C6D0u: goto label_17c6d0;
            case 0x17C6D4u: goto label_17c6d4;
            case 0x17C6D8u: goto label_17c6d8;
            case 0x17C6DCu: goto label_17c6dc;
            case 0x17C6E0u: goto label_17c6e0;
            case 0x17C6E4u: goto label_17c6e4;
            case 0x17C6E8u: goto label_17c6e8;
            case 0x17C6ECu: goto label_17c6ec;
            case 0x17C6F0u: goto label_17c6f0;
            case 0x17C6F4u: goto label_17c6f4;
            case 0x17C6F8u: goto label_17c6f8;
            case 0x17C6FCu: goto label_17c6fc;
            case 0x17C700u: goto label_17c700;
            case 0x17C704u: goto label_17c704;
            case 0x17C708u: goto label_17c708;
            case 0x17C70Cu: goto label_17c70c;
            case 0x17C710u: goto label_17c710;
            case 0x17C714u: goto label_17c714;
            case 0x17C718u: goto label_17c718;
            case 0x17C71Cu: goto label_17c71c;
            case 0x17C720u: goto label_17c720;
            case 0x17C724u: goto label_17c724;
            case 0x17C728u: goto label_17c728;
            case 0x17C72Cu: goto label_17c72c;
            case 0x17C730u: goto label_17c730;
            case 0x17C734u: goto label_17c734;
            case 0x17C738u: goto label_17c738;
            case 0x17C73Cu: goto label_17c73c;
            case 0x17C740u: goto label_17c740;
            case 0x17C744u: goto label_17c744;
            case 0x17C748u: goto label_17c748;
            case 0x17C74Cu: goto label_17c74c;
            case 0x17C750u: goto label_17c750;
            case 0x17C754u: goto label_17c754;
            case 0x17C758u: goto label_17c758;
            case 0x17C75Cu: goto label_17c75c;
            case 0x17C760u: goto label_17c760;
            case 0x17C764u: goto label_17c764;
            case 0x17C768u: goto label_17c768;
            case 0x17C76Cu: goto label_17c76c;
            case 0x17C770u: goto label_17c770;
            case 0x17C774u: goto label_17c774;
            case 0x17C778u: goto label_17c778;
            case 0x17C77Cu: goto label_17c77c;
            case 0x17C780u: goto label_17c780;
            case 0x17C784u: goto label_17c784;
            case 0x17C788u: goto label_17c788;
            case 0x17C78Cu: goto label_17c78c;
            case 0x17C790u: goto label_17c790;
            case 0x17C794u: goto label_17c794;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C77Cu; }
            if (ctx->pc != 0x17C77Cu) { return; }
        }
    }
    ctx->pc = 0x17C77Cu;
label_17c77c:
    // 0x17c77c: 0xdfbf0040
    ctx->pc = 0x17c77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c780:
    // 0x17c780: 0xdfb30030
    ctx->pc = 0x17c780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c784:
    // 0x17c784: 0xdfb20020
    ctx->pc = 0x17c784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c788:
    // 0x17c788: 0xdfb10010
    ctx->pc = 0x17c788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c78c:
    // 0x17c78c: 0xdfb00000
    ctx->pc = 0x17c78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c790:
    // 0x17c790: 0x805efc2
label_17c794:
    if (ctx->pc == 0x17C794u) {
        ctx->pc = 0x17C794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x17C798u;
        goto label_fallthrough_0x17c790;
    }
    ctx->pc = 0x17C790u;
    ctx->pc = 0x17C794u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
label_fallthrough_0x17c790:
    ctx->pc = 0x17C798u;
}
