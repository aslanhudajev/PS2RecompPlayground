#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLoadLightMaps
// Address: 0x2ae578 - 0x2ae6cc
void pbLoadLightMaps_0x2ae578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae578u;

    // 0x2ae578: 0x27bdff60
    ctx->pc = 0x2ae578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ae57c: 0xffbf0090
    ctx->pc = 0x2ae57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ae580: 0xffbe0080
    ctx->pc = 0x2ae580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2ae584: 0xffb70070
    ctx->pc = 0x2ae584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2ae588: 0xffb60060
    ctx->pc = 0x2ae588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ae58c: 0xffb50050
    ctx->pc = 0x2ae58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ae590: 0xffb40040
    ctx->pc = 0x2ae590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ae594: 0xffb30030
    ctx->pc = 0x2ae594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ae598: 0xffb20020
    ctx->pc = 0x2ae598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae59c: 0xffb10010
    ctx->pc = 0x2ae59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae5a0: 0xffb00000
    ctx->pc = 0x2ae5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae5a4: 0x3c020036
    ctx->pc = 0x2ae5a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ae5a8: 0x8c57dee0
    ctx->pc = 0x2ae5a8u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ae5ac: 0x3c030037
    ctx->pc = 0x2ae5acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ae5b0: 0x24020001
    ctx->pc = 0x2ae5b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae5b4: 0xac6285fc
    ctx->pc = 0x2ae5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936060), GPR_U32(ctx, 2));
    // 0x2ae5b8: 0xa02d
    ctx->pc = 0x2ae5b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5bc: 0x8ee20038
    ctx->pc = 0x2ae5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 56)));
    // 0x2ae5c0: 0x40182d
    ctx->pc = 0x2ae5c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5c4: 0x8c420000
    ctx->pc = 0x2ae5c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae5c8: 0x1840002e
    ctx->pc = 0x2AE5C8u;
    {
        const bool branch_taken_0x2ae5c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AE5CCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ae5c8) {
            ctx->pc = 0x2AE684u;
            goto label_2ae684;
        }
    }
    ctx->pc = 0x2AE5D0u;
    // 0x2ae5d0: 0x141100
    ctx->pc = 0x2ae5d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 4));
    // 0x2ae5d4: 0x0
    ctx->pc = 0x2ae5d4u;
    // NOP
label_2ae5d8:
    // 0x2ae5d8: 0x24420004
    ctx->pc = 0x2ae5d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ae5dc: 0x438821
    ctx->pc = 0x2ae5dcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae5e0: 0x8e22000c
    ctx->pc = 0x2ae5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ae5e4: 0x54400022
    ctx->pc = 0x2AE5E4u;
    {
        const bool branch_taken_0x2ae5e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ae5e4) {
            ctx->pc = 0x2AE5E8u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x2AE670u;
            goto label_2ae670;
        }
    }
    ctx->pc = 0x2AE5ECu;
    // 0x2ae5ec: 0x8e240000
    ctx->pc = 0x2ae5ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ae5f0: 0x9482007e
    ctx->pc = 0x2ae5f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 126)));
    // 0x2ae5f4: 0x5040001e
    ctx->pc = 0x2AE5F4u;
    {
        const bool branch_taken_0x2ae5f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ae5f4) {
            ctx->pc = 0x2AE5F8u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x2AE670u;
            goto label_2ae670;
        }
    }
    ctx->pc = 0x2AE5FCu;
    // 0x2ae5fc: 0x9496007c
    ctx->pc = 0x2ae5fcu;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2ae600: 0x1040001a
    ctx->pc = 0x2AE600u;
    {
        const bool branch_taken_0x2ae600 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE604u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ae600) {
            ctx->pc = 0x2AE66Cu;
            goto label_2ae66c;
        }
    }
    ctx->pc = 0x2AE608u;
    // 0x2ae608: 0x14ac00
    ctx->pc = 0x2ae608u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 16));
    // 0x2ae60c: 0x3c1e003b
    ctx->pc = 0x2ae60cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)59 << 16));
    // 0x2ae610: 0x149900
    ctx->pc = 0x2ae610u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 20), 4));
    // 0x2ae614: 0x0
    ctx->pc = 0x2ae614u;
    // NOP
label_2ae618:
    // 0x2ae618: 0x2d02021
    ctx->pc = 0x2ae618u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2ae61c: 0x3084ffff
    ctx->pc = 0x2ae61cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x2ae620: 0xc0ab6e2
    ctx->pc = 0x2AE620u;
    SET_GPR_U32(ctx, 31, 0x2AE628u);
    ctx->pc = 0x2AE624u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE628u; }
    }
    if (ctx->pc != 0x2AE628u) { return; }
    ctx->pc = 0x2AE628u;
    // 0x2ae628: 0x5440000b
    ctx->pc = 0x2AE628u;
    {
        const bool branch_taken_0x2ae628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ae628) {
            ctx->pc = 0x2AE62Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2AE658u;
            goto label_2ae658;
        }
    }
    ctx->pc = 0x2AE630u;
    // 0x2ae630: 0x8e230000
    ctx->pc = 0x2ae630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ae634: 0x8ee20038
    ctx->pc = 0x2ae634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 56)));
    // 0x2ae638: 0x531021
    ctx->pc = 0x2ae638u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ae63c: 0x27c4f578
    ctx->pc = 0x2ae63cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 4294964600));
    // 0x2ae640: 0x24050200
    ctx->pc = 0x2ae640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ae644: 0x26060001
    ctx->pc = 0x2ae644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ae648: 0x9467007e
    ctx->pc = 0x2ae648u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x2ae64c: 0xc0b4976
    ctx->pc = 0x2AE64Cu;
    SET_GPR_U32(ctx, 31, 0x2AE654u);
    ctx->pc = 0x2AE650u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE654u; }
    }
    if (ctx->pc != 0x2AE654u) { return; }
    ctx->pc = 0x2AE654u;
    // 0x2ae654: 0x26100001
    ctx->pc = 0x2ae654u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2ae658:
    // 0x2ae658: 0x8e220000
    ctx->pc = 0x2ae658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ae65c: 0x9442007e
    ctx->pc = 0x2ae65cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 126)));
    // 0x2ae660: 0x202102a
    ctx->pc = 0x2ae660u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2ae664: 0x1440ffec
    ctx->pc = 0x2AE664u;
    {
        const bool branch_taken_0x2ae664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE668u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2ae664) {
            ctx->pc = 0x2AE618u;
            goto label_2ae618;
        }
    }
    ctx->pc = 0x2AE66Cu;
label_2ae66c:
    // 0x2ae66c: 0x26940001
    ctx->pc = 0x2ae66cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_2ae670:
    // 0x2ae670: 0x8ee30038
    ctx->pc = 0x2ae670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 56)));
    // 0x2ae674: 0x8c620000
    ctx->pc = 0x2ae674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae678: 0x282102a
    ctx->pc = 0x2ae678u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x2ae67c: 0x1440ffd6
    ctx->pc = 0x2AE67Cu;
    {
        const bool branch_taken_0x2ae67c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE680u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 4));
        if (branch_taken_0x2ae67c) {
            ctx->pc = 0x2AE5D8u;
            goto label_2ae5d8;
        }
    }
    ctx->pc = 0x2AE684u;
label_2ae684:
    // 0x2ae684: 0x16400004
    ctx->pc = 0x2AE684u;
    {
        const bool branch_taken_0x2ae684 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE688u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ae684) {
            ctx->pc = 0x2AE698u;
            goto label_2ae698;
        }
    }
    ctx->pc = 0x2AE68Cu;
    // 0x2ae68c: 0xc0ab6e2
    ctx->pc = 0x2AE68Cu;
    SET_GPR_U32(ctx, 31, 0x2AE694u);
    ctx->pc = 0x2AE690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE694u; }
    }
    if (ctx->pc != 0x2AE694u) { return; }
    ctx->pc = 0x2AE694u;
    // 0x2ae694: 0x3c020037
    ctx->pc = 0x2ae694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2ae698:
    // 0x2ae698: 0xac4085fc
    ctx->pc = 0x2ae698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936060), GPR_U32(ctx, 0));
    // 0x2ae69c: 0xdfbf0090
    ctx->pc = 0x2ae69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ae6a0: 0xdfbe0080
    ctx->pc = 0x2ae6a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae6a4: 0xdfb70070
    ctx->pc = 0x2ae6a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae6a8: 0xdfb60060
    ctx->pc = 0x2ae6a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae6ac: 0xdfb50050
    ctx->pc = 0x2ae6acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae6b0: 0xdfb40040
    ctx->pc = 0x2ae6b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae6b4: 0xdfb30030
    ctx->pc = 0x2ae6b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae6b8: 0xdfb20020
    ctx->pc = 0x2ae6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae6bc: 0xdfb10010
    ctx->pc = 0x2ae6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae6c0: 0xdfb00000
    ctx->pc = 0x2ae6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae6c4: 0x3e00008
    ctx->pc = 0x2AE6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE6C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE5D8u: goto label_2ae5d8;
            case 0x2AE618u: goto label_2ae618;
            case 0x2AE658u: goto label_2ae658;
            case 0x2AE66Cu: goto label_2ae66c;
            case 0x2AE670u: goto label_2ae670;
            case 0x2AE684u: goto label_2ae684;
            case 0x2AE698u: goto label_2ae698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AE6CCu;
}
