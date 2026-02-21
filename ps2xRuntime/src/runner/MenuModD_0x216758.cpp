#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MenuModD
// Address: 0x216758 - 0x216878
void MenuModD_0x216758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216758u;

label_216758:
    // 0x216758: 0x3c02003c
    ctx->pc = 0x216758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21675c:
    // 0x21675c: 0x8c42cf40
    ctx->pc = 0x21675cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954816)));
label_216760:
    // 0x216760: 0x10400003
label_216764:
    if (ctx->pc == 0x216764u) {
        ctx->pc = 0x216764u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x216768u;
        goto label_216768;
    }
    ctx->pc = 0x216760u;
    {
        const bool branch_taken_0x216760 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216764u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x216760) {
            ctx->pc = 0x216770u;
            goto label_216770;
        }
    }
    ctx->pc = 0x216768u;
label_216768:
    // 0x216768: 0x3e00008
label_21676c:
    if (ctx->pc == 0x21676Cu) {
        ctx->pc = 0x21676Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216770u;
        goto label_216770;
    }
    ctx->pc = 0x216768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21676Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216758u: goto label_216758;
            case 0x21675Cu: goto label_21675c;
            case 0x216760u: goto label_216760;
            case 0x216764u: goto label_216764;
            case 0x216768u: goto label_216768;
            case 0x21676Cu: goto label_21676c;
            case 0x216770u: goto label_216770;
            case 0x216774u: goto label_216774;
            case 0x216778u: goto label_216778;
            case 0x21677Cu: goto label_21677c;
            case 0x216780u: goto label_216780;
            case 0x216784u: goto label_216784;
            case 0x216788u: goto label_216788;
            case 0x21678Cu: goto label_21678c;
            case 0x216790u: goto label_216790;
            case 0x216794u: goto label_216794;
            case 0x216798u: goto label_216798;
            case 0x21679Cu: goto label_21679c;
            case 0x2167A0u: goto label_2167a0;
            case 0x2167A4u: goto label_2167a4;
            case 0x2167A8u: goto label_2167a8;
            case 0x2167ACu: goto label_2167ac;
            case 0x2167B0u: goto label_2167b0;
            case 0x2167B4u: goto label_2167b4;
            case 0x2167B8u: goto label_2167b8;
            case 0x2167BCu: goto label_2167bc;
            case 0x2167C0u: goto label_2167c0;
            case 0x2167C4u: goto label_2167c4;
            case 0x2167C8u: goto label_2167c8;
            case 0x2167CCu: goto label_2167cc;
            case 0x2167D0u: goto label_2167d0;
            case 0x2167D4u: goto label_2167d4;
            case 0x2167D8u: goto label_2167d8;
            case 0x2167DCu: goto label_2167dc;
            case 0x2167E0u: goto label_2167e0;
            case 0x2167E4u: goto label_2167e4;
            case 0x2167E8u: goto label_2167e8;
            case 0x2167ECu: goto label_2167ec;
            case 0x2167F0u: goto label_2167f0;
            case 0x2167F4u: goto label_2167f4;
            case 0x2167F8u: goto label_2167f8;
            case 0x2167FCu: goto label_2167fc;
            case 0x216800u: goto label_216800;
            case 0x216804u: goto label_216804;
            case 0x216808u: goto label_216808;
            case 0x21680Cu: goto label_21680c;
            case 0x216810u: goto label_216810;
            case 0x216814u: goto label_216814;
            case 0x216818u: goto label_216818;
            case 0x21681Cu: goto label_21681c;
            case 0x216820u: goto label_216820;
            case 0x216824u: goto label_216824;
            case 0x216828u: goto label_216828;
            case 0x21682Cu: goto label_21682c;
            case 0x216830u: goto label_216830;
            case 0x216834u: goto label_216834;
            case 0x216838u: goto label_216838;
            case 0x21683Cu: goto label_21683c;
            case 0x216840u: goto label_216840;
            case 0x216844u: goto label_216844;
            case 0x216848u: goto label_216848;
            case 0x21684Cu: goto label_21684c;
            case 0x216850u: goto label_216850;
            case 0x216854u: goto label_216854;
            case 0x216858u: goto label_216858;
            case 0x21685Cu: goto label_21685c;
            case 0x216860u: goto label_216860;
            case 0x216864u: goto label_216864;
            case 0x216868u: goto label_216868;
            case 0x21686Cu: goto label_21686c;
            case 0x216870u: goto label_216870;
            case 0x216874u: goto label_216874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216770u;
label_216770:
    // 0x216770: 0x8c42f8cc
    ctx->pc = 0x216770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965452)));
label_216774:
    // 0x216774: 0x1040000a
label_216778:
    if (ctx->pc == 0x216778u) {
        ctx->pc = 0x216778u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x21677Cu;
        goto label_21677c;
    }
    ctx->pc = 0x216774u;
    {
        const bool branch_taken_0x216774 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216778u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x216774) {
            ctx->pc = 0x2167A0u;
            goto label_2167a0;
        }
    }
    ctx->pc = 0x21677Cu;
label_21677c:
    // 0x21677c: 0x2463cef8
    ctx->pc = 0x21677cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954744));
label_216780:
    // 0x216780: 0x51080
    ctx->pc = 0x216780u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_216784:
    // 0x216784: 0x431021
    ctx->pc = 0x216784u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216788:
    // 0x216788: 0x8c420000
    ctx->pc = 0x216788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21678c:
    // 0x21678c: 0x3c030010
    ctx->pc = 0x21678cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_216790:
    // 0x216790: 0x431024
    ctx->pc = 0x216790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216794:
    // 0x216794: 0x10400002
label_216798:
    if (ctx->pc == 0x216798u) {
        ctx->pc = 0x216798u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x21679Cu;
        goto label_21679c;
    }
    ctx->pc = 0x216794u;
    {
        const bool branch_taken_0x216794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216798u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x216794) {
            ctx->pc = 0x2167A0u;
            goto label_2167a0;
        }
    }
    ctx->pc = 0x21679Cu;
label_21679c:
    // 0x21679c: 0xe23821
    ctx->pc = 0x21679cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2167a0:
    // 0x2167a0: 0x2c820005
    ctx->pc = 0x2167a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 5));
label_2167a4:
    // 0x2167a4: 0x10400007
label_2167a8:
    if (ctx->pc == 0x2167A8u) {
        ctx->pc = 0x2167A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x2167ACu;
        goto label_2167ac;
    }
    ctx->pc = 0x2167A4u;
    {
        const bool branch_taken_0x2167a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2167a4) {
            ctx->pc = 0x2167C4u;
            goto label_2167c4;
        }
    }
    ctx->pc = 0x2167ACu;
label_2167ac:
    // 0x2167ac: 0x24425b50
    ctx->pc = 0x2167acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23376));
label_2167b0:
    // 0x2167b0: 0x41880
    ctx->pc = 0x2167b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_2167b4:
    // 0x2167b4: 0x621821
    ctx->pc = 0x2167b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2167b8:
    // 0x2167b8: 0x8c620000
    ctx->pc = 0x2167b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2167bc:
    // 0x2167bc: 0x400008
label_2167c0:
    if (ctx->pc == 0x2167C0u) {
        ctx->pc = 0x2167C4u;
        goto label_2167c4;
    }
    ctx->pc = 0x2167BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216758u: goto label_216758;
            case 0x21675Cu: goto label_21675c;
            case 0x216760u: goto label_216760;
            case 0x216764u: goto label_216764;
            case 0x216768u: goto label_216768;
            case 0x21676Cu: goto label_21676c;
            case 0x216770u: goto label_216770;
            case 0x216774u: goto label_216774;
            case 0x216778u: goto label_216778;
            case 0x21677Cu: goto label_21677c;
            case 0x216780u: goto label_216780;
            case 0x216784u: goto label_216784;
            case 0x216788u: goto label_216788;
            case 0x21678Cu: goto label_21678c;
            case 0x216790u: goto label_216790;
            case 0x216794u: goto label_216794;
            case 0x216798u: goto label_216798;
            case 0x21679Cu: goto label_21679c;
            case 0x2167A0u: goto label_2167a0;
            case 0x2167A4u: goto label_2167a4;
            case 0x2167A8u: goto label_2167a8;
            case 0x2167ACu: goto label_2167ac;
            case 0x2167B0u: goto label_2167b0;
            case 0x2167B4u: goto label_2167b4;
            case 0x2167B8u: goto label_2167b8;
            case 0x2167BCu: goto label_2167bc;
            case 0x2167C0u: goto label_2167c0;
            case 0x2167C4u: goto label_2167c4;
            case 0x2167C8u: goto label_2167c8;
            case 0x2167CCu: goto label_2167cc;
            case 0x2167D0u: goto label_2167d0;
            case 0x2167D4u: goto label_2167d4;
            case 0x2167D8u: goto label_2167d8;
            case 0x2167DCu: goto label_2167dc;
            case 0x2167E0u: goto label_2167e0;
            case 0x2167E4u: goto label_2167e4;
            case 0x2167E8u: goto label_2167e8;
            case 0x2167ECu: goto label_2167ec;
            case 0x2167F0u: goto label_2167f0;
            case 0x2167F4u: goto label_2167f4;
            case 0x2167F8u: goto label_2167f8;
            case 0x2167FCu: goto label_2167fc;
            case 0x216800u: goto label_216800;
            case 0x216804u: goto label_216804;
            case 0x216808u: goto label_216808;
            case 0x21680Cu: goto label_21680c;
            case 0x216810u: goto label_216810;
            case 0x216814u: goto label_216814;
            case 0x216818u: goto label_216818;
            case 0x21681Cu: goto label_21681c;
            case 0x216820u: goto label_216820;
            case 0x216824u: goto label_216824;
            case 0x216828u: goto label_216828;
            case 0x21682Cu: goto label_21682c;
            case 0x216830u: goto label_216830;
            case 0x216834u: goto label_216834;
            case 0x216838u: goto label_216838;
            case 0x21683Cu: goto label_21683c;
            case 0x216840u: goto label_216840;
            case 0x216844u: goto label_216844;
            case 0x216848u: goto label_216848;
            case 0x21684Cu: goto label_21684c;
            case 0x216850u: goto label_216850;
            case 0x216854u: goto label_216854;
            case 0x216858u: goto label_216858;
            case 0x21685Cu: goto label_21685c;
            case 0x216860u: goto label_216860;
            case 0x216864u: goto label_216864;
            case 0x216868u: goto label_216868;
            case 0x21686Cu: goto label_21686c;
            case 0x216870u: goto label_216870;
            case 0x216874u: goto label_216874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2167C4u;
label_2167c4:
    // 0x2167c4: 0x240a0003
    ctx->pc = 0x2167c4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 3));
label_2167c8:
    // 0x2167c8: 0x1000000c
label_2167cc:
    if (ctx->pc == 0x2167CCu) {
        ctx->pc = 0x2167CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2167D0u;
        goto label_2167d0;
    }
    ctx->pc = 0x2167C8u;
    {
        const bool branch_taken_0x2167c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2167c8) {
            ctx->pc = 0x2167FCu;
            goto label_2167fc;
        }
    }
    ctx->pc = 0x2167D0u;
label_2167d0:
    // 0x2167d0: 0x240a0030
    ctx->pc = 0x2167d0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 48));
label_2167d4:
    // 0x2167d4: 0x10000009
label_2167d8:
    if (ctx->pc == 0x2167D8u) {
        ctx->pc = 0x2167D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x2167DCu;
        goto label_2167dc;
    }
    ctx->pc = 0x2167D4u;
    {
        const bool branch_taken_0x2167d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 192));
        if (branch_taken_0x2167d4) {
            ctx->pc = 0x2167FCu;
            goto label_2167fc;
        }
    }
    ctx->pc = 0x2167DCu;
label_2167dc:
    // 0x2167dc: 0x3c0a0800
    ctx->pc = 0x2167dcu;
    SET_GPR_U32(ctx, 10, ((uint32_t)2048 << 16));
label_2167e0:
    // 0x2167e0: 0x10000006
label_2167e4:
    if (ctx->pc == 0x2167E4u) {
        ctx->pc = 0x2167E4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)512 << 16));
        ctx->pc = 0x2167E8u;
        goto label_2167e8;
    }
    ctx->pc = 0x2167E0u;
    {
        const bool branch_taken_0x2167e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167E4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)512 << 16));
        if (branch_taken_0x2167e0) {
            ctx->pc = 0x2167FCu;
            goto label_2167fc;
        }
    }
    ctx->pc = 0x2167E8u;
label_2167e8:
    // 0x2167e8: 0x3c0a0400
    ctx->pc = 0x2167e8u;
    SET_GPR_U32(ctx, 10, ((uint32_t)1024 << 16));
label_2167ec:
    // 0x2167ec: 0x10000003
label_2167f0:
    if (ctx->pc == 0x2167F0u) {
        ctx->pc = 0x2167F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)256 << 16));
        ctx->pc = 0x2167F4u;
        goto label_2167f4;
    }
    ctx->pc = 0x2167ECu;
    {
        const bool branch_taken_0x2167ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)256 << 16));
        if (branch_taken_0x2167ec) {
            ctx->pc = 0x2167FCu;
            goto label_2167fc;
        }
    }
    ctx->pc = 0x2167F4u;
label_2167f4:
    // 0x2167f4: 0x3c0a0040
    ctx->pc = 0x2167f4u;
    SET_GPR_U32(ctx, 10, ((uint32_t)64 << 16));
label_2167f8:
    // 0x2167f8: 0x3c040080
    ctx->pc = 0x2167f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)128 << 16));
label_2167fc:
    // 0x2167fc: 0x3c02003c
    ctx->pc = 0x2167fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216800:
    // 0x216800: 0x2442cef8
    ctx->pc = 0x216800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954744));
label_216804:
    // 0x216804: 0x51880
    ctx->pc = 0x216804u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_216808:
    // 0x216808: 0x621821
    ctx->pc = 0x216808u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21680c:
    // 0x21680c: 0x8c620000
    ctx->pc = 0x21680cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_216810:
    // 0x216810: 0x821024
    ctx->pc = 0x216810u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_216814:
    // 0x216814: 0x10400007
label_216818:
    if (ctx->pc == 0x216818u) {
        ctx->pc = 0x216818u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x21681Cu;
        goto label_21681c;
    }
    ctx->pc = 0x216814u;
    {
        const bool branch_taken_0x216814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216818u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x216814) {
            ctx->pc = 0x216834u;
            goto label_216834;
        }
    }
    ctx->pc = 0x21681Cu;
label_21681c:
    // 0x21681c: 0x3c02003c
    ctx->pc = 0x21681cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216820:
    // 0x216820: 0x8c42cf44
    ctx->pc = 0x216820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954820)));
label_216824:
    // 0x216824: 0xac62cf40
    ctx->pc = 0x216824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954816), GPR_U32(ctx, 2));
label_216828:
    // 0x216828: 0xc73021
    ctx->pc = 0x216828u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21682c:
    // 0x21682c: 0xc9102a
    ctx->pc = 0x21682cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 9)));
label_216830:
    // 0x216830: 0x102300a
    ctx->pc = 0x216830u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 8));
label_216834:
    // 0x216834: 0x3c02003c
    ctx->pc = 0x216834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216838:
    // 0x216838: 0x2442cef8
    ctx->pc = 0x216838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954744));
label_21683c:
    // 0x21683c: 0x51880
    ctx->pc = 0x21683cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_216840:
    // 0x216840: 0x621821
    ctx->pc = 0x216840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216844:
    // 0x216844: 0x8c620000
    ctx->pc = 0x216844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_216848:
    // 0x216848: 0x1421024
    ctx->pc = 0x216848u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_21684c:
    // 0x21684c: 0x10400008
label_216850:
    if (ctx->pc == 0x216850u) {
        ctx->pc = 0x216850u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x216854u;
        goto label_216854;
    }
    ctx->pc = 0x21684Cu;
    {
        const bool branch_taken_0x21684c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216850u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x21684c) {
            ctx->pc = 0x216870u;
            goto label_216870;
        }
    }
    ctx->pc = 0x216854u;
label_216854:
    // 0x216854: 0x3c02003c
    ctx->pc = 0x216854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216858:
    // 0x216858: 0x8c42cf44
    ctx->pc = 0x216858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954820)));
label_21685c:
    // 0x21685c: 0xac62cf40
    ctx->pc = 0x21685cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954816), GPR_U32(ctx, 2));
label_216860:
    // 0x216860: 0xc73023
    ctx->pc = 0x216860u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_216864:
    // 0x216864: 0xc8182a
    ctx->pc = 0x216864u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
label_216868:
    // 0x216868: 0x2522ffff
    ctx->pc = 0x216868u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294967295));
label_21686c:
    // 0x21686c: 0x43300b
    ctx->pc = 0x21686cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
label_216870:
    // 0x216870: 0x3e00008
label_216874:
    if (ctx->pc == 0x216874u) {
        ctx->pc = 0x216874u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216878u;
        goto label_fallthrough_0x216870;
    }
    ctx->pc = 0x216870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216874u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216758u: goto label_216758;
            case 0x21675Cu: goto label_21675c;
            case 0x216760u: goto label_216760;
            case 0x216764u: goto label_216764;
            case 0x216768u: goto label_216768;
            case 0x21676Cu: goto label_21676c;
            case 0x216770u: goto label_216770;
            case 0x216774u: goto label_216774;
            case 0x216778u: goto label_216778;
            case 0x21677Cu: goto label_21677c;
            case 0x216780u: goto label_216780;
            case 0x216784u: goto label_216784;
            case 0x216788u: goto label_216788;
            case 0x21678Cu: goto label_21678c;
            case 0x216790u: goto label_216790;
            case 0x216794u: goto label_216794;
            case 0x216798u: goto label_216798;
            case 0x21679Cu: goto label_21679c;
            case 0x2167A0u: goto label_2167a0;
            case 0x2167A4u: goto label_2167a4;
            case 0x2167A8u: goto label_2167a8;
            case 0x2167ACu: goto label_2167ac;
            case 0x2167B0u: goto label_2167b0;
            case 0x2167B4u: goto label_2167b4;
            case 0x2167B8u: goto label_2167b8;
            case 0x2167BCu: goto label_2167bc;
            case 0x2167C0u: goto label_2167c0;
            case 0x2167C4u: goto label_2167c4;
            case 0x2167C8u: goto label_2167c8;
            case 0x2167CCu: goto label_2167cc;
            case 0x2167D0u: goto label_2167d0;
            case 0x2167D4u: goto label_2167d4;
            case 0x2167D8u: goto label_2167d8;
            case 0x2167DCu: goto label_2167dc;
            case 0x2167E0u: goto label_2167e0;
            case 0x2167E4u: goto label_2167e4;
            case 0x2167E8u: goto label_2167e8;
            case 0x2167ECu: goto label_2167ec;
            case 0x2167F0u: goto label_2167f0;
            case 0x2167F4u: goto label_2167f4;
            case 0x2167F8u: goto label_2167f8;
            case 0x2167FCu: goto label_2167fc;
            case 0x216800u: goto label_216800;
            case 0x216804u: goto label_216804;
            case 0x216808u: goto label_216808;
            case 0x21680Cu: goto label_21680c;
            case 0x216810u: goto label_216810;
            case 0x216814u: goto label_216814;
            case 0x216818u: goto label_216818;
            case 0x21681Cu: goto label_21681c;
            case 0x216820u: goto label_216820;
            case 0x216824u: goto label_216824;
            case 0x216828u: goto label_216828;
            case 0x21682Cu: goto label_21682c;
            case 0x216830u: goto label_216830;
            case 0x216834u: goto label_216834;
            case 0x216838u: goto label_216838;
            case 0x21683Cu: goto label_21683c;
            case 0x216840u: goto label_216840;
            case 0x216844u: goto label_216844;
            case 0x216848u: goto label_216848;
            case 0x21684Cu: goto label_21684c;
            case 0x216850u: goto label_216850;
            case 0x216854u: goto label_216854;
            case 0x216858u: goto label_216858;
            case 0x21685Cu: goto label_21685c;
            case 0x216860u: goto label_216860;
            case 0x216864u: goto label_216864;
            case 0x216868u: goto label_216868;
            case 0x21686Cu: goto label_21686c;
            case 0x216870u: goto label_216870;
            case 0x216874u: goto label_216874;
            default: break;
        }
        return;
    }
label_fallthrough_0x216870:
    ctx->pc = 0x216878u;
}
