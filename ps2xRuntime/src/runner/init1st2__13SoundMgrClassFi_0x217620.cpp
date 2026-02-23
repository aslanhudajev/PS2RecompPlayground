#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st2__13SoundMgrClassFi
// Address: 0x217620 - 0x217a58
void init1st2__13SoundMgrClassFi_0x217620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st2__13SoundMgrClassFi");


    ctx->pc = 0x217620u;

label_217620:
    // 0x217620: 0x27bdff80
    ctx->pc = 0x217620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_217624:
    // 0x217624: 0x7fbf0070
    ctx->pc = 0x217624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_217628:
    // 0x217628: 0x7fb60060
    ctx->pc = 0x217628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_21762c:
    // 0x21762c: 0x7fb50050
    ctx->pc = 0x21762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_217630:
    // 0x217630: 0x7fb40040
    ctx->pc = 0x217630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_217634:
    // 0x217634: 0x7fb30030
    ctx->pc = 0x217634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_217638:
    // 0x217638: 0x7fb20020
    ctx->pc = 0x217638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21763c:
    // 0x21763c: 0x7fb10010
    ctx->pc = 0x21763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_217640:
    // 0x217640: 0x70a0a628
    ctx->pc = 0x217640u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_217644:
    // 0x217644: 0x24020004
    ctx->pc = 0x217644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_217648:
    // 0x217648: 0x7fb00000
    ctx->pc = 0x217648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21764c:
    // 0x21764c: 0x128200ee
label_217650:
    if (ctx->pc == 0x217650u) {
        ctx->pc = 0x217650u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x217654u;
        goto label_217654;
    }
    ctx->pc = 0x21764Cu;
    {
        const bool branch_taken_0x21764c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x217650u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21764c) {
            ctx->pc = 0x217A08u;
            goto label_217a08;
        }
    }
    ctx->pc = 0x217654u;
label_217654:
    // 0x217654: 0x24020003
    ctx->pc = 0x217654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_217658:
    // 0x217658: 0x128200e1
label_21765c:
    if (ctx->pc == 0x21765Cu) {
        ctx->pc = 0x21765Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x217660u;
        goto label_217660;
    }
    ctx->pc = 0x217658u;
    {
        const bool branch_taken_0x217658 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x21765Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x217658) {
            ctx->pc = 0x2179E0u;
            goto label_2179e0;
        }
    }
    ctx->pc = 0x217660u;
label_217660:
    // 0x217660: 0x12820084
label_217664:
    if (ctx->pc == 0x217664u) {
        ctx->pc = 0x217664u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x217668u;
        goto label_217668;
    }
    ctx->pc = 0x217660u;
    {
        const bool branch_taken_0x217660 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x217664u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x217660) {
            ctx->pc = 0x217874u;
            goto label_217874;
        }
    }
    ctx->pc = 0x217668u;
label_217668:
    // 0x217668: 0x12820045
label_21766c:
    if (ctx->pc == 0x21766Cu) {
        ctx->pc = 0x217670u;
        goto label_217670;
    }
    ctx->pc = 0x217668u;
    {
        const bool branch_taken_0x217668 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x217668) {
            ctx->pc = 0x217780u;
            goto label_217780;
        }
    }
    ctx->pc = 0x217670u;
label_217670:
    // 0x217670: 0x12800003
label_217674:
    if (ctx->pc == 0x217674u) {
        ctx->pc = 0x217678u;
        goto label_217678;
    }
    ctx->pc = 0x217670u;
    {
        const bool branch_taken_0x217670 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x217670) {
            ctx->pc = 0x217680u;
            goto label_217680;
        }
    }
    ctx->pc = 0x217678u;
label_217678:
    // 0x217678: 0x100000ed
label_21767c:
    if (ctx->pc == 0x21767Cu) {
        ctx->pc = 0x21767Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x217680u;
        goto label_217680;
    }
    ctx->pc = 0x217678u;
    {
        const bool branch_taken_0x217678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21767Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x217678) {
            ctx->pc = 0x217A30u;
            goto label_217a30;
        }
    }
    ctx->pc = 0x217680u;
label_217680:
    // 0x217680: 0xc06b3c0
label_217684:
    if (ctx->pc == 0x217684u) {
        ctx->pc = 0x217688u;
        goto label_217688;
    }
    ctx->pc = 0x217680u;
    SET_GPR_U32(ctx, 31, 0x217688u);
    ctx->pc = 0x1ACF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndInit_0x1acf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217688u; }
        else if (ctx->pc != 0x217688u) { ctx->pc = 0x217688u; }
    }
    if (ctx->pc != 0x217688u) { return; }
    ctx->pc = 0x217688u;
label_217688:
    // 0x217688: 0x3c010050
    ctx->pc = 0x217688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_21768c:
    // 0x21768c: 0x8022fec5
    ctx->pc = 0x21768cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
label_217690:
    // 0x217690: 0x2c410007
    ctx->pc = 0x217690u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 7));
label_217694:
    // 0x217694: 0x10200008
label_217698:
    if (ctx->pc == 0x217698u) {
        ctx->pc = 0x21769Cu;
        goto label_21769c;
    }
    ctx->pc = 0x217694u;
    {
        const bool branch_taken_0x217694 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x217694) {
            ctx->pc = 0x2176B8u;
            goto label_2176b8;
        }
    }
    ctx->pc = 0x21769Cu;
label_21769c:
    // 0x21769c: 0x3c03002c
    ctx->pc = 0x21769cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_2176a0:
    // 0x2176a0: 0x21080
    ctx->pc = 0x2176a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2176a4:
    // 0x2176a4: 0x24630730
    ctx->pc = 0x2176a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1840));
label_2176a8:
    // 0x2176a8: 0x431021
    ctx->pc = 0x2176a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2176ac:
    // 0x2176ac: 0x8c420000
    ctx->pc = 0x2176acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2176b0:
    // 0x2176b0: 0x400008
label_2176b4:
    if (ctx->pc == 0x2176B4u) {
        ctx->pc = 0x2176B8u;
        goto label_2176b8;
    }
    ctx->pc = 0x2176B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217620u: goto label_217620;
            case 0x217624u: goto label_217624;
            case 0x217628u: goto label_217628;
            case 0x21762Cu: goto label_21762c;
            case 0x217630u: goto label_217630;
            case 0x217634u: goto label_217634;
            case 0x217638u: goto label_217638;
            case 0x21763Cu: goto label_21763c;
            case 0x217640u: goto label_217640;
            case 0x217644u: goto label_217644;
            case 0x217648u: goto label_217648;
            case 0x21764Cu: goto label_21764c;
            case 0x217650u: goto label_217650;
            case 0x217654u: goto label_217654;
            case 0x217658u: goto label_217658;
            case 0x21765Cu: goto label_21765c;
            case 0x217660u: goto label_217660;
            case 0x217664u: goto label_217664;
            case 0x217668u: goto label_217668;
            case 0x21766Cu: goto label_21766c;
            case 0x217670u: goto label_217670;
            case 0x217674u: goto label_217674;
            case 0x217678u: goto label_217678;
            case 0x21767Cu: goto label_21767c;
            case 0x217680u: goto label_217680;
            case 0x217684u: goto label_217684;
            case 0x217688u: goto label_217688;
            case 0x21768Cu: goto label_21768c;
            case 0x217690u: goto label_217690;
            case 0x217694u: goto label_217694;
            case 0x217698u: goto label_217698;
            case 0x21769Cu: goto label_21769c;
            case 0x2176A0u: goto label_2176a0;
            case 0x2176A4u: goto label_2176a4;
            case 0x2176A8u: goto label_2176a8;
            case 0x2176ACu: goto label_2176ac;
            case 0x2176B0u: goto label_2176b0;
            case 0x2176B4u: goto label_2176b4;
            case 0x2176B8u: goto label_2176b8;
            case 0x2176BCu: goto label_2176bc;
            case 0x2176C0u: goto label_2176c0;
            case 0x2176C4u: goto label_2176c4;
            case 0x2176C8u: goto label_2176c8;
            case 0x2176CCu: goto label_2176cc;
            case 0x2176D0u: goto label_2176d0;
            case 0x2176D4u: goto label_2176d4;
            case 0x2176D8u: goto label_2176d8;
            case 0x2176DCu: goto label_2176dc;
            case 0x2176E0u: goto label_2176e0;
            case 0x2176E4u: goto label_2176e4;
            case 0x2176E8u: goto label_2176e8;
            case 0x2176ECu: goto label_2176ec;
            case 0x2176F0u: goto label_2176f0;
            case 0x2176F4u: goto label_2176f4;
            case 0x2176F8u: goto label_2176f8;
            case 0x2176FCu: goto label_2176fc;
            case 0x217700u: goto label_217700;
            case 0x217704u: goto label_217704;
            case 0x217708u: goto label_217708;
            case 0x21770Cu: goto label_21770c;
            case 0x217710u: goto label_217710;
            case 0x217714u: goto label_217714;
            case 0x217718u: goto label_217718;
            case 0x21771Cu: goto label_21771c;
            case 0x217720u: goto label_217720;
            case 0x217724u: goto label_217724;
            case 0x217728u: goto label_217728;
            case 0x21772Cu: goto label_21772c;
            case 0x217730u: goto label_217730;
            case 0x217734u: goto label_217734;
            case 0x217738u: goto label_217738;
            case 0x21773Cu: goto label_21773c;
            case 0x217740u: goto label_217740;
            case 0x217744u: goto label_217744;
            case 0x217748u: goto label_217748;
            case 0x21774Cu: goto label_21774c;
            case 0x217750u: goto label_217750;
            case 0x217754u: goto label_217754;
            case 0x217758u: goto label_217758;
            case 0x21775Cu: goto label_21775c;
            case 0x217760u: goto label_217760;
            case 0x217764u: goto label_217764;
            case 0x217768u: goto label_217768;
            case 0x21776Cu: goto label_21776c;
            case 0x217770u: goto label_217770;
            case 0x217774u: goto label_217774;
            case 0x217778u: goto label_217778;
            case 0x21777Cu: goto label_21777c;
            case 0x217780u: goto label_217780;
            case 0x217784u: goto label_217784;
            case 0x217788u: goto label_217788;
            case 0x21778Cu: goto label_21778c;
            case 0x217790u: goto label_217790;
            case 0x217794u: goto label_217794;
            case 0x217798u: goto label_217798;
            case 0x21779Cu: goto label_21779c;
            case 0x2177A0u: goto label_2177a0;
            case 0x2177A4u: goto label_2177a4;
            case 0x2177A8u: goto label_2177a8;
            case 0x2177ACu: goto label_2177ac;
            case 0x2177B0u: goto label_2177b0;
            case 0x2177B4u: goto label_2177b4;
            case 0x2177B8u: goto label_2177b8;
            case 0x2177BCu: goto label_2177bc;
            case 0x2177C0u: goto label_2177c0;
            case 0x2177C4u: goto label_2177c4;
            case 0x2177C8u: goto label_2177c8;
            case 0x2177CCu: goto label_2177cc;
            case 0x2177D0u: goto label_2177d0;
            case 0x2177D4u: goto label_2177d4;
            case 0x2177D8u: goto label_2177d8;
            case 0x2177DCu: goto label_2177dc;
            case 0x2177E0u: goto label_2177e0;
            case 0x2177E4u: goto label_2177e4;
            case 0x2177E8u: goto label_2177e8;
            case 0x2177ECu: goto label_2177ec;
            case 0x2177F0u: goto label_2177f0;
            case 0x2177F4u: goto label_2177f4;
            case 0x2177F8u: goto label_2177f8;
            case 0x2177FCu: goto label_2177fc;
            case 0x217800u: goto label_217800;
            case 0x217804u: goto label_217804;
            case 0x217808u: goto label_217808;
            case 0x21780Cu: goto label_21780c;
            case 0x217810u: goto label_217810;
            case 0x217814u: goto label_217814;
            case 0x217818u: goto label_217818;
            case 0x21781Cu: goto label_21781c;
            case 0x217820u: goto label_217820;
            case 0x217824u: goto label_217824;
            case 0x217828u: goto label_217828;
            case 0x21782Cu: goto label_21782c;
            case 0x217830u: goto label_217830;
            case 0x217834u: goto label_217834;
            case 0x217838u: goto label_217838;
            case 0x21783Cu: goto label_21783c;
            case 0x217840u: goto label_217840;
            case 0x217844u: goto label_217844;
            case 0x217848u: goto label_217848;
            case 0x21784Cu: goto label_21784c;
            case 0x217850u: goto label_217850;
            case 0x217854u: goto label_217854;
            case 0x217858u: goto label_217858;
            case 0x21785Cu: goto label_21785c;
            case 0x217860u: goto label_217860;
            case 0x217864u: goto label_217864;
            case 0x217868u: goto label_217868;
            case 0x21786Cu: goto label_21786c;
            case 0x217870u: goto label_217870;
            case 0x217874u: goto label_217874;
            case 0x217878u: goto label_217878;
            case 0x21787Cu: goto label_21787c;
            case 0x217880u: goto label_217880;
            case 0x217884u: goto label_217884;
            case 0x217888u: goto label_217888;
            case 0x21788Cu: goto label_21788c;
            case 0x217890u: goto label_217890;
            case 0x217894u: goto label_217894;
            case 0x217898u: goto label_217898;
            case 0x21789Cu: goto label_21789c;
            case 0x2178A0u: goto label_2178a0;
            case 0x2178A4u: goto label_2178a4;
            case 0x2178A8u: goto label_2178a8;
            case 0x2178ACu: goto label_2178ac;
            case 0x2178B0u: goto label_2178b0;
            case 0x2178B4u: goto label_2178b4;
            case 0x2178B8u: goto label_2178b8;
            case 0x2178BCu: goto label_2178bc;
            case 0x2178C0u: goto label_2178c0;
            case 0x2178C4u: goto label_2178c4;
            case 0x2178C8u: goto label_2178c8;
            case 0x2178CCu: goto label_2178cc;
            case 0x2178D0u: goto label_2178d0;
            case 0x2178D4u: goto label_2178d4;
            case 0x2178D8u: goto label_2178d8;
            case 0x2178DCu: goto label_2178dc;
            case 0x2178E0u: goto label_2178e0;
            case 0x2178E4u: goto label_2178e4;
            case 0x2178E8u: goto label_2178e8;
            case 0x2178ECu: goto label_2178ec;
            case 0x2178F0u: goto label_2178f0;
            case 0x2178F4u: goto label_2178f4;
            case 0x2178F8u: goto label_2178f8;
            case 0x2178FCu: goto label_2178fc;
            case 0x217900u: goto label_217900;
            case 0x217904u: goto label_217904;
            case 0x217908u: goto label_217908;
            case 0x21790Cu: goto label_21790c;
            case 0x217910u: goto label_217910;
            case 0x217914u: goto label_217914;
            case 0x217918u: goto label_217918;
            case 0x21791Cu: goto label_21791c;
            case 0x217920u: goto label_217920;
            case 0x217924u: goto label_217924;
            case 0x217928u: goto label_217928;
            case 0x21792Cu: goto label_21792c;
            case 0x217930u: goto label_217930;
            case 0x217934u: goto label_217934;
            case 0x217938u: goto label_217938;
            case 0x21793Cu: goto label_21793c;
            case 0x217940u: goto label_217940;
            case 0x217944u: goto label_217944;
            case 0x217948u: goto label_217948;
            case 0x21794Cu: goto label_21794c;
            case 0x217950u: goto label_217950;
            case 0x217954u: goto label_217954;
            case 0x217958u: goto label_217958;
            case 0x21795Cu: goto label_21795c;
            case 0x217960u: goto label_217960;
            case 0x217964u: goto label_217964;
            case 0x217968u: goto label_217968;
            case 0x21796Cu: goto label_21796c;
            case 0x217970u: goto label_217970;
            case 0x217974u: goto label_217974;
            case 0x217978u: goto label_217978;
            case 0x21797Cu: goto label_21797c;
            case 0x217980u: goto label_217980;
            case 0x217984u: goto label_217984;
            case 0x217988u: goto label_217988;
            case 0x21798Cu: goto label_21798c;
            case 0x217990u: goto label_217990;
            case 0x217994u: goto label_217994;
            case 0x217998u: goto label_217998;
            case 0x21799Cu: goto label_21799c;
            case 0x2179A0u: goto label_2179a0;
            case 0x2179A4u: goto label_2179a4;
            case 0x2179A8u: goto label_2179a8;
            case 0x2179ACu: goto label_2179ac;
            case 0x2179B0u: goto label_2179b0;
            case 0x2179B4u: goto label_2179b4;
            case 0x2179B8u: goto label_2179b8;
            case 0x2179BCu: goto label_2179bc;
            case 0x2179C0u: goto label_2179c0;
            case 0x2179C4u: goto label_2179c4;
            case 0x2179C8u: goto label_2179c8;
            case 0x2179CCu: goto label_2179cc;
            case 0x2179D0u: goto label_2179d0;
            case 0x2179D4u: goto label_2179d4;
            case 0x2179D8u: goto label_2179d8;
            case 0x2179DCu: goto label_2179dc;
            case 0x2179E0u: goto label_2179e0;
            case 0x2179E4u: goto label_2179e4;
            case 0x2179E8u: goto label_2179e8;
            case 0x2179ECu: goto label_2179ec;
            case 0x2179F0u: goto label_2179f0;
            case 0x2179F4u: goto label_2179f4;
            case 0x2179F8u: goto label_2179f8;
            case 0x2179FCu: goto label_2179fc;
            case 0x217A00u: goto label_217a00;
            case 0x217A04u: goto label_217a04;
            case 0x217A08u: goto label_217a08;
            case 0x217A0Cu: goto label_217a0c;
            case 0x217A10u: goto label_217a10;
            case 0x217A14u: goto label_217a14;
            case 0x217A18u: goto label_217a18;
            case 0x217A1Cu: goto label_217a1c;
            case 0x217A20u: goto label_217a20;
            case 0x217A24u: goto label_217a24;
            case 0x217A28u: goto label_217a28;
            case 0x217A2Cu: goto label_217a2c;
            case 0x217A30u: goto label_217a30;
            case 0x217A34u: goto label_217a34;
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2176B8u;
label_2176b8:
    // 0x2176b8: 0x3c020029
    ctx->pc = 0x2176b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_2176bc:
    // 0x2176bc: 0x26a40284
    ctx->pc = 0x2176bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_2176c0:
    // 0x2176c0: 0xc05150e
label_2176c4:
    if (ctx->pc == 0x2176C4u) {
        ctx->pc = 0x2176C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950304));
        ctx->pc = 0x2176C8u;
        goto label_2176c8;
    }
    ctx->pc = 0x2176C0u;
    SET_GPR_U32(ctx, 31, 0x2176C8u);
    ctx->pc = 0x2176C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950304));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2176C8u; }
        else if (ctx->pc != 0x2176C8u) { ctx->pc = 0x2176C8u; }
    }
    if (ctx->pc != 0x2176C8u) { return; }
    ctx->pc = 0x2176C8u;
label_2176c8:
    // 0x2176c8: 0x10000024
label_2176cc:
    if (ctx->pc == 0x2176CCu) {
        ctx->pc = 0x2176CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
        ctx->pc = 0x2176D0u;
        goto label_2176d0;
    }
    ctx->pc = 0x2176C8u;
    {
        const bool branch_taken_0x2176c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2176CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
        if (branch_taken_0x2176c8) {
            ctx->pc = 0x21775Cu;
            goto label_21775c;
        }
    }
    ctx->pc = 0x2176D0u;
label_2176d0:
    // 0x2176d0: 0x3c020029
    ctx->pc = 0x2176d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_2176d4:
    // 0x2176d4: 0x26a40284
    ctx->pc = 0x2176d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_2176d8:
    // 0x2176d8: 0xc05150e
label_2176dc:
    if (ctx->pc == 0x2176DCu) {
        ctx->pc = 0x2176DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950304));
        ctx->pc = 0x2176E0u;
        goto label_2176e0;
    }
    ctx->pc = 0x2176D8u;
    SET_GPR_U32(ctx, 31, 0x2176E0u);
    ctx->pc = 0x2176DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950304));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2176E0u; }
        else if (ctx->pc != 0x2176E0u) { ctx->pc = 0x2176E0u; }
    }
    if (ctx->pc != 0x2176E0u) { return; }
    ctx->pc = 0x2176E0u;
label_2176e0:
    // 0x2176e0: 0x1000001d
label_2176e4:
    if (ctx->pc == 0x2176E4u) {
        ctx->pc = 0x2176E8u;
        goto label_2176e8;
    }
    ctx->pc = 0x2176E0u;
    {
        const bool branch_taken_0x2176e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2176e0) {
            ctx->pc = 0x217758u;
            goto label_217758;
        }
    }
    ctx->pc = 0x2176E8u;
label_2176e8:
    // 0x2176e8: 0x3c020029
    ctx->pc = 0x2176e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_2176ec:
    // 0x2176ec: 0x26a40284
    ctx->pc = 0x2176ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_2176f0:
    // 0x2176f0: 0xc05150e
label_2176f4:
    if (ctx->pc == 0x2176F4u) {
        ctx->pc = 0x2176F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950304));
        ctx->pc = 0x2176F8u;
        goto label_2176f8;
    }
    ctx->pc = 0x2176F0u;
    SET_GPR_U32(ctx, 31, 0x2176F8u);
    ctx->pc = 0x2176F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950304));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2176F8u; }
        else if (ctx->pc != 0x2176F8u) { ctx->pc = 0x2176F8u; }
    }
    if (ctx->pc != 0x2176F8u) { return; }
    ctx->pc = 0x2176F8u;
label_2176f8:
    // 0x2176f8: 0x10000017
label_2176fc:
    if (ctx->pc == 0x2176FCu) {
        ctx->pc = 0x217700u;
        goto label_217700;
    }
    ctx->pc = 0x2176F8u;
    {
        const bool branch_taken_0x2176f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2176f8) {
            ctx->pc = 0x217758u;
            goto label_217758;
        }
    }
    ctx->pc = 0x217700u;
label_217700:
    // 0x217700: 0x3c020029
    ctx->pc = 0x217700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_217704:
    // 0x217704: 0x26a40284
    ctx->pc = 0x217704u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_217708:
    // 0x217708: 0xc05150e
label_21770c:
    if (ctx->pc == 0x21770Cu) {
        ctx->pc = 0x21770Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950336));
        ctx->pc = 0x217710u;
        goto label_217710;
    }
    ctx->pc = 0x217708u;
    SET_GPR_U32(ctx, 31, 0x217710u);
    ctx->pc = 0x21770Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950336));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217710u; }
        else if (ctx->pc != 0x217710u) { ctx->pc = 0x217710u; }
    }
    if (ctx->pc != 0x217710u) { return; }
    ctx->pc = 0x217710u;
label_217710:
    // 0x217710: 0x10000011
label_217714:
    if (ctx->pc == 0x217714u) {
        ctx->pc = 0x217718u;
        goto label_217718;
    }
    ctx->pc = 0x217710u;
    {
        const bool branch_taken_0x217710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x217710) {
            ctx->pc = 0x217758u;
            goto label_217758;
        }
    }
    ctx->pc = 0x217718u;
label_217718:
    // 0x217718: 0x3c020029
    ctx->pc = 0x217718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_21771c:
    // 0x21771c: 0x26a40284
    ctx->pc = 0x21771cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_217720:
    // 0x217720: 0xc05150e
label_217724:
    if (ctx->pc == 0x217724u) {
        ctx->pc = 0x217724u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950368));
        ctx->pc = 0x217728u;
        goto label_217728;
    }
    ctx->pc = 0x217720u;
    SET_GPR_U32(ctx, 31, 0x217728u);
    ctx->pc = 0x217724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950368));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217728u; }
        else if (ctx->pc != 0x217728u) { ctx->pc = 0x217728u; }
    }
    if (ctx->pc != 0x217728u) { return; }
    ctx->pc = 0x217728u;
label_217728:
    // 0x217728: 0x1000000b
label_21772c:
    if (ctx->pc == 0x21772Cu) {
        ctx->pc = 0x217730u;
        goto label_217730;
    }
    ctx->pc = 0x217728u;
    {
        const bool branch_taken_0x217728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x217728) {
            ctx->pc = 0x217758u;
            goto label_217758;
        }
    }
    ctx->pc = 0x217730u;
label_217730:
    // 0x217730: 0x3c020029
    ctx->pc = 0x217730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_217734:
    // 0x217734: 0x26a40284
    ctx->pc = 0x217734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_217738:
    // 0x217738: 0xc05150e
label_21773c:
    if (ctx->pc == 0x21773Cu) {
        ctx->pc = 0x21773Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950400));
        ctx->pc = 0x217740u;
        goto label_217740;
    }
    ctx->pc = 0x217738u;
    SET_GPR_U32(ctx, 31, 0x217740u);
    ctx->pc = 0x21773Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950400));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217740u; }
        else if (ctx->pc != 0x217740u) { ctx->pc = 0x217740u; }
    }
    if (ctx->pc != 0x217740u) { return; }
    ctx->pc = 0x217740u;
label_217740:
    // 0x217740: 0x10000005
label_217744:
    if (ctx->pc == 0x217744u) {
        ctx->pc = 0x217748u;
        goto label_217748;
    }
    ctx->pc = 0x217740u;
    {
        const bool branch_taken_0x217740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x217740) {
            ctx->pc = 0x217758u;
            goto label_217758;
        }
    }
    ctx->pc = 0x217748u;
label_217748:
    // 0x217748: 0x3c020029
    ctx->pc = 0x217748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_21774c:
    // 0x21774c: 0x26a40284
    ctx->pc = 0x21774cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_217750:
    // 0x217750: 0xc05150e
label_217754:
    if (ctx->pc == 0x217754u) {
        ctx->pc = 0x217754u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950432));
        ctx->pc = 0x217758u;
        goto label_217758;
    }
    ctx->pc = 0x217750u;
    SET_GPR_U32(ctx, 31, 0x217758u);
    ctx->pc = 0x217754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950432));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217758u; }
        else if (ctx->pc != 0x217758u) { ctx->pc = 0x217758u; }
    }
    if (ctx->pc != 0x217758u) { return; }
    ctx->pc = 0x217758u;
label_217758:
    // 0x217758: 0x26a40284
    ctx->pc = 0x217758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 644));
label_21775c:
    // 0x21775c: 0xc05ad72
label_217760:
    if (ctx->pc == 0x217760u) {
        ctx->pc = 0x217760u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x217764u;
        goto label_217764;
    }
    ctx->pc = 0x21775Cu;
    SET_GPR_U32(ctx, 31, 0x217764u);
    ctx->pc = 0x217760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217764u; }
        else if (ctx->pc != 0x217764u) { ctx->pc = 0x217764u; }
    }
    if (ctx->pc != 0x217764u) { return; }
    ctx->pc = 0x217764u;
label_217764:
    // 0x217764: 0xaea20250
    ctx->pc = 0x217764u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 592), GPR_U32(ctx, 2));
label_217768:
    // 0x217768: 0x8ea40250
    ctx->pc = 0x217768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 592)));
label_21776c:
    // 0x21776c: 0x3c020091
    ctx->pc = 0x21776cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_217770:
    // 0x217770: 0x24462d00
    ctx->pc = 0x217770u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 11520));
label_217774:
    // 0x217774: 0xc05aeba
label_217778:
    if (ctx->pc == 0x217778u) {
        ctx->pc = 0x217778u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x21777Cu;
        goto label_21777c;
    }
    ctx->pc = 0x217774u;
    SET_GPR_U32(ctx, 31, 0x21777Cu);
    ctx->pc = 0x217778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21777Cu; }
        else if (ctx->pc != 0x21777Cu) { ctx->pc = 0x21777Cu; }
    }
    if (ctx->pc != 0x21777Cu) { return; }
    ctx->pc = 0x21777Cu;
label_21777c:
    // 0x21777c: 0x26940001
    ctx->pc = 0x21777cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_217780:
    // 0x217780: 0xc05b018
label_217784:
    if (ctx->pc == 0x217784u) {
        ctx->pc = 0x217784u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 592)));
        ctx->pc = 0x217788u;
        goto label_217788;
    }
    ctx->pc = 0x217780u;
    SET_GPR_U32(ctx, 31, 0x217788u);
    ctx->pc = 0x217784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 592)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217788u; }
        else if (ctx->pc != 0x217788u) { ctx->pc = 0x217788u; }
    }
    if (ctx->pc != 0x217788u) { return; }
    ctx->pc = 0x217788u;
label_217788:
    // 0x217788: 0x24030001
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_21778c:
    // 0x21778c: 0x10430004
label_217790:
    if (ctx->pc == 0x217790u) {
        ctx->pc = 0x217794u;
        goto label_217794;
    }
    ctx->pc = 0x21778Cu;
    {
        const bool branch_taken_0x21778c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x21778c) {
            ctx->pc = 0x2177A0u;
            goto label_2177a0;
        }
    }
    ctx->pc = 0x217794u;
label_217794:
    // 0x217794: 0x24030003
    ctx->pc = 0x217794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_217798:
    // 0x217798: 0x144300a4
label_21779c:
    if (ctx->pc == 0x21779Cu) {
        ctx->pc = 0x2177A0u;
        goto label_2177a0;
    }
    ctx->pc = 0x217798u;
    {
        const bool branch_taken_0x217798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x217798) {
            ctx->pc = 0x217A2Cu;
            goto label_217a2c;
        }
    }
    ctx->pc = 0x2177A0u;
label_2177a0:
    // 0x2177a0: 0x3c020091
    ctx->pc = 0x2177a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_2177a4:
    // 0x2177a4: 0x24563500
    ctx->pc = 0x2177a4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 13568));
label_2177a8:
    // 0x2177a8: 0x3c020091
    ctx->pc = 0x2177a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_2177ac:
    // 0x2177ac: 0x245227f0
    ctx->pc = 0x2177acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 10224));
label_2177b0:
    // 0x2177b0: 0x3c020091
    ctx->pc = 0x2177b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_2177b4:
    // 0x2177b4: 0x72c08e28
    ctx->pc = 0x2177b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_2177b8:
    // 0x2177b8: 0x70008628
    ctx->pc = 0x2177b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2177bc:
    // 0x2177bc: 0x24532760
    ctx->pc = 0x2177bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 10080));
label_2177c0:
    // 0x2177c0: 0x8e230004
    ctx->pc = 0x2177c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2177c4:
    // 0x2177c4: 0x2402ffc0
    ctx->pc = 0x2177c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
label_2177c8:
    // 0x2177c8: 0x70002e28
    ctx->pc = 0x2177c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2177cc:
    // 0x2177cc: 0xae430018
    ctx->pc = 0x2177ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_2177d0:
    // 0x2177d0: 0x8e230000
    ctx->pc = 0x2177d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2177d4:
    // 0x2177d4: 0x2c31821
    ctx->pc = 0x2177d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_2177d8:
    // 0x2177d8: 0xaea30210
    ctx->pc = 0x2177d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 528), GPR_U32(ctx, 3));
label_2177dc:
    // 0x2177dc: 0x8e230004
    ctx->pc = 0x2177dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2177e0:
    // 0x2177e0: 0x2463003f
    ctx->pc = 0x2177e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
label_2177e4:
    // 0x2177e4: 0x621024
    ctx->pc = 0x2177e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2177e8:
    // 0x2177e8: 0xaea20214
    ctx->pc = 0x2177e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 532), GPR_U32(ctx, 2));
label_2177ec:
    // 0x2177ec: 0x8e620000
    ctx->pc = 0x2177ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2177f0:
    // 0x2177f0: 0xaea2022c
    ctx->pc = 0x2177f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 556), GPR_U32(ctx, 2));
label_2177f4:
    // 0x2177f4: 0x0
    ctx->pc = 0x2177f4u;
    // NOP
label_2177f8:
    // 0x2177f8: 0xc06b564
label_2177fc:
    if (ctx->pc == 0x2177FCu) {
        ctx->pc = 0x2177FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 524));
        ctx->pc = 0x217800u;
        goto label_217800;
    }
    ctx->pc = 0x2177F8u;
    SET_GPR_U32(ctx, 31, 0x217800u);
    ctx->pc = 0x2177FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 524));
    ctx->pc = 0x1AD590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndPackHeaderLoad_0x1ad590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217800u; }
        else if (ctx->pc != 0x217800u) { ctx->pc = 0x217800u; }
    }
    if (ctx->pc != 0x217800u) { return; }
    ctx->pc = 0x217800u;
label_217800:
    // 0x217800: 0x70402e28
    ctx->pc = 0x217800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_217804:
    // 0x217804: 0x0
    ctx->pc = 0x217804u;
    // NOP
label_217808:
    // 0x217808: 0x0
    ctx->pc = 0x217808u;
    // NOP
label_21780c:
    // 0x21780c: 0x1440fffa
label_217810:
    if (ctx->pc == 0x217810u) {
        ctx->pc = 0x217814u;
        goto label_217814;
    }
    ctx->pc = 0x21780Cu;
    {
        const bool branch_taken_0x21780c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21780c) {
            ctx->pc = 0x2177F8u;
            goto label_2177f8;
        }
    }
    ctx->pc = 0x217814u;
label_217814:
    // 0x217814: 0x26100001
    ctx->pc = 0x217814u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_217818:
    // 0x217818: 0x2a020020
    ctx->pc = 0x217818u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
label_21781c:
    // 0x21781c: 0x26520028
    ctx->pc = 0x21781cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 40));
label_217820:
    // 0x217820: 0x26730004
    ctx->pc = 0x217820u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_217824:
    // 0x217824: 0x1440ffe6
label_217828:
    if (ctx->pc == 0x217828u) {
        ctx->pc = 0x217828u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x21782Cu;
        goto label_21782c;
    }
    ctx->pc = 0x217824u;
    {
        const bool branch_taken_0x217824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217828u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x217824) {
            ctx->pc = 0x2177C0u;
            goto label_2177c0;
        }
    }
    ctx->pc = 0x21782Cu;
label_21782c:
    // 0x21782c: 0x3c020091
    ctx->pc = 0x21782cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_217830:
    // 0x217830: 0x24422d00
    ctx->pc = 0x217830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11520));
label_217834:
    // 0x217834: 0x8c42000c
    ctx->pc = 0x217834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_217838:
    // 0x217838: 0xaea20280
    ctx->pc = 0x217838u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 640), GPR_U32(ctx, 2));
label_21783c:
    // 0x21783c: 0x8ea20280
    ctx->pc = 0x21783cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_217840:
    // 0x217840: 0x4410003
label_217844:
    if (ctx->pc == 0x217844u) {
        ctx->pc = 0x217844u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        ctx->pc = 0x217848u;
        goto label_217848;
    }
    ctx->pc = 0x217840u;
    {
        const bool branch_taken_0x217840 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x217844u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x217840) {
            ctx->pc = 0x217850u;
            goto label_217850;
        }
    }
    ctx->pc = 0x217848u;
label_217848:
    // 0x217848: 0x244207ff
    ctx->pc = 0x217848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
label_21784c:
    // 0x21784c: 0x22ac3
    ctx->pc = 0x21784cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_217850:
    // 0x217850: 0x8ea40250
    ctx->pc = 0x217850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 592)));
label_217854:
    // 0x217854: 0xc05af94
label_217858:
    if (ctx->pc == 0x217858u) {
        ctx->pc = 0x217858u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x21785Cu;
        goto label_21785c;
    }
    ctx->pc = 0x217854u;
    SET_GPR_U32(ctx, 31, 0x21785Cu);
    ctx->pc = 0x217858u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21785Cu; }
        else if (ctx->pc != 0x21785Cu) { ctx->pc = 0x21785Cu; }
    }
    if (ctx->pc != 0x21785Cu) { return; }
    ctx->pc = 0x21785Cu;
label_21785c:
    // 0x21785c: 0x8ea40250
    ctx->pc = 0x21785cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 592)));
label_217860:
    // 0x217860: 0x3c020091
    ctx->pc = 0x217860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_217864:
    // 0x217864: 0x24462d00
    ctx->pc = 0x217864u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 11520));
label_217868:
    // 0x217868: 0xc05aeba
label_21786c:
    if (ctx->pc == 0x21786Cu) {
        ctx->pc = 0x21786Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x217870u;
        goto label_217870;
    }
    ctx->pc = 0x217868u;
    SET_GPR_U32(ctx, 31, 0x217870u);
    ctx->pc = 0x21786Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217870u; }
        else if (ctx->pc != 0x217870u) { ctx->pc = 0x217870u; }
    }
    if (ctx->pc != 0x217870u) { return; }
    ctx->pc = 0x217870u;
label_217870:
    // 0x217870: 0x26940001
    ctx->pc = 0x217870u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_217874:
    // 0x217874: 0xc05b018
label_217878:
    if (ctx->pc == 0x217878u) {
        ctx->pc = 0x217878u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 592)));
        ctx->pc = 0x21787Cu;
        goto label_21787c;
    }
    ctx->pc = 0x217874u;
    SET_GPR_U32(ctx, 31, 0x21787Cu);
    ctx->pc = 0x217878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 592)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21787Cu; }
        else if (ctx->pc != 0x21787Cu) { ctx->pc = 0x21787Cu; }
    }
    if (ctx->pc != 0x21787Cu) { return; }
    ctx->pc = 0x21787Cu;
label_21787c:
    // 0x21787c: 0x24030001
    ctx->pc = 0x21787cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_217880:
    // 0x217880: 0x10430004
label_217884:
    if (ctx->pc == 0x217884u) {
        ctx->pc = 0x217888u;
        goto label_217888;
    }
    ctx->pc = 0x217880u;
    {
        const bool branch_taken_0x217880 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x217880) {
            ctx->pc = 0x217894u;
            goto label_217894;
        }
    }
    ctx->pc = 0x217888u;
label_217888:
    // 0x217888: 0x24030003
    ctx->pc = 0x217888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_21788c:
    // 0x21788c: 0x14430067
label_217890:
    if (ctx->pc == 0x217890u) {
        ctx->pc = 0x217894u;
        goto label_217894;
    }
    ctx->pc = 0x21788Cu;
    {
        const bool branch_taken_0x21788c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x21788c) {
            ctx->pc = 0x217A2Cu;
            goto label_217a2c;
        }
    }
    ctx->pc = 0x217894u;
label_217894:
    // 0x217894: 0x3c020091
    ctx->pc = 0x217894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_217898:
    // 0x217898: 0x24432d00
    ctx->pc = 0x217898u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 11520));
label_21789c:
    // 0x21789c: 0x3c020091
    ctx->pc = 0x21789cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
label_2178a0:
    // 0x2178a0: 0x70002628
    ctx->pc = 0x2178a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2178a4:
    // 0x2178a4: 0x244227f0
    ctx->pc = 0x2178a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10224));
label_2178a8:
    // 0x2178a8: 0x8c670010
    ctx->pc = 0x2178a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2178ac:
    // 0x2178ac: 0x8ea60280
    ctx->pc = 0x2178acu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_2178b0:
    // 0x2178b0: 0x24840008
    ctx->pc = 0x2178b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_2178b4:
    // 0x2178b4: 0x28850020
    ctx->pc = 0x2178b4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 4), 32));
label_2178b8:
    // 0x2178b8: 0xe63021
    ctx->pc = 0x2178b8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2178bc:
    // 0x2178bc: 0xac46001c
    ctx->pc = 0x2178bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
label_2178c0:
    // 0x2178c0: 0x8c660014
    ctx->pc = 0x2178c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2178c4:
    // 0x2178c4: 0xac460024
    ctx->pc = 0x2178c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_2178c8:
    // 0x2178c8: 0x8c670028
    ctx->pc = 0x2178c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2178cc:
    // 0x2178cc: 0x8ea60280
    ctx->pc = 0x2178ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_2178d0:
    // 0x2178d0: 0xe63021
    ctx->pc = 0x2178d0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2178d4:
    // 0x2178d4: 0xac460044
    ctx->pc = 0x2178d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 6));
label_2178d8:
    // 0x2178d8: 0x8c66002c
    ctx->pc = 0x2178d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2178dc:
    // 0x2178dc: 0xac46004c
    ctx->pc = 0x2178dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
label_2178e0:
    // 0x2178e0: 0x8c670040
    ctx->pc = 0x2178e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2178e4:
    // 0x2178e4: 0x8ea60280
    ctx->pc = 0x2178e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_2178e8:
    // 0x2178e8: 0xe63021
    ctx->pc = 0x2178e8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2178ec:
    // 0x2178ec: 0xac46006c
    ctx->pc = 0x2178ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 6));
label_2178f0:
    // 0x2178f0: 0x8c660044
    ctx->pc = 0x2178f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2178f4:
    // 0x2178f4: 0xac460074
    ctx->pc = 0x2178f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 6));
label_2178f8:
    // 0x2178f8: 0x8c670058
    ctx->pc = 0x2178f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2178fc:
    // 0x2178fc: 0x8ea60280
    ctx->pc = 0x2178fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_217900:
    // 0x217900: 0xe63021
    ctx->pc = 0x217900u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_217904:
    // 0x217904: 0xac460094
    ctx->pc = 0x217904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 6));
label_217908:
    // 0x217908: 0x8c66005c
    ctx->pc = 0x217908u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_21790c:
    // 0x21790c: 0xac46009c
    ctx->pc = 0x21790cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 6));
label_217910:
    // 0x217910: 0x8c670070
    ctx->pc = 0x217910u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_217914:
    // 0x217914: 0x8ea60280
    ctx->pc = 0x217914u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_217918:
    // 0x217918: 0xe63021
    ctx->pc = 0x217918u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_21791c:
    // 0x21791c: 0xac4600bc
    ctx->pc = 0x21791cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 6));
label_217920:
    // 0x217920: 0x8c660074
    ctx->pc = 0x217920u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_217924:
    // 0x217924: 0xac4600c4
    ctx->pc = 0x217924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
label_217928:
    // 0x217928: 0x8c670088
    ctx->pc = 0x217928u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_21792c:
    // 0x21792c: 0x8ea60280
    ctx->pc = 0x21792cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_217930:
    // 0x217930: 0xe63021
    ctx->pc = 0x217930u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_217934:
    // 0x217934: 0xac4600e4
    ctx->pc = 0x217934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 6));
label_217938:
    // 0x217938: 0x8c66008c
    ctx->pc = 0x217938u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_21793c:
    // 0x21793c: 0xac4600ec
    ctx->pc = 0x21793cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 6));
label_217940:
    // 0x217940: 0x8c6700a0
    ctx->pc = 0x217940u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_217944:
    // 0x217944: 0x8ea60280
    ctx->pc = 0x217944u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_217948:
    // 0x217948: 0xe63021
    ctx->pc = 0x217948u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_21794c:
    // 0x21794c: 0xac46010c
    ctx->pc = 0x21794cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 6));
label_217950:
    // 0x217950: 0x8c6600a4
    ctx->pc = 0x217950u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_217954:
    // 0x217954: 0xac460114
    ctx->pc = 0x217954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 6));
label_217958:
    // 0x217958: 0x8c6700b8
    ctx->pc = 0x217958u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_21795c:
    // 0x21795c: 0x8ea60280
    ctx->pc = 0x21795cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 640)));
label_217960:
    // 0x217960: 0xe63021
    ctx->pc = 0x217960u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_217964:
    // 0x217964: 0xac460134
    ctx->pc = 0x217964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 6));
label_217968:
    // 0x217968: 0x8c6600bc
    ctx->pc = 0x217968u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_21796c:
    // 0x21796c: 0xac46013c
    ctx->pc = 0x21796cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 6));
label_217970:
    // 0x217970: 0x246300c0
    ctx->pc = 0x217970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 192));
label_217974:
    // 0x217974: 0x14a0ffcc
label_217978:
    if (ctx->pc == 0x217978u) {
        ctx->pc = 0x217978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 320));
        ctx->pc = 0x21797Cu;
        goto label_21797c;
    }
    ctx->pc = 0x217974u;
    {
        const bool branch_taken_0x217974 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x217978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 320));
        if (branch_taken_0x217974) {
            ctx->pc = 0x2178A8u;
            goto label_2178a8;
        }
    }
    ctx->pc = 0x21797Cu;
label_21797c:
    // 0x21797c: 0x70002e28
    ctx->pc = 0x21797cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_217980:
    // 0x217980: 0x72a02628
    ctx->pc = 0x217980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_217984:
    // 0x217984: 0x2403ffff
    ctx->pc = 0x217984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_217988:
    // 0x217988: 0xac800004
    ctx->pc = 0x217988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_21798c:
    // 0x21798c: 0xa4830002
    ctx->pc = 0x21798cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_217990:
    // 0x217990: 0xac80000c
    ctx->pc = 0x217990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_217994:
    // 0x217994: 0xa483000a
    ctx->pc = 0x217994u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
label_217998:
    // 0x217998: 0xac800014
    ctx->pc = 0x217998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_21799c:
    // 0x21799c: 0xa4830012
    ctx->pc = 0x21799cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
label_2179a0:
    // 0x2179a0: 0xac80001c
    ctx->pc = 0x2179a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_2179a4:
    // 0x2179a4: 0xa483001a
    ctx->pc = 0x2179a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
label_2179a8:
    // 0x2179a8: 0xac800024
    ctx->pc = 0x2179a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_2179ac:
    // 0x2179ac: 0xa4830022
    ctx->pc = 0x2179acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
label_2179b0:
    // 0x2179b0: 0xac80002c
    ctx->pc = 0x2179b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_2179b4:
    // 0x2179b4: 0xa483002a
    ctx->pc = 0x2179b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
label_2179b8:
    // 0x2179b8: 0xac800034
    ctx->pc = 0x2179b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_2179bc:
    // 0x2179bc: 0xa4830032
    ctx->pc = 0x2179bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 3));
label_2179c0:
    // 0x2179c0: 0xac80003c
    ctx->pc = 0x2179c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2179c4:
    // 0x2179c4: 0x24a50008
    ctx->pc = 0x2179c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
label_2179c8:
    // 0x2179c8: 0xa483003a
    ctx->pc = 0x2179c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 3));
label_2179cc:
    // 0x2179cc: 0x28a20020
    ctx->pc = 0x2179ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
label_2179d0:
    // 0x2179d0: 0x1440ffed
label_2179d4:
    if (ctx->pc == 0x2179D4u) {
        ctx->pc = 0x2179D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x2179D8u;
        goto label_2179d8;
    }
    ctx->pc = 0x2179D0u;
    {
        const bool branch_taken_0x2179d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2179D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x2179d0) {
            ctx->pc = 0x217988u;
            goto label_217988;
        }
    }
    ctx->pc = 0x2179D8u;
label_2179d8:
    // 0x2179d8: 0xaea0026c
    ctx->pc = 0x2179d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 620), GPR_U32(ctx, 0));
label_2179dc:
    // 0x2179dc: 0x26940001
    ctx->pc = 0x2179dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_2179e0:
    // 0x2179e0: 0x8f878e60
    ctx->pc = 0x2179e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294938208)));
label_2179e4:
    // 0x2179e4: 0x8ea8026c
    ctx->pc = 0x2179e4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 21), 620)));
label_2179e8:
    // 0x2179e8: 0x72a02628
    ctx->pc = 0x2179e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_2179ec:
    // 0x2179ec: 0x70002e28
    ctx->pc = 0x2179ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2179f0:
    // 0x2179f0: 0xc085f2c
label_2179f4:
    if (ctx->pc == 0x2179F4u) {
        ctx->pc = 0x2179F4u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2179F8u;
        goto label_2179f8;
    }
    ctx->pc = 0x2179F0u;
    SET_GPR_U32(ctx, 31, 0x2179F8u);
    ctx->pc = 0x2179F4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        packLoad__13SoundMgrClassFiiii_0x217cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2179F8u; }
        else if (ctx->pc != 0x2179F8u) { ctx->pc = 0x2179F8u; }
    }
    if (ctx->pc != 0x2179F8u) { return; }
    ctx->pc = 0x2179F8u;
label_2179f8:
    // 0x2179f8: 0x1440000c
label_2179fc:
    if (ctx->pc == 0x2179FCu) {
        ctx->pc = 0x2179FCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 620), GPR_U32(ctx, 2));
        ctx->pc = 0x217A00u;
        goto label_217a00;
    }
    ctx->pc = 0x2179F8u;
    {
        const bool branch_taken_0x2179f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2179FCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 620), GPR_U32(ctx, 2));
        if (branch_taken_0x2179f8) {
            ctx->pc = 0x217A2Cu;
            goto label_217a2c;
        }
    }
    ctx->pc = 0x217A00u;
label_217a00:
    // 0x217a00: 0xaea0026c
    ctx->pc = 0x217a00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 620), GPR_U32(ctx, 0));
label_217a04:
    // 0x217a04: 0x26940001
    ctx->pc = 0x217a04u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_217a08:
    // 0x217a08: 0x8f878e64
    ctx->pc = 0x217a08u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294938212)));
label_217a0c:
    // 0x217a0c: 0x8ea8026c
    ctx->pc = 0x217a0cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 21), 620)));
label_217a10:
    // 0x217a10: 0x24050001
    ctx->pc = 0x217a10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_217a14:
    // 0x217a14: 0x72a02628
    ctx->pc = 0x217a14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_217a18:
    // 0x217a18: 0xc085f2c
label_217a1c:
    if (ctx->pc == 0x217A1Cu) {
        ctx->pc = 0x217A1Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x217A20u;
        goto label_217a20;
    }
    ctx->pc = 0x217A18u;
    SET_GPR_U32(ctx, 31, 0x217A20u);
    ctx->pc = 0x217A1Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        packLoad__13SoundMgrClassFiiii_0x217cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A20u; }
        else if (ctx->pc != 0x217A20u) { ctx->pc = 0x217A20u; }
    }
    if (ctx->pc != 0x217A20u) { return; }
    ctx->pc = 0x217A20u;
label_217a20:
    // 0x217a20: 0x14400002
label_217a24:
    if (ctx->pc == 0x217A24u) {
        ctx->pc = 0x217A24u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 620), GPR_U32(ctx, 2));
        ctx->pc = 0x217A28u;
        goto label_217a28;
    }
    ctx->pc = 0x217A20u;
    {
        const bool branch_taken_0x217a20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217A24u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 620), GPR_U32(ctx, 2));
        if (branch_taken_0x217a20) {
            ctx->pc = 0x217A2Cu;
            goto label_217a2c;
        }
    }
    ctx->pc = 0x217A28u;
label_217a28:
    // 0x217a28: 0x7000a628
    ctx->pc = 0x217a28u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_217a2c:
    // 0x217a2c: 0x72801628
    ctx->pc = 0x217a2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_217a30:
    // 0x217a30: 0x7bbf0070
    ctx->pc = 0x217a30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_217a34:
    // 0x217a34: 0x7bb60060
    ctx->pc = 0x217a34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_217a38:
    // 0x217a38: 0x7bb50050
    ctx->pc = 0x217a38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_217a3c:
    // 0x217a3c: 0x7bb40040
    ctx->pc = 0x217a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_217a40:
    // 0x217a40: 0x7bb30030
    ctx->pc = 0x217a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217a44:
    // 0x217a44: 0x7bb20020
    ctx->pc = 0x217a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217a48:
    // 0x217a48: 0x7bb10010
    ctx->pc = 0x217a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217a4c:
    // 0x217a4c: 0x7bb00000
    ctx->pc = 0x217a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_217a50:
    // 0x217a50: 0x3e00008
label_217a54:
    if (ctx->pc == 0x217A54u) {
        ctx->pc = 0x217A54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x217A58u;
        goto label_fallthrough_0x217a50;
    }
    ctx->pc = 0x217A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217620u: goto label_217620;
            case 0x217624u: goto label_217624;
            case 0x217628u: goto label_217628;
            case 0x21762Cu: goto label_21762c;
            case 0x217630u: goto label_217630;
            case 0x217634u: goto label_217634;
            case 0x217638u: goto label_217638;
            case 0x21763Cu: goto label_21763c;
            case 0x217640u: goto label_217640;
            case 0x217644u: goto label_217644;
            case 0x217648u: goto label_217648;
            case 0x21764Cu: goto label_21764c;
            case 0x217650u: goto label_217650;
            case 0x217654u: goto label_217654;
            case 0x217658u: goto label_217658;
            case 0x21765Cu: goto label_21765c;
            case 0x217660u: goto label_217660;
            case 0x217664u: goto label_217664;
            case 0x217668u: goto label_217668;
            case 0x21766Cu: goto label_21766c;
            case 0x217670u: goto label_217670;
            case 0x217674u: goto label_217674;
            case 0x217678u: goto label_217678;
            case 0x21767Cu: goto label_21767c;
            case 0x217680u: goto label_217680;
            case 0x217684u: goto label_217684;
            case 0x217688u: goto label_217688;
            case 0x21768Cu: goto label_21768c;
            case 0x217690u: goto label_217690;
            case 0x217694u: goto label_217694;
            case 0x217698u: goto label_217698;
            case 0x21769Cu: goto label_21769c;
            case 0x2176A0u: goto label_2176a0;
            case 0x2176A4u: goto label_2176a4;
            case 0x2176A8u: goto label_2176a8;
            case 0x2176ACu: goto label_2176ac;
            case 0x2176B0u: goto label_2176b0;
            case 0x2176B4u: goto label_2176b4;
            case 0x2176B8u: goto label_2176b8;
            case 0x2176BCu: goto label_2176bc;
            case 0x2176C0u: goto label_2176c0;
            case 0x2176C4u: goto label_2176c4;
            case 0x2176C8u: goto label_2176c8;
            case 0x2176CCu: goto label_2176cc;
            case 0x2176D0u: goto label_2176d0;
            case 0x2176D4u: goto label_2176d4;
            case 0x2176D8u: goto label_2176d8;
            case 0x2176DCu: goto label_2176dc;
            case 0x2176E0u: goto label_2176e0;
            case 0x2176E4u: goto label_2176e4;
            case 0x2176E8u: goto label_2176e8;
            case 0x2176ECu: goto label_2176ec;
            case 0x2176F0u: goto label_2176f0;
            case 0x2176F4u: goto label_2176f4;
            case 0x2176F8u: goto label_2176f8;
            case 0x2176FCu: goto label_2176fc;
            case 0x217700u: goto label_217700;
            case 0x217704u: goto label_217704;
            case 0x217708u: goto label_217708;
            case 0x21770Cu: goto label_21770c;
            case 0x217710u: goto label_217710;
            case 0x217714u: goto label_217714;
            case 0x217718u: goto label_217718;
            case 0x21771Cu: goto label_21771c;
            case 0x217720u: goto label_217720;
            case 0x217724u: goto label_217724;
            case 0x217728u: goto label_217728;
            case 0x21772Cu: goto label_21772c;
            case 0x217730u: goto label_217730;
            case 0x217734u: goto label_217734;
            case 0x217738u: goto label_217738;
            case 0x21773Cu: goto label_21773c;
            case 0x217740u: goto label_217740;
            case 0x217744u: goto label_217744;
            case 0x217748u: goto label_217748;
            case 0x21774Cu: goto label_21774c;
            case 0x217750u: goto label_217750;
            case 0x217754u: goto label_217754;
            case 0x217758u: goto label_217758;
            case 0x21775Cu: goto label_21775c;
            case 0x217760u: goto label_217760;
            case 0x217764u: goto label_217764;
            case 0x217768u: goto label_217768;
            case 0x21776Cu: goto label_21776c;
            case 0x217770u: goto label_217770;
            case 0x217774u: goto label_217774;
            case 0x217778u: goto label_217778;
            case 0x21777Cu: goto label_21777c;
            case 0x217780u: goto label_217780;
            case 0x217784u: goto label_217784;
            case 0x217788u: goto label_217788;
            case 0x21778Cu: goto label_21778c;
            case 0x217790u: goto label_217790;
            case 0x217794u: goto label_217794;
            case 0x217798u: goto label_217798;
            case 0x21779Cu: goto label_21779c;
            case 0x2177A0u: goto label_2177a0;
            case 0x2177A4u: goto label_2177a4;
            case 0x2177A8u: goto label_2177a8;
            case 0x2177ACu: goto label_2177ac;
            case 0x2177B0u: goto label_2177b0;
            case 0x2177B4u: goto label_2177b4;
            case 0x2177B8u: goto label_2177b8;
            case 0x2177BCu: goto label_2177bc;
            case 0x2177C0u: goto label_2177c0;
            case 0x2177C4u: goto label_2177c4;
            case 0x2177C8u: goto label_2177c8;
            case 0x2177CCu: goto label_2177cc;
            case 0x2177D0u: goto label_2177d0;
            case 0x2177D4u: goto label_2177d4;
            case 0x2177D8u: goto label_2177d8;
            case 0x2177DCu: goto label_2177dc;
            case 0x2177E0u: goto label_2177e0;
            case 0x2177E4u: goto label_2177e4;
            case 0x2177E8u: goto label_2177e8;
            case 0x2177ECu: goto label_2177ec;
            case 0x2177F0u: goto label_2177f0;
            case 0x2177F4u: goto label_2177f4;
            case 0x2177F8u: goto label_2177f8;
            case 0x2177FCu: goto label_2177fc;
            case 0x217800u: goto label_217800;
            case 0x217804u: goto label_217804;
            case 0x217808u: goto label_217808;
            case 0x21780Cu: goto label_21780c;
            case 0x217810u: goto label_217810;
            case 0x217814u: goto label_217814;
            case 0x217818u: goto label_217818;
            case 0x21781Cu: goto label_21781c;
            case 0x217820u: goto label_217820;
            case 0x217824u: goto label_217824;
            case 0x217828u: goto label_217828;
            case 0x21782Cu: goto label_21782c;
            case 0x217830u: goto label_217830;
            case 0x217834u: goto label_217834;
            case 0x217838u: goto label_217838;
            case 0x21783Cu: goto label_21783c;
            case 0x217840u: goto label_217840;
            case 0x217844u: goto label_217844;
            case 0x217848u: goto label_217848;
            case 0x21784Cu: goto label_21784c;
            case 0x217850u: goto label_217850;
            case 0x217854u: goto label_217854;
            case 0x217858u: goto label_217858;
            case 0x21785Cu: goto label_21785c;
            case 0x217860u: goto label_217860;
            case 0x217864u: goto label_217864;
            case 0x217868u: goto label_217868;
            case 0x21786Cu: goto label_21786c;
            case 0x217870u: goto label_217870;
            case 0x217874u: goto label_217874;
            case 0x217878u: goto label_217878;
            case 0x21787Cu: goto label_21787c;
            case 0x217880u: goto label_217880;
            case 0x217884u: goto label_217884;
            case 0x217888u: goto label_217888;
            case 0x21788Cu: goto label_21788c;
            case 0x217890u: goto label_217890;
            case 0x217894u: goto label_217894;
            case 0x217898u: goto label_217898;
            case 0x21789Cu: goto label_21789c;
            case 0x2178A0u: goto label_2178a0;
            case 0x2178A4u: goto label_2178a4;
            case 0x2178A8u: goto label_2178a8;
            case 0x2178ACu: goto label_2178ac;
            case 0x2178B0u: goto label_2178b0;
            case 0x2178B4u: goto label_2178b4;
            case 0x2178B8u: goto label_2178b8;
            case 0x2178BCu: goto label_2178bc;
            case 0x2178C0u: goto label_2178c0;
            case 0x2178C4u: goto label_2178c4;
            case 0x2178C8u: goto label_2178c8;
            case 0x2178CCu: goto label_2178cc;
            case 0x2178D0u: goto label_2178d0;
            case 0x2178D4u: goto label_2178d4;
            case 0x2178D8u: goto label_2178d8;
            case 0x2178DCu: goto label_2178dc;
            case 0x2178E0u: goto label_2178e0;
            case 0x2178E4u: goto label_2178e4;
            case 0x2178E8u: goto label_2178e8;
            case 0x2178ECu: goto label_2178ec;
            case 0x2178F0u: goto label_2178f0;
            case 0x2178F4u: goto label_2178f4;
            case 0x2178F8u: goto label_2178f8;
            case 0x2178FCu: goto label_2178fc;
            case 0x217900u: goto label_217900;
            case 0x217904u: goto label_217904;
            case 0x217908u: goto label_217908;
            case 0x21790Cu: goto label_21790c;
            case 0x217910u: goto label_217910;
            case 0x217914u: goto label_217914;
            case 0x217918u: goto label_217918;
            case 0x21791Cu: goto label_21791c;
            case 0x217920u: goto label_217920;
            case 0x217924u: goto label_217924;
            case 0x217928u: goto label_217928;
            case 0x21792Cu: goto label_21792c;
            case 0x217930u: goto label_217930;
            case 0x217934u: goto label_217934;
            case 0x217938u: goto label_217938;
            case 0x21793Cu: goto label_21793c;
            case 0x217940u: goto label_217940;
            case 0x217944u: goto label_217944;
            case 0x217948u: goto label_217948;
            case 0x21794Cu: goto label_21794c;
            case 0x217950u: goto label_217950;
            case 0x217954u: goto label_217954;
            case 0x217958u: goto label_217958;
            case 0x21795Cu: goto label_21795c;
            case 0x217960u: goto label_217960;
            case 0x217964u: goto label_217964;
            case 0x217968u: goto label_217968;
            case 0x21796Cu: goto label_21796c;
            case 0x217970u: goto label_217970;
            case 0x217974u: goto label_217974;
            case 0x217978u: goto label_217978;
            case 0x21797Cu: goto label_21797c;
            case 0x217980u: goto label_217980;
            case 0x217984u: goto label_217984;
            case 0x217988u: goto label_217988;
            case 0x21798Cu: goto label_21798c;
            case 0x217990u: goto label_217990;
            case 0x217994u: goto label_217994;
            case 0x217998u: goto label_217998;
            case 0x21799Cu: goto label_21799c;
            case 0x2179A0u: goto label_2179a0;
            case 0x2179A4u: goto label_2179a4;
            case 0x2179A8u: goto label_2179a8;
            case 0x2179ACu: goto label_2179ac;
            case 0x2179B0u: goto label_2179b0;
            case 0x2179B4u: goto label_2179b4;
            case 0x2179B8u: goto label_2179b8;
            case 0x2179BCu: goto label_2179bc;
            case 0x2179C0u: goto label_2179c0;
            case 0x2179C4u: goto label_2179c4;
            case 0x2179C8u: goto label_2179c8;
            case 0x2179CCu: goto label_2179cc;
            case 0x2179D0u: goto label_2179d0;
            case 0x2179D4u: goto label_2179d4;
            case 0x2179D8u: goto label_2179d8;
            case 0x2179DCu: goto label_2179dc;
            case 0x2179E0u: goto label_2179e0;
            case 0x2179E4u: goto label_2179e4;
            case 0x2179E8u: goto label_2179e8;
            case 0x2179ECu: goto label_2179ec;
            case 0x2179F0u: goto label_2179f0;
            case 0x2179F4u: goto label_2179f4;
            case 0x2179F8u: goto label_2179f8;
            case 0x2179FCu: goto label_2179fc;
            case 0x217A00u: goto label_217a00;
            case 0x217A04u: goto label_217a04;
            case 0x217A08u: goto label_217a08;
            case 0x217A0Cu: goto label_217a0c;
            case 0x217A10u: goto label_217a10;
            case 0x217A14u: goto label_217a14;
            case 0x217A18u: goto label_217a18;
            case 0x217A1Cu: goto label_217a1c;
            case 0x217A20u: goto label_217a20;
            case 0x217A24u: goto label_217a24;
            case 0x217A28u: goto label_217a28;
            case 0x217A2Cu: goto label_217a2c;
            case 0x217A30u: goto label_217a30;
            case 0x217A34u: goto label_217a34;
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            default: break;
        }
        return;
    }
label_fallthrough_0x217a50:
    ctx->pc = 0x217A58u;
}
