#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveLoad
// Address: 0x209638 - 0x2099bc
void saveLoad_0x209638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209638u;

label_209638:
    // 0x209638: 0x27bdff10
    ctx->pc = 0x209638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
label_20963c:
    // 0x20963c: 0xffbf00e0
    ctx->pc = 0x20963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_209640:
    // 0x209640: 0xffbe00d0
    ctx->pc = 0x209640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_209644:
    // 0x209644: 0xffb000c0
    ctx->pc = 0x209644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
label_209648:
    // 0x209648: 0x3a0f02d
    ctx->pc = 0x209648u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20964c:
    // 0x20964c: 0xafc40000
    ctx->pc = 0x20964cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_209650:
    // 0x209650: 0xafc50004
    ctx->pc = 0x209650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_209654:
    // 0x209654: 0xafc60008
    ctx->pc = 0x209654u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_209658:
    // 0x209658: 0xafc7000c
    ctx->pc = 0x209658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_20965c:
    // 0x20965c: 0xafc80010
    ctx->pc = 0x20965cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
label_209660:
    // 0x209660: 0x8fc40000
    ctx->pc = 0x209660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209664:
    // 0x209664: 0x8fc50004
    ctx->pc = 0x209664u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_209668:
    // 0x209668: 0x302d
    ctx->pc = 0x209668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20966c:
    // 0x20966c: 0xc0820e2
label_209670:
    if (ctx->pc == 0x209670u) {
        ctx->pc = 0x209674u;
        goto label_209674;
    }
    ctx->pc = 0x20966Cu;
    SET_GPR_U32(ctx, 31, 0x209674u);
    ctx->pc = 0x208388u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMount_0x208388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209674u; }
    }
    if (ctx->pc != 0x209674u) { return; }
    ctx->pc = 0x209674u;
label_209674:
    // 0x209674: 0xafc20018
    ctx->pc = 0x209674u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_209678:
    // 0x209678: 0x8fc20018
    ctx->pc = 0x209678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_20967c:
    // 0x20967c: 0x1c400004
label_209680:
    if (ctx->pc == 0x209680u) {
        ctx->pc = 0x209684u;
        goto label_209684;
    }
    ctx->pc = 0x20967Cu;
    {
        const bool branch_taken_0x20967c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20967c) {
            ctx->pc = 0x209690u;
            goto label_209690;
        }
    }
    ctx->pc = 0x209684u;
label_209684:
    // 0x209684: 0x102d
    ctx->pc = 0x209684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209688:
    // 0x209688: 0x100000c5
label_20968c:
    if (ctx->pc == 0x20968Cu) {
        ctx->pc = 0x209690u;
        goto label_209690;
    }
    ctx->pc = 0x209688u;
    {
        const bool branch_taken_0x209688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209688) {
            ctx->pc = 0x2099A0u;
            goto label_2099a0;
        }
    }
    ctx->pc = 0x209690u;
label_209690:
    // 0x209690: 0x27c20004
    ctx->pc = 0x209690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
label_209694:
    // 0x209694: 0x3c0202d
    ctx->pc = 0x209694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_209698:
    // 0x209698: 0x40282d
    ctx->pc = 0x209698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20969c:
    // 0x20969c: 0xc081e72
label_2096a0:
    if (ctx->pc == 0x2096A0u) {
        ctx->pc = 0x2096A4u;
        goto label_2096a4;
    }
    ctx->pc = 0x20969Cu;
    SET_GPR_U32(ctx, 31, 0x2096A4u);
    ctx->pc = 0x2079C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        translatePortAndSlot_0x2079c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096A4u; }
    }
    if (ctx->pc != 0x2096A4u) { return; }
    ctx->pc = 0x2096A4u;
label_2096a4:
    // 0x2096a4: 0x14400004
label_2096a8:
    if (ctx->pc == 0x2096A8u) {
        ctx->pc = 0x2096ACu;
        goto label_2096ac;
    }
    ctx->pc = 0x2096A4u;
    {
        const bool branch_taken_0x2096a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2096a4) {
            ctx->pc = 0x2096B8u;
            goto label_2096b8;
        }
    }
    ctx->pc = 0x2096ACu;
label_2096ac:
    // 0x2096ac: 0x102d
    ctx->pc = 0x2096acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2096b0:
    // 0x2096b0: 0x100000bb
label_2096b4:
    if (ctx->pc == 0x2096B4u) {
        ctx->pc = 0x2096B8u;
        goto label_2096b8;
    }
    ctx->pc = 0x2096B0u;
    {
        const bool branch_taken_0x2096b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2096b0) {
            ctx->pc = 0x2099A0u;
            goto label_2099a0;
        }
    }
    ctx->pc = 0x2096B8u;
label_2096b8:
    // 0x2096b8: 0x27c20030
    ctx->pc = 0x2096b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
label_2096bc:
    // 0x2096bc: 0x40202d
    ctx->pc = 0x2096bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2096c0:
    // 0x2096c0: 0x8fc50008
    ctx->pc = 0x2096c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2096c4:
    // 0x2096c4: 0xc081e8e
label_2096c8:
    if (ctx->pc == 0x2096C8u) {
        ctx->pc = 0x2096CCu;
        goto label_2096cc;
    }
    ctx->pc = 0x2096C4u;
    SET_GPR_U32(ctx, 31, 0x2096CCu);
    ctx->pc = 0x207A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getSaveFileName_0x207a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096CCu; }
    }
    if (ctx->pc != 0x2096CCu) { return; }
    ctx->pc = 0x2096CCu;
label_2096cc:
    // 0x2096cc: 0x27c30030
    ctx->pc = 0x2096ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 48));
label_2096d0:
    // 0x2096d0: 0x27c20070
    ctx->pc = 0x2096d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 112));
label_2096d4:
    // 0x2096d4: 0x8fc40000
    ctx->pc = 0x2096d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2096d8:
    // 0x2096d8: 0x8fc50004
    ctx->pc = 0x2096d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2096dc:
    // 0x2096dc: 0x60302d
    ctx->pc = 0x2096dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2096e0:
    // 0x2096e0: 0x382d
    ctx->pc = 0x2096e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2096e4:
    // 0x2096e4: 0x24080001
    ctx->pc = 0x2096e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_2096e8:
    // 0x2096e8: 0x40482d
    ctx->pc = 0x2096e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2096ec:
    // 0x2096ec: 0xc0b9ab2
label_2096f0:
    if (ctx->pc == 0x2096F0u) {
        ctx->pc = 0x2096F4u;
        goto label_2096f4;
    }
    ctx->pc = 0x2096ECu;
    SET_GPR_U32(ctx, 31, 0x2096F4u);
    ctx->pc = 0x2E6AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x2e6ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096F4u; }
    }
    if (ctx->pc != 0x2096F4u) { return; }
    ctx->pc = 0x2096F4u;
label_2096f4:
    // 0x2096f4: 0x10400005
label_2096f8:
    if (ctx->pc == 0x2096F8u) {
        ctx->pc = 0x2096FCu;
        goto label_2096fc;
    }
    ctx->pc = 0x2096F4u;
    {
        const bool branch_taken_0x2096f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2096f4) {
            ctx->pc = 0x20970Cu;
            goto label_20970c;
        }
    }
    ctx->pc = 0x2096FCu;
label_2096fc:
    // 0x2096fc: 0x3c04003a
    ctx->pc = 0x2096fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209700:
    // 0x209700: 0x24844f60
    ctx->pc = 0x209700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20320));
label_209704:
    // 0x209704: 0xc0b4a34
label_209708:
    if (ctx->pc == 0x209708u) {
        ctx->pc = 0x20970Cu;
        goto label_20970c;
    }
    ctx->pc = 0x209704u;
    SET_GPR_U32(ctx, 31, 0x20970Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20970Cu; }
    }
    if (ctx->pc != 0x20970Cu) { return; }
    ctx->pc = 0x20970Cu;
label_20970c:
    // 0x20970c: 0x0
    ctx->pc = 0x20970cu;
    // NOP
label_209710:
    // 0x209710: 0x27c20014
    ctx->pc = 0x209710u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_209714:
    // 0x209714: 0x27c30018
    ctx->pc = 0x209714u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_209718:
    // 0x209718: 0x24040001
    ctx->pc = 0x209718u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20971c:
    // 0x20971c: 0x40282d
    ctx->pc = 0x20971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209720:
    // 0x209720: 0x60302d
    ctx->pc = 0x209720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209724:
    // 0x209724: 0xc0b9a14
label_209728:
    if (ctx->pc == 0x209728u) {
        ctx->pc = 0x20972Cu;
        goto label_20972c;
    }
    ctx->pc = 0x209724u;
    SET_GPR_U32(ctx, 31, 0x20972Cu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20972Cu; }
    }
    if (ctx->pc != 0x20972Cu) { return; }
    ctx->pc = 0x20972Cu;
label_20972c:
    // 0x20972c: 0x10400003
label_209730:
    if (ctx->pc == 0x209730u) {
        ctx->pc = 0x209734u;
        goto label_209734;
    }
    ctx->pc = 0x20972Cu;
    {
        const bool branch_taken_0x20972c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20972c) {
            ctx->pc = 0x20973Cu;
            goto label_20973c;
        }
    }
    ctx->pc = 0x209734u;
label_209734:
    // 0x209734: 0x1000000b
label_209738:
    if (ctx->pc == 0x209738u) {
        ctx->pc = 0x20973Cu;
        goto label_20973c;
    }
    ctx->pc = 0x209734u;
    {
        const bool branch_taken_0x209734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209734) {
            ctx->pc = 0x209764u;
            goto label_209764;
        }
    }
    ctx->pc = 0x20973Cu;
label_20973c:
    // 0x20973c: 0x3c02003c
    ctx->pc = 0x20973cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209740:
    // 0x209740: 0x8c42c4e4
    ctx->pc = 0x209740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_209744:
    // 0x209744: 0x10400005
label_209748:
    if (ctx->pc == 0x209748u) {
        ctx->pc = 0x20974Cu;
        goto label_20974c;
    }
    ctx->pc = 0x209744u;
    {
        const bool branch_taken_0x209744 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209744) {
            ctx->pc = 0x20975Cu;
            goto label_20975c;
        }
    }
    ctx->pc = 0x20974Cu;
label_20974c:
    // 0x20974c: 0x3c10003c
    ctx->pc = 0x20974cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209750:
    // 0x209750: 0x8e10c4e4
    ctx->pc = 0x209750u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_209754:
    // 0x209754: 0x200f809
label_209758:
    if (ctx->pc == 0x209758u) {
        ctx->pc = 0x20975Cu;
        goto label_20975c;
    }
    ctx->pc = 0x209754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x20975Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209638u: goto label_209638;
            case 0x20963Cu: goto label_20963c;
            case 0x209640u: goto label_209640;
            case 0x209644u: goto label_209644;
            case 0x209648u: goto label_209648;
            case 0x20964Cu: goto label_20964c;
            case 0x209650u: goto label_209650;
            case 0x209654u: goto label_209654;
            case 0x209658u: goto label_209658;
            case 0x20965Cu: goto label_20965c;
            case 0x209660u: goto label_209660;
            case 0x209664u: goto label_209664;
            case 0x209668u: goto label_209668;
            case 0x20966Cu: goto label_20966c;
            case 0x209670u: goto label_209670;
            case 0x209674u: goto label_209674;
            case 0x209678u: goto label_209678;
            case 0x20967Cu: goto label_20967c;
            case 0x209680u: goto label_209680;
            case 0x209684u: goto label_209684;
            case 0x209688u: goto label_209688;
            case 0x20968Cu: goto label_20968c;
            case 0x209690u: goto label_209690;
            case 0x209694u: goto label_209694;
            case 0x209698u: goto label_209698;
            case 0x20969Cu: goto label_20969c;
            case 0x2096A0u: goto label_2096a0;
            case 0x2096A4u: goto label_2096a4;
            case 0x2096A8u: goto label_2096a8;
            case 0x2096ACu: goto label_2096ac;
            case 0x2096B0u: goto label_2096b0;
            case 0x2096B4u: goto label_2096b4;
            case 0x2096B8u: goto label_2096b8;
            case 0x2096BCu: goto label_2096bc;
            case 0x2096C0u: goto label_2096c0;
            case 0x2096C4u: goto label_2096c4;
            case 0x2096C8u: goto label_2096c8;
            case 0x2096CCu: goto label_2096cc;
            case 0x2096D0u: goto label_2096d0;
            case 0x2096D4u: goto label_2096d4;
            case 0x2096D8u: goto label_2096d8;
            case 0x2096DCu: goto label_2096dc;
            case 0x2096E0u: goto label_2096e0;
            case 0x2096E4u: goto label_2096e4;
            case 0x2096E8u: goto label_2096e8;
            case 0x2096ECu: goto label_2096ec;
            case 0x2096F0u: goto label_2096f0;
            case 0x2096F4u: goto label_2096f4;
            case 0x2096F8u: goto label_2096f8;
            case 0x2096FCu: goto label_2096fc;
            case 0x209700u: goto label_209700;
            case 0x209704u: goto label_209704;
            case 0x209708u: goto label_209708;
            case 0x20970Cu: goto label_20970c;
            case 0x209710u: goto label_209710;
            case 0x209714u: goto label_209714;
            case 0x209718u: goto label_209718;
            case 0x20971Cu: goto label_20971c;
            case 0x209720u: goto label_209720;
            case 0x209724u: goto label_209724;
            case 0x209728u: goto label_209728;
            case 0x20972Cu: goto label_20972c;
            case 0x209730u: goto label_209730;
            case 0x209734u: goto label_209734;
            case 0x209738u: goto label_209738;
            case 0x20973Cu: goto label_20973c;
            case 0x209740u: goto label_209740;
            case 0x209744u: goto label_209744;
            case 0x209748u: goto label_209748;
            case 0x20974Cu: goto label_20974c;
            case 0x209750u: goto label_209750;
            case 0x209754u: goto label_209754;
            case 0x209758u: goto label_209758;
            case 0x20975Cu: goto label_20975c;
            case 0x209760u: goto label_209760;
            case 0x209764u: goto label_209764;
            case 0x209768u: goto label_209768;
            case 0x20976Cu: goto label_20976c;
            case 0x209770u: goto label_209770;
            case 0x209774u: goto label_209774;
            case 0x209778u: goto label_209778;
            case 0x20977Cu: goto label_20977c;
            case 0x209780u: goto label_209780;
            case 0x209784u: goto label_209784;
            case 0x209788u: goto label_209788;
            case 0x20978Cu: goto label_20978c;
            case 0x209790u: goto label_209790;
            case 0x209794u: goto label_209794;
            case 0x209798u: goto label_209798;
            case 0x20979Cu: goto label_20979c;
            case 0x2097A0u: goto label_2097a0;
            case 0x2097A4u: goto label_2097a4;
            case 0x2097A8u: goto label_2097a8;
            case 0x2097ACu: goto label_2097ac;
            case 0x2097B0u: goto label_2097b0;
            case 0x2097B4u: goto label_2097b4;
            case 0x2097B8u: goto label_2097b8;
            case 0x2097BCu: goto label_2097bc;
            case 0x2097C0u: goto label_2097c0;
            case 0x2097C4u: goto label_2097c4;
            case 0x2097C8u: goto label_2097c8;
            case 0x2097CCu: goto label_2097cc;
            case 0x2097D0u: goto label_2097d0;
            case 0x2097D4u: goto label_2097d4;
            case 0x2097D8u: goto label_2097d8;
            case 0x2097DCu: goto label_2097dc;
            case 0x2097E0u: goto label_2097e0;
            case 0x2097E4u: goto label_2097e4;
            case 0x2097E8u: goto label_2097e8;
            case 0x2097ECu: goto label_2097ec;
            case 0x2097F0u: goto label_2097f0;
            case 0x2097F4u: goto label_2097f4;
            case 0x2097F8u: goto label_2097f8;
            case 0x2097FCu: goto label_2097fc;
            case 0x209800u: goto label_209800;
            case 0x209804u: goto label_209804;
            case 0x209808u: goto label_209808;
            case 0x20980Cu: goto label_20980c;
            case 0x209810u: goto label_209810;
            case 0x209814u: goto label_209814;
            case 0x209818u: goto label_209818;
            case 0x20981Cu: goto label_20981c;
            case 0x209820u: goto label_209820;
            case 0x209824u: goto label_209824;
            case 0x209828u: goto label_209828;
            case 0x20982Cu: goto label_20982c;
            case 0x209830u: goto label_209830;
            case 0x209834u: goto label_209834;
            case 0x209838u: goto label_209838;
            case 0x20983Cu: goto label_20983c;
            case 0x209840u: goto label_209840;
            case 0x209844u: goto label_209844;
            case 0x209848u: goto label_209848;
            case 0x20984Cu: goto label_20984c;
            case 0x209850u: goto label_209850;
            case 0x209854u: goto label_209854;
            case 0x209858u: goto label_209858;
            case 0x20985Cu: goto label_20985c;
            case 0x209860u: goto label_209860;
            case 0x209864u: goto label_209864;
            case 0x209868u: goto label_209868;
            case 0x20986Cu: goto label_20986c;
            case 0x209870u: goto label_209870;
            case 0x209874u: goto label_209874;
            case 0x209878u: goto label_209878;
            case 0x20987Cu: goto label_20987c;
            case 0x209880u: goto label_209880;
            case 0x209884u: goto label_209884;
            case 0x209888u: goto label_209888;
            case 0x20988Cu: goto label_20988c;
            case 0x209890u: goto label_209890;
            case 0x209894u: goto label_209894;
            case 0x209898u: goto label_209898;
            case 0x20989Cu: goto label_20989c;
            case 0x2098A0u: goto label_2098a0;
            case 0x2098A4u: goto label_2098a4;
            case 0x2098A8u: goto label_2098a8;
            case 0x2098ACu: goto label_2098ac;
            case 0x2098B0u: goto label_2098b0;
            case 0x2098B4u: goto label_2098b4;
            case 0x2098B8u: goto label_2098b8;
            case 0x2098BCu: goto label_2098bc;
            case 0x2098C0u: goto label_2098c0;
            case 0x2098C4u: goto label_2098c4;
            case 0x2098C8u: goto label_2098c8;
            case 0x2098CCu: goto label_2098cc;
            case 0x2098D0u: goto label_2098d0;
            case 0x2098D4u: goto label_2098d4;
            case 0x2098D8u: goto label_2098d8;
            case 0x2098DCu: goto label_2098dc;
            case 0x2098E0u: goto label_2098e0;
            case 0x2098E4u: goto label_2098e4;
            case 0x2098E8u: goto label_2098e8;
            case 0x2098ECu: goto label_2098ec;
            case 0x2098F0u: goto label_2098f0;
            case 0x2098F4u: goto label_2098f4;
            case 0x2098F8u: goto label_2098f8;
            case 0x2098FCu: goto label_2098fc;
            case 0x209900u: goto label_209900;
            case 0x209904u: goto label_209904;
            case 0x209908u: goto label_209908;
            case 0x20990Cu: goto label_20990c;
            case 0x209910u: goto label_209910;
            case 0x209914u: goto label_209914;
            case 0x209918u: goto label_209918;
            case 0x20991Cu: goto label_20991c;
            case 0x209920u: goto label_209920;
            case 0x209924u: goto label_209924;
            case 0x209928u: goto label_209928;
            case 0x20992Cu: goto label_20992c;
            case 0x209930u: goto label_209930;
            case 0x209934u: goto label_209934;
            case 0x209938u: goto label_209938;
            case 0x20993Cu: goto label_20993c;
            case 0x209940u: goto label_209940;
            case 0x209944u: goto label_209944;
            case 0x209948u: goto label_209948;
            case 0x20994Cu: goto label_20994c;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x209958u: goto label_209958;
            case 0x20995Cu: goto label_20995c;
            case 0x209960u: goto label_209960;
            case 0x209964u: goto label_209964;
            case 0x209968u: goto label_209968;
            case 0x20996Cu: goto label_20996c;
            case 0x209970u: goto label_209970;
            case 0x209974u: goto label_209974;
            case 0x209978u: goto label_209978;
            case 0x20997Cu: goto label_20997c;
            case 0x209980u: goto label_209980;
            case 0x209984u: goto label_209984;
            case 0x209988u: goto label_209988;
            case 0x20998Cu: goto label_20998c;
            case 0x209990u: goto label_209990;
            case 0x209994u: goto label_209994;
            case 0x209998u: goto label_209998;
            case 0x20999Cu: goto label_20999c;
            case 0x2099A0u: goto label_2099a0;
            case 0x2099A4u: goto label_2099a4;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x2099B0u: goto label_2099b0;
            case 0x2099B4u: goto label_2099b4;
            case 0x2099B8u: goto label_2099b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20975Cu; }
            if (ctx->pc != 0x20975Cu) { return; }
        }
    }
    ctx->pc = 0x20975Cu;
label_20975c:
    // 0x20975c: 0x1000ffec
label_209760:
    if (ctx->pc == 0x209760u) {
        ctx->pc = 0x209764u;
        goto label_209764;
    }
    ctx->pc = 0x20975Cu;
    {
        const bool branch_taken_0x20975c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20975c) {
            ctx->pc = 0x209710u;
            goto label_209710;
        }
    }
    ctx->pc = 0x209764u;
label_209764:
    // 0x209764: 0x8fc20018
    ctx->pc = 0x209764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_209768:
    // 0x209768: 0x24030001
    ctx->pc = 0x209768u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20976c:
    // 0x20976c: 0x10430004
label_209770:
    if (ctx->pc == 0x209770u) {
        ctx->pc = 0x209774u;
        goto label_209774;
    }
    ctx->pc = 0x20976Cu;
    {
        const bool branch_taken_0x20976c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20976c) {
            ctx->pc = 0x209780u;
            goto label_209780;
        }
    }
    ctx->pc = 0x209774u;
label_209774:
    // 0x209774: 0x102d
    ctx->pc = 0x209774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209778:
    // 0x209778: 0x10000089
label_20977c:
    if (ctx->pc == 0x20977Cu) {
        ctx->pc = 0x209780u;
        goto label_209780;
    }
    ctx->pc = 0x209778u;
    {
        const bool branch_taken_0x209778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209778) {
            ctx->pc = 0x2099A0u;
            goto label_2099a0;
        }
    }
    ctx->pc = 0x209780u;
label_209780:
    // 0x209780: 0x27c20030
    ctx->pc = 0x209780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
label_209784:
    // 0x209784: 0x8fc40000
    ctx->pc = 0x209784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209788:
    // 0x209788: 0x8fc50004
    ctx->pc = 0x209788u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_20978c:
    // 0x20978c: 0x40302d
    ctx->pc = 0x20978cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209790:
    // 0x209790: 0x24070001
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_209794:
    // 0x209794: 0xc0b98da
label_209798:
    if (ctx->pc == 0x209798u) {
        ctx->pc = 0x20979Cu;
        goto label_20979c;
    }
    ctx->pc = 0x209794u;
    SET_GPR_U32(ctx, 31, 0x20979Cu);
    ctx->pc = 0x2E6368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x2e6368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20979Cu; }
    }
    if (ctx->pc != 0x20979Cu) { return; }
    ctx->pc = 0x20979Cu;
label_20979c:
    // 0x20979c: 0x10400005
label_2097a0:
    if (ctx->pc == 0x2097A0u) {
        ctx->pc = 0x2097A4u;
        goto label_2097a4;
    }
    ctx->pc = 0x20979Cu;
    {
        const bool branch_taken_0x20979c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20979c) {
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2097A4u;
label_2097a4:
    // 0x2097a4: 0x3c04003a
    ctx->pc = 0x2097a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2097a8:
    // 0x2097a8: 0x24844f88
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20360));
label_2097ac:
    // 0x2097ac: 0xc0b4a34
label_2097b0:
    if (ctx->pc == 0x2097B0u) {
        ctx->pc = 0x2097B4u;
        goto label_2097b4;
    }
    ctx->pc = 0x2097ACu;
    SET_GPR_U32(ctx, 31, 0x2097B4u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097B4u; }
    }
    if (ctx->pc != 0x2097B4u) { return; }
    ctx->pc = 0x2097B4u;
label_2097b4:
    // 0x2097b4: 0x0
    ctx->pc = 0x2097b4u;
    // NOP
label_2097b8:
    // 0x2097b8: 0x27c20014
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_2097bc:
    // 0x2097bc: 0x27c30018
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_2097c0:
    // 0x2097c0: 0x24040001
    ctx->pc = 0x2097c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2097c4:
    // 0x2097c4: 0x40282d
    ctx->pc = 0x2097c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2097c8:
    // 0x2097c8: 0x60302d
    ctx->pc = 0x2097c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2097cc:
    // 0x2097cc: 0xc0b9a14
label_2097d0:
    if (ctx->pc == 0x2097D0u) {
        ctx->pc = 0x2097D4u;
        goto label_2097d4;
    }
    ctx->pc = 0x2097CCu;
    SET_GPR_U32(ctx, 31, 0x2097D4u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2097D4u; }
    }
    if (ctx->pc != 0x2097D4u) { return; }
    ctx->pc = 0x2097D4u;
label_2097d4:
    // 0x2097d4: 0x10400003
label_2097d8:
    if (ctx->pc == 0x2097D8u) {
        ctx->pc = 0x2097DCu;
        goto label_2097dc;
    }
    ctx->pc = 0x2097D4u;
    {
        const bool branch_taken_0x2097d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2097d4) {
            ctx->pc = 0x2097E4u;
            goto label_2097e4;
        }
    }
    ctx->pc = 0x2097DCu;
label_2097dc:
    // 0x2097dc: 0x1000000b
label_2097e0:
    if (ctx->pc == 0x2097E0u) {
        ctx->pc = 0x2097E4u;
        goto label_2097e4;
    }
    ctx->pc = 0x2097DCu;
    {
        const bool branch_taken_0x2097dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2097dc) {
            ctx->pc = 0x20980Cu;
            goto label_20980c;
        }
    }
    ctx->pc = 0x2097E4u;
label_2097e4:
    // 0x2097e4: 0x3c02003c
    ctx->pc = 0x2097e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2097e8:
    // 0x2097e8: 0x8c42c4e4
    ctx->pc = 0x2097e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_2097ec:
    // 0x2097ec: 0x10400005
label_2097f0:
    if (ctx->pc == 0x2097F0u) {
        ctx->pc = 0x2097F4u;
        goto label_2097f4;
    }
    ctx->pc = 0x2097ECu;
    {
        const bool branch_taken_0x2097ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2097ec) {
            ctx->pc = 0x209804u;
            goto label_209804;
        }
    }
    ctx->pc = 0x2097F4u;
label_2097f4:
    // 0x2097f4: 0x3c10003c
    ctx->pc = 0x2097f4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_2097f8:
    // 0x2097f8: 0x8e10c4e4
    ctx->pc = 0x2097f8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_2097fc:
    // 0x2097fc: 0x200f809
label_209800:
    if (ctx->pc == 0x209800u) {
        ctx->pc = 0x209804u;
        goto label_209804;
    }
    ctx->pc = 0x2097FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x209804u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209638u: goto label_209638;
            case 0x20963Cu: goto label_20963c;
            case 0x209640u: goto label_209640;
            case 0x209644u: goto label_209644;
            case 0x209648u: goto label_209648;
            case 0x20964Cu: goto label_20964c;
            case 0x209650u: goto label_209650;
            case 0x209654u: goto label_209654;
            case 0x209658u: goto label_209658;
            case 0x20965Cu: goto label_20965c;
            case 0x209660u: goto label_209660;
            case 0x209664u: goto label_209664;
            case 0x209668u: goto label_209668;
            case 0x20966Cu: goto label_20966c;
            case 0x209670u: goto label_209670;
            case 0x209674u: goto label_209674;
            case 0x209678u: goto label_209678;
            case 0x20967Cu: goto label_20967c;
            case 0x209680u: goto label_209680;
            case 0x209684u: goto label_209684;
            case 0x209688u: goto label_209688;
            case 0x20968Cu: goto label_20968c;
            case 0x209690u: goto label_209690;
            case 0x209694u: goto label_209694;
            case 0x209698u: goto label_209698;
            case 0x20969Cu: goto label_20969c;
            case 0x2096A0u: goto label_2096a0;
            case 0x2096A4u: goto label_2096a4;
            case 0x2096A8u: goto label_2096a8;
            case 0x2096ACu: goto label_2096ac;
            case 0x2096B0u: goto label_2096b0;
            case 0x2096B4u: goto label_2096b4;
            case 0x2096B8u: goto label_2096b8;
            case 0x2096BCu: goto label_2096bc;
            case 0x2096C0u: goto label_2096c0;
            case 0x2096C4u: goto label_2096c4;
            case 0x2096C8u: goto label_2096c8;
            case 0x2096CCu: goto label_2096cc;
            case 0x2096D0u: goto label_2096d0;
            case 0x2096D4u: goto label_2096d4;
            case 0x2096D8u: goto label_2096d8;
            case 0x2096DCu: goto label_2096dc;
            case 0x2096E0u: goto label_2096e0;
            case 0x2096E4u: goto label_2096e4;
            case 0x2096E8u: goto label_2096e8;
            case 0x2096ECu: goto label_2096ec;
            case 0x2096F0u: goto label_2096f0;
            case 0x2096F4u: goto label_2096f4;
            case 0x2096F8u: goto label_2096f8;
            case 0x2096FCu: goto label_2096fc;
            case 0x209700u: goto label_209700;
            case 0x209704u: goto label_209704;
            case 0x209708u: goto label_209708;
            case 0x20970Cu: goto label_20970c;
            case 0x209710u: goto label_209710;
            case 0x209714u: goto label_209714;
            case 0x209718u: goto label_209718;
            case 0x20971Cu: goto label_20971c;
            case 0x209720u: goto label_209720;
            case 0x209724u: goto label_209724;
            case 0x209728u: goto label_209728;
            case 0x20972Cu: goto label_20972c;
            case 0x209730u: goto label_209730;
            case 0x209734u: goto label_209734;
            case 0x209738u: goto label_209738;
            case 0x20973Cu: goto label_20973c;
            case 0x209740u: goto label_209740;
            case 0x209744u: goto label_209744;
            case 0x209748u: goto label_209748;
            case 0x20974Cu: goto label_20974c;
            case 0x209750u: goto label_209750;
            case 0x209754u: goto label_209754;
            case 0x209758u: goto label_209758;
            case 0x20975Cu: goto label_20975c;
            case 0x209760u: goto label_209760;
            case 0x209764u: goto label_209764;
            case 0x209768u: goto label_209768;
            case 0x20976Cu: goto label_20976c;
            case 0x209770u: goto label_209770;
            case 0x209774u: goto label_209774;
            case 0x209778u: goto label_209778;
            case 0x20977Cu: goto label_20977c;
            case 0x209780u: goto label_209780;
            case 0x209784u: goto label_209784;
            case 0x209788u: goto label_209788;
            case 0x20978Cu: goto label_20978c;
            case 0x209790u: goto label_209790;
            case 0x209794u: goto label_209794;
            case 0x209798u: goto label_209798;
            case 0x20979Cu: goto label_20979c;
            case 0x2097A0u: goto label_2097a0;
            case 0x2097A4u: goto label_2097a4;
            case 0x2097A8u: goto label_2097a8;
            case 0x2097ACu: goto label_2097ac;
            case 0x2097B0u: goto label_2097b0;
            case 0x2097B4u: goto label_2097b4;
            case 0x2097B8u: goto label_2097b8;
            case 0x2097BCu: goto label_2097bc;
            case 0x2097C0u: goto label_2097c0;
            case 0x2097C4u: goto label_2097c4;
            case 0x2097C8u: goto label_2097c8;
            case 0x2097CCu: goto label_2097cc;
            case 0x2097D0u: goto label_2097d0;
            case 0x2097D4u: goto label_2097d4;
            case 0x2097D8u: goto label_2097d8;
            case 0x2097DCu: goto label_2097dc;
            case 0x2097E0u: goto label_2097e0;
            case 0x2097E4u: goto label_2097e4;
            case 0x2097E8u: goto label_2097e8;
            case 0x2097ECu: goto label_2097ec;
            case 0x2097F0u: goto label_2097f0;
            case 0x2097F4u: goto label_2097f4;
            case 0x2097F8u: goto label_2097f8;
            case 0x2097FCu: goto label_2097fc;
            case 0x209800u: goto label_209800;
            case 0x209804u: goto label_209804;
            case 0x209808u: goto label_209808;
            case 0x20980Cu: goto label_20980c;
            case 0x209810u: goto label_209810;
            case 0x209814u: goto label_209814;
            case 0x209818u: goto label_209818;
            case 0x20981Cu: goto label_20981c;
            case 0x209820u: goto label_209820;
            case 0x209824u: goto label_209824;
            case 0x209828u: goto label_209828;
            case 0x20982Cu: goto label_20982c;
            case 0x209830u: goto label_209830;
            case 0x209834u: goto label_209834;
            case 0x209838u: goto label_209838;
            case 0x20983Cu: goto label_20983c;
            case 0x209840u: goto label_209840;
            case 0x209844u: goto label_209844;
            case 0x209848u: goto label_209848;
            case 0x20984Cu: goto label_20984c;
            case 0x209850u: goto label_209850;
            case 0x209854u: goto label_209854;
            case 0x209858u: goto label_209858;
            case 0x20985Cu: goto label_20985c;
            case 0x209860u: goto label_209860;
            case 0x209864u: goto label_209864;
            case 0x209868u: goto label_209868;
            case 0x20986Cu: goto label_20986c;
            case 0x209870u: goto label_209870;
            case 0x209874u: goto label_209874;
            case 0x209878u: goto label_209878;
            case 0x20987Cu: goto label_20987c;
            case 0x209880u: goto label_209880;
            case 0x209884u: goto label_209884;
            case 0x209888u: goto label_209888;
            case 0x20988Cu: goto label_20988c;
            case 0x209890u: goto label_209890;
            case 0x209894u: goto label_209894;
            case 0x209898u: goto label_209898;
            case 0x20989Cu: goto label_20989c;
            case 0x2098A0u: goto label_2098a0;
            case 0x2098A4u: goto label_2098a4;
            case 0x2098A8u: goto label_2098a8;
            case 0x2098ACu: goto label_2098ac;
            case 0x2098B0u: goto label_2098b0;
            case 0x2098B4u: goto label_2098b4;
            case 0x2098B8u: goto label_2098b8;
            case 0x2098BCu: goto label_2098bc;
            case 0x2098C0u: goto label_2098c0;
            case 0x2098C4u: goto label_2098c4;
            case 0x2098C8u: goto label_2098c8;
            case 0x2098CCu: goto label_2098cc;
            case 0x2098D0u: goto label_2098d0;
            case 0x2098D4u: goto label_2098d4;
            case 0x2098D8u: goto label_2098d8;
            case 0x2098DCu: goto label_2098dc;
            case 0x2098E0u: goto label_2098e0;
            case 0x2098E4u: goto label_2098e4;
            case 0x2098E8u: goto label_2098e8;
            case 0x2098ECu: goto label_2098ec;
            case 0x2098F0u: goto label_2098f0;
            case 0x2098F4u: goto label_2098f4;
            case 0x2098F8u: goto label_2098f8;
            case 0x2098FCu: goto label_2098fc;
            case 0x209900u: goto label_209900;
            case 0x209904u: goto label_209904;
            case 0x209908u: goto label_209908;
            case 0x20990Cu: goto label_20990c;
            case 0x209910u: goto label_209910;
            case 0x209914u: goto label_209914;
            case 0x209918u: goto label_209918;
            case 0x20991Cu: goto label_20991c;
            case 0x209920u: goto label_209920;
            case 0x209924u: goto label_209924;
            case 0x209928u: goto label_209928;
            case 0x20992Cu: goto label_20992c;
            case 0x209930u: goto label_209930;
            case 0x209934u: goto label_209934;
            case 0x209938u: goto label_209938;
            case 0x20993Cu: goto label_20993c;
            case 0x209940u: goto label_209940;
            case 0x209944u: goto label_209944;
            case 0x209948u: goto label_209948;
            case 0x20994Cu: goto label_20994c;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x209958u: goto label_209958;
            case 0x20995Cu: goto label_20995c;
            case 0x209960u: goto label_209960;
            case 0x209964u: goto label_209964;
            case 0x209968u: goto label_209968;
            case 0x20996Cu: goto label_20996c;
            case 0x209970u: goto label_209970;
            case 0x209974u: goto label_209974;
            case 0x209978u: goto label_209978;
            case 0x20997Cu: goto label_20997c;
            case 0x209980u: goto label_209980;
            case 0x209984u: goto label_209984;
            case 0x209988u: goto label_209988;
            case 0x20998Cu: goto label_20998c;
            case 0x209990u: goto label_209990;
            case 0x209994u: goto label_209994;
            case 0x209998u: goto label_209998;
            case 0x20999Cu: goto label_20999c;
            case 0x2099A0u: goto label_2099a0;
            case 0x2099A4u: goto label_2099a4;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x2099B0u: goto label_2099b0;
            case 0x2099B4u: goto label_2099b4;
            case 0x2099B8u: goto label_2099b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209804u; }
            if (ctx->pc != 0x209804u) { return; }
        }
    }
    ctx->pc = 0x209804u;
label_209804:
    // 0x209804: 0x1000ffec
label_209808:
    if (ctx->pc == 0x209808u) {
        ctx->pc = 0x20980Cu;
        goto label_20980c;
    }
    ctx->pc = 0x209804u;
    {
        const bool branch_taken_0x209804 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209804) {
            ctx->pc = 0x2097B8u;
            goto label_2097b8;
        }
    }
    ctx->pc = 0x20980Cu;
label_20980c:
    // 0x20980c: 0x8fc20018
    ctx->pc = 0x20980cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_209810:
    // 0x209810: 0x4410004
label_209814:
    if (ctx->pc == 0x209814u) {
        ctx->pc = 0x209818u;
        goto label_209818;
    }
    ctx->pc = 0x209810u;
    {
        const bool branch_taken_0x209810 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x209810) {
            ctx->pc = 0x209824u;
            goto label_209824;
        }
    }
    ctx->pc = 0x209818u;
label_209818:
    // 0x209818: 0x102d
    ctx->pc = 0x209818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20981c:
    // 0x20981c: 0x10000060
label_209820:
    if (ctx->pc == 0x209820u) {
        ctx->pc = 0x209824u;
        goto label_209824;
    }
    ctx->pc = 0x20981Cu;
    {
        const bool branch_taken_0x20981c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20981c) {
            ctx->pc = 0x2099A0u;
            goto label_2099a0;
        }
    }
    ctx->pc = 0x209824u;
label_209824:
    // 0x209824: 0x8fc20018
    ctx->pc = 0x209824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_209828:
    // 0x209828: 0xafc2001c
    ctx->pc = 0x209828u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_20982c:
    // 0x20982c: 0x8fc20010
    ctx->pc = 0x20982cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209830:
    // 0x209830: 0x8c430000
    ctx->pc = 0x209830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209834:
    // 0x209834: 0xafc30020
    ctx->pc = 0x209834u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 3));
label_209838:
    // 0x209838: 0x8fc20020
    ctx->pc = 0x209838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_20983c:
    // 0x20983c: 0x8fc30080
    ctx->pc = 0x20983cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_209840:
    // 0x209840: 0x62102b
    ctx->pc = 0x209840u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_209844:
    // 0x209844: 0x10400003
label_209848:
    if (ctx->pc == 0x209848u) {
        ctx->pc = 0x20984Cu;
        goto label_20984c;
    }
    ctx->pc = 0x209844u;
    {
        const bool branch_taken_0x209844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209844) {
            ctx->pc = 0x209854u;
            goto label_209854;
        }
    }
    ctx->pc = 0x20984Cu;
label_20984c:
    // 0x20984c: 0x8fc20080
    ctx->pc = 0x20984cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_209850:
    // 0x209850: 0xafc20020
    ctx->pc = 0x209850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_209854:
    // 0x209854: 0x8fc4001c
    ctx->pc = 0x209854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_209858:
    // 0x209858: 0x8fc5000c
    ctx->pc = 0x209858u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_20985c:
    // 0x20985c: 0x8fc60020
    ctx->pc = 0x20985cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_209860:
    // 0x209860: 0xc0b998e
label_209864:
    if (ctx->pc == 0x209864u) {
        ctx->pc = 0x209868u;
        goto label_209868;
    }
    ctx->pc = 0x209860u;
    SET_GPR_U32(ctx, 31, 0x209868u);
    ctx->pc = 0x2E6638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x2e6638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209868u; }
    }
    if (ctx->pc != 0x209868u) { return; }
    ctx->pc = 0x209868u;
label_209868:
    // 0x209868: 0x10400005
label_20986c:
    if (ctx->pc == 0x20986Cu) {
        ctx->pc = 0x209870u;
        goto label_209870;
    }
    ctx->pc = 0x209868u;
    {
        const bool branch_taken_0x209868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209868) {
            ctx->pc = 0x209880u;
            goto label_209880;
        }
    }
    ctx->pc = 0x209870u;
label_209870:
    // 0x209870: 0x3c04003a
    ctx->pc = 0x209870u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209874:
    // 0x209874: 0x24844fa8
    ctx->pc = 0x209874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20392));
label_209878:
    // 0x209878: 0xc0b4a34
label_20987c:
    if (ctx->pc == 0x20987Cu) {
        ctx->pc = 0x209880u;
        goto label_209880;
    }
    ctx->pc = 0x209878u;
    SET_GPR_U32(ctx, 31, 0x209880u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209880u; }
    }
    if (ctx->pc != 0x209880u) { return; }
    ctx->pc = 0x209880u;
label_209880:
    // 0x209880: 0x0
    ctx->pc = 0x209880u;
    // NOP
label_209884:
    // 0x209884: 0x0
    ctx->pc = 0x209884u;
    // NOP
label_209888:
    // 0x209888: 0x27c20014
    ctx->pc = 0x209888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_20988c:
    // 0x20988c: 0x27c30018
    ctx->pc = 0x20988cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_209890:
    // 0x209890: 0x24040001
    ctx->pc = 0x209890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_209894:
    // 0x209894: 0x40282d
    ctx->pc = 0x209894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209898:
    // 0x209898: 0x60302d
    ctx->pc = 0x209898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20989c:
    // 0x20989c: 0xc0b9a14
label_2098a0:
    if (ctx->pc == 0x2098A0u) {
        ctx->pc = 0x2098A4u;
        goto label_2098a4;
    }
    ctx->pc = 0x20989Cu;
    SET_GPR_U32(ctx, 31, 0x2098A4u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2098A4u; }
    }
    if (ctx->pc != 0x2098A4u) { return; }
    ctx->pc = 0x2098A4u;
label_2098a4:
    // 0x2098a4: 0x10400003
label_2098a8:
    if (ctx->pc == 0x2098A8u) {
        ctx->pc = 0x2098ACu;
        goto label_2098ac;
    }
    ctx->pc = 0x2098A4u;
    {
        const bool branch_taken_0x2098a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098a4) {
            ctx->pc = 0x2098B4u;
            goto label_2098b4;
        }
    }
    ctx->pc = 0x2098ACu;
label_2098ac:
    // 0x2098ac: 0x1000000b
label_2098b0:
    if (ctx->pc == 0x2098B0u) {
        ctx->pc = 0x2098B4u;
        goto label_2098b4;
    }
    ctx->pc = 0x2098ACu;
    {
        const bool branch_taken_0x2098ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098ac) {
            ctx->pc = 0x2098DCu;
            goto label_2098dc;
        }
    }
    ctx->pc = 0x2098B4u;
label_2098b4:
    // 0x2098b4: 0x3c02003c
    ctx->pc = 0x2098b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2098b8:
    // 0x2098b8: 0x8c42c4e4
    ctx->pc = 0x2098b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_2098bc:
    // 0x2098bc: 0x10400005
label_2098c0:
    if (ctx->pc == 0x2098C0u) {
        ctx->pc = 0x2098C4u;
        goto label_2098c4;
    }
    ctx->pc = 0x2098BCu;
    {
        const bool branch_taken_0x2098bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098bc) {
            ctx->pc = 0x2098D4u;
            goto label_2098d4;
        }
    }
    ctx->pc = 0x2098C4u;
label_2098c4:
    // 0x2098c4: 0x3c10003c
    ctx->pc = 0x2098c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_2098c8:
    // 0x2098c8: 0x8e10c4e4
    ctx->pc = 0x2098c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_2098cc:
    // 0x2098cc: 0x200f809
label_2098d0:
    if (ctx->pc == 0x2098D0u) {
        ctx->pc = 0x2098D4u;
        goto label_2098d4;
    }
    ctx->pc = 0x2098CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2098D4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209638u: goto label_209638;
            case 0x20963Cu: goto label_20963c;
            case 0x209640u: goto label_209640;
            case 0x209644u: goto label_209644;
            case 0x209648u: goto label_209648;
            case 0x20964Cu: goto label_20964c;
            case 0x209650u: goto label_209650;
            case 0x209654u: goto label_209654;
            case 0x209658u: goto label_209658;
            case 0x20965Cu: goto label_20965c;
            case 0x209660u: goto label_209660;
            case 0x209664u: goto label_209664;
            case 0x209668u: goto label_209668;
            case 0x20966Cu: goto label_20966c;
            case 0x209670u: goto label_209670;
            case 0x209674u: goto label_209674;
            case 0x209678u: goto label_209678;
            case 0x20967Cu: goto label_20967c;
            case 0x209680u: goto label_209680;
            case 0x209684u: goto label_209684;
            case 0x209688u: goto label_209688;
            case 0x20968Cu: goto label_20968c;
            case 0x209690u: goto label_209690;
            case 0x209694u: goto label_209694;
            case 0x209698u: goto label_209698;
            case 0x20969Cu: goto label_20969c;
            case 0x2096A0u: goto label_2096a0;
            case 0x2096A4u: goto label_2096a4;
            case 0x2096A8u: goto label_2096a8;
            case 0x2096ACu: goto label_2096ac;
            case 0x2096B0u: goto label_2096b0;
            case 0x2096B4u: goto label_2096b4;
            case 0x2096B8u: goto label_2096b8;
            case 0x2096BCu: goto label_2096bc;
            case 0x2096C0u: goto label_2096c0;
            case 0x2096C4u: goto label_2096c4;
            case 0x2096C8u: goto label_2096c8;
            case 0x2096CCu: goto label_2096cc;
            case 0x2096D0u: goto label_2096d0;
            case 0x2096D4u: goto label_2096d4;
            case 0x2096D8u: goto label_2096d8;
            case 0x2096DCu: goto label_2096dc;
            case 0x2096E0u: goto label_2096e0;
            case 0x2096E4u: goto label_2096e4;
            case 0x2096E8u: goto label_2096e8;
            case 0x2096ECu: goto label_2096ec;
            case 0x2096F0u: goto label_2096f0;
            case 0x2096F4u: goto label_2096f4;
            case 0x2096F8u: goto label_2096f8;
            case 0x2096FCu: goto label_2096fc;
            case 0x209700u: goto label_209700;
            case 0x209704u: goto label_209704;
            case 0x209708u: goto label_209708;
            case 0x20970Cu: goto label_20970c;
            case 0x209710u: goto label_209710;
            case 0x209714u: goto label_209714;
            case 0x209718u: goto label_209718;
            case 0x20971Cu: goto label_20971c;
            case 0x209720u: goto label_209720;
            case 0x209724u: goto label_209724;
            case 0x209728u: goto label_209728;
            case 0x20972Cu: goto label_20972c;
            case 0x209730u: goto label_209730;
            case 0x209734u: goto label_209734;
            case 0x209738u: goto label_209738;
            case 0x20973Cu: goto label_20973c;
            case 0x209740u: goto label_209740;
            case 0x209744u: goto label_209744;
            case 0x209748u: goto label_209748;
            case 0x20974Cu: goto label_20974c;
            case 0x209750u: goto label_209750;
            case 0x209754u: goto label_209754;
            case 0x209758u: goto label_209758;
            case 0x20975Cu: goto label_20975c;
            case 0x209760u: goto label_209760;
            case 0x209764u: goto label_209764;
            case 0x209768u: goto label_209768;
            case 0x20976Cu: goto label_20976c;
            case 0x209770u: goto label_209770;
            case 0x209774u: goto label_209774;
            case 0x209778u: goto label_209778;
            case 0x20977Cu: goto label_20977c;
            case 0x209780u: goto label_209780;
            case 0x209784u: goto label_209784;
            case 0x209788u: goto label_209788;
            case 0x20978Cu: goto label_20978c;
            case 0x209790u: goto label_209790;
            case 0x209794u: goto label_209794;
            case 0x209798u: goto label_209798;
            case 0x20979Cu: goto label_20979c;
            case 0x2097A0u: goto label_2097a0;
            case 0x2097A4u: goto label_2097a4;
            case 0x2097A8u: goto label_2097a8;
            case 0x2097ACu: goto label_2097ac;
            case 0x2097B0u: goto label_2097b0;
            case 0x2097B4u: goto label_2097b4;
            case 0x2097B8u: goto label_2097b8;
            case 0x2097BCu: goto label_2097bc;
            case 0x2097C0u: goto label_2097c0;
            case 0x2097C4u: goto label_2097c4;
            case 0x2097C8u: goto label_2097c8;
            case 0x2097CCu: goto label_2097cc;
            case 0x2097D0u: goto label_2097d0;
            case 0x2097D4u: goto label_2097d4;
            case 0x2097D8u: goto label_2097d8;
            case 0x2097DCu: goto label_2097dc;
            case 0x2097E0u: goto label_2097e0;
            case 0x2097E4u: goto label_2097e4;
            case 0x2097E8u: goto label_2097e8;
            case 0x2097ECu: goto label_2097ec;
            case 0x2097F0u: goto label_2097f0;
            case 0x2097F4u: goto label_2097f4;
            case 0x2097F8u: goto label_2097f8;
            case 0x2097FCu: goto label_2097fc;
            case 0x209800u: goto label_209800;
            case 0x209804u: goto label_209804;
            case 0x209808u: goto label_209808;
            case 0x20980Cu: goto label_20980c;
            case 0x209810u: goto label_209810;
            case 0x209814u: goto label_209814;
            case 0x209818u: goto label_209818;
            case 0x20981Cu: goto label_20981c;
            case 0x209820u: goto label_209820;
            case 0x209824u: goto label_209824;
            case 0x209828u: goto label_209828;
            case 0x20982Cu: goto label_20982c;
            case 0x209830u: goto label_209830;
            case 0x209834u: goto label_209834;
            case 0x209838u: goto label_209838;
            case 0x20983Cu: goto label_20983c;
            case 0x209840u: goto label_209840;
            case 0x209844u: goto label_209844;
            case 0x209848u: goto label_209848;
            case 0x20984Cu: goto label_20984c;
            case 0x209850u: goto label_209850;
            case 0x209854u: goto label_209854;
            case 0x209858u: goto label_209858;
            case 0x20985Cu: goto label_20985c;
            case 0x209860u: goto label_209860;
            case 0x209864u: goto label_209864;
            case 0x209868u: goto label_209868;
            case 0x20986Cu: goto label_20986c;
            case 0x209870u: goto label_209870;
            case 0x209874u: goto label_209874;
            case 0x209878u: goto label_209878;
            case 0x20987Cu: goto label_20987c;
            case 0x209880u: goto label_209880;
            case 0x209884u: goto label_209884;
            case 0x209888u: goto label_209888;
            case 0x20988Cu: goto label_20988c;
            case 0x209890u: goto label_209890;
            case 0x209894u: goto label_209894;
            case 0x209898u: goto label_209898;
            case 0x20989Cu: goto label_20989c;
            case 0x2098A0u: goto label_2098a0;
            case 0x2098A4u: goto label_2098a4;
            case 0x2098A8u: goto label_2098a8;
            case 0x2098ACu: goto label_2098ac;
            case 0x2098B0u: goto label_2098b0;
            case 0x2098B4u: goto label_2098b4;
            case 0x2098B8u: goto label_2098b8;
            case 0x2098BCu: goto label_2098bc;
            case 0x2098C0u: goto label_2098c0;
            case 0x2098C4u: goto label_2098c4;
            case 0x2098C8u: goto label_2098c8;
            case 0x2098CCu: goto label_2098cc;
            case 0x2098D0u: goto label_2098d0;
            case 0x2098D4u: goto label_2098d4;
            case 0x2098D8u: goto label_2098d8;
            case 0x2098DCu: goto label_2098dc;
            case 0x2098E0u: goto label_2098e0;
            case 0x2098E4u: goto label_2098e4;
            case 0x2098E8u: goto label_2098e8;
            case 0x2098ECu: goto label_2098ec;
            case 0x2098F0u: goto label_2098f0;
            case 0x2098F4u: goto label_2098f4;
            case 0x2098F8u: goto label_2098f8;
            case 0x2098FCu: goto label_2098fc;
            case 0x209900u: goto label_209900;
            case 0x209904u: goto label_209904;
            case 0x209908u: goto label_209908;
            case 0x20990Cu: goto label_20990c;
            case 0x209910u: goto label_209910;
            case 0x209914u: goto label_209914;
            case 0x209918u: goto label_209918;
            case 0x20991Cu: goto label_20991c;
            case 0x209920u: goto label_209920;
            case 0x209924u: goto label_209924;
            case 0x209928u: goto label_209928;
            case 0x20992Cu: goto label_20992c;
            case 0x209930u: goto label_209930;
            case 0x209934u: goto label_209934;
            case 0x209938u: goto label_209938;
            case 0x20993Cu: goto label_20993c;
            case 0x209940u: goto label_209940;
            case 0x209944u: goto label_209944;
            case 0x209948u: goto label_209948;
            case 0x20994Cu: goto label_20994c;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x209958u: goto label_209958;
            case 0x20995Cu: goto label_20995c;
            case 0x209960u: goto label_209960;
            case 0x209964u: goto label_209964;
            case 0x209968u: goto label_209968;
            case 0x20996Cu: goto label_20996c;
            case 0x209970u: goto label_209970;
            case 0x209974u: goto label_209974;
            case 0x209978u: goto label_209978;
            case 0x20997Cu: goto label_20997c;
            case 0x209980u: goto label_209980;
            case 0x209984u: goto label_209984;
            case 0x209988u: goto label_209988;
            case 0x20998Cu: goto label_20998c;
            case 0x209990u: goto label_209990;
            case 0x209994u: goto label_209994;
            case 0x209998u: goto label_209998;
            case 0x20999Cu: goto label_20999c;
            case 0x2099A0u: goto label_2099a0;
            case 0x2099A4u: goto label_2099a4;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x2099B0u: goto label_2099b0;
            case 0x2099B4u: goto label_2099b4;
            case 0x2099B8u: goto label_2099b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2098D4u; }
            if (ctx->pc != 0x2098D4u) { return; }
        }
    }
    ctx->pc = 0x2098D4u;
label_2098d4:
    // 0x2098d4: 0x1000ffec
label_2098d8:
    if (ctx->pc == 0x2098D8u) {
        ctx->pc = 0x2098DCu;
        goto label_2098dc;
    }
    ctx->pc = 0x2098D4u;
    {
        const bool branch_taken_0x2098d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098d4) {
            ctx->pc = 0x209888u;
            goto label_209888;
        }
    }
    ctx->pc = 0x2098DCu;
label_2098dc:
    // 0x2098dc: 0x8fc20018
    ctx->pc = 0x2098dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_2098e0:
    // 0x2098e0: 0x4410006
label_2098e4:
    if (ctx->pc == 0x2098E4u) {
        ctx->pc = 0x2098E8u;
        goto label_2098e8;
    }
    ctx->pc = 0x2098E0u;
    {
        const bool branch_taken_0x2098e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2098e0) {
            ctx->pc = 0x2098FCu;
            goto label_2098fc;
        }
    }
    ctx->pc = 0x2098E8u;
label_2098e8:
    // 0x2098e8: 0xafc000b0
    ctx->pc = 0x2098e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 0));
label_2098ec:
    // 0x2098ec: 0x8fc20010
    ctx->pc = 0x2098ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_2098f0:
    // 0x2098f0: 0xac400000
    ctx->pc = 0x2098f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2098f4:
    // 0x2098f4: 0x10000006
label_2098f8:
    if (ctx->pc == 0x2098F8u) {
        ctx->pc = 0x2098FCu;
        goto label_2098fc;
    }
    ctx->pc = 0x2098F4u;
    {
        const bool branch_taken_0x2098f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098f4) {
            ctx->pc = 0x209910u;
            goto label_209910;
        }
    }
    ctx->pc = 0x2098FCu;
label_2098fc:
    // 0x2098fc: 0x24020001
    ctx->pc = 0x2098fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_209900:
    // 0x209900: 0xafc200b0
    ctx->pc = 0x209900u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 2));
label_209904:
    // 0x209904: 0x8fc20010
    ctx->pc = 0x209904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209908:
    // 0x209908: 0x8fc30018
    ctx->pc = 0x209908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_20990c:
    // 0x20990c: 0xac430000
    ctx->pc = 0x20990cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_209910:
    // 0x209910: 0x8fc4001c
    ctx->pc = 0x209910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_209914:
    // 0x209914: 0xc0b9922
label_209918:
    if (ctx->pc == 0x209918u) {
        ctx->pc = 0x20991Cu;
        goto label_20991c;
    }
    ctx->pc = 0x209914u;
    SET_GPR_U32(ctx, 31, 0x20991Cu);
    ctx->pc = 0x2E6488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x2e6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20991Cu; }
    }
    if (ctx->pc != 0x20991Cu) { return; }
    ctx->pc = 0x20991Cu;
label_20991c:
    // 0x20991c: 0x10400005
label_209920:
    if (ctx->pc == 0x209920u) {
        ctx->pc = 0x209924u;
        goto label_209924;
    }
    ctx->pc = 0x20991Cu;
    {
        const bool branch_taken_0x20991c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20991c) {
            ctx->pc = 0x209934u;
            goto label_209934;
        }
    }
    ctx->pc = 0x209924u;
label_209924:
    // 0x209924: 0x3c04003a
    ctx->pc = 0x209924u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209928:
    // 0x209928: 0x24844fc8
    ctx->pc = 0x209928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20424));
label_20992c:
    // 0x20992c: 0xc0b4a34
label_209930:
    if (ctx->pc == 0x209930u) {
        ctx->pc = 0x209934u;
        goto label_209934;
    }
    ctx->pc = 0x20992Cu;
    SET_GPR_U32(ctx, 31, 0x209934u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209934u; }
    }
    if (ctx->pc != 0x209934u) { return; }
    ctx->pc = 0x209934u;
label_209934:
    // 0x209934: 0x0
    ctx->pc = 0x209934u;
    // NOP
label_209938:
    // 0x209938: 0x27c20014
    ctx->pc = 0x209938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_20993c:
    // 0x20993c: 0x27c30018
    ctx->pc = 0x20993cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_209940:
    // 0x209940: 0x24040001
    ctx->pc = 0x209940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_209944:
    // 0x209944: 0x40282d
    ctx->pc = 0x209944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209948:
    // 0x209948: 0x60302d
    ctx->pc = 0x209948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20994c:
    // 0x20994c: 0xc0b9a14
label_209950:
    if (ctx->pc == 0x209950u) {
        ctx->pc = 0x209954u;
        goto label_209954;
    }
    ctx->pc = 0x20994Cu;
    SET_GPR_U32(ctx, 31, 0x209954u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209954u; }
    }
    if (ctx->pc != 0x209954u) { return; }
    ctx->pc = 0x209954u;
label_209954:
    // 0x209954: 0x10400003
label_209958:
    if (ctx->pc == 0x209958u) {
        ctx->pc = 0x20995Cu;
        goto label_20995c;
    }
    ctx->pc = 0x209954u;
    {
        const bool branch_taken_0x209954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209954) {
            ctx->pc = 0x209964u;
            goto label_209964;
        }
    }
    ctx->pc = 0x20995Cu;
label_20995c:
    // 0x20995c: 0x1000000b
label_209960:
    if (ctx->pc == 0x209960u) {
        ctx->pc = 0x209964u;
        goto label_209964;
    }
    ctx->pc = 0x20995Cu;
    {
        const bool branch_taken_0x20995c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20995c) {
            ctx->pc = 0x20998Cu;
            goto label_20998c;
        }
    }
    ctx->pc = 0x209964u;
label_209964:
    // 0x209964: 0x3c02003c
    ctx->pc = 0x209964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209968:
    // 0x209968: 0x8c42c4e4
    ctx->pc = 0x209968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_20996c:
    // 0x20996c: 0x10400005
label_209970:
    if (ctx->pc == 0x209970u) {
        ctx->pc = 0x209974u;
        goto label_209974;
    }
    ctx->pc = 0x20996Cu;
    {
        const bool branch_taken_0x20996c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20996c) {
            ctx->pc = 0x209984u;
            goto label_209984;
        }
    }
    ctx->pc = 0x209974u;
label_209974:
    // 0x209974: 0x3c10003c
    ctx->pc = 0x209974u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209978:
    // 0x209978: 0x8e10c4e4
    ctx->pc = 0x209978u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_20997c:
    // 0x20997c: 0x200f809
label_209980:
    if (ctx->pc == 0x209980u) {
        ctx->pc = 0x209984u;
        goto label_209984;
    }
    ctx->pc = 0x20997Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x209984u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209638u: goto label_209638;
            case 0x20963Cu: goto label_20963c;
            case 0x209640u: goto label_209640;
            case 0x209644u: goto label_209644;
            case 0x209648u: goto label_209648;
            case 0x20964Cu: goto label_20964c;
            case 0x209650u: goto label_209650;
            case 0x209654u: goto label_209654;
            case 0x209658u: goto label_209658;
            case 0x20965Cu: goto label_20965c;
            case 0x209660u: goto label_209660;
            case 0x209664u: goto label_209664;
            case 0x209668u: goto label_209668;
            case 0x20966Cu: goto label_20966c;
            case 0x209670u: goto label_209670;
            case 0x209674u: goto label_209674;
            case 0x209678u: goto label_209678;
            case 0x20967Cu: goto label_20967c;
            case 0x209680u: goto label_209680;
            case 0x209684u: goto label_209684;
            case 0x209688u: goto label_209688;
            case 0x20968Cu: goto label_20968c;
            case 0x209690u: goto label_209690;
            case 0x209694u: goto label_209694;
            case 0x209698u: goto label_209698;
            case 0x20969Cu: goto label_20969c;
            case 0x2096A0u: goto label_2096a0;
            case 0x2096A4u: goto label_2096a4;
            case 0x2096A8u: goto label_2096a8;
            case 0x2096ACu: goto label_2096ac;
            case 0x2096B0u: goto label_2096b0;
            case 0x2096B4u: goto label_2096b4;
            case 0x2096B8u: goto label_2096b8;
            case 0x2096BCu: goto label_2096bc;
            case 0x2096C0u: goto label_2096c0;
            case 0x2096C4u: goto label_2096c4;
            case 0x2096C8u: goto label_2096c8;
            case 0x2096CCu: goto label_2096cc;
            case 0x2096D0u: goto label_2096d0;
            case 0x2096D4u: goto label_2096d4;
            case 0x2096D8u: goto label_2096d8;
            case 0x2096DCu: goto label_2096dc;
            case 0x2096E0u: goto label_2096e0;
            case 0x2096E4u: goto label_2096e4;
            case 0x2096E8u: goto label_2096e8;
            case 0x2096ECu: goto label_2096ec;
            case 0x2096F0u: goto label_2096f0;
            case 0x2096F4u: goto label_2096f4;
            case 0x2096F8u: goto label_2096f8;
            case 0x2096FCu: goto label_2096fc;
            case 0x209700u: goto label_209700;
            case 0x209704u: goto label_209704;
            case 0x209708u: goto label_209708;
            case 0x20970Cu: goto label_20970c;
            case 0x209710u: goto label_209710;
            case 0x209714u: goto label_209714;
            case 0x209718u: goto label_209718;
            case 0x20971Cu: goto label_20971c;
            case 0x209720u: goto label_209720;
            case 0x209724u: goto label_209724;
            case 0x209728u: goto label_209728;
            case 0x20972Cu: goto label_20972c;
            case 0x209730u: goto label_209730;
            case 0x209734u: goto label_209734;
            case 0x209738u: goto label_209738;
            case 0x20973Cu: goto label_20973c;
            case 0x209740u: goto label_209740;
            case 0x209744u: goto label_209744;
            case 0x209748u: goto label_209748;
            case 0x20974Cu: goto label_20974c;
            case 0x209750u: goto label_209750;
            case 0x209754u: goto label_209754;
            case 0x209758u: goto label_209758;
            case 0x20975Cu: goto label_20975c;
            case 0x209760u: goto label_209760;
            case 0x209764u: goto label_209764;
            case 0x209768u: goto label_209768;
            case 0x20976Cu: goto label_20976c;
            case 0x209770u: goto label_209770;
            case 0x209774u: goto label_209774;
            case 0x209778u: goto label_209778;
            case 0x20977Cu: goto label_20977c;
            case 0x209780u: goto label_209780;
            case 0x209784u: goto label_209784;
            case 0x209788u: goto label_209788;
            case 0x20978Cu: goto label_20978c;
            case 0x209790u: goto label_209790;
            case 0x209794u: goto label_209794;
            case 0x209798u: goto label_209798;
            case 0x20979Cu: goto label_20979c;
            case 0x2097A0u: goto label_2097a0;
            case 0x2097A4u: goto label_2097a4;
            case 0x2097A8u: goto label_2097a8;
            case 0x2097ACu: goto label_2097ac;
            case 0x2097B0u: goto label_2097b0;
            case 0x2097B4u: goto label_2097b4;
            case 0x2097B8u: goto label_2097b8;
            case 0x2097BCu: goto label_2097bc;
            case 0x2097C0u: goto label_2097c0;
            case 0x2097C4u: goto label_2097c4;
            case 0x2097C8u: goto label_2097c8;
            case 0x2097CCu: goto label_2097cc;
            case 0x2097D0u: goto label_2097d0;
            case 0x2097D4u: goto label_2097d4;
            case 0x2097D8u: goto label_2097d8;
            case 0x2097DCu: goto label_2097dc;
            case 0x2097E0u: goto label_2097e0;
            case 0x2097E4u: goto label_2097e4;
            case 0x2097E8u: goto label_2097e8;
            case 0x2097ECu: goto label_2097ec;
            case 0x2097F0u: goto label_2097f0;
            case 0x2097F4u: goto label_2097f4;
            case 0x2097F8u: goto label_2097f8;
            case 0x2097FCu: goto label_2097fc;
            case 0x209800u: goto label_209800;
            case 0x209804u: goto label_209804;
            case 0x209808u: goto label_209808;
            case 0x20980Cu: goto label_20980c;
            case 0x209810u: goto label_209810;
            case 0x209814u: goto label_209814;
            case 0x209818u: goto label_209818;
            case 0x20981Cu: goto label_20981c;
            case 0x209820u: goto label_209820;
            case 0x209824u: goto label_209824;
            case 0x209828u: goto label_209828;
            case 0x20982Cu: goto label_20982c;
            case 0x209830u: goto label_209830;
            case 0x209834u: goto label_209834;
            case 0x209838u: goto label_209838;
            case 0x20983Cu: goto label_20983c;
            case 0x209840u: goto label_209840;
            case 0x209844u: goto label_209844;
            case 0x209848u: goto label_209848;
            case 0x20984Cu: goto label_20984c;
            case 0x209850u: goto label_209850;
            case 0x209854u: goto label_209854;
            case 0x209858u: goto label_209858;
            case 0x20985Cu: goto label_20985c;
            case 0x209860u: goto label_209860;
            case 0x209864u: goto label_209864;
            case 0x209868u: goto label_209868;
            case 0x20986Cu: goto label_20986c;
            case 0x209870u: goto label_209870;
            case 0x209874u: goto label_209874;
            case 0x209878u: goto label_209878;
            case 0x20987Cu: goto label_20987c;
            case 0x209880u: goto label_209880;
            case 0x209884u: goto label_209884;
            case 0x209888u: goto label_209888;
            case 0x20988Cu: goto label_20988c;
            case 0x209890u: goto label_209890;
            case 0x209894u: goto label_209894;
            case 0x209898u: goto label_209898;
            case 0x20989Cu: goto label_20989c;
            case 0x2098A0u: goto label_2098a0;
            case 0x2098A4u: goto label_2098a4;
            case 0x2098A8u: goto label_2098a8;
            case 0x2098ACu: goto label_2098ac;
            case 0x2098B0u: goto label_2098b0;
            case 0x2098B4u: goto label_2098b4;
            case 0x2098B8u: goto label_2098b8;
            case 0x2098BCu: goto label_2098bc;
            case 0x2098C0u: goto label_2098c0;
            case 0x2098C4u: goto label_2098c4;
            case 0x2098C8u: goto label_2098c8;
            case 0x2098CCu: goto label_2098cc;
            case 0x2098D0u: goto label_2098d0;
            case 0x2098D4u: goto label_2098d4;
            case 0x2098D8u: goto label_2098d8;
            case 0x2098DCu: goto label_2098dc;
            case 0x2098E0u: goto label_2098e0;
            case 0x2098E4u: goto label_2098e4;
            case 0x2098E8u: goto label_2098e8;
            case 0x2098ECu: goto label_2098ec;
            case 0x2098F0u: goto label_2098f0;
            case 0x2098F4u: goto label_2098f4;
            case 0x2098F8u: goto label_2098f8;
            case 0x2098FCu: goto label_2098fc;
            case 0x209900u: goto label_209900;
            case 0x209904u: goto label_209904;
            case 0x209908u: goto label_209908;
            case 0x20990Cu: goto label_20990c;
            case 0x209910u: goto label_209910;
            case 0x209914u: goto label_209914;
            case 0x209918u: goto label_209918;
            case 0x20991Cu: goto label_20991c;
            case 0x209920u: goto label_209920;
            case 0x209924u: goto label_209924;
            case 0x209928u: goto label_209928;
            case 0x20992Cu: goto label_20992c;
            case 0x209930u: goto label_209930;
            case 0x209934u: goto label_209934;
            case 0x209938u: goto label_209938;
            case 0x20993Cu: goto label_20993c;
            case 0x209940u: goto label_209940;
            case 0x209944u: goto label_209944;
            case 0x209948u: goto label_209948;
            case 0x20994Cu: goto label_20994c;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x209958u: goto label_209958;
            case 0x20995Cu: goto label_20995c;
            case 0x209960u: goto label_209960;
            case 0x209964u: goto label_209964;
            case 0x209968u: goto label_209968;
            case 0x20996Cu: goto label_20996c;
            case 0x209970u: goto label_209970;
            case 0x209974u: goto label_209974;
            case 0x209978u: goto label_209978;
            case 0x20997Cu: goto label_20997c;
            case 0x209980u: goto label_209980;
            case 0x209984u: goto label_209984;
            case 0x209988u: goto label_209988;
            case 0x20998Cu: goto label_20998c;
            case 0x209990u: goto label_209990;
            case 0x209994u: goto label_209994;
            case 0x209998u: goto label_209998;
            case 0x20999Cu: goto label_20999c;
            case 0x2099A0u: goto label_2099a0;
            case 0x2099A4u: goto label_2099a4;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x2099B0u: goto label_2099b0;
            case 0x2099B4u: goto label_2099b4;
            case 0x2099B8u: goto label_2099b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209984u; }
            if (ctx->pc != 0x209984u) { return; }
        }
    }
    ctx->pc = 0x209984u;
label_209984:
    // 0x209984: 0x1000ffec
label_209988:
    if (ctx->pc == 0x209988u) {
        ctx->pc = 0x20998Cu;
        goto label_20998c;
    }
    ctx->pc = 0x209984u;
    {
        const bool branch_taken_0x209984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209984) {
            ctx->pc = 0x209938u;
            goto label_209938;
        }
    }
    ctx->pc = 0x20998Cu;
label_20998c:
    // 0x20998c: 0x8fc200b0
    ctx->pc = 0x20998cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 176)));
label_209990:
    // 0x209990: 0x2182b
    ctx->pc = 0x209990u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_209994:
    // 0x209994: 0x60102d
    ctx->pc = 0x209994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209998:
    // 0x209998: 0x10000001
label_20999c:
    if (ctx->pc == 0x20999Cu) {
        ctx->pc = 0x2099A0u;
        goto label_2099a0;
    }
    ctx->pc = 0x209998u;
    {
        const bool branch_taken_0x209998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209998) {
            ctx->pc = 0x2099A0u;
            goto label_2099a0;
        }
    }
    ctx->pc = 0x2099A0u;
label_2099a0:
    // 0x2099a0: 0x3c0e82d
    ctx->pc = 0x2099a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2099a4:
    // 0x2099a4: 0xdfbf00e0
    ctx->pc = 0x2099a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2099a8:
    // 0x2099a8: 0xdfbe00d0
    ctx->pc = 0x2099a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2099ac:
    // 0x2099ac: 0xdfb000c0
    ctx->pc = 0x2099acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2099b0:
    // 0x2099b0: 0x27bd00f0
    ctx->pc = 0x2099b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
label_2099b4:
    // 0x2099b4: 0x3e00008
label_2099b8:
    if (ctx->pc == 0x2099B8u) {
        ctx->pc = 0x2099BCu;
        goto label_fallthrough_0x2099b4;
    }
    ctx->pc = 0x2099B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209638u: goto label_209638;
            case 0x20963Cu: goto label_20963c;
            case 0x209640u: goto label_209640;
            case 0x209644u: goto label_209644;
            case 0x209648u: goto label_209648;
            case 0x20964Cu: goto label_20964c;
            case 0x209650u: goto label_209650;
            case 0x209654u: goto label_209654;
            case 0x209658u: goto label_209658;
            case 0x20965Cu: goto label_20965c;
            case 0x209660u: goto label_209660;
            case 0x209664u: goto label_209664;
            case 0x209668u: goto label_209668;
            case 0x20966Cu: goto label_20966c;
            case 0x209670u: goto label_209670;
            case 0x209674u: goto label_209674;
            case 0x209678u: goto label_209678;
            case 0x20967Cu: goto label_20967c;
            case 0x209680u: goto label_209680;
            case 0x209684u: goto label_209684;
            case 0x209688u: goto label_209688;
            case 0x20968Cu: goto label_20968c;
            case 0x209690u: goto label_209690;
            case 0x209694u: goto label_209694;
            case 0x209698u: goto label_209698;
            case 0x20969Cu: goto label_20969c;
            case 0x2096A0u: goto label_2096a0;
            case 0x2096A4u: goto label_2096a4;
            case 0x2096A8u: goto label_2096a8;
            case 0x2096ACu: goto label_2096ac;
            case 0x2096B0u: goto label_2096b0;
            case 0x2096B4u: goto label_2096b4;
            case 0x2096B8u: goto label_2096b8;
            case 0x2096BCu: goto label_2096bc;
            case 0x2096C0u: goto label_2096c0;
            case 0x2096C4u: goto label_2096c4;
            case 0x2096C8u: goto label_2096c8;
            case 0x2096CCu: goto label_2096cc;
            case 0x2096D0u: goto label_2096d0;
            case 0x2096D4u: goto label_2096d4;
            case 0x2096D8u: goto label_2096d8;
            case 0x2096DCu: goto label_2096dc;
            case 0x2096E0u: goto label_2096e0;
            case 0x2096E4u: goto label_2096e4;
            case 0x2096E8u: goto label_2096e8;
            case 0x2096ECu: goto label_2096ec;
            case 0x2096F0u: goto label_2096f0;
            case 0x2096F4u: goto label_2096f4;
            case 0x2096F8u: goto label_2096f8;
            case 0x2096FCu: goto label_2096fc;
            case 0x209700u: goto label_209700;
            case 0x209704u: goto label_209704;
            case 0x209708u: goto label_209708;
            case 0x20970Cu: goto label_20970c;
            case 0x209710u: goto label_209710;
            case 0x209714u: goto label_209714;
            case 0x209718u: goto label_209718;
            case 0x20971Cu: goto label_20971c;
            case 0x209720u: goto label_209720;
            case 0x209724u: goto label_209724;
            case 0x209728u: goto label_209728;
            case 0x20972Cu: goto label_20972c;
            case 0x209730u: goto label_209730;
            case 0x209734u: goto label_209734;
            case 0x209738u: goto label_209738;
            case 0x20973Cu: goto label_20973c;
            case 0x209740u: goto label_209740;
            case 0x209744u: goto label_209744;
            case 0x209748u: goto label_209748;
            case 0x20974Cu: goto label_20974c;
            case 0x209750u: goto label_209750;
            case 0x209754u: goto label_209754;
            case 0x209758u: goto label_209758;
            case 0x20975Cu: goto label_20975c;
            case 0x209760u: goto label_209760;
            case 0x209764u: goto label_209764;
            case 0x209768u: goto label_209768;
            case 0x20976Cu: goto label_20976c;
            case 0x209770u: goto label_209770;
            case 0x209774u: goto label_209774;
            case 0x209778u: goto label_209778;
            case 0x20977Cu: goto label_20977c;
            case 0x209780u: goto label_209780;
            case 0x209784u: goto label_209784;
            case 0x209788u: goto label_209788;
            case 0x20978Cu: goto label_20978c;
            case 0x209790u: goto label_209790;
            case 0x209794u: goto label_209794;
            case 0x209798u: goto label_209798;
            case 0x20979Cu: goto label_20979c;
            case 0x2097A0u: goto label_2097a0;
            case 0x2097A4u: goto label_2097a4;
            case 0x2097A8u: goto label_2097a8;
            case 0x2097ACu: goto label_2097ac;
            case 0x2097B0u: goto label_2097b0;
            case 0x2097B4u: goto label_2097b4;
            case 0x2097B8u: goto label_2097b8;
            case 0x2097BCu: goto label_2097bc;
            case 0x2097C0u: goto label_2097c0;
            case 0x2097C4u: goto label_2097c4;
            case 0x2097C8u: goto label_2097c8;
            case 0x2097CCu: goto label_2097cc;
            case 0x2097D0u: goto label_2097d0;
            case 0x2097D4u: goto label_2097d4;
            case 0x2097D8u: goto label_2097d8;
            case 0x2097DCu: goto label_2097dc;
            case 0x2097E0u: goto label_2097e0;
            case 0x2097E4u: goto label_2097e4;
            case 0x2097E8u: goto label_2097e8;
            case 0x2097ECu: goto label_2097ec;
            case 0x2097F0u: goto label_2097f0;
            case 0x2097F4u: goto label_2097f4;
            case 0x2097F8u: goto label_2097f8;
            case 0x2097FCu: goto label_2097fc;
            case 0x209800u: goto label_209800;
            case 0x209804u: goto label_209804;
            case 0x209808u: goto label_209808;
            case 0x20980Cu: goto label_20980c;
            case 0x209810u: goto label_209810;
            case 0x209814u: goto label_209814;
            case 0x209818u: goto label_209818;
            case 0x20981Cu: goto label_20981c;
            case 0x209820u: goto label_209820;
            case 0x209824u: goto label_209824;
            case 0x209828u: goto label_209828;
            case 0x20982Cu: goto label_20982c;
            case 0x209830u: goto label_209830;
            case 0x209834u: goto label_209834;
            case 0x209838u: goto label_209838;
            case 0x20983Cu: goto label_20983c;
            case 0x209840u: goto label_209840;
            case 0x209844u: goto label_209844;
            case 0x209848u: goto label_209848;
            case 0x20984Cu: goto label_20984c;
            case 0x209850u: goto label_209850;
            case 0x209854u: goto label_209854;
            case 0x209858u: goto label_209858;
            case 0x20985Cu: goto label_20985c;
            case 0x209860u: goto label_209860;
            case 0x209864u: goto label_209864;
            case 0x209868u: goto label_209868;
            case 0x20986Cu: goto label_20986c;
            case 0x209870u: goto label_209870;
            case 0x209874u: goto label_209874;
            case 0x209878u: goto label_209878;
            case 0x20987Cu: goto label_20987c;
            case 0x209880u: goto label_209880;
            case 0x209884u: goto label_209884;
            case 0x209888u: goto label_209888;
            case 0x20988Cu: goto label_20988c;
            case 0x209890u: goto label_209890;
            case 0x209894u: goto label_209894;
            case 0x209898u: goto label_209898;
            case 0x20989Cu: goto label_20989c;
            case 0x2098A0u: goto label_2098a0;
            case 0x2098A4u: goto label_2098a4;
            case 0x2098A8u: goto label_2098a8;
            case 0x2098ACu: goto label_2098ac;
            case 0x2098B0u: goto label_2098b0;
            case 0x2098B4u: goto label_2098b4;
            case 0x2098B8u: goto label_2098b8;
            case 0x2098BCu: goto label_2098bc;
            case 0x2098C0u: goto label_2098c0;
            case 0x2098C4u: goto label_2098c4;
            case 0x2098C8u: goto label_2098c8;
            case 0x2098CCu: goto label_2098cc;
            case 0x2098D0u: goto label_2098d0;
            case 0x2098D4u: goto label_2098d4;
            case 0x2098D8u: goto label_2098d8;
            case 0x2098DCu: goto label_2098dc;
            case 0x2098E0u: goto label_2098e0;
            case 0x2098E4u: goto label_2098e4;
            case 0x2098E8u: goto label_2098e8;
            case 0x2098ECu: goto label_2098ec;
            case 0x2098F0u: goto label_2098f0;
            case 0x2098F4u: goto label_2098f4;
            case 0x2098F8u: goto label_2098f8;
            case 0x2098FCu: goto label_2098fc;
            case 0x209900u: goto label_209900;
            case 0x209904u: goto label_209904;
            case 0x209908u: goto label_209908;
            case 0x20990Cu: goto label_20990c;
            case 0x209910u: goto label_209910;
            case 0x209914u: goto label_209914;
            case 0x209918u: goto label_209918;
            case 0x20991Cu: goto label_20991c;
            case 0x209920u: goto label_209920;
            case 0x209924u: goto label_209924;
            case 0x209928u: goto label_209928;
            case 0x20992Cu: goto label_20992c;
            case 0x209930u: goto label_209930;
            case 0x209934u: goto label_209934;
            case 0x209938u: goto label_209938;
            case 0x20993Cu: goto label_20993c;
            case 0x209940u: goto label_209940;
            case 0x209944u: goto label_209944;
            case 0x209948u: goto label_209948;
            case 0x20994Cu: goto label_20994c;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x209958u: goto label_209958;
            case 0x20995Cu: goto label_20995c;
            case 0x209960u: goto label_209960;
            case 0x209964u: goto label_209964;
            case 0x209968u: goto label_209968;
            case 0x20996Cu: goto label_20996c;
            case 0x209970u: goto label_209970;
            case 0x209974u: goto label_209974;
            case 0x209978u: goto label_209978;
            case 0x20997Cu: goto label_20997c;
            case 0x209980u: goto label_209980;
            case 0x209984u: goto label_209984;
            case 0x209988u: goto label_209988;
            case 0x20998Cu: goto label_20998c;
            case 0x209990u: goto label_209990;
            case 0x209994u: goto label_209994;
            case 0x209998u: goto label_209998;
            case 0x20999Cu: goto label_20999c;
            case 0x2099A0u: goto label_2099a0;
            case 0x2099A4u: goto label_2099a4;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x2099B0u: goto label_2099b0;
            case 0x2099B4u: goto label_2099b4;
            case 0x2099B8u: goto label_2099b8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2099b4:
    ctx->pc = 0x2099BCu;
}
