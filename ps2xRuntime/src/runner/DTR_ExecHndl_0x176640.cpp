#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTR_ExecHndl
// Address: 0x176640 - 0x1769a0
void DTR_ExecHndl_0x176640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTR_ExecHndl");


    ctx->pc = 0x176640u;

label_176640:
    // 0x176640: 0x27bdff70
    ctx->pc = 0x176640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_176644:
    // 0x176644: 0x24020001
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_176648:
    // 0x176648: 0xffb10050
    ctx->pc = 0x176648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_17664c:
    // 0x17664c: 0xffbf0080
    ctx->pc = 0x17664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_176650:
    // 0x176650: 0x80882d
    ctx->pc = 0x176650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176654:
    // 0x176654: 0xffb30070
    ctx->pc = 0x176654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_176658:
    // 0x176658: 0xffb20060
    ctx->pc = 0x176658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_17665c:
    // 0x17665c: 0xffb00040
    ctx->pc = 0x17665cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_176660:
    // 0x176660: 0x82240001
    ctx->pc = 0x176660u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_176664:
    // 0x176664: 0x148200c8
label_176668:
    if (ctx->pc == 0x176668u) {
        ctx->pc = 0x176668u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x17666Cu;
        goto label_17666c;
    }
    ctx->pc = 0x176664u;
    {
        const bool branch_taken_0x176664 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x176668u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x176664) {
            ctx->pc = 0x176988u;
            goto label_176988;
        }
    }
    ctx->pc = 0x17666Cu;
label_17666c:
    // 0x17666c: 0x82220002
    ctx->pc = 0x17666cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_176670:
    // 0x176670: 0x14440027
label_176674:
    if (ctx->pc == 0x176674u) {
        ctx->pc = 0x176674u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x176678u;
        goto label_176678;
    }
    ctx->pc = 0x176670u;
    {
        const bool branch_taken_0x176670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x176674u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        if (branch_taken_0x176670) {
            ctx->pc = 0x176710u;
            goto label_176710;
        }
    }
    ctx->pc = 0x176678u;
label_176678:
    // 0x176678: 0xc055320
label_17667c:
    if (ctx->pc == 0x17667Cu) {
        ctx->pc = 0x17667Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x176680u;
        goto label_176680;
    }
    ctx->pc = 0x176678u;
    SET_GPR_U32(ctx, 31, 0x176680u);
    ctx->pc = 0x17667Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x154C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x154c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176680u; }
        else if (ctx->pc != 0x176680u) { ctx->pc = 0x176680u; }
    }
    if (ctx->pc != 0x176680u) { return; }
    ctx->pc = 0x176680u;
label_176680:
    // 0x176680: 0x4430023
label_176684:
    if (ctx->pc == 0x176684u) {
        ctx->pc = 0x176684u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x176688u;
        goto label_176688;
    }
    ctx->pc = 0x176680u;
    {
        const bool branch_taken_0x176680 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x176680) {
            ctx->pc = 0x176684u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->pc = 0x176710u;
            goto label_176710;
        }
    }
    ctx->pc = 0x176688u;
label_176688:
    // 0x176688: 0x8e240004
    ctx->pc = 0x176688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17668c:
    // 0x17668c: 0x282d
    ctx->pc = 0x17668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176690:
    // 0x176690: 0x8c830000
    ctx->pc = 0x176690u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_176694:
    // 0x176694: 0x8c620020
    ctx->pc = 0x176694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_176698:
    // 0x176698: 0x40f809
label_17669c:
    if (ctx->pc == 0x17669Cu) {
        ctx->pc = 0x17669Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x1766A0u;
        goto label_1766a0;
    }
    ctx->pc = 0x176698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1766A0u);
        ctx->pc = 0x17669Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1766A0u; }
            if (ctx->pc != 0x1766A0u) { return; }
        }
    }
    ctx->pc = 0x1766A0u;
label_1766a0:
    // 0x1766a0: 0x8e240008
    ctx->pc = 0x1766a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1766a4:
    // 0x1766a4: 0x24050001
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1766a8:
    // 0x1766a8: 0xae20000c
    ctx->pc = 0x1766a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1766ac:
    // 0x1766ac: 0x8c830000
    ctx->pc = 0x1766acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1766b0:
    // 0x1766b0: 0xae200010
    ctx->pc = 0x1766b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1766b4:
    // 0x1766b4: 0x8c620020
    ctx->pc = 0x1766b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1766b8:
    // 0x1766b8: 0x40f809
label_1766bc:
    if (ctx->pc == 0x1766BCu) {
        ctx->pc = 0x1766BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x1766C0u;
        goto label_1766c0;
    }
    ctx->pc = 0x1766B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1766C0u);
        ctx->pc = 0x1766BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1766C0u; }
            if (ctx->pc != 0x1766C0u) { return; }
        }
    }
    ctx->pc = 0x1766C0u;
label_1766c0:
    // 0x1766c0: 0x8e23003c
    ctx->pc = 0x1766c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1766c4:
    // 0x1766c4: 0x8e220010
    ctx->pc = 0x1766c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1766c8:
    // 0x1766c8: 0xae200014
    ctx->pc = 0x1766c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1766cc:
    // 0x1766cc: 0x621821
    ctx->pc = 0x1766ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1766d0:
    // 0x1766d0: 0xae200018
    ctx->pc = 0x1766d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1766d4:
    // 0x1766d4: 0xae23003c
    ctx->pc = 0x1766d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_1766d8:
    // 0x1766d8: 0x1040000c
label_1766dc:
    if (ctx->pc == 0x1766DCu) {
        ctx->pc = 0x1766DCu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1766E0u;
        goto label_1766e0;
    }
    ctx->pc = 0x1766D8u;
    {
        const bool branch_taken_0x1766d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1766DCu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1766d8) {
            ctx->pc = 0x17670Cu;
            goto label_17670c;
        }
    }
    ctx->pc = 0x1766E0u;
label_1766e0:
    // 0x1766e0: 0x3c04002c
    ctx->pc = 0x1766e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1766e4:
    // 0x1766e4: 0xc05114a
label_1766e8:
    if (ctx->pc == 0x1766E8u) {
        ctx->pc = 0x1766E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946896));
        ctx->pc = 0x1766ECu;
        goto label_1766ec;
    }
    ctx->pc = 0x1766E4u;
    SET_GPR_U32(ctx, 31, 0x1766ECu);
    ctx->pc = 0x1766E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946896));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766ECu; }
        else if (ctx->pc != 0x1766ECu) { ctx->pc = 0x1766ECu; }
    }
    if (ctx->pc != 0x1766ECu) { return; }
    ctx->pc = 0x1766ECu;
label_1766ec:
    // 0x1766ec: 0x0
    ctx->pc = 0x1766ecu;
    // NOP
label_1766f0:
    // 0x1766f0: 0x0
    ctx->pc = 0x1766f0u;
    // NOP
label_1766f4:
    // 0x1766f4: 0x0
    ctx->pc = 0x1766f4u;
    // NOP
label_1766f8:
    // 0x1766f8: 0x0
    ctx->pc = 0x1766f8u;
    // NOP
label_1766fc:
    // 0x1766fc: 0x0
    ctx->pc = 0x1766fcu;
    // NOP
label_176700:
    // 0x176700: 0x0
    ctx->pc = 0x176700u;
    // NOP
label_176704:
    // 0x176704: 0x1000fffa
label_176708:
    if (ctx->pc == 0x176708u) {
        ctx->pc = 0x17670Cu;
        goto label_17670c;
    }
    ctx->pc = 0x176704u;
    {
        const bool branch_taken_0x176704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x176704) {
            ctx->pc = 0x1766F0u;
            goto label_1766f0;
        }
    }
    ctx->pc = 0x17670Cu;
label_17670c:
    // 0x17670c: 0x182d
    ctx->pc = 0x17670cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176710:
    // 0x176710: 0x1460009d
label_176714:
    if (ctx->pc == 0x176714u) {
        ctx->pc = 0x176714u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x176718u;
        goto label_176718;
    }
    ctx->pc = 0x176710u;
    {
        const bool branch_taken_0x176710 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x176714u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x176710) {
            ctx->pc = 0x176988u;
            goto label_176988;
        }
    }
    ctx->pc = 0x176718u;
label_176718:
    // 0x176718: 0x8e240004
    ctx->pc = 0x176718u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17671c:
    // 0x17671c: 0x3c067fff
    ctx->pc = 0x17671cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_176720:
    // 0x176720: 0x24050001
    ctx->pc = 0x176720u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_176724:
    // 0x176724: 0x34c6ffff
    ctx->pc = 0x176724u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_176728:
    // 0x176728: 0x8c830000
    ctx->pc = 0x176728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17672c:
    // 0x17672c: 0x8c620018
    ctx->pc = 0x17672cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_176730:
    // 0x176730: 0x40f809
label_176734:
    if (ctx->pc == 0x176734u) {
        ctx->pc = 0x176734u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176738u;
        goto label_176738;
    }
    ctx->pc = 0x176730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176738u);
        ctx->pc = 0x176734u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176738u; }
            if (ctx->pc != 0x176738u) { return; }
        }
    }
    ctx->pc = 0x176738u;
label_176738:
    // 0x176738: 0x8e240008
    ctx->pc = 0x176738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17673c:
    // 0x17673c: 0x27b30020
    ctx->pc = 0x17673cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 32));
label_176740:
    // 0x176740: 0x3c067fff
    ctx->pc = 0x176740u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_176744:
    // 0x176744: 0x282d
    ctx->pc = 0x176744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176748:
    // 0x176748: 0x8c830000
    ctx->pc = 0x176748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17674c:
    // 0x17674c: 0x34c6ffff
    ctx->pc = 0x17674cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_176750:
    // 0x176750: 0x8c620018
    ctx->pc = 0x176750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_176754:
    // 0x176754: 0x40f809
label_176758:
    if (ctx->pc == 0x176758u) {
        ctx->pc = 0x176758u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17675Cu;
        goto label_17675c;
    }
    ctx->pc = 0x176754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17675Cu);
        ctx->pc = 0x176758u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17675Cu; }
            if (ctx->pc != 0x17675Cu) { return; }
        }
    }
    ctx->pc = 0x17675Cu;
label_17675c:
    // 0x17675c: 0x8fa50004
    ctx->pc = 0x17675cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_176760:
    // 0x176760: 0x27b00010
    ctx->pc = 0x176760u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_176764:
    // 0x176764: 0x8fb20024
    ctx->pc = 0x176764u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_176768:
    // 0x176768: 0x200382d
    ctx->pc = 0x176768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17676c:
    // 0x17676c: 0x8e230038
    ctx->pc = 0x17676cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_176770:
    // 0x176770: 0x3a0202d
    ctx->pc = 0x176770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176774:
    // 0x176774: 0xb2102a
    ctx->pc = 0x176774u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 18)));
label_176778:
    // 0x176778: 0x3a0302d
    ctx->pc = 0x176778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17677c:
    // 0x17677c: 0xa2900b
    ctx->pc = 0x17677cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 5));
label_176780:
    // 0x176780: 0x50600001
label_176784:
    if (ctx->pc == 0x176784u) {
        ctx->pc = 0x176784u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x176788u;
        goto label_176788;
    }
    ctx->pc = 0x176780u;
    {
        const bool branch_taken_0x176780 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x176780) {
            ctx->pc = 0x176784u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x176788u;
            goto label_176788;
        }
    }
    ctx->pc = 0x176788u;
label_176788:
    // 0x176788: 0x243001a
    ctx->pc = 0x176788u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17678c:
    // 0x17678c: 0x1012
    ctx->pc = 0x17678cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_176790:
    // 0x176790: 0x439018
    ctx->pc = 0x176790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)(uint32_t)result); }
label_176794:
    // 0x176794: 0xc05f4b0
label_176798:
    if (ctx->pc == 0x176798u) {
        ctx->pc = 0x176798u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17679Cu;
        goto label_17679c;
    }
    ctx->pc = 0x176794u;
    SET_GPR_U32(ctx, 31, 0x17679Cu);
    ctx->pc = 0x176798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17679Cu; }
        else if (ctx->pc != 0x17679Cu) { ctx->pc = 0x17679Cu; }
    }
    if (ctx->pc != 0x17679Cu) { return; }
    ctx->pc = 0x17679Cu;
label_17679c:
    // 0x17679c: 0x8e240004
    ctx->pc = 0x17679cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1767a0:
    // 0x1767a0: 0x200302d
    ctx->pc = 0x1767a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1767a4:
    // 0x1767a4: 0x8c830000
    ctx->pc = 0x1767a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1767a8:
    // 0x1767a8: 0x8c62001c
    ctx->pc = 0x1767a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1767ac:
    // 0x1767ac: 0x40f809
label_1767b0:
    if (ctx->pc == 0x1767B0u) {
        ctx->pc = 0x1767B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1767B4u;
        goto label_1767b4;
    }
    ctx->pc = 0x1767ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1767B4u);
        ctx->pc = 0x1767B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1767B4u; }
            if (ctx->pc != 0x1767B4u) { return; }
        }
    }
    ctx->pc = 0x1767B4u;
label_1767b4:
    // 0x1767b4: 0x27b00030
    ctx->pc = 0x1767b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
label_1767b8:
    // 0x1767b8: 0x260202d
    ctx->pc = 0x1767b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1767bc:
    // 0x1767bc: 0x240282d
    ctx->pc = 0x1767bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1767c0:
    // 0x1767c0: 0x260302d
    ctx->pc = 0x1767c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1767c4:
    // 0x1767c4: 0xc05f4b0
label_1767c8:
    if (ctx->pc == 0x1767C8u) {
        ctx->pc = 0x1767C8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1767CCu;
        goto label_1767cc;
    }
    ctx->pc = 0x1767C4u;
    SET_GPR_U32(ctx, 31, 0x1767CCu);
    ctx->pc = 0x1767C8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767CCu; }
        else if (ctx->pc != 0x1767CCu) { ctx->pc = 0x1767CCu; }
    }
    if (ctx->pc != 0x1767CCu) { return; }
    ctx->pc = 0x1767CCu;
label_1767cc:
    // 0x1767cc: 0x8e240008
    ctx->pc = 0x1767ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1767d0:
    // 0x1767d0: 0x200302d
    ctx->pc = 0x1767d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1767d4:
    // 0x1767d4: 0x8c830000
    ctx->pc = 0x1767d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1767d8:
    // 0x1767d8: 0x8c62001c
    ctx->pc = 0x1767d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1767dc:
    // 0x1767dc: 0x40f809
label_1767e0:
    if (ctx->pc == 0x1767E0u) {
        ctx->pc = 0x1767E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1767E4u;
        goto label_1767e4;
    }
    ctx->pc = 0x1767DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1767E4u);
        ctx->pc = 0x1767E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1767E4u; }
            if (ctx->pc != 0x1767E4u) { return; }
        }
    }
    ctx->pc = 0x1767E4u;
label_1767e4:
    // 0x1767e4: 0x1a400067
label_1767e8:
    if (ctx->pc == 0x1767E8u) {
        ctx->pc = 0x1767E8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1767ECu;
        goto label_1767ec;
    }
    ctx->pc = 0x1767E4u;
    {
        const bool branch_taken_0x1767e4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1767E8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x1767e4) {
            ctx->pc = 0x176984u;
            goto label_176984;
        }
    }
    ctx->pc = 0x1767ECu;
label_1767ec:
    // 0x1767ec: 0x30a2003f
    ctx->pc = 0x1767ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 63));
label_1767f0:
    // 0x1767f0: 0x10400010
label_1767f4:
    if (ctx->pc == 0x1767F4u) {
        ctx->pc = 0x1767F4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x1767F8u;
        goto label_1767f8;
    }
    ctx->pc = 0x1767F0u;
    {
        const bool branch_taken_0x1767f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1767F4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1767f0) {
            ctx->pc = 0x176834u;
            goto label_176834;
        }
    }
    ctx->pc = 0x1767F8u;
label_1767f8:
    // 0x1767f8: 0xc05114a
label_1767fc:
    if (ctx->pc == 0x1767FCu) {
        ctx->pc = 0x1767FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946928));
        ctx->pc = 0x176800u;
        goto label_176800;
    }
    ctx->pc = 0x1767F8u;
    SET_GPR_U32(ctx, 31, 0x176800u);
    ctx->pc = 0x1767FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946928));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176800u; }
        else if (ctx->pc != 0x176800u) { ctx->pc = 0x176800u; }
    }
    if (ctx->pc != 0x176800u) { return; }
    ctx->pc = 0x176800u;
label_176800:
    // 0x176800: 0x3c04002c
    ctx->pc = 0x176800u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_176804:
    // 0x176804: 0x8fa50000
    ctx->pc = 0x176804u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_176808:
    // 0x176808: 0x8fa60020
    ctx->pc = 0x176808u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17680c:
    // 0x17680c: 0x2484b098
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946968));
label_176810:
    // 0x176810: 0xc05114a
label_176814:
    if (ctx->pc == 0x176814u) {
        ctx->pc = 0x176814u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x176818u;
        goto label_176818;
    }
    ctx->pc = 0x176810u;
    SET_GPR_U32(ctx, 31, 0x176818u);
    ctx->pc = 0x176814u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176818u; }
        else if (ctx->pc != 0x176818u) { ctx->pc = 0x176818u; }
    }
    if (ctx->pc != 0x176818u) { return; }
    ctx->pc = 0x176818u;
label_176818:
    // 0x176818: 0x0
    ctx->pc = 0x176818u;
    // NOP
label_17681c:
    // 0x17681c: 0x0
    ctx->pc = 0x17681cu;
    // NOP
label_176820:
    // 0x176820: 0x0
    ctx->pc = 0x176820u;
    // NOP
label_176824:
    // 0x176824: 0x0
    ctx->pc = 0x176824u;
    // NOP
label_176828:
    // 0x176828: 0x0
    ctx->pc = 0x176828u;
    // NOP
label_17682c:
    // 0x17682c: 0x1000fffa
label_176830:
    if (ctx->pc == 0x176830u) {
        ctx->pc = 0x176834u;
        goto label_176834;
    }
    ctx->pc = 0x17682Cu;
    {
        const bool branch_taken_0x17682c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17682c) {
            ctx->pc = 0x176818u;
            goto label_176818;
        }
    }
    ctx->pc = 0x176834u;
label_176834:
    // 0x176834: 0x8fa40000
    ctx->pc = 0x176834u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_176838:
    // 0x176838: 0x3082003f
    ctx->pc = 0x176838u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 63));
label_17683c:
    // 0x17683c: 0x10400011
label_176840:
    if (ctx->pc == 0x176840u) {
        ctx->pc = 0x176840u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x176844u;
        goto label_176844;
    }
    ctx->pc = 0x17683Cu;
    {
        const bool branch_taken_0x17683c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176840u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17683c) {
            ctx->pc = 0x176884u;
            goto label_176884;
        }
    }
    ctx->pc = 0x176844u;
label_176844:
    // 0x176844: 0x3c04002c
    ctx->pc = 0x176844u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_176848:
    // 0x176848: 0xc05114a
label_17684c:
    if (ctx->pc == 0x17684Cu) {
        ctx->pc = 0x17684Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947016));
        ctx->pc = 0x176850u;
        goto label_176850;
    }
    ctx->pc = 0x176848u;
    SET_GPR_U32(ctx, 31, 0x176850u);
    ctx->pc = 0x17684Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947016));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176850u; }
        else if (ctx->pc != 0x176850u) { ctx->pc = 0x176850u; }
    }
    if (ctx->pc != 0x176850u) { return; }
    ctx->pc = 0x176850u;
label_176850:
    // 0x176850: 0x3c04002c
    ctx->pc = 0x176850u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_176854:
    // 0x176854: 0x8fa50000
    ctx->pc = 0x176854u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_176858:
    // 0x176858: 0x8fa60020
    ctx->pc = 0x176858u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17685c:
    // 0x17685c: 0x2484b098
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946968));
label_176860:
    // 0x176860: 0xc05114a
label_176864:
    if (ctx->pc == 0x176864u) {
        ctx->pc = 0x176864u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x176868u;
        goto label_176868;
    }
    ctx->pc = 0x176860u;
    SET_GPR_U32(ctx, 31, 0x176868u);
    ctx->pc = 0x176864u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176868u; }
        else if (ctx->pc != 0x176868u) { ctx->pc = 0x176868u; }
    }
    if (ctx->pc != 0x176868u) { return; }
    ctx->pc = 0x176868u;
label_176868:
    // 0x176868: 0x0
    ctx->pc = 0x176868u;
    // NOP
label_17686c:
    // 0x17686c: 0x0
    ctx->pc = 0x17686cu;
    // NOP
label_176870:
    // 0x176870: 0x0
    ctx->pc = 0x176870u;
    // NOP
label_176874:
    // 0x176874: 0x0
    ctx->pc = 0x176874u;
    // NOP
label_176878:
    // 0x176878: 0x0
    ctx->pc = 0x176878u;
    // NOP
label_17687c:
    // 0x17687c: 0x1000fffa
label_176880:
    if (ctx->pc == 0x176880u) {
        ctx->pc = 0x176884u;
        goto label_176884;
    }
    ctx->pc = 0x17687Cu;
    {
        const bool branch_taken_0x17687c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17687c) {
            ctx->pc = 0x176868u;
            goto label_176868;
        }
    }
    ctx->pc = 0x176884u;
label_176884:
    // 0x176884: 0x3042003f
    ctx->pc = 0x176884u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
label_176888:
    // 0x176888: 0x10400012
label_17688c:
    if (ctx->pc == 0x17688Cu) {
        ctx->pc = 0x17688Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x176890u;
        goto label_176890;
    }
    ctx->pc = 0x176888u;
    {
        const bool branch_taken_0x176888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17688Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x176888) {
            ctx->pc = 0x1768D4u;
            goto label_1768d4;
        }
    }
    ctx->pc = 0x176890u;
label_176890:
    // 0x176890: 0x3c04002c
    ctx->pc = 0x176890u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_176894:
    // 0x176894: 0xc05114a
label_176898:
    if (ctx->pc == 0x176898u) {
        ctx->pc = 0x176898u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947056));
        ctx->pc = 0x17689Cu;
        goto label_17689c;
    }
    ctx->pc = 0x176894u;
    SET_GPR_U32(ctx, 31, 0x17689Cu);
    ctx->pc = 0x176898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947056));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17689Cu; }
        else if (ctx->pc != 0x17689Cu) { ctx->pc = 0x17689Cu; }
    }
    if (ctx->pc != 0x17689Cu) { return; }
    ctx->pc = 0x17689Cu;
label_17689c:
    // 0x17689c: 0x3c04002c
    ctx->pc = 0x17689cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1768a0:
    // 0x1768a0: 0x8fa50000
    ctx->pc = 0x1768a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1768a4:
    // 0x1768a4: 0x8fa60020
    ctx->pc = 0x1768a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1768a8:
    // 0x1768a8: 0x2484b098
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946968));
label_1768ac:
    // 0x1768ac: 0xc05114a
label_1768b0:
    if (ctx->pc == 0x1768B0u) {
        ctx->pc = 0x1768B0u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1768B4u;
        goto label_1768b4;
    }
    ctx->pc = 0x1768ACu;
    SET_GPR_U32(ctx, 31, 0x1768B4u);
    ctx->pc = 0x1768B0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768B4u; }
        else if (ctx->pc != 0x1768B4u) { ctx->pc = 0x1768B4u; }
    }
    if (ctx->pc != 0x1768B4u) { return; }
    ctx->pc = 0x1768B4u;
label_1768b4:
    // 0x1768b4: 0x0
    ctx->pc = 0x1768b4u;
    // NOP
label_1768b8:
    // 0x1768b8: 0x0
    ctx->pc = 0x1768b8u;
    // NOP
label_1768bc:
    // 0x1768bc: 0x0
    ctx->pc = 0x1768bcu;
    // NOP
label_1768c0:
    // 0x1768c0: 0x0
    ctx->pc = 0x1768c0u;
    // NOP
label_1768c4:
    // 0x1768c4: 0x0
    ctx->pc = 0x1768c4u;
    // NOP
label_1768c8:
    // 0x1768c8: 0x0
    ctx->pc = 0x1768c8u;
    // NOP
label_1768cc:
    // 0x1768cc: 0x1000fffa
label_1768d0:
    if (ctx->pc == 0x1768D0u) {
        ctx->pc = 0x1768D4u;
        goto label_1768d4;
    }
    ctx->pc = 0x1768CCu;
    {
        const bool branch_taken_0x1768cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1768cc) {
            ctx->pc = 0x1768B8u;
            goto label_1768b8;
        }
    }
    ctx->pc = 0x1768D4u;
label_1768d4:
    // 0x1768d4: 0xc05544c
label_1768d8:
    if (ctx->pc == 0x1768D8u) {
        ctx->pc = 0x1768D8u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x1768DCu;
        goto label_1768dc;
    }
    ctx->pc = 0x1768D4u;
    SET_GPR_U32(ctx, 31, 0x1768DCu);
    ctx->pc = 0x1768D8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x155130u;
    {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x155130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768DCu; }
        else if (ctx->pc != 0x1768DCu) { ctx->pc = 0x1768DCu; }
    }
    if (ctx->pc != 0x1768DCu) { return; }
    ctx->pc = 0x1768DCu;
label_1768dc:
    // 0x1768dc: 0x8fa30000
    ctx->pc = 0x1768dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1768e0:
    // 0x1768e0: 0x3c020fff
    ctx->pc = 0x1768e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
label_1768e4:
    // 0x1768e4: 0x8fa60020
    ctx->pc = 0x1768e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1768e8:
    // 0x1768e8: 0x3442ffff
    ctx->pc = 0x1768e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_1768ec:
    // 0x1768ec: 0x8fa70004
    ctx->pc = 0x1768ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1768f0:
    // 0x1768f0: 0x621824
    ctx->pc = 0x1768f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1768f4:
    // 0x1768f4: 0xae200028
    ctx->pc = 0x1768f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_1768f8:
    // 0x1768f8: 0x2624001c
    ctx->pc = 0x1768f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 28));
label_1768fc:
    // 0x1768fc: 0xae23001c
    ctx->pc = 0x1768fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_176900:
    // 0x176900: 0x24050001
    ctx->pc = 0x176900u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_176904:
    // 0x176904: 0xae260020
    ctx->pc = 0x176904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
label_176908:
    // 0x176908: 0xc055328
label_17690c:
    if (ctx->pc == 0x17690Cu) {
        ctx->pc = 0x17690Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
        ctx->pc = 0x176910u;
        goto label_176910;
    }
    ctx->pc = 0x176908u;
    SET_GPR_U32(ctx, 31, 0x176910u);
    ctx->pc = 0x17690Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
    ctx->pc = 0x154CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x154ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176910u; }
        else if (ctx->pc != 0x176910u) { ctx->pc = 0x176910u; }
    }
    if (ctx->pc != 0x176910u) { return; }
    ctx->pc = 0x176910u;
label_176910:
    // 0x176910: 0x14400012
label_176914:
    if (ctx->pc == 0x176914u) {
        ctx->pc = 0x176914u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x176918u;
        goto label_176918;
    }
    ctx->pc = 0x176910u;
    {
        const bool branch_taken_0x176910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176914u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x176910) {
            ctx->pc = 0x17695Cu;
            goto label_17695c;
        }
    }
    ctx->pc = 0x176918u;
label_176918:
    // 0x176918: 0x3c04002c
    ctx->pc = 0x176918u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17691c:
    // 0x17691c: 0xc05114a
label_176920:
    if (ctx->pc == 0x176920u) {
        ctx->pc = 0x176920u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947096));
        ctx->pc = 0x176924u;
        goto label_176924;
    }
    ctx->pc = 0x17691Cu;
    SET_GPR_U32(ctx, 31, 0x176924u);
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947096));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176924u; }
        else if (ctx->pc != 0x176924u) { ctx->pc = 0x176924u; }
    }
    if (ctx->pc != 0x176924u) { return; }
    ctx->pc = 0x176924u;
label_176924:
    // 0x176924: 0x8e240004
    ctx->pc = 0x176924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_176928:
    // 0x176928: 0x24050001
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_17692c:
    // 0x17692c: 0x8c830000
    ctx->pc = 0x17692cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_176930:
    // 0x176930: 0x8c62001c
    ctx->pc = 0x176930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176934:
    // 0x176934: 0x40f809
label_176938:
    if (ctx->pc == 0x176938u) {
        ctx->pc = 0x176938u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17693Cu;
        goto label_17693c;
    }
    ctx->pc = 0x176934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17693Cu);
        ctx->pc = 0x176938u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17693Cu; }
            if (ctx->pc != 0x17693Cu) { return; }
        }
    }
    ctx->pc = 0x17693Cu;
label_17693c:
    // 0x17693c: 0x8e240008
    ctx->pc = 0x17693cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_176940:
    // 0x176940: 0x260302d
    ctx->pc = 0x176940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_176944:
    // 0x176944: 0x8c830000
    ctx->pc = 0x176944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_176948:
    // 0x176948: 0x8c62001c
    ctx->pc = 0x176948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17694c:
    // 0x17694c: 0x40f809
label_176950:
    if (ctx->pc == 0x176950u) {
        ctx->pc = 0x176950u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176954u;
        goto label_176954;
    }
    ctx->pc = 0x17694Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176954u);
        ctx->pc = 0x176950u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176954u; }
            if (ctx->pc != 0x176954u) { return; }
        }
    }
    ctx->pc = 0x176954u;
label_176954:
    // 0x176954: 0x1000000c
label_176958:
    if (ctx->pc == 0x176958u) {
        ctx->pc = 0x176958u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x17695Cu;
        goto label_17695c;
    }
    ctx->pc = 0x176954u;
    {
        const bool branch_taken_0x176954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176958u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x176954) {
            ctx->pc = 0x176988u;
            goto label_176988;
        }
    }
    ctx->pc = 0x17695Cu;
label_17695c:
    // 0x17695c: 0x6ba60007
    ctx->pc = 0x17695cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
label_176960:
    // 0x176960: 0x6fa60000
    ctx->pc = 0x176960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
label_176964:
    // 0x176964: 0xb2260013
    ctx->pc = 0x176964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_176968:
    // 0x176968: 0xb626000c
    ctx->pc = 0x176968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17696c:
    // 0x17696c: 0x24020001
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_176970:
    // 0x176970: 0x6ba50027
    ctx->pc = 0x176970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_176974:
    // 0x176974: 0x6fa50020
    ctx->pc = 0x176974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_176978:
    // 0x176978: 0xb225001b
    ctx->pc = 0x176978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17697c:
    // 0x17697c: 0xb6250014
    ctx->pc = 0x17697cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_176980:
    // 0x176980: 0xa2220002
    ctx->pc = 0x176980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_176984:
    // 0x176984: 0xdfbf0080
    ctx->pc = 0x176984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_176988:
    // 0x176988: 0xdfb30070
    ctx->pc = 0x176988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17698c:
    // 0x17698c: 0xdfb20060
    ctx->pc = 0x17698cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_176990:
    // 0x176990: 0xdfb10050
    ctx->pc = 0x176990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_176994:
    // 0x176994: 0xdfb00040
    ctx->pc = 0x176994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_176998:
    // 0x176998: 0x3e00008
label_17699c:
    if (ctx->pc == 0x17699Cu) {
        ctx->pc = 0x17699Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1769A0u;
        goto label_fallthrough_0x176998;
    }
    ctx->pc = 0x176998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17699Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            case 0x176670u: goto label_176670;
            case 0x176674u: goto label_176674;
            case 0x176678u: goto label_176678;
            case 0x17667Cu: goto label_17667c;
            case 0x176680u: goto label_176680;
            case 0x176684u: goto label_176684;
            case 0x176688u: goto label_176688;
            case 0x17668Cu: goto label_17668c;
            case 0x176690u: goto label_176690;
            case 0x176694u: goto label_176694;
            case 0x176698u: goto label_176698;
            case 0x17669Cu: goto label_17669c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766A4u: goto label_1766a4;
            case 0x1766A8u: goto label_1766a8;
            case 0x1766ACu: goto label_1766ac;
            case 0x1766B0u: goto label_1766b0;
            case 0x1766B4u: goto label_1766b4;
            case 0x1766B8u: goto label_1766b8;
            case 0x1766BCu: goto label_1766bc;
            case 0x1766C0u: goto label_1766c0;
            case 0x1766C4u: goto label_1766c4;
            case 0x1766C8u: goto label_1766c8;
            case 0x1766CCu: goto label_1766cc;
            case 0x1766D0u: goto label_1766d0;
            case 0x1766D4u: goto label_1766d4;
            case 0x1766D8u: goto label_1766d8;
            case 0x1766DCu: goto label_1766dc;
            case 0x1766E0u: goto label_1766e0;
            case 0x1766E4u: goto label_1766e4;
            case 0x1766E8u: goto label_1766e8;
            case 0x1766ECu: goto label_1766ec;
            case 0x1766F0u: goto label_1766f0;
            case 0x1766F4u: goto label_1766f4;
            case 0x1766F8u: goto label_1766f8;
            case 0x1766FCu: goto label_1766fc;
            case 0x176700u: goto label_176700;
            case 0x176704u: goto label_176704;
            case 0x176708u: goto label_176708;
            case 0x17670Cu: goto label_17670c;
            case 0x176710u: goto label_176710;
            case 0x176714u: goto label_176714;
            case 0x176718u: goto label_176718;
            case 0x17671Cu: goto label_17671c;
            case 0x176720u: goto label_176720;
            case 0x176724u: goto label_176724;
            case 0x176728u: goto label_176728;
            case 0x17672Cu: goto label_17672c;
            case 0x176730u: goto label_176730;
            case 0x176734u: goto label_176734;
            case 0x176738u: goto label_176738;
            case 0x17673Cu: goto label_17673c;
            case 0x176740u: goto label_176740;
            case 0x176744u: goto label_176744;
            case 0x176748u: goto label_176748;
            case 0x17674Cu: goto label_17674c;
            case 0x176750u: goto label_176750;
            case 0x176754u: goto label_176754;
            case 0x176758u: goto label_176758;
            case 0x17675Cu: goto label_17675c;
            case 0x176760u: goto label_176760;
            case 0x176764u: goto label_176764;
            case 0x176768u: goto label_176768;
            case 0x17676Cu: goto label_17676c;
            case 0x176770u: goto label_176770;
            case 0x176774u: goto label_176774;
            case 0x176778u: goto label_176778;
            case 0x17677Cu: goto label_17677c;
            case 0x176780u: goto label_176780;
            case 0x176784u: goto label_176784;
            case 0x176788u: goto label_176788;
            case 0x17678Cu: goto label_17678c;
            case 0x176790u: goto label_176790;
            case 0x176794u: goto label_176794;
            case 0x176798u: goto label_176798;
            case 0x17679Cu: goto label_17679c;
            case 0x1767A0u: goto label_1767a0;
            case 0x1767A4u: goto label_1767a4;
            case 0x1767A8u: goto label_1767a8;
            case 0x1767ACu: goto label_1767ac;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B4u: goto label_1767b4;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767BCu: goto label_1767bc;
            case 0x1767C0u: goto label_1767c0;
            case 0x1767C4u: goto label_1767c4;
            case 0x1767C8u: goto label_1767c8;
            case 0x1767CCu: goto label_1767cc;
            case 0x1767D0u: goto label_1767d0;
            case 0x1767D4u: goto label_1767d4;
            case 0x1767D8u: goto label_1767d8;
            case 0x1767DCu: goto label_1767dc;
            case 0x1767E0u: goto label_1767e0;
            case 0x1767E4u: goto label_1767e4;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767ECu: goto label_1767ec;
            case 0x1767F0u: goto label_1767f0;
            case 0x1767F4u: goto label_1767f4;
            case 0x1767F8u: goto label_1767f8;
            case 0x1767FCu: goto label_1767fc;
            case 0x176800u: goto label_176800;
            case 0x176804u: goto label_176804;
            case 0x176808u: goto label_176808;
            case 0x17680Cu: goto label_17680c;
            case 0x176810u: goto label_176810;
            case 0x176814u: goto label_176814;
            case 0x176818u: goto label_176818;
            case 0x17681Cu: goto label_17681c;
            case 0x176820u: goto label_176820;
            case 0x176824u: goto label_176824;
            case 0x176828u: goto label_176828;
            case 0x17682Cu: goto label_17682c;
            case 0x176830u: goto label_176830;
            case 0x176834u: goto label_176834;
            case 0x176838u: goto label_176838;
            case 0x17683Cu: goto label_17683c;
            case 0x176840u: goto label_176840;
            case 0x176844u: goto label_176844;
            case 0x176848u: goto label_176848;
            case 0x17684Cu: goto label_17684c;
            case 0x176850u: goto label_176850;
            case 0x176854u: goto label_176854;
            case 0x176858u: goto label_176858;
            case 0x17685Cu: goto label_17685c;
            case 0x176860u: goto label_176860;
            case 0x176864u: goto label_176864;
            case 0x176868u: goto label_176868;
            case 0x17686Cu: goto label_17686c;
            case 0x176870u: goto label_176870;
            case 0x176874u: goto label_176874;
            case 0x176878u: goto label_176878;
            case 0x17687Cu: goto label_17687c;
            case 0x176880u: goto label_176880;
            case 0x176884u: goto label_176884;
            case 0x176888u: goto label_176888;
            case 0x17688Cu: goto label_17688c;
            case 0x176890u: goto label_176890;
            case 0x176894u: goto label_176894;
            case 0x176898u: goto label_176898;
            case 0x17689Cu: goto label_17689c;
            case 0x1768A0u: goto label_1768a0;
            case 0x1768A4u: goto label_1768a4;
            case 0x1768A8u: goto label_1768a8;
            case 0x1768ACu: goto label_1768ac;
            case 0x1768B0u: goto label_1768b0;
            case 0x1768B4u: goto label_1768b4;
            case 0x1768B8u: goto label_1768b8;
            case 0x1768BCu: goto label_1768bc;
            case 0x1768C0u: goto label_1768c0;
            case 0x1768C4u: goto label_1768c4;
            case 0x1768C8u: goto label_1768c8;
            case 0x1768CCu: goto label_1768cc;
            case 0x1768D0u: goto label_1768d0;
            case 0x1768D4u: goto label_1768d4;
            case 0x1768D8u: goto label_1768d8;
            case 0x1768DCu: goto label_1768dc;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768E4u: goto label_1768e4;
            case 0x1768E8u: goto label_1768e8;
            case 0x1768ECu: goto label_1768ec;
            case 0x1768F0u: goto label_1768f0;
            case 0x1768F4u: goto label_1768f4;
            case 0x1768F8u: goto label_1768f8;
            case 0x1768FCu: goto label_1768fc;
            case 0x176900u: goto label_176900;
            case 0x176904u: goto label_176904;
            case 0x176908u: goto label_176908;
            case 0x17690Cu: goto label_17690c;
            case 0x176910u: goto label_176910;
            case 0x176914u: goto label_176914;
            case 0x176918u: goto label_176918;
            case 0x17691Cu: goto label_17691c;
            case 0x176920u: goto label_176920;
            case 0x176924u: goto label_176924;
            case 0x176928u: goto label_176928;
            case 0x17692Cu: goto label_17692c;
            case 0x176930u: goto label_176930;
            case 0x176934u: goto label_176934;
            case 0x176938u: goto label_176938;
            case 0x17693Cu: goto label_17693c;
            case 0x176940u: goto label_176940;
            case 0x176944u: goto label_176944;
            case 0x176948u: goto label_176948;
            case 0x17694Cu: goto label_17694c;
            case 0x176950u: goto label_176950;
            case 0x176954u: goto label_176954;
            case 0x176958u: goto label_176958;
            case 0x17695Cu: goto label_17695c;
            case 0x176960u: goto label_176960;
            case 0x176964u: goto label_176964;
            case 0x176968u: goto label_176968;
            case 0x17696Cu: goto label_17696c;
            case 0x176970u: goto label_176970;
            case 0x176974u: goto label_176974;
            case 0x176978u: goto label_176978;
            case 0x17697Cu: goto label_17697c;
            case 0x176980u: goto label_176980;
            case 0x176984u: goto label_176984;
            case 0x176988u: goto label_176988;
            case 0x17698Cu: goto label_17698c;
            case 0x176990u: goto label_176990;
            case 0x176994u: goto label_176994;
            case 0x176998u: goto label_176998;
            case 0x17699Cu: goto label_17699c;
            default: break;
        }
        return;
    }
label_fallthrough_0x176998:
    ctx->pc = 0x1769A0u;
}
