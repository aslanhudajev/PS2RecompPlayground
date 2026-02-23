#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_PutChunk
// Address: 0x17c798 - 0x17c8d0
void SJRBF_PutChunk_0x17c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_PutChunk");


    ctx->pc = 0x17c798u;

label_17c798:
    // 0x17c798: 0x27bdffc0
    ctx->pc = 0x17c798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17c79c:
    // 0x17c79c: 0xffb20020
    ctx->pc = 0x17c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17c7a0:
    // 0x17c7a0: 0xffb10010
    ctx->pc = 0x17c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17c7a4:
    // 0x17c7a4: 0xa0902d
    ctx->pc = 0x17c7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c7a8:
    // 0x17c7a8: 0xffb00000
    ctx->pc = 0x17c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c7ac:
    // 0x17c7ac: 0xffbf0030
    ctx->pc = 0x17c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17c7b0:
    // 0x17c7b0: 0xc0802d
    ctx->pc = 0x17c7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c7b4:
    // 0x17c7b4: 0x8e020004
    ctx->pc = 0x17c7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c7b8:
    // 0x17c7b8: 0x1840003f
label_17c7bc:
    if (ctx->pc == 0x17C7BCu) {
        ctx->pc = 0x17C7BCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C7C0u;
        goto label_17c7c0;
    }
    ctx->pc = 0x17C7B8u;
    {
        const bool branch_taken_0x17c7b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17C7BCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c7b8) {
            ctx->pc = 0x17C8B8u;
            goto label_17c8b8;
        }
    }
    ctx->pc = 0x17C7C0u;
label_17c7c0:
    // 0x17c7c0: 0x8e020000
    ctx->pc = 0x17c7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c7c4:
    // 0x17c7c4: 0x1040003d
label_17c7c8:
    if (ctx->pc == 0x17C7C8u) {
        ctx->pc = 0x17C7C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C7CCu;
        goto label_17c7cc;
    }
    ctx->pc = 0x17C7C4u;
    {
        const bool branch_taken_0x17c7c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C7C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c7c4) {
            ctx->pc = 0x17C8BCu;
            goto label_17c8bc;
        }
    }
    ctx->pc = 0x17C7CCu;
label_17c7cc:
    // 0x17c7cc: 0xc05efbc
label_17c7d0:
    if (ctx->pc == 0x17C7D0u) {
        ctx->pc = 0x17C7D4u;
        goto label_17c7d4;
    }
    ctx->pc = 0x17C7CCu;
    SET_GPR_U32(ctx, 31, 0x17C7D4u);
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7D4u; }
        else if (ctx->pc != 0x17C7D4u) { ctx->pc = 0x17C7D4u; }
    }
    if (ctx->pc != 0x17C7D4u) { return; }
    ctx->pc = 0x17C7D4u;
label_17c7d4:
    // 0x17c7d4: 0x24020001
    ctx->pc = 0x17c7d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17c7d8:
    // 0x17c7d8: 0x16420024
label_17c7dc:
    if (ctx->pc == 0x17C7DCu) {
        ctx->pc = 0x17C7E0u;
        goto label_17c7e0;
    }
    ctx->pc = 0x17C7D8u;
    {
        const bool branch_taken_0x17c7d8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x17c7d8) {
            ctx->pc = 0x17C86Cu;
            goto label_17c86c;
        }
    }
    ctx->pc = 0x17C7E0u;
label_17c7e0:
    // 0x17c7e0: 0x8e030004
    ctx->pc = 0x17c7e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c7e4:
    // 0x17c7e4: 0x8e22000c
    ctx->pc = 0x17c7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17c7e8:
    // 0x17c7e8: 0x8e050000
    ctx->pc = 0x17c7e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c7ec:
    // 0x17c7ec: 0x8e29001c
    ctx->pc = 0x17c7ecu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_17c7f0:
    // 0x17c7f0: 0x431021
    ctx->pc = 0x17c7f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c7f4:
    // 0x17c7f4: 0x8e260024
    ctx->pc = 0x17c7f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_17c7f8:
    // 0x17c7f8: 0xa93823
    ctx->pc = 0x17c7f8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_17c7fc:
    // 0x17c7fc: 0xe6182a
    ctx->pc = 0x17c7fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
label_17c800:
    // 0x17c800: 0x1060000b
label_17c804:
    if (ctx->pc == 0x17C804u) {
        ctx->pc = 0x17C804u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x17C808u;
        goto label_17c808;
    }
    ctx->pc = 0x17C800u;
    {
        const bool branch_taken_0x17c800 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C804u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x17c800) {
            ctx->pc = 0x17C830u;
            goto label_17c830;
        }
    }
    ctx->pc = 0x17C808u;
label_17c808:
    // 0x17c808: 0x8e030004
    ctx->pc = 0x17c808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c80c:
    // 0x17c80c: 0xc73023
    ctx->pc = 0x17c80cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_17c810:
    // 0x17c810: 0x8e240020
    ctx->pc = 0x17c810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_17c814:
    // 0x17c814: 0x66102a
    ctx->pc = 0x17c814u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
label_17c818:
    // 0x17c818: 0x872021
    ctx->pc = 0x17c818u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_17c81c:
    // 0x17c81c: 0x62300b
    ctx->pc = 0x17c81cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_17c820:
    // 0x17c820: 0xc050c90
label_17c824:
    if (ctx->pc == 0x17C824u) {
        ctx->pc = 0x17C824u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->pc = 0x17C828u;
        goto label_17c828;
    }
    ctx->pc = 0x17C820u;
    SET_GPR_U32(ctx, 31, 0x17C828u);
    ctx->pc = 0x17C824u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C828u; }
        else if (ctx->pc != 0x17C828u) { ctx->pc = 0x17C828u; }
    }
    if (ctx->pc != 0x17C828u) { return; }
    ctx->pc = 0x17C828u;
label_17c828:
    // 0x17c828: 0x8e050000
    ctx->pc = 0x17c828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c82c:
    // 0x17c82c: 0x8e29001c
    ctx->pc = 0x17c82cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_17c830:
    // 0x17c830: 0x8e080004
    ctx->pc = 0x17c830u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c834:
    // 0x17c834: 0xa91823
    ctx->pc = 0x17c834u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_17c838:
    // 0x17c838: 0x8e240020
    ctx->pc = 0x17c838u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_17c83c:
    // 0x17c83c: 0x683821
    ctx->pc = 0x17c83cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_17c840:
    // 0x17c840: 0x87102a
    ctx->pc = 0x17c840u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_17c844:
    // 0x17c844: 0x10400016
label_17c848:
    if (ctx->pc == 0x17C848u) {
        ctx->pc = 0x17C848u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->pc = 0x17C84Cu;
        goto label_17c84c;
    }
    ctx->pc = 0x17C844u;
    {
        const bool branch_taken_0x17c844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C848u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        if (branch_taken_0x17c844) {
            ctx->pc = 0x17C8A0u;
            goto label_17c8a0;
        }
    }
    ctx->pc = 0x17C84Cu;
label_17c84c:
    // 0x17c84c: 0x106102a
    ctx->pc = 0x17c84cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 6)));
label_17c850:
    // 0x17c850: 0x120202d
    ctx->pc = 0x17c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_17c854:
    // 0x17c854: 0x102300b
    ctx->pc = 0x17c854u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 8));
label_17c858:
    // 0x17c858: 0xe62823
    ctx->pc = 0x17c858u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_17c85c:
    // 0x17c85c: 0xc050c90
label_17c860:
    if (ctx->pc == 0x17C860u) {
        ctx->pc = 0x17C860u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x17C864u;
        goto label_17c864;
    }
    ctx->pc = 0x17C85Cu;
    SET_GPR_U32(ctx, 31, 0x17C864u);
    ctx->pc = 0x17C860u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C864u; }
        else if (ctx->pc != 0x17C864u) { ctx->pc = 0x17C864u; }
    }
    if (ctx->pc != 0x17C864u) { return; }
    ctx->pc = 0x17C864u;
label_17c864:
    // 0x17c864: 0x1000000f
label_17c868:
    if (ctx->pc == 0x17C868u) {
        ctx->pc = 0x17C868u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C86Cu;
        goto label_17c86c;
    }
    ctx->pc = 0x17C864u;
    {
        const bool branch_taken_0x17c864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C868u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c864) {
            ctx->pc = 0x17C8A4u;
            goto label_17c8a4;
        }
    }
    ctx->pc = 0x17C86Cu;
label_17c86c:
    // 0x17c86c: 0x56400006
label_17c870:
    if (ctx->pc == 0x17C870u) {
        ctx->pc = 0x17C870u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x17C874u;
        goto label_17c874;
    }
    ctx->pc = 0x17C86Cu;
    {
        const bool branch_taken_0x17c86c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x17c86c) {
            ctx->pc = 0x17C870u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->pc = 0x17C888u;
            goto label_17c888;
        }
    }
    ctx->pc = 0x17C874u;
label_17c874:
    // 0x17c874: 0x8e030004
    ctx->pc = 0x17c874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c878:
    // 0x17c878: 0x8e220010
    ctx->pc = 0x17c878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_17c87c:
    // 0x17c87c: 0x431021
    ctx->pc = 0x17c87cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c880:
    // 0x17c880: 0x10000007
label_17c884:
    if (ctx->pc == 0x17C884u) {
        ctx->pc = 0x17C884u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x17C888u;
        goto label_17c888;
    }
    ctx->pc = 0x17C880u;
    {
        const bool branch_taken_0x17c880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C884u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x17c880) {
            ctx->pc = 0x17C8A0u;
            goto label_17c8a0;
        }
    }
    ctx->pc = 0x17C888u;
label_17c888:
    // 0x17c888: 0xae000000
    ctx->pc = 0x17c888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17c88c:
    // 0x17c88c: 0x10400004
label_17c890:
    if (ctx->pc == 0x17C890u) {
        ctx->pc = 0x17C890u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17C894u;
        goto label_17c894;
    }
    ctx->pc = 0x17C88Cu;
    {
        const bool branch_taken_0x17c88c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C890u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17c88c) {
            ctx->pc = 0x17C8A0u;
            goto label_17c8a0;
        }
    }
    ctx->pc = 0x17C894u;
label_17c894:
    // 0x17c894: 0x8e24002c
    ctx->pc = 0x17c894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_17c898:
    // 0x17c898: 0x40f809
label_17c89c:
    if (ctx->pc == 0x17C89Cu) {
        ctx->pc = 0x17C89Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C8A0u;
        goto label_17c8a0;
    }
    ctx->pc = 0x17C898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C8A0u);
        ctx->pc = 0x17C89Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C798u: goto label_17c798;
            case 0x17C79Cu: goto label_17c79c;
            case 0x17C7A0u: goto label_17c7a0;
            case 0x17C7A4u: goto label_17c7a4;
            case 0x17C7A8u: goto label_17c7a8;
            case 0x17C7ACu: goto label_17c7ac;
            case 0x17C7B0u: goto label_17c7b0;
            case 0x17C7B4u: goto label_17c7b4;
            case 0x17C7B8u: goto label_17c7b8;
            case 0x17C7BCu: goto label_17c7bc;
            case 0x17C7C0u: goto label_17c7c0;
            case 0x17C7C4u: goto label_17c7c4;
            case 0x17C7C8u: goto label_17c7c8;
            case 0x17C7CCu: goto label_17c7cc;
            case 0x17C7D0u: goto label_17c7d0;
            case 0x17C7D4u: goto label_17c7d4;
            case 0x17C7D8u: goto label_17c7d8;
            case 0x17C7DCu: goto label_17c7dc;
            case 0x17C7E0u: goto label_17c7e0;
            case 0x17C7E4u: goto label_17c7e4;
            case 0x17C7E8u: goto label_17c7e8;
            case 0x17C7ECu: goto label_17c7ec;
            case 0x17C7F0u: goto label_17c7f0;
            case 0x17C7F4u: goto label_17c7f4;
            case 0x17C7F8u: goto label_17c7f8;
            case 0x17C7FCu: goto label_17c7fc;
            case 0x17C800u: goto label_17c800;
            case 0x17C804u: goto label_17c804;
            case 0x17C808u: goto label_17c808;
            case 0x17C80Cu: goto label_17c80c;
            case 0x17C810u: goto label_17c810;
            case 0x17C814u: goto label_17c814;
            case 0x17C818u: goto label_17c818;
            case 0x17C81Cu: goto label_17c81c;
            case 0x17C820u: goto label_17c820;
            case 0x17C824u: goto label_17c824;
            case 0x17C828u: goto label_17c828;
            case 0x17C82Cu: goto label_17c82c;
            case 0x17C830u: goto label_17c830;
            case 0x17C834u: goto label_17c834;
            case 0x17C838u: goto label_17c838;
            case 0x17C83Cu: goto label_17c83c;
            case 0x17C840u: goto label_17c840;
            case 0x17C844u: goto label_17c844;
            case 0x17C848u: goto label_17c848;
            case 0x17C84Cu: goto label_17c84c;
            case 0x17C850u: goto label_17c850;
            case 0x17C854u: goto label_17c854;
            case 0x17C858u: goto label_17c858;
            case 0x17C85Cu: goto label_17c85c;
            case 0x17C860u: goto label_17c860;
            case 0x17C864u: goto label_17c864;
            case 0x17C868u: goto label_17c868;
            case 0x17C86Cu: goto label_17c86c;
            case 0x17C870u: goto label_17c870;
            case 0x17C874u: goto label_17c874;
            case 0x17C878u: goto label_17c878;
            case 0x17C87Cu: goto label_17c87c;
            case 0x17C880u: goto label_17c880;
            case 0x17C884u: goto label_17c884;
            case 0x17C888u: goto label_17c888;
            case 0x17C88Cu: goto label_17c88c;
            case 0x17C890u: goto label_17c890;
            case 0x17C894u: goto label_17c894;
            case 0x17C898u: goto label_17c898;
            case 0x17C89Cu: goto label_17c89c;
            case 0x17C8A0u: goto label_17c8a0;
            case 0x17C8A4u: goto label_17c8a4;
            case 0x17C8A8u: goto label_17c8a8;
            case 0x17C8ACu: goto label_17c8ac;
            case 0x17C8B0u: goto label_17c8b0;
            case 0x17C8B4u: goto label_17c8b4;
            case 0x17C8B8u: goto label_17c8b8;
            case 0x17C8BCu: goto label_17c8bc;
            case 0x17C8C0u: goto label_17c8c0;
            case 0x17C8C4u: goto label_17c8c4;
            case 0x17C8C8u: goto label_17c8c8;
            case 0x17C8CCu: goto label_17c8cc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C8A0u; }
            if (ctx->pc != 0x17C8A0u) { return; }
        }
    }
    ctx->pc = 0x17C8A0u;
label_17c8a0:
    // 0x17c8a0: 0xdfbf0030
    ctx->pc = 0x17c8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c8a4:
    // 0x17c8a4: 0xdfb20020
    ctx->pc = 0x17c8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c8a8:
    // 0x17c8a8: 0xdfb10010
    ctx->pc = 0x17c8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c8ac:
    // 0x17c8ac: 0xdfb00000
    ctx->pc = 0x17c8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c8b0:
    // 0x17c8b0: 0x805efc2
label_17c8b4:
    if (ctx->pc == 0x17C8B4u) {
        ctx->pc = 0x17C8B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17C8B8u;
        goto label_17c8b8;
    }
    ctx->pc = 0x17C8B0u;
    ctx->pc = 0x17C8B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17C8B8u;
label_17c8b8:
    // 0x17c8b8: 0xdfbf0030
    ctx->pc = 0x17c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c8bc:
    // 0x17c8bc: 0xdfb20020
    ctx->pc = 0x17c8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c8c0:
    // 0x17c8c0: 0xdfb10010
    ctx->pc = 0x17c8c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c8c4:
    // 0x17c8c4: 0xdfb00000
    ctx->pc = 0x17c8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c8c8:
    // 0x17c8c8: 0x3e00008
label_17c8cc:
    if (ctx->pc == 0x17C8CCu) {
        ctx->pc = 0x17C8CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17C8D0u;
        goto label_fallthrough_0x17c8c8;
    }
    ctx->pc = 0x17C8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C8CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C798u: goto label_17c798;
            case 0x17C79Cu: goto label_17c79c;
            case 0x17C7A0u: goto label_17c7a0;
            case 0x17C7A4u: goto label_17c7a4;
            case 0x17C7A8u: goto label_17c7a8;
            case 0x17C7ACu: goto label_17c7ac;
            case 0x17C7B0u: goto label_17c7b0;
            case 0x17C7B4u: goto label_17c7b4;
            case 0x17C7B8u: goto label_17c7b8;
            case 0x17C7BCu: goto label_17c7bc;
            case 0x17C7C0u: goto label_17c7c0;
            case 0x17C7C4u: goto label_17c7c4;
            case 0x17C7C8u: goto label_17c7c8;
            case 0x17C7CCu: goto label_17c7cc;
            case 0x17C7D0u: goto label_17c7d0;
            case 0x17C7D4u: goto label_17c7d4;
            case 0x17C7D8u: goto label_17c7d8;
            case 0x17C7DCu: goto label_17c7dc;
            case 0x17C7E0u: goto label_17c7e0;
            case 0x17C7E4u: goto label_17c7e4;
            case 0x17C7E8u: goto label_17c7e8;
            case 0x17C7ECu: goto label_17c7ec;
            case 0x17C7F0u: goto label_17c7f0;
            case 0x17C7F4u: goto label_17c7f4;
            case 0x17C7F8u: goto label_17c7f8;
            case 0x17C7FCu: goto label_17c7fc;
            case 0x17C800u: goto label_17c800;
            case 0x17C804u: goto label_17c804;
            case 0x17C808u: goto label_17c808;
            case 0x17C80Cu: goto label_17c80c;
            case 0x17C810u: goto label_17c810;
            case 0x17C814u: goto label_17c814;
            case 0x17C818u: goto label_17c818;
            case 0x17C81Cu: goto label_17c81c;
            case 0x17C820u: goto label_17c820;
            case 0x17C824u: goto label_17c824;
            case 0x17C828u: goto label_17c828;
            case 0x17C82Cu: goto label_17c82c;
            case 0x17C830u: goto label_17c830;
            case 0x17C834u: goto label_17c834;
            case 0x17C838u: goto label_17c838;
            case 0x17C83Cu: goto label_17c83c;
            case 0x17C840u: goto label_17c840;
            case 0x17C844u: goto label_17c844;
            case 0x17C848u: goto label_17c848;
            case 0x17C84Cu: goto label_17c84c;
            case 0x17C850u: goto label_17c850;
            case 0x17C854u: goto label_17c854;
            case 0x17C858u: goto label_17c858;
            case 0x17C85Cu: goto label_17c85c;
            case 0x17C860u: goto label_17c860;
            case 0x17C864u: goto label_17c864;
            case 0x17C868u: goto label_17c868;
            case 0x17C86Cu: goto label_17c86c;
            case 0x17C870u: goto label_17c870;
            case 0x17C874u: goto label_17c874;
            case 0x17C878u: goto label_17c878;
            case 0x17C87Cu: goto label_17c87c;
            case 0x17C880u: goto label_17c880;
            case 0x17C884u: goto label_17c884;
            case 0x17C888u: goto label_17c888;
            case 0x17C88Cu: goto label_17c88c;
            case 0x17C890u: goto label_17c890;
            case 0x17C894u: goto label_17c894;
            case 0x17C898u: goto label_17c898;
            case 0x17C89Cu: goto label_17c89c;
            case 0x17C8A0u: goto label_17c8a0;
            case 0x17C8A4u: goto label_17c8a4;
            case 0x17C8A8u: goto label_17c8a8;
            case 0x17C8ACu: goto label_17c8ac;
            case 0x17C8B0u: goto label_17c8b0;
            case 0x17C8B4u: goto label_17c8b4;
            case 0x17C8B8u: goto label_17c8b8;
            case 0x17C8BCu: goto label_17c8bc;
            case 0x17C8C0u: goto label_17c8c0;
            case 0x17C8C4u: goto label_17c8c4;
            case 0x17C8C8u: goto label_17c8c8;
            case 0x17C8CCu: goto label_17c8cc;
            default: break;
        }
        return;
    }
label_fallthrough_0x17c8c8:
    ctx->pc = 0x17C8D0u;
}
