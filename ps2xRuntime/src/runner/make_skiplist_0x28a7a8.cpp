#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: make_skiplist
// Address: 0x28a7a8 - 0x28a954
void make_skiplist_0x28a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28a7a8u;

label_28a7a8:
    // 0x28a7a8: 0x27bdffc0
    ctx->pc = 0x28a7a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_28a7ac:
    // 0x28a7ac: 0xffbf0030
    ctx->pc = 0x28a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28a7b0:
    // 0x28a7b0: 0xffb20020
    ctx->pc = 0x28a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28a7b4:
    // 0x28a7b4: 0xffb10010
    ctx->pc = 0x28a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28a7b8:
    // 0x28a7b8: 0xffb00000
    ctx->pc = 0x28a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28a7bc:
    // 0x28a7bc: 0x80882d
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a7c0:
    // 0x28a7c0: 0x24032b00
    ctx->pc = 0x28a7c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_28a7c4:
    // 0x28a7c4: 0x2231818
    ctx->pc = 0x28a7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28a7c8:
    // 0x28a7c8: 0x3c020032
    ctx->pc = 0x28a7c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28a7cc:
    // 0x28a7cc: 0x24421bc0
    ctx->pc = 0x28a7ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_28a7d0:
    // 0x28a7d0: 0x628021
    ctx->pc = 0x28a7d0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28a7d4:
    // 0x28a7d4: 0x3c020035
    ctx->pc = 0x28a7d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28a7d8:
    // 0x28a7d8: 0x8c42b52c
    ctx->pc = 0x28a7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
label_28a7dc:
    // 0x28a7dc: 0x18400057
label_28a7e0:
    if (ctx->pc == 0x28A7E0u) {
        ctx->pc = 0x28A7E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28A7E4u;
        goto label_28a7e4;
    }
    ctx->pc = 0x28A7DCu;
    {
        const bool branch_taken_0x28a7dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28A7E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28a7dc) {
            ctx->pc = 0x28A93Cu;
            goto label_28a93c;
        }
    }
    ctx->pc = 0x28A7E4u;
label_28a7e4:
    // 0x28a7e4: 0x3c020035
    ctx->pc = 0x28a7e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28a7e8:
    // 0x28a7e8: 0x8c43b528
    ctx->pc = 0x28a7e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
label_28a7ec:
    // 0x28a7ec: 0x24020050
    ctx->pc = 0x28a7ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_28a7f0:
    // 0x28a7f0: 0x2421018
    ctx->pc = 0x28a7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28a7f4:
    // 0x28a7f4: 0x431021
    ctx->pc = 0x28a7f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28a7f8:
    // 0x28a7f8: 0x8e031a20
    ctx->pc = 0x28a7f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
label_28a7fc:
    // 0x28a7fc: 0x8c420048
    ctx->pc = 0x28a7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_28a800:
    // 0x28a800: 0x62182a
    ctx->pc = 0x28a800u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_28a804:
    // 0x28a804: 0x14600040
label_28a808:
    if (ctx->pc == 0x28A808u) {
        ctx->pc = 0x28A808u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x28A80Cu;
        goto label_28a80c;
    }
    ctx->pc = 0x28A804u;
    {
        const bool branch_taken_0x28a804 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x28A808u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x28a804) {
            ctx->pc = 0x28A908u;
            goto label_28a908;
        }
    }
    ctx->pc = 0x28A80Cu;
label_28a80c:
    // 0x28a80c: 0x3c020035
    ctx->pc = 0x28a80cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28a810:
    // 0x28a810: 0x8c43b528
    ctx->pc = 0x28a810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
label_28a814:
    // 0x28a814: 0x24020050
    ctx->pc = 0x28a814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_28a818:
    // 0x28a818: 0x2421018
    ctx->pc = 0x28a818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28a81c:
    // 0x28a81c: 0x431021
    ctx->pc = 0x28a81cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28a820:
    // 0x28a820: 0x8c420044
    ctx->pc = 0x28a820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_28a824:
    // 0x28a824: 0x2443ffff
    ctx->pc = 0x28a824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_28a828:
    // 0x28a828: 0x2c620011
    ctx->pc = 0x28a828u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 17));
label_28a82c:
    // 0x28a82c: 0x1040003d
label_28a830:
    if (ctx->pc == 0x28A830u) {
        ctx->pc = 0x28A830u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x28A834u;
        goto label_28a834;
    }
    ctx->pc = 0x28A82Cu;
    {
        const bool branch_taken_0x28a82c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A830u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x28a82c) {
            ctx->pc = 0x28A924u;
            goto label_28a924;
        }
    }
    ctx->pc = 0x28A834u;
label_28a834:
    // 0x28a834: 0x2442d900
    ctx->pc = 0x28a834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957312));
label_28a838:
    // 0x28a838: 0x31880
    ctx->pc = 0x28a838u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_28a83c:
    // 0x28a83c: 0x621821
    ctx->pc = 0x28a83cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28a840:
    // 0x28a840: 0x8c620000
    ctx->pc = 0x28a840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28a844:
    // 0x28a844: 0x400008
label_28a848:
    if (ctx->pc == 0x28A848u) {
        ctx->pc = 0x28A84Cu;
        goto label_28a84c;
    }
    ctx->pc = 0x28A844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A7A8u: goto label_28a7a8;
            case 0x28A7ACu: goto label_28a7ac;
            case 0x28A7B0u: goto label_28a7b0;
            case 0x28A7B4u: goto label_28a7b4;
            case 0x28A7B8u: goto label_28a7b8;
            case 0x28A7BCu: goto label_28a7bc;
            case 0x28A7C0u: goto label_28a7c0;
            case 0x28A7C4u: goto label_28a7c4;
            case 0x28A7C8u: goto label_28a7c8;
            case 0x28A7CCu: goto label_28a7cc;
            case 0x28A7D0u: goto label_28a7d0;
            case 0x28A7D4u: goto label_28a7d4;
            case 0x28A7D8u: goto label_28a7d8;
            case 0x28A7DCu: goto label_28a7dc;
            case 0x28A7E0u: goto label_28a7e0;
            case 0x28A7E4u: goto label_28a7e4;
            case 0x28A7E8u: goto label_28a7e8;
            case 0x28A7ECu: goto label_28a7ec;
            case 0x28A7F0u: goto label_28a7f0;
            case 0x28A7F4u: goto label_28a7f4;
            case 0x28A7F8u: goto label_28a7f8;
            case 0x28A7FCu: goto label_28a7fc;
            case 0x28A800u: goto label_28a800;
            case 0x28A804u: goto label_28a804;
            case 0x28A808u: goto label_28a808;
            case 0x28A80Cu: goto label_28a80c;
            case 0x28A810u: goto label_28a810;
            case 0x28A814u: goto label_28a814;
            case 0x28A818u: goto label_28a818;
            case 0x28A81Cu: goto label_28a81c;
            case 0x28A820u: goto label_28a820;
            case 0x28A824u: goto label_28a824;
            case 0x28A828u: goto label_28a828;
            case 0x28A82Cu: goto label_28a82c;
            case 0x28A830u: goto label_28a830;
            case 0x28A834u: goto label_28a834;
            case 0x28A838u: goto label_28a838;
            case 0x28A83Cu: goto label_28a83c;
            case 0x28A840u: goto label_28a840;
            case 0x28A844u: goto label_28a844;
            case 0x28A848u: goto label_28a848;
            case 0x28A84Cu: goto label_28a84c;
            case 0x28A850u: goto label_28a850;
            case 0x28A854u: goto label_28a854;
            case 0x28A858u: goto label_28a858;
            case 0x28A85Cu: goto label_28a85c;
            case 0x28A860u: goto label_28a860;
            case 0x28A864u: goto label_28a864;
            case 0x28A868u: goto label_28a868;
            case 0x28A86Cu: goto label_28a86c;
            case 0x28A870u: goto label_28a870;
            case 0x28A874u: goto label_28a874;
            case 0x28A878u: goto label_28a878;
            case 0x28A87Cu: goto label_28a87c;
            case 0x28A880u: goto label_28a880;
            case 0x28A884u: goto label_28a884;
            case 0x28A888u: goto label_28a888;
            case 0x28A88Cu: goto label_28a88c;
            case 0x28A890u: goto label_28a890;
            case 0x28A894u: goto label_28a894;
            case 0x28A898u: goto label_28a898;
            case 0x28A89Cu: goto label_28a89c;
            case 0x28A8A0u: goto label_28a8a0;
            case 0x28A8A4u: goto label_28a8a4;
            case 0x28A8A8u: goto label_28a8a8;
            case 0x28A8ACu: goto label_28a8ac;
            case 0x28A8B0u: goto label_28a8b0;
            case 0x28A8B4u: goto label_28a8b4;
            case 0x28A8B8u: goto label_28a8b8;
            case 0x28A8BCu: goto label_28a8bc;
            case 0x28A8C0u: goto label_28a8c0;
            case 0x28A8C4u: goto label_28a8c4;
            case 0x28A8C8u: goto label_28a8c8;
            case 0x28A8CCu: goto label_28a8cc;
            case 0x28A8D0u: goto label_28a8d0;
            case 0x28A8D4u: goto label_28a8d4;
            case 0x28A8D8u: goto label_28a8d8;
            case 0x28A8DCu: goto label_28a8dc;
            case 0x28A8E0u: goto label_28a8e0;
            case 0x28A8E4u: goto label_28a8e4;
            case 0x28A8E8u: goto label_28a8e8;
            case 0x28A8ECu: goto label_28a8ec;
            case 0x28A8F0u: goto label_28a8f0;
            case 0x28A8F4u: goto label_28a8f4;
            case 0x28A8F8u: goto label_28a8f8;
            case 0x28A8FCu: goto label_28a8fc;
            case 0x28A900u: goto label_28a900;
            case 0x28A904u: goto label_28a904;
            case 0x28A908u: goto label_28a908;
            case 0x28A90Cu: goto label_28a90c;
            case 0x28A910u: goto label_28a910;
            case 0x28A914u: goto label_28a914;
            case 0x28A918u: goto label_28a918;
            case 0x28A91Cu: goto label_28a91c;
            case 0x28A920u: goto label_28a920;
            case 0x28A924u: goto label_28a924;
            case 0x28A928u: goto label_28a928;
            case 0x28A92Cu: goto label_28a92c;
            case 0x28A930u: goto label_28a930;
            case 0x28A934u: goto label_28a934;
            case 0x28A938u: goto label_28a938;
            case 0x28A93Cu: goto label_28a93c;
            case 0x28A940u: goto label_28a940;
            case 0x28A944u: goto label_28a944;
            case 0x28A948u: goto label_28a948;
            case 0x28A94Cu: goto label_28a94c;
            case 0x28A950u: goto label_28a950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A84Cu;
label_28a84c:
    // 0x28a84c: 0x3c020034
    ctx->pc = 0x28a84cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_28a850:
    // 0x28a850: 0x8e031a14
    ctx->pc = 0x28a850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6676)));
label_28a854:
    // 0x28a854: 0x8c42e814
    ctx->pc = 0x28a854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961172)));
label_28a858:
    // 0x28a858: 0x62182a
    ctx->pc = 0x28a858u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_28a85c:
    // 0x28a85c: 0x54600032
label_28a860:
    if (ctx->pc == 0x28A860u) {
        ctx->pc = 0x28A860u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x28A864u;
        goto label_28a864;
    }
    ctx->pc = 0x28A85Cu;
    {
        const bool branch_taken_0x28a85c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x28a85c) {
            ctx->pc = 0x28A860u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x28A928u;
            goto label_28a928;
        }
    }
    ctx->pc = 0x28A864u;
label_28a864:
    // 0x28a864: 0x10000028
label_28a868:
    if (ctx->pc == 0x28A868u) {
        ctx->pc = 0x28A868u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x28A86Cu;
        goto label_28a86c;
    }
    ctx->pc = 0x28A864u;
    {
        const bool branch_taken_0x28a864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A868u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x28a864) {
            ctx->pc = 0x28A908u;
            goto label_28a908;
        }
    }
    ctx->pc = 0x28A86Cu;
label_28a86c:
    // 0x28a86c: 0x3c020034
    ctx->pc = 0x28a86cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_28a870:
    // 0x28a870: 0x8e031a18
    ctx->pc = 0x28a870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6680)));
label_28a874:
    // 0x28a874: 0x8c42e818
    ctx->pc = 0x28a874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_28a878:
    // 0x28a878: 0x62182a
    ctx->pc = 0x28a878u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_28a87c:
    // 0x28a87c: 0x5460002a
label_28a880:
    if (ctx->pc == 0x28A880u) {
        ctx->pc = 0x28A880u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x28A884u;
        goto label_28a884;
    }
    ctx->pc = 0x28A87Cu;
    {
        const bool branch_taken_0x28a87c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x28a87c) {
            ctx->pc = 0x28A880u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x28A928u;
            goto label_28a928;
        }
    }
    ctx->pc = 0x28A884u;
label_28a884:
    // 0x28a884: 0x10000020
label_28a888:
    if (ctx->pc == 0x28A888u) {
        ctx->pc = 0x28A888u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x28A88Cu;
        goto label_28a88c;
    }
    ctx->pc = 0x28A884u;
    {
        const bool branch_taken_0x28a884 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A888u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x28a884) {
            ctx->pc = 0x28A908u;
            goto label_28a908;
        }
    }
    ctx->pc = 0x28A88Cu;
label_28a88c:
    // 0x28a88c: 0x3c014479
    ctx->pc = 0x28a88cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
label_28a890:
    // 0x28a890: 0x3421c000
    ctx->pc = 0x28a890u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
label_28a894:
    // 0x28a894: 0x44810800
    ctx->pc = 0x28a894u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_28a898:
    // 0x28a898: 0xc6000108
    ctx->pc = 0x28a898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a89c:
    // 0x28a89c: 0x46000836
    ctx->pc = 0x28a89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a8a0:
    // 0x28a8a0: 0x10000017
label_28a8a4:
    if (ctx->pc == 0x28A8A4u) {
        ctx->pc = 0x28A8A8u;
        goto label_28a8a8;
    }
    ctx->pc = 0x28A8A0u;
    {
        const bool branch_taken_0x28a8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28a8a0) {
            ctx->pc = 0x28A900u;
            goto label_28a900;
        }
    }
    ctx->pc = 0x28A8A8u;
label_28a8a8:
    // 0x28a8a8: 0x3c014479
    ctx->pc = 0x28a8a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
label_28a8ac:
    // 0x28a8ac: 0x3421c000
    ctx->pc = 0x28a8acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
label_28a8b0:
    // 0x28a8b0: 0x44810800
    ctx->pc = 0x28a8b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_28a8b4:
    // 0x28a8b4: 0xc6000114
    ctx->pc = 0x28a8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a8b8:
    // 0x28a8b8: 0x46000836
    ctx->pc = 0x28a8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a8bc:
    // 0x28a8bc: 0x10000010
label_28a8c0:
    if (ctx->pc == 0x28A8C0u) {
        ctx->pc = 0x28A8C4u;
        goto label_28a8c4;
    }
    ctx->pc = 0x28A8BCu;
    {
        const bool branch_taken_0x28a8bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28a8bc) {
            ctx->pc = 0x28A900u;
            goto label_28a900;
        }
    }
    ctx->pc = 0x28A8C4u;
label_28a8c4:
    // 0x28a8c4: 0x3c014479
    ctx->pc = 0x28a8c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
label_28a8c8:
    // 0x28a8c8: 0x3421c000
    ctx->pc = 0x28a8c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
label_28a8cc:
    // 0x28a8cc: 0x44810000
    ctx->pc = 0x28a8ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_28a8d0:
    // 0x28a8d0: 0x10000009
label_28a8d4:
    if (ctx->pc == 0x28A8D4u) {
        ctx->pc = 0x28A8D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x28A8D8u;
        goto label_28a8d8;
    }
    ctx->pc = 0x28A8D0u;
    {
        const bool branch_taken_0x28a8d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A8D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x28a8d0) {
            ctx->pc = 0x28A8F8u;
            goto label_28a8f8;
        }
    }
    ctx->pc = 0x28A8D8u;
label_28a8d8:
    // 0x28a8d8: 0x3c014479
    ctx->pc = 0x28a8d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
label_28a8dc:
    // 0x28a8dc: 0x3421c000
    ctx->pc = 0x28a8dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
label_28a8e0:
    // 0x28a8e0: 0x44810000
    ctx->pc = 0x28a8e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_28a8e4:
    // 0x28a8e4: 0x10000004
label_28a8e8:
    if (ctx->pc == 0x28A8E8u) {
        ctx->pc = 0x28A8E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x28A8ECu;
        goto label_28a8ec;
    }
    ctx->pc = 0x28A8E4u;
    {
        const bool branch_taken_0x28a8e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A8E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x28a8e4) {
            ctx->pc = 0x28A8F8u;
            goto label_28a8f8;
        }
    }
    ctx->pc = 0x28A8ECu;
label_28a8ec:
    // 0x28a8ec: 0xc08c96a
label_28a8f0:
    if (ctx->pc == 0x28A8F0u) {
        ctx->pc = 0x28A8F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28A8F4u;
        goto label_28a8f4;
    }
    ctx->pc = 0x28A8ECu;
    SET_GPR_U32(ctx, 31, 0x28A8F4u);
    ctx->pc = 0x28A8F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2325A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_max_health_0x2325a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A8F4u; }
    }
    if (ctx->pc != 0x28A8F4u) { return; }
    ctx->pc = 0x28A8F4u;
label_28a8f4:
    // 0x28a8f4: 0xc6011a10
    ctx->pc = 0x28a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28a8f8:
    // 0x28a8f8: 0x46010036
    ctx->pc = 0x28a8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a8fc:
    // 0x28a8fc: 0x0
    ctx->pc = 0x28a8fcu;
    // NOP
label_28a900:
    // 0x28a900: 0x45000008
label_28a904:
    if (ctx->pc == 0x28A904u) {
        ctx->pc = 0x28A904u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        ctx->pc = 0x28A908u;
        goto label_28a908;
    }
    ctx->pc = 0x28A900u;
    {
        const bool branch_taken_0x28a900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A904u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x28a900) {
            ctx->pc = 0x28A924u;
            goto label_28a924;
        }
    }
    ctx->pc = 0x28A908u;
label_28a908:
    // 0x28a908: 0x2484bd30
    ctx->pc = 0x28a908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950192));
label_28a90c:
    // 0x28a90c: 0x121880
    ctx->pc = 0x28a90cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_28a910:
    // 0x28a910: 0x111200
    ctx->pc = 0x28a910u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 8));
label_28a914:
    // 0x28a914: 0x621821
    ctx->pc = 0x28a914u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28a918:
    // 0x28a918: 0x641821
    ctx->pc = 0x28a918u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28a91c:
    // 0x28a91c: 0x24020001
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28a920:
    // 0x28a920: 0xac620000
    ctx->pc = 0x28a920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28a924:
    // 0x28a924: 0x26520001
    ctx->pc = 0x28a924u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_28a928:
    // 0x28a928: 0x3c020035
    ctx->pc = 0x28a928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28a92c:
    // 0x28a92c: 0x8c42b52c
    ctx->pc = 0x28a92cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948140)));
label_28a930:
    // 0x28a930: 0x52102a
    ctx->pc = 0x28a930u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
label_28a934:
    // 0x28a934: 0x1040ffac
label_28a938:
    if (ctx->pc == 0x28A938u) {
        ctx->pc = 0x28A938u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x28A93Cu;
        goto label_28a93c;
    }
    ctx->pc = 0x28A934u;
    {
        const bool branch_taken_0x28a934 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28A938u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28a934) {
            ctx->pc = 0x28A7E8u;
            goto label_28a7e8;
        }
    }
    ctx->pc = 0x28A93Cu;
label_28a93c:
    // 0x28a93c: 0xdfbf0030
    ctx->pc = 0x28a93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28a940:
    // 0x28a940: 0xdfb20020
    ctx->pc = 0x28a940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28a944:
    // 0x28a944: 0xdfb10010
    ctx->pc = 0x28a944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28a948:
    // 0x28a948: 0xdfb00000
    ctx->pc = 0x28a948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28a94c:
    // 0x28a94c: 0x3e00008
label_28a950:
    if (ctx->pc == 0x28A950u) {
        ctx->pc = 0x28A950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28A954u;
        goto label_fallthrough_0x28a94c;
    }
    ctx->pc = 0x28A94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A7A8u: goto label_28a7a8;
            case 0x28A7ACu: goto label_28a7ac;
            case 0x28A7B0u: goto label_28a7b0;
            case 0x28A7B4u: goto label_28a7b4;
            case 0x28A7B8u: goto label_28a7b8;
            case 0x28A7BCu: goto label_28a7bc;
            case 0x28A7C0u: goto label_28a7c0;
            case 0x28A7C4u: goto label_28a7c4;
            case 0x28A7C8u: goto label_28a7c8;
            case 0x28A7CCu: goto label_28a7cc;
            case 0x28A7D0u: goto label_28a7d0;
            case 0x28A7D4u: goto label_28a7d4;
            case 0x28A7D8u: goto label_28a7d8;
            case 0x28A7DCu: goto label_28a7dc;
            case 0x28A7E0u: goto label_28a7e0;
            case 0x28A7E4u: goto label_28a7e4;
            case 0x28A7E8u: goto label_28a7e8;
            case 0x28A7ECu: goto label_28a7ec;
            case 0x28A7F0u: goto label_28a7f0;
            case 0x28A7F4u: goto label_28a7f4;
            case 0x28A7F8u: goto label_28a7f8;
            case 0x28A7FCu: goto label_28a7fc;
            case 0x28A800u: goto label_28a800;
            case 0x28A804u: goto label_28a804;
            case 0x28A808u: goto label_28a808;
            case 0x28A80Cu: goto label_28a80c;
            case 0x28A810u: goto label_28a810;
            case 0x28A814u: goto label_28a814;
            case 0x28A818u: goto label_28a818;
            case 0x28A81Cu: goto label_28a81c;
            case 0x28A820u: goto label_28a820;
            case 0x28A824u: goto label_28a824;
            case 0x28A828u: goto label_28a828;
            case 0x28A82Cu: goto label_28a82c;
            case 0x28A830u: goto label_28a830;
            case 0x28A834u: goto label_28a834;
            case 0x28A838u: goto label_28a838;
            case 0x28A83Cu: goto label_28a83c;
            case 0x28A840u: goto label_28a840;
            case 0x28A844u: goto label_28a844;
            case 0x28A848u: goto label_28a848;
            case 0x28A84Cu: goto label_28a84c;
            case 0x28A850u: goto label_28a850;
            case 0x28A854u: goto label_28a854;
            case 0x28A858u: goto label_28a858;
            case 0x28A85Cu: goto label_28a85c;
            case 0x28A860u: goto label_28a860;
            case 0x28A864u: goto label_28a864;
            case 0x28A868u: goto label_28a868;
            case 0x28A86Cu: goto label_28a86c;
            case 0x28A870u: goto label_28a870;
            case 0x28A874u: goto label_28a874;
            case 0x28A878u: goto label_28a878;
            case 0x28A87Cu: goto label_28a87c;
            case 0x28A880u: goto label_28a880;
            case 0x28A884u: goto label_28a884;
            case 0x28A888u: goto label_28a888;
            case 0x28A88Cu: goto label_28a88c;
            case 0x28A890u: goto label_28a890;
            case 0x28A894u: goto label_28a894;
            case 0x28A898u: goto label_28a898;
            case 0x28A89Cu: goto label_28a89c;
            case 0x28A8A0u: goto label_28a8a0;
            case 0x28A8A4u: goto label_28a8a4;
            case 0x28A8A8u: goto label_28a8a8;
            case 0x28A8ACu: goto label_28a8ac;
            case 0x28A8B0u: goto label_28a8b0;
            case 0x28A8B4u: goto label_28a8b4;
            case 0x28A8B8u: goto label_28a8b8;
            case 0x28A8BCu: goto label_28a8bc;
            case 0x28A8C0u: goto label_28a8c0;
            case 0x28A8C4u: goto label_28a8c4;
            case 0x28A8C8u: goto label_28a8c8;
            case 0x28A8CCu: goto label_28a8cc;
            case 0x28A8D0u: goto label_28a8d0;
            case 0x28A8D4u: goto label_28a8d4;
            case 0x28A8D8u: goto label_28a8d8;
            case 0x28A8DCu: goto label_28a8dc;
            case 0x28A8E0u: goto label_28a8e0;
            case 0x28A8E4u: goto label_28a8e4;
            case 0x28A8E8u: goto label_28a8e8;
            case 0x28A8ECu: goto label_28a8ec;
            case 0x28A8F0u: goto label_28a8f0;
            case 0x28A8F4u: goto label_28a8f4;
            case 0x28A8F8u: goto label_28a8f8;
            case 0x28A8FCu: goto label_28a8fc;
            case 0x28A900u: goto label_28a900;
            case 0x28A904u: goto label_28a904;
            case 0x28A908u: goto label_28a908;
            case 0x28A90Cu: goto label_28a90c;
            case 0x28A910u: goto label_28a910;
            case 0x28A914u: goto label_28a914;
            case 0x28A918u: goto label_28a918;
            case 0x28A91Cu: goto label_28a91c;
            case 0x28A920u: goto label_28a920;
            case 0x28A924u: goto label_28a924;
            case 0x28A928u: goto label_28a928;
            case 0x28A92Cu: goto label_28a92c;
            case 0x28A930u: goto label_28a930;
            case 0x28A934u: goto label_28a934;
            case 0x28A938u: goto label_28a938;
            case 0x28A93Cu: goto label_28a93c;
            case 0x28A940u: goto label_28a940;
            case 0x28A944u: goto label_28a944;
            case 0x28A948u: goto label_28a948;
            case 0x28A94Cu: goto label_28a94c;
            case 0x28A950u: goto label_28a950;
            default: break;
        }
        return;
    }
label_fallthrough_0x28a94c:
    ctx->pc = 0x28A954u;
}
