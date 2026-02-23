#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eCHGFOG__11FogCtrlTaskFPUi
// Address: 0x1ea3c0 - 0x1ea968
void eCHGFOG__11FogCtrlTaskFPUi_0x1ea3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eCHGFOG__11FogCtrlTaskFPUi");


    ctx->pc = 0x1ea3c0u;

label_1ea3c0:
    // 0x1ea3c0: 0x8ca20004
    ctx->pc = 0x1ea3c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ea3c4:
    // 0x1ea3c4: 0x2c410006
    ctx->pc = 0x1ea3c4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 6));
label_1ea3c8:
    // 0x1ea3c8: 0x50200009
label_1ea3cc:
    if (ctx->pc == 0x1EA3CCu) {
        ctx->pc = 0x1EA3CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EA3D0u;
        goto label_1ea3d0;
    }
    ctx->pc = 0x1EA3C8u;
    {
        const bool branch_taken_0x1ea3c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea3c8) {
            ctx->pc = 0x1EA3CCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1EA3F0u;
            goto label_1ea3f0;
        }
    }
    ctx->pc = 0x1EA3D0u;
label_1ea3d0:
    // 0x1ea3d0: 0x3c03002c
    ctx->pc = 0x1ea3d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_1ea3d4:
    // 0x1ea3d4: 0x21080
    ctx->pc = 0x1ea3d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1ea3d8:
    // 0x1ea3d8: 0x2463f780
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965120));
label_1ea3dc:
    // 0x1ea3dc: 0x431021
    ctx->pc = 0x1ea3dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea3e0:
    // 0x1ea3e0: 0x8c420000
    ctx->pc = 0x1ea3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea3e4:
    // 0x1ea3e4: 0x400008
label_1ea3e8:
    if (ctx->pc == 0x1EA3E8u) {
        ctx->pc = 0x1EA3ECu;
        goto label_1ea3ec;
    }
    ctx->pc = 0x1EA3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA3C0u: goto label_1ea3c0;
            case 0x1EA3C4u: goto label_1ea3c4;
            case 0x1EA3C8u: goto label_1ea3c8;
            case 0x1EA3CCu: goto label_1ea3cc;
            case 0x1EA3D0u: goto label_1ea3d0;
            case 0x1EA3D4u: goto label_1ea3d4;
            case 0x1EA3D8u: goto label_1ea3d8;
            case 0x1EA3DCu: goto label_1ea3dc;
            case 0x1EA3E0u: goto label_1ea3e0;
            case 0x1EA3E4u: goto label_1ea3e4;
            case 0x1EA3E8u: goto label_1ea3e8;
            case 0x1EA3ECu: goto label_1ea3ec;
            case 0x1EA3F0u: goto label_1ea3f0;
            case 0x1EA3F4u: goto label_1ea3f4;
            case 0x1EA3F8u: goto label_1ea3f8;
            case 0x1EA3FCu: goto label_1ea3fc;
            case 0x1EA400u: goto label_1ea400;
            case 0x1EA404u: goto label_1ea404;
            case 0x1EA408u: goto label_1ea408;
            case 0x1EA40Cu: goto label_1ea40c;
            case 0x1EA410u: goto label_1ea410;
            case 0x1EA414u: goto label_1ea414;
            case 0x1EA418u: goto label_1ea418;
            case 0x1EA41Cu: goto label_1ea41c;
            case 0x1EA420u: goto label_1ea420;
            case 0x1EA424u: goto label_1ea424;
            case 0x1EA428u: goto label_1ea428;
            case 0x1EA42Cu: goto label_1ea42c;
            case 0x1EA430u: goto label_1ea430;
            case 0x1EA434u: goto label_1ea434;
            case 0x1EA438u: goto label_1ea438;
            case 0x1EA43Cu: goto label_1ea43c;
            case 0x1EA440u: goto label_1ea440;
            case 0x1EA444u: goto label_1ea444;
            case 0x1EA448u: goto label_1ea448;
            case 0x1EA44Cu: goto label_1ea44c;
            case 0x1EA450u: goto label_1ea450;
            case 0x1EA454u: goto label_1ea454;
            case 0x1EA458u: goto label_1ea458;
            case 0x1EA45Cu: goto label_1ea45c;
            case 0x1EA460u: goto label_1ea460;
            case 0x1EA464u: goto label_1ea464;
            case 0x1EA468u: goto label_1ea468;
            case 0x1EA46Cu: goto label_1ea46c;
            case 0x1EA470u: goto label_1ea470;
            case 0x1EA474u: goto label_1ea474;
            case 0x1EA478u: goto label_1ea478;
            case 0x1EA47Cu: goto label_1ea47c;
            case 0x1EA480u: goto label_1ea480;
            case 0x1EA484u: goto label_1ea484;
            case 0x1EA488u: goto label_1ea488;
            case 0x1EA48Cu: goto label_1ea48c;
            case 0x1EA490u: goto label_1ea490;
            case 0x1EA494u: goto label_1ea494;
            case 0x1EA498u: goto label_1ea498;
            case 0x1EA49Cu: goto label_1ea49c;
            case 0x1EA4A0u: goto label_1ea4a0;
            case 0x1EA4A4u: goto label_1ea4a4;
            case 0x1EA4A8u: goto label_1ea4a8;
            case 0x1EA4ACu: goto label_1ea4ac;
            case 0x1EA4B0u: goto label_1ea4b0;
            case 0x1EA4B4u: goto label_1ea4b4;
            case 0x1EA4B8u: goto label_1ea4b8;
            case 0x1EA4BCu: goto label_1ea4bc;
            case 0x1EA4C0u: goto label_1ea4c0;
            case 0x1EA4C4u: goto label_1ea4c4;
            case 0x1EA4C8u: goto label_1ea4c8;
            case 0x1EA4CCu: goto label_1ea4cc;
            case 0x1EA4D0u: goto label_1ea4d0;
            case 0x1EA4D4u: goto label_1ea4d4;
            case 0x1EA4D8u: goto label_1ea4d8;
            case 0x1EA4DCu: goto label_1ea4dc;
            case 0x1EA4E0u: goto label_1ea4e0;
            case 0x1EA4E4u: goto label_1ea4e4;
            case 0x1EA4E8u: goto label_1ea4e8;
            case 0x1EA4ECu: goto label_1ea4ec;
            case 0x1EA4F0u: goto label_1ea4f0;
            case 0x1EA4F4u: goto label_1ea4f4;
            case 0x1EA4F8u: goto label_1ea4f8;
            case 0x1EA4FCu: goto label_1ea4fc;
            case 0x1EA500u: goto label_1ea500;
            case 0x1EA504u: goto label_1ea504;
            case 0x1EA508u: goto label_1ea508;
            case 0x1EA50Cu: goto label_1ea50c;
            case 0x1EA510u: goto label_1ea510;
            case 0x1EA514u: goto label_1ea514;
            case 0x1EA518u: goto label_1ea518;
            case 0x1EA51Cu: goto label_1ea51c;
            case 0x1EA520u: goto label_1ea520;
            case 0x1EA524u: goto label_1ea524;
            case 0x1EA528u: goto label_1ea528;
            case 0x1EA52Cu: goto label_1ea52c;
            case 0x1EA530u: goto label_1ea530;
            case 0x1EA534u: goto label_1ea534;
            case 0x1EA538u: goto label_1ea538;
            case 0x1EA53Cu: goto label_1ea53c;
            case 0x1EA540u: goto label_1ea540;
            case 0x1EA544u: goto label_1ea544;
            case 0x1EA548u: goto label_1ea548;
            case 0x1EA54Cu: goto label_1ea54c;
            case 0x1EA550u: goto label_1ea550;
            case 0x1EA554u: goto label_1ea554;
            case 0x1EA558u: goto label_1ea558;
            case 0x1EA55Cu: goto label_1ea55c;
            case 0x1EA560u: goto label_1ea560;
            case 0x1EA564u: goto label_1ea564;
            case 0x1EA568u: goto label_1ea568;
            case 0x1EA56Cu: goto label_1ea56c;
            case 0x1EA570u: goto label_1ea570;
            case 0x1EA574u: goto label_1ea574;
            case 0x1EA578u: goto label_1ea578;
            case 0x1EA57Cu: goto label_1ea57c;
            case 0x1EA580u: goto label_1ea580;
            case 0x1EA584u: goto label_1ea584;
            case 0x1EA588u: goto label_1ea588;
            case 0x1EA58Cu: goto label_1ea58c;
            case 0x1EA590u: goto label_1ea590;
            case 0x1EA594u: goto label_1ea594;
            case 0x1EA598u: goto label_1ea598;
            case 0x1EA59Cu: goto label_1ea59c;
            case 0x1EA5A0u: goto label_1ea5a0;
            case 0x1EA5A4u: goto label_1ea5a4;
            case 0x1EA5A8u: goto label_1ea5a8;
            case 0x1EA5ACu: goto label_1ea5ac;
            case 0x1EA5B0u: goto label_1ea5b0;
            case 0x1EA5B4u: goto label_1ea5b4;
            case 0x1EA5B8u: goto label_1ea5b8;
            case 0x1EA5BCu: goto label_1ea5bc;
            case 0x1EA5C0u: goto label_1ea5c0;
            case 0x1EA5C4u: goto label_1ea5c4;
            case 0x1EA5C8u: goto label_1ea5c8;
            case 0x1EA5CCu: goto label_1ea5cc;
            case 0x1EA5D0u: goto label_1ea5d0;
            case 0x1EA5D4u: goto label_1ea5d4;
            case 0x1EA5D8u: goto label_1ea5d8;
            case 0x1EA5DCu: goto label_1ea5dc;
            case 0x1EA5E0u: goto label_1ea5e0;
            case 0x1EA5E4u: goto label_1ea5e4;
            case 0x1EA5E8u: goto label_1ea5e8;
            case 0x1EA5ECu: goto label_1ea5ec;
            case 0x1EA5F0u: goto label_1ea5f0;
            case 0x1EA5F4u: goto label_1ea5f4;
            case 0x1EA5F8u: goto label_1ea5f8;
            case 0x1EA5FCu: goto label_1ea5fc;
            case 0x1EA600u: goto label_1ea600;
            case 0x1EA604u: goto label_1ea604;
            case 0x1EA608u: goto label_1ea608;
            case 0x1EA60Cu: goto label_1ea60c;
            case 0x1EA610u: goto label_1ea610;
            case 0x1EA614u: goto label_1ea614;
            case 0x1EA618u: goto label_1ea618;
            case 0x1EA61Cu: goto label_1ea61c;
            case 0x1EA620u: goto label_1ea620;
            case 0x1EA624u: goto label_1ea624;
            case 0x1EA628u: goto label_1ea628;
            case 0x1EA62Cu: goto label_1ea62c;
            case 0x1EA630u: goto label_1ea630;
            case 0x1EA634u: goto label_1ea634;
            case 0x1EA638u: goto label_1ea638;
            case 0x1EA63Cu: goto label_1ea63c;
            case 0x1EA640u: goto label_1ea640;
            case 0x1EA644u: goto label_1ea644;
            case 0x1EA648u: goto label_1ea648;
            case 0x1EA64Cu: goto label_1ea64c;
            case 0x1EA650u: goto label_1ea650;
            case 0x1EA654u: goto label_1ea654;
            case 0x1EA658u: goto label_1ea658;
            case 0x1EA65Cu: goto label_1ea65c;
            case 0x1EA660u: goto label_1ea660;
            case 0x1EA664u: goto label_1ea664;
            case 0x1EA668u: goto label_1ea668;
            case 0x1EA66Cu: goto label_1ea66c;
            case 0x1EA670u: goto label_1ea670;
            case 0x1EA674u: goto label_1ea674;
            case 0x1EA678u: goto label_1ea678;
            case 0x1EA67Cu: goto label_1ea67c;
            case 0x1EA680u: goto label_1ea680;
            case 0x1EA684u: goto label_1ea684;
            case 0x1EA688u: goto label_1ea688;
            case 0x1EA68Cu: goto label_1ea68c;
            case 0x1EA690u: goto label_1ea690;
            case 0x1EA694u: goto label_1ea694;
            case 0x1EA698u: goto label_1ea698;
            case 0x1EA69Cu: goto label_1ea69c;
            case 0x1EA6A0u: goto label_1ea6a0;
            case 0x1EA6A4u: goto label_1ea6a4;
            case 0x1EA6A8u: goto label_1ea6a8;
            case 0x1EA6ACu: goto label_1ea6ac;
            case 0x1EA6B0u: goto label_1ea6b0;
            case 0x1EA6B4u: goto label_1ea6b4;
            case 0x1EA6B8u: goto label_1ea6b8;
            case 0x1EA6BCu: goto label_1ea6bc;
            case 0x1EA6C0u: goto label_1ea6c0;
            case 0x1EA6C4u: goto label_1ea6c4;
            case 0x1EA6C8u: goto label_1ea6c8;
            case 0x1EA6CCu: goto label_1ea6cc;
            case 0x1EA6D0u: goto label_1ea6d0;
            case 0x1EA6D4u: goto label_1ea6d4;
            case 0x1EA6D8u: goto label_1ea6d8;
            case 0x1EA6DCu: goto label_1ea6dc;
            case 0x1EA6E0u: goto label_1ea6e0;
            case 0x1EA6E4u: goto label_1ea6e4;
            case 0x1EA6E8u: goto label_1ea6e8;
            case 0x1EA6ECu: goto label_1ea6ec;
            case 0x1EA6F0u: goto label_1ea6f0;
            case 0x1EA6F4u: goto label_1ea6f4;
            case 0x1EA6F8u: goto label_1ea6f8;
            case 0x1EA6FCu: goto label_1ea6fc;
            case 0x1EA700u: goto label_1ea700;
            case 0x1EA704u: goto label_1ea704;
            case 0x1EA708u: goto label_1ea708;
            case 0x1EA70Cu: goto label_1ea70c;
            case 0x1EA710u: goto label_1ea710;
            case 0x1EA714u: goto label_1ea714;
            case 0x1EA718u: goto label_1ea718;
            case 0x1EA71Cu: goto label_1ea71c;
            case 0x1EA720u: goto label_1ea720;
            case 0x1EA724u: goto label_1ea724;
            case 0x1EA728u: goto label_1ea728;
            case 0x1EA72Cu: goto label_1ea72c;
            case 0x1EA730u: goto label_1ea730;
            case 0x1EA734u: goto label_1ea734;
            case 0x1EA738u: goto label_1ea738;
            case 0x1EA73Cu: goto label_1ea73c;
            case 0x1EA740u: goto label_1ea740;
            case 0x1EA744u: goto label_1ea744;
            case 0x1EA748u: goto label_1ea748;
            case 0x1EA74Cu: goto label_1ea74c;
            case 0x1EA750u: goto label_1ea750;
            case 0x1EA754u: goto label_1ea754;
            case 0x1EA758u: goto label_1ea758;
            case 0x1EA75Cu: goto label_1ea75c;
            case 0x1EA760u: goto label_1ea760;
            case 0x1EA764u: goto label_1ea764;
            case 0x1EA768u: goto label_1ea768;
            case 0x1EA76Cu: goto label_1ea76c;
            case 0x1EA770u: goto label_1ea770;
            case 0x1EA774u: goto label_1ea774;
            case 0x1EA778u: goto label_1ea778;
            case 0x1EA77Cu: goto label_1ea77c;
            case 0x1EA780u: goto label_1ea780;
            case 0x1EA784u: goto label_1ea784;
            case 0x1EA788u: goto label_1ea788;
            case 0x1EA78Cu: goto label_1ea78c;
            case 0x1EA790u: goto label_1ea790;
            case 0x1EA794u: goto label_1ea794;
            case 0x1EA798u: goto label_1ea798;
            case 0x1EA79Cu: goto label_1ea79c;
            case 0x1EA7A0u: goto label_1ea7a0;
            case 0x1EA7A4u: goto label_1ea7a4;
            case 0x1EA7A8u: goto label_1ea7a8;
            case 0x1EA7ACu: goto label_1ea7ac;
            case 0x1EA7B0u: goto label_1ea7b0;
            case 0x1EA7B4u: goto label_1ea7b4;
            case 0x1EA7B8u: goto label_1ea7b8;
            case 0x1EA7BCu: goto label_1ea7bc;
            case 0x1EA7C0u: goto label_1ea7c0;
            case 0x1EA7C4u: goto label_1ea7c4;
            case 0x1EA7C8u: goto label_1ea7c8;
            case 0x1EA7CCu: goto label_1ea7cc;
            case 0x1EA7D0u: goto label_1ea7d0;
            case 0x1EA7D4u: goto label_1ea7d4;
            case 0x1EA7D8u: goto label_1ea7d8;
            case 0x1EA7DCu: goto label_1ea7dc;
            case 0x1EA7E0u: goto label_1ea7e0;
            case 0x1EA7E4u: goto label_1ea7e4;
            case 0x1EA7E8u: goto label_1ea7e8;
            case 0x1EA7ECu: goto label_1ea7ec;
            case 0x1EA7F0u: goto label_1ea7f0;
            case 0x1EA7F4u: goto label_1ea7f4;
            case 0x1EA7F8u: goto label_1ea7f8;
            case 0x1EA7FCu: goto label_1ea7fc;
            case 0x1EA800u: goto label_1ea800;
            case 0x1EA804u: goto label_1ea804;
            case 0x1EA808u: goto label_1ea808;
            case 0x1EA80Cu: goto label_1ea80c;
            case 0x1EA810u: goto label_1ea810;
            case 0x1EA814u: goto label_1ea814;
            case 0x1EA818u: goto label_1ea818;
            case 0x1EA81Cu: goto label_1ea81c;
            case 0x1EA820u: goto label_1ea820;
            case 0x1EA824u: goto label_1ea824;
            case 0x1EA828u: goto label_1ea828;
            case 0x1EA82Cu: goto label_1ea82c;
            case 0x1EA830u: goto label_1ea830;
            case 0x1EA834u: goto label_1ea834;
            case 0x1EA838u: goto label_1ea838;
            case 0x1EA83Cu: goto label_1ea83c;
            case 0x1EA840u: goto label_1ea840;
            case 0x1EA844u: goto label_1ea844;
            case 0x1EA848u: goto label_1ea848;
            case 0x1EA84Cu: goto label_1ea84c;
            case 0x1EA850u: goto label_1ea850;
            case 0x1EA854u: goto label_1ea854;
            case 0x1EA858u: goto label_1ea858;
            case 0x1EA85Cu: goto label_1ea85c;
            case 0x1EA860u: goto label_1ea860;
            case 0x1EA864u: goto label_1ea864;
            case 0x1EA868u: goto label_1ea868;
            case 0x1EA86Cu: goto label_1ea86c;
            case 0x1EA870u: goto label_1ea870;
            case 0x1EA874u: goto label_1ea874;
            case 0x1EA878u: goto label_1ea878;
            case 0x1EA87Cu: goto label_1ea87c;
            case 0x1EA880u: goto label_1ea880;
            case 0x1EA884u: goto label_1ea884;
            case 0x1EA888u: goto label_1ea888;
            case 0x1EA88Cu: goto label_1ea88c;
            case 0x1EA890u: goto label_1ea890;
            case 0x1EA894u: goto label_1ea894;
            case 0x1EA898u: goto label_1ea898;
            case 0x1EA89Cu: goto label_1ea89c;
            case 0x1EA8A0u: goto label_1ea8a0;
            case 0x1EA8A4u: goto label_1ea8a4;
            case 0x1EA8A8u: goto label_1ea8a8;
            case 0x1EA8ACu: goto label_1ea8ac;
            case 0x1EA8B0u: goto label_1ea8b0;
            case 0x1EA8B4u: goto label_1ea8b4;
            case 0x1EA8B8u: goto label_1ea8b8;
            case 0x1EA8BCu: goto label_1ea8bc;
            case 0x1EA8C0u: goto label_1ea8c0;
            case 0x1EA8C4u: goto label_1ea8c4;
            case 0x1EA8C8u: goto label_1ea8c8;
            case 0x1EA8CCu: goto label_1ea8cc;
            case 0x1EA8D0u: goto label_1ea8d0;
            case 0x1EA8D4u: goto label_1ea8d4;
            case 0x1EA8D8u: goto label_1ea8d8;
            case 0x1EA8DCu: goto label_1ea8dc;
            case 0x1EA8E0u: goto label_1ea8e0;
            case 0x1EA8E4u: goto label_1ea8e4;
            case 0x1EA8E8u: goto label_1ea8e8;
            case 0x1EA8ECu: goto label_1ea8ec;
            case 0x1EA8F0u: goto label_1ea8f0;
            case 0x1EA8F4u: goto label_1ea8f4;
            case 0x1EA8F8u: goto label_1ea8f8;
            case 0x1EA8FCu: goto label_1ea8fc;
            case 0x1EA900u: goto label_1ea900;
            case 0x1EA904u: goto label_1ea904;
            case 0x1EA908u: goto label_1ea908;
            case 0x1EA90Cu: goto label_1ea90c;
            case 0x1EA910u: goto label_1ea910;
            case 0x1EA914u: goto label_1ea914;
            case 0x1EA918u: goto label_1ea918;
            case 0x1EA91Cu: goto label_1ea91c;
            case 0x1EA920u: goto label_1ea920;
            case 0x1EA924u: goto label_1ea924;
            case 0x1EA928u: goto label_1ea928;
            case 0x1EA92Cu: goto label_1ea92c;
            case 0x1EA930u: goto label_1ea930;
            case 0x1EA934u: goto label_1ea934;
            case 0x1EA938u: goto label_1ea938;
            case 0x1EA93Cu: goto label_1ea93c;
            case 0x1EA940u: goto label_1ea940;
            case 0x1EA944u: goto label_1ea944;
            case 0x1EA948u: goto label_1ea948;
            case 0x1EA94Cu: goto label_1ea94c;
            case 0x1EA950u: goto label_1ea950;
            case 0x1EA954u: goto label_1ea954;
            case 0x1EA958u: goto label_1ea958;
            case 0x1EA95Cu: goto label_1ea95c;
            case 0x1EA960u: goto label_1ea960;
            case 0x1EA964u: goto label_1ea964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA3ECu;
label_1ea3ec:
    // 0x1ea3ec: 0x24020001
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ea3f0:
    // 0x1ea3f0: 0xac820004
    ctx->pc = 0x1ea3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ea3f4:
    // 0x1ea3f4: 0x3c010050
    ctx->pc = 0x1ea3f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea3f8:
    // 0x1ea3f8: 0xc4200ce0
    ctx->pc = 0x1ea3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea3fc:
    // 0x1ea3fc: 0xe4800008
    ctx->pc = 0x1ea3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1ea400:
    // 0x1ea400: 0x8ca20008
    ctx->pc = 0x1ea400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ea404:
    // 0x1ea404: 0xc4400000
    ctx->pc = 0x1ea404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea408:
    // 0x1ea408: 0xe480000c
    ctx->pc = 0x1ea408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1ea40c:
    // 0x1ea40c: 0x8ca2000c
    ctx->pc = 0x1ea40cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ea410:
    // 0x1ea410: 0x10400014
label_1ea414:
    if (ctx->pc == 0x1EA414u) {
        ctx->pc = 0x1EA418u;
        goto label_1ea418;
    }
    ctx->pc = 0x1EA410u;
    {
        const bool branch_taken_0x1ea410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea410) {
            ctx->pc = 0x1EA464u;
            goto label_1ea464;
        }
    }
    ctx->pc = 0x1EA418u;
label_1ea418:
    // 0x1ea418: 0xc483000c
    ctx->pc = 0x1ea418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea41c:
    // 0x1ea41c: 0xc4820008
    ctx->pc = 0x1ea41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea420:
    // 0x1ea420: 0x44820000
    ctx->pc = 0x1ea420u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea424:
    // 0x1ea424: 0x0
    ctx->pc = 0x1ea424u;
    // NOP
label_1ea428:
    // 0x1ea428: 0x46800060
    ctx->pc = 0x1ea428u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea42c:
    // 0x1ea42c: 0x46021881
    ctx->pc = 0x1ea42cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ea430:
    // 0x1ea430: 0x46011043
    ctx->pc = 0x1ea430u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1ea434:
    // 0x1ea434: 0x44800000
    ctx->pc = 0x1ea434u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea438:
    // 0x1ea438: 0x0
    ctx->pc = 0x1ea438u;
    // NOP
label_1ea43c:
    // 0x1ea43c: 0x0
    ctx->pc = 0x1ea43cu;
    // NOP
label_1ea440:
    // 0x1ea440: 0x46000834
    ctx->pc = 0x1ea440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea444:
    // 0x1ea444: 0x0
    ctx->pc = 0x1ea444u;
    // NOP
label_1ea448:
    // 0x1ea448: 0x45000004
label_1ea44c:
    if (ctx->pc == 0x1EA44Cu) {
        ctx->pc = 0x1EA44Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA450u;
        goto label_1ea450;
    }
    ctx->pc = 0x1EA448u;
    {
        const bool branch_taken_0x1ea448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA44Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea448) {
            ctx->pc = 0x1EA45Cu;
            goto label_1ea45c;
        }
    }
    ctx->pc = 0x1EA450u;
label_1ea450:
    // 0x1ea450: 0x44820000
    ctx->pc = 0x1ea450u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea454:
    // 0x1ea454: 0x0
    ctx->pc = 0x1ea454u;
    // NOP
label_1ea458:
    // 0x1ea458: 0x46010042
    ctx->pc = 0x1ea458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea45c:
    // 0x1ea45c: 0x1000000e
label_1ea460:
    if (ctx->pc == 0x1EA460u) {
        ctx->pc = 0x1EA460u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = 0x1EA464u;
        goto label_1ea464;
    }
    ctx->pc = 0x1EA45Cu;
    {
        const bool branch_taken_0x1ea45c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA460u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        if (branch_taken_0x1ea45c) {
            ctx->pc = 0x1EA498u;
            goto label_1ea498;
        }
    }
    ctx->pc = 0x1EA464u;
label_1ea464:
    // 0x1ea464: 0xc482000c
    ctx->pc = 0x1ea464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea468:
    // 0x1ea468: 0xc4810008
    ctx->pc = 0x1ea468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea46c:
    // 0x1ea46c: 0x44800000
    ctx->pc = 0x1ea46cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea470:
    // 0x1ea470: 0x0
    ctx->pc = 0x1ea470u;
    // NOP
label_1ea474:
    // 0x1ea474: 0x46011041
    ctx->pc = 0x1ea474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea478:
    // 0x1ea478: 0x46000834
    ctx->pc = 0x1ea478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea47c:
    // 0x1ea47c: 0x0
    ctx->pc = 0x1ea47cu;
    // NOP
label_1ea480:
    // 0x1ea480: 0x45000004
label_1ea484:
    if (ctx->pc == 0x1EA484u) {
        ctx->pc = 0x1EA484u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA488u;
        goto label_1ea488;
    }
    ctx->pc = 0x1EA480u;
    {
        const bool branch_taken_0x1ea480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA484u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea480) {
            ctx->pc = 0x1EA494u;
            goto label_1ea494;
        }
    }
    ctx->pc = 0x1EA488u;
label_1ea488:
    // 0x1ea488: 0x44820000
    ctx->pc = 0x1ea488u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea48c:
    // 0x1ea48c: 0x0
    ctx->pc = 0x1ea48cu;
    // NOP
label_1ea490:
    // 0x1ea490: 0x46010042
    ctx->pc = 0x1ea490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea494:
    // 0x1ea494: 0xe4810010
    ctx->pc = 0x1ea494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1ea498:
    // 0x1ea498: 0x10000131
label_1ea49c:
    if (ctx->pc == 0x1EA49Cu) {
        ctx->pc = 0x1EA49Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1EA4A0u;
        goto label_1ea4a0;
    }
    ctx->pc = 0x1EA498u;
    {
        const bool branch_taken_0x1ea498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA49Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1ea498) {
            ctx->pc = 0x1EA960u;
            goto label_1ea960;
        }
    }
    ctx->pc = 0x1EA4A0u;
label_1ea4a0:
    // 0x1ea4a0: 0x24020001
    ctx->pc = 0x1ea4a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ea4a4:
    // 0x1ea4a4: 0xac820014
    ctx->pc = 0x1ea4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1ea4a8:
    // 0x1ea4a8: 0x3c010050
    ctx->pc = 0x1ea4a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea4ac:
    // 0x1ea4ac: 0xc4200ce4
    ctx->pc = 0x1ea4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea4b0:
    // 0x1ea4b0: 0xe4800018
    ctx->pc = 0x1ea4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1ea4b4:
    // 0x1ea4b4: 0x8ca20008
    ctx->pc = 0x1ea4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ea4b8:
    // 0x1ea4b8: 0xc4400000
    ctx->pc = 0x1ea4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea4bc:
    // 0x1ea4bc: 0xe480001c
    ctx->pc = 0x1ea4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_1ea4c0:
    // 0x1ea4c0: 0x8ca2000c
    ctx->pc = 0x1ea4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ea4c4:
    // 0x1ea4c4: 0x10400014
label_1ea4c8:
    if (ctx->pc == 0x1EA4C8u) {
        ctx->pc = 0x1EA4CCu;
        goto label_1ea4cc;
    }
    ctx->pc = 0x1EA4C4u;
    {
        const bool branch_taken_0x1ea4c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea4c4) {
            ctx->pc = 0x1EA518u;
            goto label_1ea518;
        }
    }
    ctx->pc = 0x1EA4CCu;
label_1ea4cc:
    // 0x1ea4cc: 0xc483001c
    ctx->pc = 0x1ea4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea4d0:
    // 0x1ea4d0: 0xc4820018
    ctx->pc = 0x1ea4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea4d4:
    // 0x1ea4d4: 0x44820000
    ctx->pc = 0x1ea4d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea4d8:
    // 0x1ea4d8: 0x0
    ctx->pc = 0x1ea4d8u;
    // NOP
label_1ea4dc:
    // 0x1ea4dc: 0x46800060
    ctx->pc = 0x1ea4dcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea4e0:
    // 0x1ea4e0: 0x46021881
    ctx->pc = 0x1ea4e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ea4e4:
    // 0x1ea4e4: 0x46011043
    ctx->pc = 0x1ea4e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1ea4e8:
    // 0x1ea4e8: 0x44800000
    ctx->pc = 0x1ea4e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea4ec:
    // 0x1ea4ec: 0x0
    ctx->pc = 0x1ea4ecu;
    // NOP
label_1ea4f0:
    // 0x1ea4f0: 0x0
    ctx->pc = 0x1ea4f0u;
    // NOP
label_1ea4f4:
    // 0x1ea4f4: 0x46000834
    ctx->pc = 0x1ea4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea4f8:
    // 0x1ea4f8: 0x0
    ctx->pc = 0x1ea4f8u;
    // NOP
label_1ea4fc:
    // 0x1ea4fc: 0x45000004
label_1ea500:
    if (ctx->pc == 0x1EA500u) {
        ctx->pc = 0x1EA500u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA504u;
        goto label_1ea504;
    }
    ctx->pc = 0x1EA4FCu;
    {
        const bool branch_taken_0x1ea4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA500u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea4fc) {
            ctx->pc = 0x1EA510u;
            goto label_1ea510;
        }
    }
    ctx->pc = 0x1EA504u;
label_1ea504:
    // 0x1ea504: 0x44820000
    ctx->pc = 0x1ea504u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea508:
    // 0x1ea508: 0x0
    ctx->pc = 0x1ea508u;
    // NOP
label_1ea50c:
    // 0x1ea50c: 0x46010042
    ctx->pc = 0x1ea50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea510:
    // 0x1ea510: 0x1000000e
label_1ea514:
    if (ctx->pc == 0x1EA514u) {
        ctx->pc = 0x1EA514u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->pc = 0x1EA518u;
        goto label_1ea518;
    }
    ctx->pc = 0x1EA510u;
    {
        const bool branch_taken_0x1ea510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA514u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        if (branch_taken_0x1ea510) {
            ctx->pc = 0x1EA54Cu;
            goto label_1ea54c;
        }
    }
    ctx->pc = 0x1EA518u;
label_1ea518:
    // 0x1ea518: 0xc482001c
    ctx->pc = 0x1ea518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea51c:
    // 0x1ea51c: 0xc4810018
    ctx->pc = 0x1ea51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea520:
    // 0x1ea520: 0x44800000
    ctx->pc = 0x1ea520u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea524:
    // 0x1ea524: 0x0
    ctx->pc = 0x1ea524u;
    // NOP
label_1ea528:
    // 0x1ea528: 0x46011041
    ctx->pc = 0x1ea528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea52c:
    // 0x1ea52c: 0x46000834
    ctx->pc = 0x1ea52cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea530:
    // 0x1ea530: 0x0
    ctx->pc = 0x1ea530u;
    // NOP
label_1ea534:
    // 0x1ea534: 0x45000004
label_1ea538:
    if (ctx->pc == 0x1EA538u) {
        ctx->pc = 0x1EA538u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA53Cu;
        goto label_1ea53c;
    }
    ctx->pc = 0x1EA534u;
    {
        const bool branch_taken_0x1ea534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA538u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea534) {
            ctx->pc = 0x1EA548u;
            goto label_1ea548;
        }
    }
    ctx->pc = 0x1EA53Cu;
label_1ea53c:
    // 0x1ea53c: 0x44820000
    ctx->pc = 0x1ea53cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea540:
    // 0x1ea540: 0x0
    ctx->pc = 0x1ea540u;
    // NOP
label_1ea544:
    // 0x1ea544: 0x46010042
    ctx->pc = 0x1ea544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea548:
    // 0x1ea548: 0xe4810020
    ctx->pc = 0x1ea548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1ea54c:
    // 0x1ea54c: 0x10000104
label_1ea550:
    if (ctx->pc == 0x1EA550u) {
        ctx->pc = 0x1EA550u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1EA554u;
        goto label_1ea554;
    }
    ctx->pc = 0x1EA54Cu;
    {
        const bool branch_taken_0x1ea54c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA550u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1ea54c) {
            ctx->pc = 0x1EA960u;
            goto label_1ea960;
        }
    }
    ctx->pc = 0x1EA554u;
label_1ea554:
    // 0x1ea554: 0x24020001
    ctx->pc = 0x1ea554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ea558:
    // 0x1ea558: 0xac820024
    ctx->pc = 0x1ea558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_1ea55c:
    // 0x1ea55c: 0x3c010050
    ctx->pc = 0x1ea55cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea560:
    // 0x1ea560: 0xc4200cd4
    ctx->pc = 0x1ea560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea564:
    // 0x1ea564: 0x46800020
    ctx->pc = 0x1ea564u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea568:
    // 0x1ea568: 0xe4800028
    ctx->pc = 0x1ea568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1ea56c:
    // 0x1ea56c: 0xc4a00008
    ctx->pc = 0x1ea56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea570:
    // 0x1ea570: 0x46800020
    ctx->pc = 0x1ea570u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea574:
    // 0x1ea574: 0xe480002c
    ctx->pc = 0x1ea574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_1ea578:
    // 0x1ea578: 0x8ca2000c
    ctx->pc = 0x1ea578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ea57c:
    // 0x1ea57c: 0x10400014
label_1ea580:
    if (ctx->pc == 0x1EA580u) {
        ctx->pc = 0x1EA584u;
        goto label_1ea584;
    }
    ctx->pc = 0x1EA57Cu;
    {
        const bool branch_taken_0x1ea57c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea57c) {
            ctx->pc = 0x1EA5D0u;
            goto label_1ea5d0;
        }
    }
    ctx->pc = 0x1EA584u;
label_1ea584:
    // 0x1ea584: 0xc483002c
    ctx->pc = 0x1ea584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea588:
    // 0x1ea588: 0xc4820028
    ctx->pc = 0x1ea588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea58c:
    // 0x1ea58c: 0x44820000
    ctx->pc = 0x1ea58cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea590:
    // 0x1ea590: 0x0
    ctx->pc = 0x1ea590u;
    // NOP
label_1ea594:
    // 0x1ea594: 0x46800060
    ctx->pc = 0x1ea594u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea598:
    // 0x1ea598: 0x46021881
    ctx->pc = 0x1ea598u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ea59c:
    // 0x1ea59c: 0x46011043
    ctx->pc = 0x1ea59cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1ea5a0:
    // 0x1ea5a0: 0x44800000
    ctx->pc = 0x1ea5a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea5a4:
    // 0x1ea5a4: 0x0
    ctx->pc = 0x1ea5a4u;
    // NOP
label_1ea5a8:
    // 0x1ea5a8: 0x0
    ctx->pc = 0x1ea5a8u;
    // NOP
label_1ea5ac:
    // 0x1ea5ac: 0x46000834
    ctx->pc = 0x1ea5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea5b0:
    // 0x1ea5b0: 0x0
    ctx->pc = 0x1ea5b0u;
    // NOP
label_1ea5b4:
    // 0x1ea5b4: 0x45000004
label_1ea5b8:
    if (ctx->pc == 0x1EA5B8u) {
        ctx->pc = 0x1EA5B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA5BCu;
        goto label_1ea5bc;
    }
    ctx->pc = 0x1EA5B4u;
    {
        const bool branch_taken_0x1ea5b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA5B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea5b4) {
            ctx->pc = 0x1EA5C8u;
            goto label_1ea5c8;
        }
    }
    ctx->pc = 0x1EA5BCu;
label_1ea5bc:
    // 0x1ea5bc: 0x44820000
    ctx->pc = 0x1ea5bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea5c0:
    // 0x1ea5c0: 0x0
    ctx->pc = 0x1ea5c0u;
    // NOP
label_1ea5c4:
    // 0x1ea5c4: 0x46010042
    ctx->pc = 0x1ea5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea5c8:
    // 0x1ea5c8: 0x1000000e
label_1ea5cc:
    if (ctx->pc == 0x1EA5CCu) {
        ctx->pc = 0x1EA5CCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->pc = 0x1EA5D0u;
        goto label_1ea5d0;
    }
    ctx->pc = 0x1EA5C8u;
    {
        const bool branch_taken_0x1ea5c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA5CCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        if (branch_taken_0x1ea5c8) {
            ctx->pc = 0x1EA604u;
            goto label_1ea604;
        }
    }
    ctx->pc = 0x1EA5D0u;
label_1ea5d0:
    // 0x1ea5d0: 0xc482002c
    ctx->pc = 0x1ea5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea5d4:
    // 0x1ea5d4: 0xc4810028
    ctx->pc = 0x1ea5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea5d8:
    // 0x1ea5d8: 0x44800000
    ctx->pc = 0x1ea5d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea5dc:
    // 0x1ea5dc: 0x0
    ctx->pc = 0x1ea5dcu;
    // NOP
label_1ea5e0:
    // 0x1ea5e0: 0x46011041
    ctx->pc = 0x1ea5e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea5e4:
    // 0x1ea5e4: 0x46000834
    ctx->pc = 0x1ea5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea5e8:
    // 0x1ea5e8: 0x0
    ctx->pc = 0x1ea5e8u;
    // NOP
label_1ea5ec:
    // 0x1ea5ec: 0x45000004
label_1ea5f0:
    if (ctx->pc == 0x1EA5F0u) {
        ctx->pc = 0x1EA5F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA5F4u;
        goto label_1ea5f4;
    }
    ctx->pc = 0x1EA5ECu;
    {
        const bool branch_taken_0x1ea5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA5F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea5ec) {
            ctx->pc = 0x1EA600u;
            goto label_1ea600;
        }
    }
    ctx->pc = 0x1EA5F4u;
label_1ea5f4:
    // 0x1ea5f4: 0x44820000
    ctx->pc = 0x1ea5f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea5f8:
    // 0x1ea5f8: 0x0
    ctx->pc = 0x1ea5f8u;
    // NOP
label_1ea5fc:
    // 0x1ea5fc: 0x46010042
    ctx->pc = 0x1ea5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea600:
    // 0x1ea600: 0xe4810030
    ctx->pc = 0x1ea600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_1ea604:
    // 0x1ea604: 0x100000d6
label_1ea608:
    if (ctx->pc == 0x1EA608u) {
        ctx->pc = 0x1EA608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1EA60Cu;
        goto label_1ea60c;
    }
    ctx->pc = 0x1EA604u;
    {
        const bool branch_taken_0x1ea604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1ea604) {
            ctx->pc = 0x1EA960u;
            goto label_1ea960;
        }
    }
    ctx->pc = 0x1EA60Cu;
label_1ea60c:
    // 0x1ea60c: 0x24020001
    ctx->pc = 0x1ea60cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ea610:
    // 0x1ea610: 0xac820034
    ctx->pc = 0x1ea610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_1ea614:
    // 0x1ea614: 0x3c010050
    ctx->pc = 0x1ea614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea618:
    // 0x1ea618: 0xc4200cd8
    ctx->pc = 0x1ea618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea61c:
    // 0x1ea61c: 0x46800020
    ctx->pc = 0x1ea61cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea620:
    // 0x1ea620: 0xe4800038
    ctx->pc = 0x1ea620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_1ea624:
    // 0x1ea624: 0xc4a00008
    ctx->pc = 0x1ea624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea628:
    // 0x1ea628: 0x46800020
    ctx->pc = 0x1ea628u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea62c:
    // 0x1ea62c: 0xe480003c
    ctx->pc = 0x1ea62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_1ea630:
    // 0x1ea630: 0x8ca2000c
    ctx->pc = 0x1ea630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ea634:
    // 0x1ea634: 0x10400014
label_1ea638:
    if (ctx->pc == 0x1EA638u) {
        ctx->pc = 0x1EA63Cu;
        goto label_1ea63c;
    }
    ctx->pc = 0x1EA634u;
    {
        const bool branch_taken_0x1ea634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea634) {
            ctx->pc = 0x1EA688u;
            goto label_1ea688;
        }
    }
    ctx->pc = 0x1EA63Cu;
label_1ea63c:
    // 0x1ea63c: 0xc483003c
    ctx->pc = 0x1ea63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea640:
    // 0x1ea640: 0xc4820038
    ctx->pc = 0x1ea640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea644:
    // 0x1ea644: 0x44820000
    ctx->pc = 0x1ea644u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea648:
    // 0x1ea648: 0x0
    ctx->pc = 0x1ea648u;
    // NOP
label_1ea64c:
    // 0x1ea64c: 0x46800060
    ctx->pc = 0x1ea64cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea650:
    // 0x1ea650: 0x46021881
    ctx->pc = 0x1ea650u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ea654:
    // 0x1ea654: 0x46011043
    ctx->pc = 0x1ea654u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1ea658:
    // 0x1ea658: 0x44800000
    ctx->pc = 0x1ea658u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea65c:
    // 0x1ea65c: 0x0
    ctx->pc = 0x1ea65cu;
    // NOP
label_1ea660:
    // 0x1ea660: 0x0
    ctx->pc = 0x1ea660u;
    // NOP
label_1ea664:
    // 0x1ea664: 0x46000834
    ctx->pc = 0x1ea664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea668:
    // 0x1ea668: 0x0
    ctx->pc = 0x1ea668u;
    // NOP
label_1ea66c:
    // 0x1ea66c: 0x45000004
label_1ea670:
    if (ctx->pc == 0x1EA670u) {
        ctx->pc = 0x1EA670u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA674u;
        goto label_1ea674;
    }
    ctx->pc = 0x1EA66Cu;
    {
        const bool branch_taken_0x1ea66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA670u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea66c) {
            ctx->pc = 0x1EA680u;
            goto label_1ea680;
        }
    }
    ctx->pc = 0x1EA674u;
label_1ea674:
    // 0x1ea674: 0x44820000
    ctx->pc = 0x1ea674u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea678:
    // 0x1ea678: 0x0
    ctx->pc = 0x1ea678u;
    // NOP
label_1ea67c:
    // 0x1ea67c: 0x46010042
    ctx->pc = 0x1ea67cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea680:
    // 0x1ea680: 0x1000000e
label_1ea684:
    if (ctx->pc == 0x1EA684u) {
        ctx->pc = 0x1EA684u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->pc = 0x1EA688u;
        goto label_1ea688;
    }
    ctx->pc = 0x1EA680u;
    {
        const bool branch_taken_0x1ea680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA684u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        if (branch_taken_0x1ea680) {
            ctx->pc = 0x1EA6BCu;
            goto label_1ea6bc;
        }
    }
    ctx->pc = 0x1EA688u;
label_1ea688:
    // 0x1ea688: 0xc482003c
    ctx->pc = 0x1ea688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea68c:
    // 0x1ea68c: 0xc4810038
    ctx->pc = 0x1ea68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea690:
    // 0x1ea690: 0x44800000
    ctx->pc = 0x1ea690u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea694:
    // 0x1ea694: 0x0
    ctx->pc = 0x1ea694u;
    // NOP
label_1ea698:
    // 0x1ea698: 0x46011041
    ctx->pc = 0x1ea698u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea69c:
    // 0x1ea69c: 0x46000834
    ctx->pc = 0x1ea69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea6a0:
    // 0x1ea6a0: 0x0
    ctx->pc = 0x1ea6a0u;
    // NOP
label_1ea6a4:
    // 0x1ea6a4: 0x45000004
label_1ea6a8:
    if (ctx->pc == 0x1EA6A8u) {
        ctx->pc = 0x1EA6A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA6ACu;
        goto label_1ea6ac;
    }
    ctx->pc = 0x1EA6A4u;
    {
        const bool branch_taken_0x1ea6a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA6A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea6a4) {
            ctx->pc = 0x1EA6B8u;
            goto label_1ea6b8;
        }
    }
    ctx->pc = 0x1EA6ACu;
label_1ea6ac:
    // 0x1ea6ac: 0x44820000
    ctx->pc = 0x1ea6acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea6b0:
    // 0x1ea6b0: 0x0
    ctx->pc = 0x1ea6b0u;
    // NOP
label_1ea6b4:
    // 0x1ea6b4: 0x46010042
    ctx->pc = 0x1ea6b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea6b8:
    // 0x1ea6b8: 0xe4810040
    ctx->pc = 0x1ea6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_1ea6bc:
    // 0x1ea6bc: 0x100000a8
label_1ea6c0:
    if (ctx->pc == 0x1EA6C0u) {
        ctx->pc = 0x1EA6C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1EA6C4u;
        goto label_1ea6c4;
    }
    ctx->pc = 0x1EA6BCu;
    {
        const bool branch_taken_0x1ea6bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA6C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1ea6bc) {
            ctx->pc = 0x1EA960u;
            goto label_1ea960;
        }
    }
    ctx->pc = 0x1EA6C4u;
label_1ea6c4:
    // 0x1ea6c4: 0x24020001
    ctx->pc = 0x1ea6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ea6c8:
    // 0x1ea6c8: 0xac820044
    ctx->pc = 0x1ea6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_1ea6cc:
    // 0x1ea6cc: 0x3c010050
    ctx->pc = 0x1ea6ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea6d0:
    // 0x1ea6d0: 0xc4200cdc
    ctx->pc = 0x1ea6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea6d4:
    // 0x1ea6d4: 0x46800020
    ctx->pc = 0x1ea6d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea6d8:
    // 0x1ea6d8: 0xe4800048
    ctx->pc = 0x1ea6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_1ea6dc:
    // 0x1ea6dc: 0xc4a00008
    ctx->pc = 0x1ea6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea6e0:
    // 0x1ea6e0: 0x46800020
    ctx->pc = 0x1ea6e0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea6e4:
    // 0x1ea6e4: 0xe480004c
    ctx->pc = 0x1ea6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_1ea6e8:
    // 0x1ea6e8: 0x8ca2000c
    ctx->pc = 0x1ea6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ea6ec:
    // 0x1ea6ec: 0x10400014
label_1ea6f0:
    if (ctx->pc == 0x1EA6F0u) {
        ctx->pc = 0x1EA6F4u;
        goto label_1ea6f4;
    }
    ctx->pc = 0x1EA6ECu;
    {
        const bool branch_taken_0x1ea6ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea6ec) {
            ctx->pc = 0x1EA740u;
            goto label_1ea740;
        }
    }
    ctx->pc = 0x1EA6F4u;
label_1ea6f4:
    // 0x1ea6f4: 0xc483004c
    ctx->pc = 0x1ea6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea6f8:
    // 0x1ea6f8: 0xc4820048
    ctx->pc = 0x1ea6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea6fc:
    // 0x1ea6fc: 0x44820000
    ctx->pc = 0x1ea6fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea700:
    // 0x1ea700: 0x0
    ctx->pc = 0x1ea700u;
    // NOP
label_1ea704:
    // 0x1ea704: 0x46800060
    ctx->pc = 0x1ea704u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea708:
    // 0x1ea708: 0x46021881
    ctx->pc = 0x1ea708u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ea70c:
    // 0x1ea70c: 0x46011043
    ctx->pc = 0x1ea70cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1ea710:
    // 0x1ea710: 0x44800000
    ctx->pc = 0x1ea710u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea714:
    // 0x1ea714: 0x0
    ctx->pc = 0x1ea714u;
    // NOP
label_1ea718:
    // 0x1ea718: 0x0
    ctx->pc = 0x1ea718u;
    // NOP
label_1ea71c:
    // 0x1ea71c: 0x46000834
    ctx->pc = 0x1ea71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea720:
    // 0x1ea720: 0x0
    ctx->pc = 0x1ea720u;
    // NOP
label_1ea724:
    // 0x1ea724: 0x45000004
label_1ea728:
    if (ctx->pc == 0x1EA728u) {
        ctx->pc = 0x1EA728u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA72Cu;
        goto label_1ea72c;
    }
    ctx->pc = 0x1EA724u;
    {
        const bool branch_taken_0x1ea724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA728u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea724) {
            ctx->pc = 0x1EA738u;
            goto label_1ea738;
        }
    }
    ctx->pc = 0x1EA72Cu;
label_1ea72c:
    // 0x1ea72c: 0x44820000
    ctx->pc = 0x1ea72cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea730:
    // 0x1ea730: 0x0
    ctx->pc = 0x1ea730u;
    // NOP
label_1ea734:
    // 0x1ea734: 0x46010042
    ctx->pc = 0x1ea734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea738:
    // 0x1ea738: 0x1000000e
label_1ea73c:
    if (ctx->pc == 0x1EA73Cu) {
        ctx->pc = 0x1EA73Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        ctx->pc = 0x1EA740u;
        goto label_1ea740;
    }
    ctx->pc = 0x1EA738u;
    {
        const bool branch_taken_0x1ea738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA73Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        if (branch_taken_0x1ea738) {
            ctx->pc = 0x1EA774u;
            goto label_1ea774;
        }
    }
    ctx->pc = 0x1EA740u;
label_1ea740:
    // 0x1ea740: 0xc482004c
    ctx->pc = 0x1ea740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea744:
    // 0x1ea744: 0xc4810048
    ctx->pc = 0x1ea744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea748:
    // 0x1ea748: 0x44800000
    ctx->pc = 0x1ea748u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea74c:
    // 0x1ea74c: 0x0
    ctx->pc = 0x1ea74cu;
    // NOP
label_1ea750:
    // 0x1ea750: 0x46011041
    ctx->pc = 0x1ea750u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea754:
    // 0x1ea754: 0x46000834
    ctx->pc = 0x1ea754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea758:
    // 0x1ea758: 0x0
    ctx->pc = 0x1ea758u;
    // NOP
label_1ea75c:
    // 0x1ea75c: 0x45000004
label_1ea760:
    if (ctx->pc == 0x1EA760u) {
        ctx->pc = 0x1EA760u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA764u;
        goto label_1ea764;
    }
    ctx->pc = 0x1EA75Cu;
    {
        const bool branch_taken_0x1ea75c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA760u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea75c) {
            ctx->pc = 0x1EA770u;
            goto label_1ea770;
        }
    }
    ctx->pc = 0x1EA764u;
label_1ea764:
    // 0x1ea764: 0x44820000
    ctx->pc = 0x1ea764u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea768:
    // 0x1ea768: 0x0
    ctx->pc = 0x1ea768u;
    // NOP
label_1ea76c:
    // 0x1ea76c: 0x46010042
    ctx->pc = 0x1ea76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea770:
    // 0x1ea770: 0xe4810050
    ctx->pc = 0x1ea770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_1ea774:
    // 0x1ea774: 0x1000007a
label_1ea778:
    if (ctx->pc == 0x1EA778u) {
        ctx->pc = 0x1EA778u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1EA77Cu;
        goto label_1ea77c;
    }
    ctx->pc = 0x1EA774u;
    {
        const bool branch_taken_0x1ea774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA778u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1ea774) {
            ctx->pc = 0x1EA960u;
            goto label_1ea960;
        }
    }
    ctx->pc = 0x1EA77Cu;
label_1ea77c:
    // 0x1ea77c: 0x24020001
    ctx->pc = 0x1ea77cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ea780:
    // 0x1ea780: 0xac820044
    ctx->pc = 0x1ea780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_1ea784:
    // 0x1ea784: 0xac820034
    ctx->pc = 0x1ea784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_1ea788:
    // 0x1ea788: 0xac820024
    ctx->pc = 0x1ea788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_1ea78c:
    // 0x1ea78c: 0x3c010050
    ctx->pc = 0x1ea78cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea790:
    // 0x1ea790: 0xc4200cd4
    ctx->pc = 0x1ea790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea794:
    // 0x1ea794: 0x46800020
    ctx->pc = 0x1ea794u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea798:
    // 0x1ea798: 0x3c010050
    ctx->pc = 0x1ea798u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea79c:
    // 0x1ea79c: 0xe4800028
    ctx->pc = 0x1ea79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1ea7a0:
    // 0x1ea7a0: 0xc4200cd8
    ctx->pc = 0x1ea7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7a4:
    // 0x1ea7a4: 0x46800020
    ctx->pc = 0x1ea7a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea7a8:
    // 0x1ea7a8: 0x3c010050
    ctx->pc = 0x1ea7a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1ea7ac:
    // 0x1ea7ac: 0xe4800038
    ctx->pc = 0x1ea7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_1ea7b0:
    // 0x1ea7b0: 0xc4200cdc
    ctx->pc = 0x1ea7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7b4:
    // 0x1ea7b4: 0x46800020
    ctx->pc = 0x1ea7b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea7b8:
    // 0x1ea7b8: 0xe4800048
    ctx->pc = 0x1ea7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_1ea7bc:
    // 0x1ea7bc: 0xc4a00008
    ctx->pc = 0x1ea7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7c0:
    // 0x1ea7c0: 0x46800020
    ctx->pc = 0x1ea7c0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea7c4:
    // 0x1ea7c4: 0xe480002c
    ctx->pc = 0x1ea7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_1ea7c8:
    // 0x1ea7c8: 0xc4a0000c
    ctx->pc = 0x1ea7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7cc:
    // 0x1ea7cc: 0x46800020
    ctx->pc = 0x1ea7ccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea7d0:
    // 0x1ea7d0: 0xe480003c
    ctx->pc = 0x1ea7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_1ea7d4:
    // 0x1ea7d4: 0xc4a00010
    ctx->pc = 0x1ea7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7d8:
    // 0x1ea7d8: 0x46800020
    ctx->pc = 0x1ea7d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea7dc:
    // 0x1ea7dc: 0xe480004c
    ctx->pc = 0x1ea7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_1ea7e0:
    // 0x1ea7e0: 0x8ca20014
    ctx->pc = 0x1ea7e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1ea7e4:
    // 0x1ea7e4: 0x10400037
label_1ea7e8:
    if (ctx->pc == 0x1EA7E8u) {
        ctx->pc = 0x1EA7E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 20));
        ctx->pc = 0x1EA7ECu;
        goto label_1ea7ec;
    }
    ctx->pc = 0x1EA7E4u;
    {
        const bool branch_taken_0x1ea7e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA7E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 20));
        if (branch_taken_0x1ea7e4) {
            ctx->pc = 0x1EA8C4u;
            goto label_1ea8c4;
        }
    }
    ctx->pc = 0x1EA7ECu;
label_1ea7ec:
    // 0x1ea7ec: 0xc482002c
    ctx->pc = 0x1ea7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea7f0:
    // 0x1ea7f0: 0xc4810028
    ctx->pc = 0x1ea7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea7f4:
    // 0x1ea7f4: 0x44820000
    ctx->pc = 0x1ea7f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea7f8:
    // 0x1ea7f8: 0x44801800
    ctx->pc = 0x1ea7f8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_1ea7fc:
    // 0x1ea7fc: 0x46800020
    ctx->pc = 0x1ea7fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1ea800:
    // 0x1ea800: 0x46011041
    ctx->pc = 0x1ea800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea804:
    // 0x1ea804: 0x46000843
    ctx->pc = 0x1ea804u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1ea808:
    // 0x1ea808: 0x0
    ctx->pc = 0x1ea808u;
    // NOP
label_1ea80c:
    // 0x1ea80c: 0x0
    ctx->pc = 0x1ea80cu;
    // NOP
label_1ea810:
    // 0x1ea810: 0x46030834
    ctx->pc = 0x1ea810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea814:
    // 0x1ea814: 0x0
    ctx->pc = 0x1ea814u;
    // NOP
label_1ea818:
    // 0x1ea818: 0x45000004
label_1ea81c:
    if (ctx->pc == 0x1EA81Cu) {
        ctx->pc = 0x1EA81Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA820u;
        goto label_1ea820;
    }
    ctx->pc = 0x1EA818u;
    {
        const bool branch_taken_0x1ea818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA81Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea818) {
            ctx->pc = 0x1EA82Cu;
            goto label_1ea82c;
        }
    }
    ctx->pc = 0x1EA820u;
label_1ea820:
    // 0x1ea820: 0x44820000
    ctx->pc = 0x1ea820u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea824:
    // 0x1ea824: 0x0
    ctx->pc = 0x1ea824u;
    // NOP
label_1ea828:
    // 0x1ea828: 0x46010042
    ctx->pc = 0x1ea828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea82c:
    // 0x1ea82c: 0xe4810030
    ctx->pc = 0x1ea82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_1ea830:
    // 0x1ea830: 0xc4610000
    ctx->pc = 0x1ea830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea834:
    // 0x1ea834: 0xc483003c
    ctx->pc = 0x1ea834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea838:
    // 0x1ea838: 0xc4820038
    ctx->pc = 0x1ea838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea83c:
    // 0x1ea83c: 0x44800000
    ctx->pc = 0x1ea83cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea840:
    // 0x1ea840: 0x0
    ctx->pc = 0x1ea840u;
    // NOP
label_1ea844:
    // 0x1ea844: 0x46800860
    ctx->pc = 0x1ea844u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1ea848:
    // 0x1ea848: 0x46021881
    ctx->pc = 0x1ea848u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ea84c:
    // 0x1ea84c: 0x46011043
    ctx->pc = 0x1ea84cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1ea850:
    // 0x1ea850: 0x0
    ctx->pc = 0x1ea850u;
    // NOP
label_1ea854:
    // 0x1ea854: 0x0
    ctx->pc = 0x1ea854u;
    // NOP
label_1ea858:
    // 0x1ea858: 0x46000834
    ctx->pc = 0x1ea858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea85c:
    // 0x1ea85c: 0x0
    ctx->pc = 0x1ea85cu;
    // NOP
label_1ea860:
    // 0x1ea860: 0x45000004
label_1ea864:
    if (ctx->pc == 0x1EA864u) {
        ctx->pc = 0x1EA864u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA868u;
        goto label_1ea868;
    }
    ctx->pc = 0x1EA860u;
    {
        const bool branch_taken_0x1ea860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA864u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea860) {
            ctx->pc = 0x1EA874u;
            goto label_1ea874;
        }
    }
    ctx->pc = 0x1EA868u;
label_1ea868:
    // 0x1ea868: 0x44820000
    ctx->pc = 0x1ea868u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea86c:
    // 0x1ea86c: 0x0
    ctx->pc = 0x1ea86cu;
    // NOP
label_1ea870:
    // 0x1ea870: 0x46010042
    ctx->pc = 0x1ea870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea874:
    // 0x1ea874: 0xe4810040
    ctx->pc = 0x1ea874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_1ea878:
    // 0x1ea878: 0xc4610000
    ctx->pc = 0x1ea878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea87c:
    // 0x1ea87c: 0xc483004c
    ctx->pc = 0x1ea87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ea880:
    // 0x1ea880: 0xc4820048
    ctx->pc = 0x1ea880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea884:
    // 0x1ea884: 0x44800000
    ctx->pc = 0x1ea884u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea888:
    // 0x1ea888: 0x0
    ctx->pc = 0x1ea888u;
    // NOP
label_1ea88c:
    // 0x1ea88c: 0x46800860
    ctx->pc = 0x1ea88cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1ea890:
    // 0x1ea890: 0x46021881
    ctx->pc = 0x1ea890u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ea894:
    // 0x1ea894: 0x46011043
    ctx->pc = 0x1ea894u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1ea898:
    // 0x1ea898: 0x0
    ctx->pc = 0x1ea898u;
    // NOP
label_1ea89c:
    // 0x1ea89c: 0x0
    ctx->pc = 0x1ea89cu;
    // NOP
label_1ea8a0:
    // 0x1ea8a0: 0x46000834
    ctx->pc = 0x1ea8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea8a4:
    // 0x1ea8a4: 0x0
    ctx->pc = 0x1ea8a4u;
    // NOP
label_1ea8a8:
    // 0x1ea8a8: 0x45000004
label_1ea8ac:
    if (ctx->pc == 0x1EA8ACu) {
        ctx->pc = 0x1EA8ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA8B0u;
        goto label_1ea8b0;
    }
    ctx->pc = 0x1EA8A8u;
    {
        const bool branch_taken_0x1ea8a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA8ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea8a8) {
            ctx->pc = 0x1EA8BCu;
            goto label_1ea8bc;
        }
    }
    ctx->pc = 0x1EA8B0u;
label_1ea8b0:
    // 0x1ea8b0: 0x44820000
    ctx->pc = 0x1ea8b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea8b4:
    // 0x1ea8b4: 0x0
    ctx->pc = 0x1ea8b4u;
    // NOP
label_1ea8b8:
    // 0x1ea8b8: 0x46010042
    ctx->pc = 0x1ea8b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea8bc:
    // 0x1ea8bc: 0x10000027
label_1ea8c0:
    if (ctx->pc == 0x1EA8C0u) {
        ctx->pc = 0x1EA8C0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        ctx->pc = 0x1EA8C4u;
        goto label_1ea8c4;
    }
    ctx->pc = 0x1EA8BCu;
    {
        const bool branch_taken_0x1ea8bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA8C0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        if (branch_taken_0x1ea8bc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8C4u;
label_1ea8c4:
    // 0x1ea8c4: 0xc481002c
    ctx->pc = 0x1ea8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea8c8:
    // 0x1ea8c8: 0xc4800028
    ctx->pc = 0x1ea8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea8cc:
    // 0x1ea8cc: 0x44801000
    ctx->pc = 0x1ea8ccu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_1ea8d0:
    // 0x1ea8d0: 0x46000841
    ctx->pc = 0x1ea8d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ea8d4:
    // 0x1ea8d4: 0x46020834
    ctx->pc = 0x1ea8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea8d8:
    // 0x1ea8d8: 0x0
    ctx->pc = 0x1ea8d8u;
    // NOP
label_1ea8dc:
    // 0x1ea8dc: 0x45000004
label_1ea8e0:
    if (ctx->pc == 0x1EA8E0u) {
        ctx->pc = 0x1EA8E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA8E4u;
        goto label_1ea8e4;
    }
    ctx->pc = 0x1EA8DCu;
    {
        const bool branch_taken_0x1ea8dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA8E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea8dc) {
            ctx->pc = 0x1EA8F0u;
            goto label_1ea8f0;
        }
    }
    ctx->pc = 0x1EA8E4u;
label_1ea8e4:
    // 0x1ea8e4: 0x44820000
    ctx->pc = 0x1ea8e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea8e8:
    // 0x1ea8e8: 0x0
    ctx->pc = 0x1ea8e8u;
    // NOP
label_1ea8ec:
    // 0x1ea8ec: 0x46010042
    ctx->pc = 0x1ea8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea8f0:
    // 0x1ea8f0: 0xe4810030
    ctx->pc = 0x1ea8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_1ea8f4:
    // 0x1ea8f4: 0xc482003c
    ctx->pc = 0x1ea8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea8f8:
    // 0x1ea8f8: 0xc4810038
    ctx->pc = 0x1ea8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea8fc:
    // 0x1ea8fc: 0x44800000
    ctx->pc = 0x1ea8fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea900:
    // 0x1ea900: 0x0
    ctx->pc = 0x1ea900u;
    // NOP
label_1ea904:
    // 0x1ea904: 0x46011041
    ctx->pc = 0x1ea904u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea908:
    // 0x1ea908: 0x46000834
    ctx->pc = 0x1ea908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea90c:
    // 0x1ea90c: 0x0
    ctx->pc = 0x1ea90cu;
    // NOP
label_1ea910:
    // 0x1ea910: 0x45000004
label_1ea914:
    if (ctx->pc == 0x1EA914u) {
        ctx->pc = 0x1EA914u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA918u;
        goto label_1ea918;
    }
    ctx->pc = 0x1EA910u;
    {
        const bool branch_taken_0x1ea910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA914u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea910) {
            ctx->pc = 0x1EA924u;
            goto label_1ea924;
        }
    }
    ctx->pc = 0x1EA918u;
label_1ea918:
    // 0x1ea918: 0x44820000
    ctx->pc = 0x1ea918u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea91c:
    // 0x1ea91c: 0x0
    ctx->pc = 0x1ea91cu;
    // NOP
label_1ea920:
    // 0x1ea920: 0x46010042
    ctx->pc = 0x1ea920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea924:
    // 0x1ea924: 0xe4810040
    ctx->pc = 0x1ea924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_1ea928:
    // 0x1ea928: 0xc482004c
    ctx->pc = 0x1ea928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ea92c:
    // 0x1ea92c: 0xc4810048
    ctx->pc = 0x1ea92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ea930:
    // 0x1ea930: 0x44800000
    ctx->pc = 0x1ea930u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1ea934:
    // 0x1ea934: 0x0
    ctx->pc = 0x1ea934u;
    // NOP
label_1ea938:
    // 0x1ea938: 0x46011041
    ctx->pc = 0x1ea938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ea93c:
    // 0x1ea93c: 0x46000834
    ctx->pc = 0x1ea93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ea940:
    // 0x1ea940: 0x0
    ctx->pc = 0x1ea940u;
    // NOP
label_1ea944:
    // 0x1ea944: 0x45000004
label_1ea948:
    if (ctx->pc == 0x1EA948u) {
        ctx->pc = 0x1EA948u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1EA94Cu;
        goto label_1ea94c;
    }
    ctx->pc = 0x1EA944u;
    {
        const bool branch_taken_0x1ea944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA948u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1ea944) {
            ctx->pc = 0x1EA958u;
            goto label_1ea958;
        }
    }
    ctx->pc = 0x1EA94Cu;
label_1ea94c:
    // 0x1ea94c: 0x44820000
    ctx->pc = 0x1ea94cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1ea950:
    // 0x1ea950: 0x0
    ctx->pc = 0x1ea950u;
    // NOP
label_1ea954:
    // 0x1ea954: 0x46010042
    ctx->pc = 0x1ea954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ea958:
    // 0x1ea958: 0xe4810050
    ctx->pc = 0x1ea958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_1ea95c:
    // 0x1ea95c: 0x24a20018
    ctx->pc = 0x1ea95cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24));
label_1ea960:
    // 0x1ea960: 0x3e00008
label_1ea964:
    if (ctx->pc == 0x1EA964u) {
        ctx->pc = 0x1EA968u;
        goto label_fallthrough_0x1ea960;
    }
    ctx->pc = 0x1EA960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA3C0u: goto label_1ea3c0;
            case 0x1EA3C4u: goto label_1ea3c4;
            case 0x1EA3C8u: goto label_1ea3c8;
            case 0x1EA3CCu: goto label_1ea3cc;
            case 0x1EA3D0u: goto label_1ea3d0;
            case 0x1EA3D4u: goto label_1ea3d4;
            case 0x1EA3D8u: goto label_1ea3d8;
            case 0x1EA3DCu: goto label_1ea3dc;
            case 0x1EA3E0u: goto label_1ea3e0;
            case 0x1EA3E4u: goto label_1ea3e4;
            case 0x1EA3E8u: goto label_1ea3e8;
            case 0x1EA3ECu: goto label_1ea3ec;
            case 0x1EA3F0u: goto label_1ea3f0;
            case 0x1EA3F4u: goto label_1ea3f4;
            case 0x1EA3F8u: goto label_1ea3f8;
            case 0x1EA3FCu: goto label_1ea3fc;
            case 0x1EA400u: goto label_1ea400;
            case 0x1EA404u: goto label_1ea404;
            case 0x1EA408u: goto label_1ea408;
            case 0x1EA40Cu: goto label_1ea40c;
            case 0x1EA410u: goto label_1ea410;
            case 0x1EA414u: goto label_1ea414;
            case 0x1EA418u: goto label_1ea418;
            case 0x1EA41Cu: goto label_1ea41c;
            case 0x1EA420u: goto label_1ea420;
            case 0x1EA424u: goto label_1ea424;
            case 0x1EA428u: goto label_1ea428;
            case 0x1EA42Cu: goto label_1ea42c;
            case 0x1EA430u: goto label_1ea430;
            case 0x1EA434u: goto label_1ea434;
            case 0x1EA438u: goto label_1ea438;
            case 0x1EA43Cu: goto label_1ea43c;
            case 0x1EA440u: goto label_1ea440;
            case 0x1EA444u: goto label_1ea444;
            case 0x1EA448u: goto label_1ea448;
            case 0x1EA44Cu: goto label_1ea44c;
            case 0x1EA450u: goto label_1ea450;
            case 0x1EA454u: goto label_1ea454;
            case 0x1EA458u: goto label_1ea458;
            case 0x1EA45Cu: goto label_1ea45c;
            case 0x1EA460u: goto label_1ea460;
            case 0x1EA464u: goto label_1ea464;
            case 0x1EA468u: goto label_1ea468;
            case 0x1EA46Cu: goto label_1ea46c;
            case 0x1EA470u: goto label_1ea470;
            case 0x1EA474u: goto label_1ea474;
            case 0x1EA478u: goto label_1ea478;
            case 0x1EA47Cu: goto label_1ea47c;
            case 0x1EA480u: goto label_1ea480;
            case 0x1EA484u: goto label_1ea484;
            case 0x1EA488u: goto label_1ea488;
            case 0x1EA48Cu: goto label_1ea48c;
            case 0x1EA490u: goto label_1ea490;
            case 0x1EA494u: goto label_1ea494;
            case 0x1EA498u: goto label_1ea498;
            case 0x1EA49Cu: goto label_1ea49c;
            case 0x1EA4A0u: goto label_1ea4a0;
            case 0x1EA4A4u: goto label_1ea4a4;
            case 0x1EA4A8u: goto label_1ea4a8;
            case 0x1EA4ACu: goto label_1ea4ac;
            case 0x1EA4B0u: goto label_1ea4b0;
            case 0x1EA4B4u: goto label_1ea4b4;
            case 0x1EA4B8u: goto label_1ea4b8;
            case 0x1EA4BCu: goto label_1ea4bc;
            case 0x1EA4C0u: goto label_1ea4c0;
            case 0x1EA4C4u: goto label_1ea4c4;
            case 0x1EA4C8u: goto label_1ea4c8;
            case 0x1EA4CCu: goto label_1ea4cc;
            case 0x1EA4D0u: goto label_1ea4d0;
            case 0x1EA4D4u: goto label_1ea4d4;
            case 0x1EA4D8u: goto label_1ea4d8;
            case 0x1EA4DCu: goto label_1ea4dc;
            case 0x1EA4E0u: goto label_1ea4e0;
            case 0x1EA4E4u: goto label_1ea4e4;
            case 0x1EA4E8u: goto label_1ea4e8;
            case 0x1EA4ECu: goto label_1ea4ec;
            case 0x1EA4F0u: goto label_1ea4f0;
            case 0x1EA4F4u: goto label_1ea4f4;
            case 0x1EA4F8u: goto label_1ea4f8;
            case 0x1EA4FCu: goto label_1ea4fc;
            case 0x1EA500u: goto label_1ea500;
            case 0x1EA504u: goto label_1ea504;
            case 0x1EA508u: goto label_1ea508;
            case 0x1EA50Cu: goto label_1ea50c;
            case 0x1EA510u: goto label_1ea510;
            case 0x1EA514u: goto label_1ea514;
            case 0x1EA518u: goto label_1ea518;
            case 0x1EA51Cu: goto label_1ea51c;
            case 0x1EA520u: goto label_1ea520;
            case 0x1EA524u: goto label_1ea524;
            case 0x1EA528u: goto label_1ea528;
            case 0x1EA52Cu: goto label_1ea52c;
            case 0x1EA530u: goto label_1ea530;
            case 0x1EA534u: goto label_1ea534;
            case 0x1EA538u: goto label_1ea538;
            case 0x1EA53Cu: goto label_1ea53c;
            case 0x1EA540u: goto label_1ea540;
            case 0x1EA544u: goto label_1ea544;
            case 0x1EA548u: goto label_1ea548;
            case 0x1EA54Cu: goto label_1ea54c;
            case 0x1EA550u: goto label_1ea550;
            case 0x1EA554u: goto label_1ea554;
            case 0x1EA558u: goto label_1ea558;
            case 0x1EA55Cu: goto label_1ea55c;
            case 0x1EA560u: goto label_1ea560;
            case 0x1EA564u: goto label_1ea564;
            case 0x1EA568u: goto label_1ea568;
            case 0x1EA56Cu: goto label_1ea56c;
            case 0x1EA570u: goto label_1ea570;
            case 0x1EA574u: goto label_1ea574;
            case 0x1EA578u: goto label_1ea578;
            case 0x1EA57Cu: goto label_1ea57c;
            case 0x1EA580u: goto label_1ea580;
            case 0x1EA584u: goto label_1ea584;
            case 0x1EA588u: goto label_1ea588;
            case 0x1EA58Cu: goto label_1ea58c;
            case 0x1EA590u: goto label_1ea590;
            case 0x1EA594u: goto label_1ea594;
            case 0x1EA598u: goto label_1ea598;
            case 0x1EA59Cu: goto label_1ea59c;
            case 0x1EA5A0u: goto label_1ea5a0;
            case 0x1EA5A4u: goto label_1ea5a4;
            case 0x1EA5A8u: goto label_1ea5a8;
            case 0x1EA5ACu: goto label_1ea5ac;
            case 0x1EA5B0u: goto label_1ea5b0;
            case 0x1EA5B4u: goto label_1ea5b4;
            case 0x1EA5B8u: goto label_1ea5b8;
            case 0x1EA5BCu: goto label_1ea5bc;
            case 0x1EA5C0u: goto label_1ea5c0;
            case 0x1EA5C4u: goto label_1ea5c4;
            case 0x1EA5C8u: goto label_1ea5c8;
            case 0x1EA5CCu: goto label_1ea5cc;
            case 0x1EA5D0u: goto label_1ea5d0;
            case 0x1EA5D4u: goto label_1ea5d4;
            case 0x1EA5D8u: goto label_1ea5d8;
            case 0x1EA5DCu: goto label_1ea5dc;
            case 0x1EA5E0u: goto label_1ea5e0;
            case 0x1EA5E4u: goto label_1ea5e4;
            case 0x1EA5E8u: goto label_1ea5e8;
            case 0x1EA5ECu: goto label_1ea5ec;
            case 0x1EA5F0u: goto label_1ea5f0;
            case 0x1EA5F4u: goto label_1ea5f4;
            case 0x1EA5F8u: goto label_1ea5f8;
            case 0x1EA5FCu: goto label_1ea5fc;
            case 0x1EA600u: goto label_1ea600;
            case 0x1EA604u: goto label_1ea604;
            case 0x1EA608u: goto label_1ea608;
            case 0x1EA60Cu: goto label_1ea60c;
            case 0x1EA610u: goto label_1ea610;
            case 0x1EA614u: goto label_1ea614;
            case 0x1EA618u: goto label_1ea618;
            case 0x1EA61Cu: goto label_1ea61c;
            case 0x1EA620u: goto label_1ea620;
            case 0x1EA624u: goto label_1ea624;
            case 0x1EA628u: goto label_1ea628;
            case 0x1EA62Cu: goto label_1ea62c;
            case 0x1EA630u: goto label_1ea630;
            case 0x1EA634u: goto label_1ea634;
            case 0x1EA638u: goto label_1ea638;
            case 0x1EA63Cu: goto label_1ea63c;
            case 0x1EA640u: goto label_1ea640;
            case 0x1EA644u: goto label_1ea644;
            case 0x1EA648u: goto label_1ea648;
            case 0x1EA64Cu: goto label_1ea64c;
            case 0x1EA650u: goto label_1ea650;
            case 0x1EA654u: goto label_1ea654;
            case 0x1EA658u: goto label_1ea658;
            case 0x1EA65Cu: goto label_1ea65c;
            case 0x1EA660u: goto label_1ea660;
            case 0x1EA664u: goto label_1ea664;
            case 0x1EA668u: goto label_1ea668;
            case 0x1EA66Cu: goto label_1ea66c;
            case 0x1EA670u: goto label_1ea670;
            case 0x1EA674u: goto label_1ea674;
            case 0x1EA678u: goto label_1ea678;
            case 0x1EA67Cu: goto label_1ea67c;
            case 0x1EA680u: goto label_1ea680;
            case 0x1EA684u: goto label_1ea684;
            case 0x1EA688u: goto label_1ea688;
            case 0x1EA68Cu: goto label_1ea68c;
            case 0x1EA690u: goto label_1ea690;
            case 0x1EA694u: goto label_1ea694;
            case 0x1EA698u: goto label_1ea698;
            case 0x1EA69Cu: goto label_1ea69c;
            case 0x1EA6A0u: goto label_1ea6a0;
            case 0x1EA6A4u: goto label_1ea6a4;
            case 0x1EA6A8u: goto label_1ea6a8;
            case 0x1EA6ACu: goto label_1ea6ac;
            case 0x1EA6B0u: goto label_1ea6b0;
            case 0x1EA6B4u: goto label_1ea6b4;
            case 0x1EA6B8u: goto label_1ea6b8;
            case 0x1EA6BCu: goto label_1ea6bc;
            case 0x1EA6C0u: goto label_1ea6c0;
            case 0x1EA6C4u: goto label_1ea6c4;
            case 0x1EA6C8u: goto label_1ea6c8;
            case 0x1EA6CCu: goto label_1ea6cc;
            case 0x1EA6D0u: goto label_1ea6d0;
            case 0x1EA6D4u: goto label_1ea6d4;
            case 0x1EA6D8u: goto label_1ea6d8;
            case 0x1EA6DCu: goto label_1ea6dc;
            case 0x1EA6E0u: goto label_1ea6e0;
            case 0x1EA6E4u: goto label_1ea6e4;
            case 0x1EA6E8u: goto label_1ea6e8;
            case 0x1EA6ECu: goto label_1ea6ec;
            case 0x1EA6F0u: goto label_1ea6f0;
            case 0x1EA6F4u: goto label_1ea6f4;
            case 0x1EA6F8u: goto label_1ea6f8;
            case 0x1EA6FCu: goto label_1ea6fc;
            case 0x1EA700u: goto label_1ea700;
            case 0x1EA704u: goto label_1ea704;
            case 0x1EA708u: goto label_1ea708;
            case 0x1EA70Cu: goto label_1ea70c;
            case 0x1EA710u: goto label_1ea710;
            case 0x1EA714u: goto label_1ea714;
            case 0x1EA718u: goto label_1ea718;
            case 0x1EA71Cu: goto label_1ea71c;
            case 0x1EA720u: goto label_1ea720;
            case 0x1EA724u: goto label_1ea724;
            case 0x1EA728u: goto label_1ea728;
            case 0x1EA72Cu: goto label_1ea72c;
            case 0x1EA730u: goto label_1ea730;
            case 0x1EA734u: goto label_1ea734;
            case 0x1EA738u: goto label_1ea738;
            case 0x1EA73Cu: goto label_1ea73c;
            case 0x1EA740u: goto label_1ea740;
            case 0x1EA744u: goto label_1ea744;
            case 0x1EA748u: goto label_1ea748;
            case 0x1EA74Cu: goto label_1ea74c;
            case 0x1EA750u: goto label_1ea750;
            case 0x1EA754u: goto label_1ea754;
            case 0x1EA758u: goto label_1ea758;
            case 0x1EA75Cu: goto label_1ea75c;
            case 0x1EA760u: goto label_1ea760;
            case 0x1EA764u: goto label_1ea764;
            case 0x1EA768u: goto label_1ea768;
            case 0x1EA76Cu: goto label_1ea76c;
            case 0x1EA770u: goto label_1ea770;
            case 0x1EA774u: goto label_1ea774;
            case 0x1EA778u: goto label_1ea778;
            case 0x1EA77Cu: goto label_1ea77c;
            case 0x1EA780u: goto label_1ea780;
            case 0x1EA784u: goto label_1ea784;
            case 0x1EA788u: goto label_1ea788;
            case 0x1EA78Cu: goto label_1ea78c;
            case 0x1EA790u: goto label_1ea790;
            case 0x1EA794u: goto label_1ea794;
            case 0x1EA798u: goto label_1ea798;
            case 0x1EA79Cu: goto label_1ea79c;
            case 0x1EA7A0u: goto label_1ea7a0;
            case 0x1EA7A4u: goto label_1ea7a4;
            case 0x1EA7A8u: goto label_1ea7a8;
            case 0x1EA7ACu: goto label_1ea7ac;
            case 0x1EA7B0u: goto label_1ea7b0;
            case 0x1EA7B4u: goto label_1ea7b4;
            case 0x1EA7B8u: goto label_1ea7b8;
            case 0x1EA7BCu: goto label_1ea7bc;
            case 0x1EA7C0u: goto label_1ea7c0;
            case 0x1EA7C4u: goto label_1ea7c4;
            case 0x1EA7C8u: goto label_1ea7c8;
            case 0x1EA7CCu: goto label_1ea7cc;
            case 0x1EA7D0u: goto label_1ea7d0;
            case 0x1EA7D4u: goto label_1ea7d4;
            case 0x1EA7D8u: goto label_1ea7d8;
            case 0x1EA7DCu: goto label_1ea7dc;
            case 0x1EA7E0u: goto label_1ea7e0;
            case 0x1EA7E4u: goto label_1ea7e4;
            case 0x1EA7E8u: goto label_1ea7e8;
            case 0x1EA7ECu: goto label_1ea7ec;
            case 0x1EA7F0u: goto label_1ea7f0;
            case 0x1EA7F4u: goto label_1ea7f4;
            case 0x1EA7F8u: goto label_1ea7f8;
            case 0x1EA7FCu: goto label_1ea7fc;
            case 0x1EA800u: goto label_1ea800;
            case 0x1EA804u: goto label_1ea804;
            case 0x1EA808u: goto label_1ea808;
            case 0x1EA80Cu: goto label_1ea80c;
            case 0x1EA810u: goto label_1ea810;
            case 0x1EA814u: goto label_1ea814;
            case 0x1EA818u: goto label_1ea818;
            case 0x1EA81Cu: goto label_1ea81c;
            case 0x1EA820u: goto label_1ea820;
            case 0x1EA824u: goto label_1ea824;
            case 0x1EA828u: goto label_1ea828;
            case 0x1EA82Cu: goto label_1ea82c;
            case 0x1EA830u: goto label_1ea830;
            case 0x1EA834u: goto label_1ea834;
            case 0x1EA838u: goto label_1ea838;
            case 0x1EA83Cu: goto label_1ea83c;
            case 0x1EA840u: goto label_1ea840;
            case 0x1EA844u: goto label_1ea844;
            case 0x1EA848u: goto label_1ea848;
            case 0x1EA84Cu: goto label_1ea84c;
            case 0x1EA850u: goto label_1ea850;
            case 0x1EA854u: goto label_1ea854;
            case 0x1EA858u: goto label_1ea858;
            case 0x1EA85Cu: goto label_1ea85c;
            case 0x1EA860u: goto label_1ea860;
            case 0x1EA864u: goto label_1ea864;
            case 0x1EA868u: goto label_1ea868;
            case 0x1EA86Cu: goto label_1ea86c;
            case 0x1EA870u: goto label_1ea870;
            case 0x1EA874u: goto label_1ea874;
            case 0x1EA878u: goto label_1ea878;
            case 0x1EA87Cu: goto label_1ea87c;
            case 0x1EA880u: goto label_1ea880;
            case 0x1EA884u: goto label_1ea884;
            case 0x1EA888u: goto label_1ea888;
            case 0x1EA88Cu: goto label_1ea88c;
            case 0x1EA890u: goto label_1ea890;
            case 0x1EA894u: goto label_1ea894;
            case 0x1EA898u: goto label_1ea898;
            case 0x1EA89Cu: goto label_1ea89c;
            case 0x1EA8A0u: goto label_1ea8a0;
            case 0x1EA8A4u: goto label_1ea8a4;
            case 0x1EA8A8u: goto label_1ea8a8;
            case 0x1EA8ACu: goto label_1ea8ac;
            case 0x1EA8B0u: goto label_1ea8b0;
            case 0x1EA8B4u: goto label_1ea8b4;
            case 0x1EA8B8u: goto label_1ea8b8;
            case 0x1EA8BCu: goto label_1ea8bc;
            case 0x1EA8C0u: goto label_1ea8c0;
            case 0x1EA8C4u: goto label_1ea8c4;
            case 0x1EA8C8u: goto label_1ea8c8;
            case 0x1EA8CCu: goto label_1ea8cc;
            case 0x1EA8D0u: goto label_1ea8d0;
            case 0x1EA8D4u: goto label_1ea8d4;
            case 0x1EA8D8u: goto label_1ea8d8;
            case 0x1EA8DCu: goto label_1ea8dc;
            case 0x1EA8E0u: goto label_1ea8e0;
            case 0x1EA8E4u: goto label_1ea8e4;
            case 0x1EA8E8u: goto label_1ea8e8;
            case 0x1EA8ECu: goto label_1ea8ec;
            case 0x1EA8F0u: goto label_1ea8f0;
            case 0x1EA8F4u: goto label_1ea8f4;
            case 0x1EA8F8u: goto label_1ea8f8;
            case 0x1EA8FCu: goto label_1ea8fc;
            case 0x1EA900u: goto label_1ea900;
            case 0x1EA904u: goto label_1ea904;
            case 0x1EA908u: goto label_1ea908;
            case 0x1EA90Cu: goto label_1ea90c;
            case 0x1EA910u: goto label_1ea910;
            case 0x1EA914u: goto label_1ea914;
            case 0x1EA918u: goto label_1ea918;
            case 0x1EA91Cu: goto label_1ea91c;
            case 0x1EA920u: goto label_1ea920;
            case 0x1EA924u: goto label_1ea924;
            case 0x1EA928u: goto label_1ea928;
            case 0x1EA92Cu: goto label_1ea92c;
            case 0x1EA930u: goto label_1ea930;
            case 0x1EA934u: goto label_1ea934;
            case 0x1EA938u: goto label_1ea938;
            case 0x1EA93Cu: goto label_1ea93c;
            case 0x1EA940u: goto label_1ea940;
            case 0x1EA944u: goto label_1ea944;
            case 0x1EA948u: goto label_1ea948;
            case 0x1EA94Cu: goto label_1ea94c;
            case 0x1EA950u: goto label_1ea950;
            case 0x1EA954u: goto label_1ea954;
            case 0x1EA958u: goto label_1ea958;
            case 0x1EA95Cu: goto label_1ea95c;
            case 0x1EA960u: goto label_1ea960;
            case 0x1EA964u: goto label_1ea964;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ea960:
    ctx->pc = 0x1EA968u;
}
