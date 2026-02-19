#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_got_it
// Address: 0x22b398 - 0x22b9d8
void do_got_it_0x22b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b398u;

label_22b398:
    // 0x22b398: 0x27bdff80
    ctx->pc = 0x22b398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_22b39c:
    // 0x22b39c: 0xffbf0070
    ctx->pc = 0x22b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22b3a0:
    // 0x22b3a0: 0xffb30060
    ctx->pc = 0x22b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_22b3a4:
    // 0x22b3a4: 0xffb20050
    ctx->pc = 0x22b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_22b3a8:
    // 0x22b3a8: 0xffb10040
    ctx->pc = 0x22b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_22b3ac:
    // 0x22b3ac: 0xffb00030
    ctx->pc = 0x22b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_22b3b0:
    // 0x22b3b0: 0x982d
    ctx->pc = 0x22b3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b3b4:
    // 0x22b3b4: 0x3c040033
    ctx->pc = 0x22b3b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
label_22b3b8:
    // 0x22b3b8: 0x2484cb70
    ctx->pc = 0x22b3b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953840));
label_22b3bc:
    // 0x22b3bc: 0x2402001c
    ctx->pc = 0x22b3bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b3c0:
    // 0x22b3c0: 0x2621018
    ctx->pc = 0x22b3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b3c4:
    // 0x22b3c4: 0x821821
    ctx->pc = 0x22b3c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22b3c8:
    // 0x22b3c8: 0x8c650004
    ctx->pc = 0x22b3c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22b3cc:
    // 0x22b3cc: 0x441021
    ctx->pc = 0x22b3ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22b3d0:
    // 0x22b3d0: 0x8c420000
    ctx->pc = 0x22b3d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22b3d4:
    // 0x22b3d4: 0x24430001
    ctx->pc = 0x22b3d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
label_22b3d8:
    // 0x22b3d8: 0x2c620006
    ctx->pc = 0x22b3d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_22b3dc:
    // 0x22b3dc: 0x10400173
label_22b3e0:
    if (ctx->pc == 0x22B3E0u) {
        ctx->pc = 0x22B3E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x22B3E4u;
        goto label_22b3e4;
    }
    ctx->pc = 0x22B3DCu;
    {
        const bool branch_taken_0x22b3dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B3E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x22b3dc) {
            ctx->pc = 0x22B9ACu;
            goto label_22b9ac;
        }
    }
    ctx->pc = 0x22B3E4u;
label_22b3e4:
    // 0x22b3e4: 0x244272b0
    ctx->pc = 0x22b3e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29360));
label_22b3e8:
    // 0x22b3e8: 0x31880
    ctx->pc = 0x22b3e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_22b3ec:
    // 0x22b3ec: 0x621821
    ctx->pc = 0x22b3ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b3f0:
    // 0x22b3f0: 0x8c620000
    ctx->pc = 0x22b3f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b3f4:
    // 0x22b3f4: 0x400008
label_22b3f8:
    if (ctx->pc == 0x22B3F8u) {
        ctx->pc = 0x22B3FCu;
        goto label_22b3fc;
    }
    ctx->pc = 0x22B3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B398u: goto label_22b398;
            case 0x22B39Cu: goto label_22b39c;
            case 0x22B3A0u: goto label_22b3a0;
            case 0x22B3A4u: goto label_22b3a4;
            case 0x22B3A8u: goto label_22b3a8;
            case 0x22B3ACu: goto label_22b3ac;
            case 0x22B3B0u: goto label_22b3b0;
            case 0x22B3B4u: goto label_22b3b4;
            case 0x22B3B8u: goto label_22b3b8;
            case 0x22B3BCu: goto label_22b3bc;
            case 0x22B3C0u: goto label_22b3c0;
            case 0x22B3C4u: goto label_22b3c4;
            case 0x22B3C8u: goto label_22b3c8;
            case 0x22B3CCu: goto label_22b3cc;
            case 0x22B3D0u: goto label_22b3d0;
            case 0x22B3D4u: goto label_22b3d4;
            case 0x22B3D8u: goto label_22b3d8;
            case 0x22B3DCu: goto label_22b3dc;
            case 0x22B3E0u: goto label_22b3e0;
            case 0x22B3E4u: goto label_22b3e4;
            case 0x22B3E8u: goto label_22b3e8;
            case 0x22B3ECu: goto label_22b3ec;
            case 0x22B3F0u: goto label_22b3f0;
            case 0x22B3F4u: goto label_22b3f4;
            case 0x22B3F8u: goto label_22b3f8;
            case 0x22B3FCu: goto label_22b3fc;
            case 0x22B400u: goto label_22b400;
            case 0x22B404u: goto label_22b404;
            case 0x22B408u: goto label_22b408;
            case 0x22B40Cu: goto label_22b40c;
            case 0x22B410u: goto label_22b410;
            case 0x22B414u: goto label_22b414;
            case 0x22B418u: goto label_22b418;
            case 0x22B41Cu: goto label_22b41c;
            case 0x22B420u: goto label_22b420;
            case 0x22B424u: goto label_22b424;
            case 0x22B428u: goto label_22b428;
            case 0x22B42Cu: goto label_22b42c;
            case 0x22B430u: goto label_22b430;
            case 0x22B434u: goto label_22b434;
            case 0x22B438u: goto label_22b438;
            case 0x22B43Cu: goto label_22b43c;
            case 0x22B440u: goto label_22b440;
            case 0x22B444u: goto label_22b444;
            case 0x22B448u: goto label_22b448;
            case 0x22B44Cu: goto label_22b44c;
            case 0x22B450u: goto label_22b450;
            case 0x22B454u: goto label_22b454;
            case 0x22B458u: goto label_22b458;
            case 0x22B45Cu: goto label_22b45c;
            case 0x22B460u: goto label_22b460;
            case 0x22B464u: goto label_22b464;
            case 0x22B468u: goto label_22b468;
            case 0x22B46Cu: goto label_22b46c;
            case 0x22B470u: goto label_22b470;
            case 0x22B474u: goto label_22b474;
            case 0x22B478u: goto label_22b478;
            case 0x22B47Cu: goto label_22b47c;
            case 0x22B480u: goto label_22b480;
            case 0x22B484u: goto label_22b484;
            case 0x22B488u: goto label_22b488;
            case 0x22B48Cu: goto label_22b48c;
            case 0x22B490u: goto label_22b490;
            case 0x22B494u: goto label_22b494;
            case 0x22B498u: goto label_22b498;
            case 0x22B49Cu: goto label_22b49c;
            case 0x22B4A0u: goto label_22b4a0;
            case 0x22B4A4u: goto label_22b4a4;
            case 0x22B4A8u: goto label_22b4a8;
            case 0x22B4ACu: goto label_22b4ac;
            case 0x22B4B0u: goto label_22b4b0;
            case 0x22B4B4u: goto label_22b4b4;
            case 0x22B4B8u: goto label_22b4b8;
            case 0x22B4BCu: goto label_22b4bc;
            case 0x22B4C0u: goto label_22b4c0;
            case 0x22B4C4u: goto label_22b4c4;
            case 0x22B4C8u: goto label_22b4c8;
            case 0x22B4CCu: goto label_22b4cc;
            case 0x22B4D0u: goto label_22b4d0;
            case 0x22B4D4u: goto label_22b4d4;
            case 0x22B4D8u: goto label_22b4d8;
            case 0x22B4DCu: goto label_22b4dc;
            case 0x22B4E0u: goto label_22b4e0;
            case 0x22B4E4u: goto label_22b4e4;
            case 0x22B4E8u: goto label_22b4e8;
            case 0x22B4ECu: goto label_22b4ec;
            case 0x22B4F0u: goto label_22b4f0;
            case 0x22B4F4u: goto label_22b4f4;
            case 0x22B4F8u: goto label_22b4f8;
            case 0x22B4FCu: goto label_22b4fc;
            case 0x22B500u: goto label_22b500;
            case 0x22B504u: goto label_22b504;
            case 0x22B508u: goto label_22b508;
            case 0x22B50Cu: goto label_22b50c;
            case 0x22B510u: goto label_22b510;
            case 0x22B514u: goto label_22b514;
            case 0x22B518u: goto label_22b518;
            case 0x22B51Cu: goto label_22b51c;
            case 0x22B520u: goto label_22b520;
            case 0x22B524u: goto label_22b524;
            case 0x22B528u: goto label_22b528;
            case 0x22B52Cu: goto label_22b52c;
            case 0x22B530u: goto label_22b530;
            case 0x22B534u: goto label_22b534;
            case 0x22B538u: goto label_22b538;
            case 0x22B53Cu: goto label_22b53c;
            case 0x22B540u: goto label_22b540;
            case 0x22B544u: goto label_22b544;
            case 0x22B548u: goto label_22b548;
            case 0x22B54Cu: goto label_22b54c;
            case 0x22B550u: goto label_22b550;
            case 0x22B554u: goto label_22b554;
            case 0x22B558u: goto label_22b558;
            case 0x22B55Cu: goto label_22b55c;
            case 0x22B560u: goto label_22b560;
            case 0x22B564u: goto label_22b564;
            case 0x22B568u: goto label_22b568;
            case 0x22B56Cu: goto label_22b56c;
            case 0x22B570u: goto label_22b570;
            case 0x22B574u: goto label_22b574;
            case 0x22B578u: goto label_22b578;
            case 0x22B57Cu: goto label_22b57c;
            case 0x22B580u: goto label_22b580;
            case 0x22B584u: goto label_22b584;
            case 0x22B588u: goto label_22b588;
            case 0x22B58Cu: goto label_22b58c;
            case 0x22B590u: goto label_22b590;
            case 0x22B594u: goto label_22b594;
            case 0x22B598u: goto label_22b598;
            case 0x22B59Cu: goto label_22b59c;
            case 0x22B5A0u: goto label_22b5a0;
            case 0x22B5A4u: goto label_22b5a4;
            case 0x22B5A8u: goto label_22b5a8;
            case 0x22B5ACu: goto label_22b5ac;
            case 0x22B5B0u: goto label_22b5b0;
            case 0x22B5B4u: goto label_22b5b4;
            case 0x22B5B8u: goto label_22b5b8;
            case 0x22B5BCu: goto label_22b5bc;
            case 0x22B5C0u: goto label_22b5c0;
            case 0x22B5C4u: goto label_22b5c4;
            case 0x22B5C8u: goto label_22b5c8;
            case 0x22B5CCu: goto label_22b5cc;
            case 0x22B5D0u: goto label_22b5d0;
            case 0x22B5D4u: goto label_22b5d4;
            case 0x22B5D8u: goto label_22b5d8;
            case 0x22B5DCu: goto label_22b5dc;
            case 0x22B5E0u: goto label_22b5e0;
            case 0x22B5E4u: goto label_22b5e4;
            case 0x22B5E8u: goto label_22b5e8;
            case 0x22B5ECu: goto label_22b5ec;
            case 0x22B5F0u: goto label_22b5f0;
            case 0x22B5F4u: goto label_22b5f4;
            case 0x22B5F8u: goto label_22b5f8;
            case 0x22B5FCu: goto label_22b5fc;
            case 0x22B600u: goto label_22b600;
            case 0x22B604u: goto label_22b604;
            case 0x22B608u: goto label_22b608;
            case 0x22B60Cu: goto label_22b60c;
            case 0x22B610u: goto label_22b610;
            case 0x22B614u: goto label_22b614;
            case 0x22B618u: goto label_22b618;
            case 0x22B61Cu: goto label_22b61c;
            case 0x22B620u: goto label_22b620;
            case 0x22B624u: goto label_22b624;
            case 0x22B628u: goto label_22b628;
            case 0x22B62Cu: goto label_22b62c;
            case 0x22B630u: goto label_22b630;
            case 0x22B634u: goto label_22b634;
            case 0x22B638u: goto label_22b638;
            case 0x22B63Cu: goto label_22b63c;
            case 0x22B640u: goto label_22b640;
            case 0x22B644u: goto label_22b644;
            case 0x22B648u: goto label_22b648;
            case 0x22B64Cu: goto label_22b64c;
            case 0x22B650u: goto label_22b650;
            case 0x22B654u: goto label_22b654;
            case 0x22B658u: goto label_22b658;
            case 0x22B65Cu: goto label_22b65c;
            case 0x22B660u: goto label_22b660;
            case 0x22B664u: goto label_22b664;
            case 0x22B668u: goto label_22b668;
            case 0x22B66Cu: goto label_22b66c;
            case 0x22B670u: goto label_22b670;
            case 0x22B674u: goto label_22b674;
            case 0x22B678u: goto label_22b678;
            case 0x22B67Cu: goto label_22b67c;
            case 0x22B680u: goto label_22b680;
            case 0x22B684u: goto label_22b684;
            case 0x22B688u: goto label_22b688;
            case 0x22B68Cu: goto label_22b68c;
            case 0x22B690u: goto label_22b690;
            case 0x22B694u: goto label_22b694;
            case 0x22B698u: goto label_22b698;
            case 0x22B69Cu: goto label_22b69c;
            case 0x22B6A0u: goto label_22b6a0;
            case 0x22B6A4u: goto label_22b6a4;
            case 0x22B6A8u: goto label_22b6a8;
            case 0x22B6ACu: goto label_22b6ac;
            case 0x22B6B0u: goto label_22b6b0;
            case 0x22B6B4u: goto label_22b6b4;
            case 0x22B6B8u: goto label_22b6b8;
            case 0x22B6BCu: goto label_22b6bc;
            case 0x22B6C0u: goto label_22b6c0;
            case 0x22B6C4u: goto label_22b6c4;
            case 0x22B6C8u: goto label_22b6c8;
            case 0x22B6CCu: goto label_22b6cc;
            case 0x22B6D0u: goto label_22b6d0;
            case 0x22B6D4u: goto label_22b6d4;
            case 0x22B6D8u: goto label_22b6d8;
            case 0x22B6DCu: goto label_22b6dc;
            case 0x22B6E0u: goto label_22b6e0;
            case 0x22B6E4u: goto label_22b6e4;
            case 0x22B6E8u: goto label_22b6e8;
            case 0x22B6ECu: goto label_22b6ec;
            case 0x22B6F0u: goto label_22b6f0;
            case 0x22B6F4u: goto label_22b6f4;
            case 0x22B6F8u: goto label_22b6f8;
            case 0x22B6FCu: goto label_22b6fc;
            case 0x22B700u: goto label_22b700;
            case 0x22B704u: goto label_22b704;
            case 0x22B708u: goto label_22b708;
            case 0x22B70Cu: goto label_22b70c;
            case 0x22B710u: goto label_22b710;
            case 0x22B714u: goto label_22b714;
            case 0x22B718u: goto label_22b718;
            case 0x22B71Cu: goto label_22b71c;
            case 0x22B720u: goto label_22b720;
            case 0x22B724u: goto label_22b724;
            case 0x22B728u: goto label_22b728;
            case 0x22B72Cu: goto label_22b72c;
            case 0x22B730u: goto label_22b730;
            case 0x22B734u: goto label_22b734;
            case 0x22B738u: goto label_22b738;
            case 0x22B73Cu: goto label_22b73c;
            case 0x22B740u: goto label_22b740;
            case 0x22B744u: goto label_22b744;
            case 0x22B748u: goto label_22b748;
            case 0x22B74Cu: goto label_22b74c;
            case 0x22B750u: goto label_22b750;
            case 0x22B754u: goto label_22b754;
            case 0x22B758u: goto label_22b758;
            case 0x22B75Cu: goto label_22b75c;
            case 0x22B760u: goto label_22b760;
            case 0x22B764u: goto label_22b764;
            case 0x22B768u: goto label_22b768;
            case 0x22B76Cu: goto label_22b76c;
            case 0x22B770u: goto label_22b770;
            case 0x22B774u: goto label_22b774;
            case 0x22B778u: goto label_22b778;
            case 0x22B77Cu: goto label_22b77c;
            case 0x22B780u: goto label_22b780;
            case 0x22B784u: goto label_22b784;
            case 0x22B788u: goto label_22b788;
            case 0x22B78Cu: goto label_22b78c;
            case 0x22B790u: goto label_22b790;
            case 0x22B794u: goto label_22b794;
            case 0x22B798u: goto label_22b798;
            case 0x22B79Cu: goto label_22b79c;
            case 0x22B7A0u: goto label_22b7a0;
            case 0x22B7A4u: goto label_22b7a4;
            case 0x22B7A8u: goto label_22b7a8;
            case 0x22B7ACu: goto label_22b7ac;
            case 0x22B7B0u: goto label_22b7b0;
            case 0x22B7B4u: goto label_22b7b4;
            case 0x22B7B8u: goto label_22b7b8;
            case 0x22B7BCu: goto label_22b7bc;
            case 0x22B7C0u: goto label_22b7c0;
            case 0x22B7C4u: goto label_22b7c4;
            case 0x22B7C8u: goto label_22b7c8;
            case 0x22B7CCu: goto label_22b7cc;
            case 0x22B7D0u: goto label_22b7d0;
            case 0x22B7D4u: goto label_22b7d4;
            case 0x22B7D8u: goto label_22b7d8;
            case 0x22B7DCu: goto label_22b7dc;
            case 0x22B7E0u: goto label_22b7e0;
            case 0x22B7E4u: goto label_22b7e4;
            case 0x22B7E8u: goto label_22b7e8;
            case 0x22B7ECu: goto label_22b7ec;
            case 0x22B7F0u: goto label_22b7f0;
            case 0x22B7F4u: goto label_22b7f4;
            case 0x22B7F8u: goto label_22b7f8;
            case 0x22B7FCu: goto label_22b7fc;
            case 0x22B800u: goto label_22b800;
            case 0x22B804u: goto label_22b804;
            case 0x22B808u: goto label_22b808;
            case 0x22B80Cu: goto label_22b80c;
            case 0x22B810u: goto label_22b810;
            case 0x22B814u: goto label_22b814;
            case 0x22B818u: goto label_22b818;
            case 0x22B81Cu: goto label_22b81c;
            case 0x22B820u: goto label_22b820;
            case 0x22B824u: goto label_22b824;
            case 0x22B828u: goto label_22b828;
            case 0x22B82Cu: goto label_22b82c;
            case 0x22B830u: goto label_22b830;
            case 0x22B834u: goto label_22b834;
            case 0x22B838u: goto label_22b838;
            case 0x22B83Cu: goto label_22b83c;
            case 0x22B840u: goto label_22b840;
            case 0x22B844u: goto label_22b844;
            case 0x22B848u: goto label_22b848;
            case 0x22B84Cu: goto label_22b84c;
            case 0x22B850u: goto label_22b850;
            case 0x22B854u: goto label_22b854;
            case 0x22B858u: goto label_22b858;
            case 0x22B85Cu: goto label_22b85c;
            case 0x22B860u: goto label_22b860;
            case 0x22B864u: goto label_22b864;
            case 0x22B868u: goto label_22b868;
            case 0x22B86Cu: goto label_22b86c;
            case 0x22B870u: goto label_22b870;
            case 0x22B874u: goto label_22b874;
            case 0x22B878u: goto label_22b878;
            case 0x22B87Cu: goto label_22b87c;
            case 0x22B880u: goto label_22b880;
            case 0x22B884u: goto label_22b884;
            case 0x22B888u: goto label_22b888;
            case 0x22B88Cu: goto label_22b88c;
            case 0x22B890u: goto label_22b890;
            case 0x22B894u: goto label_22b894;
            case 0x22B898u: goto label_22b898;
            case 0x22B89Cu: goto label_22b89c;
            case 0x22B8A0u: goto label_22b8a0;
            case 0x22B8A4u: goto label_22b8a4;
            case 0x22B8A8u: goto label_22b8a8;
            case 0x22B8ACu: goto label_22b8ac;
            case 0x22B8B0u: goto label_22b8b0;
            case 0x22B8B4u: goto label_22b8b4;
            case 0x22B8B8u: goto label_22b8b8;
            case 0x22B8BCu: goto label_22b8bc;
            case 0x22B8C0u: goto label_22b8c0;
            case 0x22B8C4u: goto label_22b8c4;
            case 0x22B8C8u: goto label_22b8c8;
            case 0x22B8CCu: goto label_22b8cc;
            case 0x22B8D0u: goto label_22b8d0;
            case 0x22B8D4u: goto label_22b8d4;
            case 0x22B8D8u: goto label_22b8d8;
            case 0x22B8DCu: goto label_22b8dc;
            case 0x22B8E0u: goto label_22b8e0;
            case 0x22B8E4u: goto label_22b8e4;
            case 0x22B8E8u: goto label_22b8e8;
            case 0x22B8ECu: goto label_22b8ec;
            case 0x22B8F0u: goto label_22b8f0;
            case 0x22B8F4u: goto label_22b8f4;
            case 0x22B8F8u: goto label_22b8f8;
            case 0x22B8FCu: goto label_22b8fc;
            case 0x22B900u: goto label_22b900;
            case 0x22B904u: goto label_22b904;
            case 0x22B908u: goto label_22b908;
            case 0x22B90Cu: goto label_22b90c;
            case 0x22B910u: goto label_22b910;
            case 0x22B914u: goto label_22b914;
            case 0x22B918u: goto label_22b918;
            case 0x22B91Cu: goto label_22b91c;
            case 0x22B920u: goto label_22b920;
            case 0x22B924u: goto label_22b924;
            case 0x22B928u: goto label_22b928;
            case 0x22B92Cu: goto label_22b92c;
            case 0x22B930u: goto label_22b930;
            case 0x22B934u: goto label_22b934;
            case 0x22B938u: goto label_22b938;
            case 0x22B93Cu: goto label_22b93c;
            case 0x22B940u: goto label_22b940;
            case 0x22B944u: goto label_22b944;
            case 0x22B948u: goto label_22b948;
            case 0x22B94Cu: goto label_22b94c;
            case 0x22B950u: goto label_22b950;
            case 0x22B954u: goto label_22b954;
            case 0x22B958u: goto label_22b958;
            case 0x22B95Cu: goto label_22b95c;
            case 0x22B960u: goto label_22b960;
            case 0x22B964u: goto label_22b964;
            case 0x22B968u: goto label_22b968;
            case 0x22B96Cu: goto label_22b96c;
            case 0x22B970u: goto label_22b970;
            case 0x22B974u: goto label_22b974;
            case 0x22B978u: goto label_22b978;
            case 0x22B97Cu: goto label_22b97c;
            case 0x22B980u: goto label_22b980;
            case 0x22B984u: goto label_22b984;
            case 0x22B988u: goto label_22b988;
            case 0x22B98Cu: goto label_22b98c;
            case 0x22B990u: goto label_22b990;
            case 0x22B994u: goto label_22b994;
            case 0x22B998u: goto label_22b998;
            case 0x22B99Cu: goto label_22b99c;
            case 0x22B9A0u: goto label_22b9a0;
            case 0x22B9A4u: goto label_22b9a4;
            case 0x22B9A8u: goto label_22b9a8;
            case 0x22B9ACu: goto label_22b9ac;
            case 0x22B9B0u: goto label_22b9b0;
            case 0x22B9B4u: goto label_22b9b4;
            case 0x22B9B8u: goto label_22b9b8;
            case 0x22B9BCu: goto label_22b9bc;
            case 0x22B9C0u: goto label_22b9c0;
            case 0x22B9C4u: goto label_22b9c4;
            case 0x22B9C8u: goto label_22b9c8;
            case 0x22B9CCu: goto label_22b9cc;
            case 0x22B9D0u: goto label_22b9d0;
            case 0x22B9D4u: goto label_22b9d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B3FCu;
label_22b3fc:
    // 0x22b3fc: 0x3c020033
    ctx->pc = 0x22b3fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22b400:
    // 0x22b400: 0x2452cb70
    ctx->pc = 0x22b400u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b404:
    // 0x22b404: 0x2402001c
    ctx->pc = 0x22b404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b408:
    // 0x22b408: 0x2628818
    ctx->pc = 0x22b408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b40c:
    // 0x22b40c: 0x2321021
    ctx->pc = 0x22b40cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_22b410:
    // 0x22b410: 0xac400000
    ctx->pc = 0x22b410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_22b414:
    // 0x22b414: 0x26420014
    ctx->pc = 0x22b414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 20));
label_22b418:
    // 0x22b418: 0x2228021
    ctx->pc = 0x22b418u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22b41c:
    // 0x22b41c: 0x8e040000
    ctx->pc = 0x22b41cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b420:
    // 0x22b420: 0x10800163
label_22b424:
    if (ctx->pc == 0x22B424u) {
        ctx->pc = 0x22B424u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x22B428u;
        goto label_22b428;
    }
    ctx->pc = 0x22B420u;
    {
        const bool branch_taken_0x22b420 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B424u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x22b420) {
            ctx->pc = 0x22B9B0u;
            goto label_22b9b0;
        }
    }
    ctx->pc = 0x22B428u;
label_22b428:
    // 0x22b428: 0xc0b0b38
label_22b42c:
    if (ctx->pc == 0x22B42Cu) {
        ctx->pc = 0x22B430u;
        goto label_22b430;
    }
    ctx->pc = 0x22B428u;
    SET_GPR_U32(ctx, 31, 0x22B430u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B430u; }
    }
    if (ctx->pc != 0x22B430u) { return; }
    ctx->pc = 0x22B430u;
label_22b430:
    // 0x22b430: 0xae000000
    ctx->pc = 0x22b430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_22b434:
    // 0x22b434: 0x26500018
    ctx->pc = 0x22b434u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 24));
label_22b438:
    // 0x22b438: 0x2308021
    ctx->pc = 0x22b438u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b43c:
    // 0x22b43c: 0xc0b0b38
label_22b440:
    if (ctx->pc == 0x22B440u) {
        ctx->pc = 0x22B440u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x22B444u;
        goto label_22b444;
    }
    ctx->pc = 0x22B43Cu;
    SET_GPR_U32(ctx, 31, 0x22B444u);
    ctx->pc = 0x22B440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B444u; }
    }
    if (ctx->pc != 0x22B444u) { return; }
    ctx->pc = 0x22B444u;
label_22b444:
    // 0x22b444: 0x1000015a
label_22b448:
    if (ctx->pc == 0x22B448u) {
        ctx->pc = 0x22B448u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x22B44Cu;
        goto label_22b44c;
    }
    ctx->pc = 0x22B444u;
    {
        const bool branch_taken_0x22b444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B448u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x22b444) {
            ctx->pc = 0x22B9B0u;
            goto label_22b9b0;
        }
    }
    ctx->pc = 0x22B44Cu;
label_22b44c:
    // 0x22b44c: 0x3c020033
    ctx->pc = 0x22b44cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22b450:
    // 0x22b450: 0x2451cb70
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b454:
    // 0x22b454: 0x2402001c
    ctx->pc = 0x22b454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b458:
    // 0x22b458: 0x2628018
    ctx->pc = 0x22b458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b45c:
    // 0x22b45c: 0x2301021
    ctx->pc = 0x22b45cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b460:
    // 0x22b460: 0x8c440014
    ctx->pc = 0x22b460u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_22b464:
    // 0x22b464: 0x10800151
label_22b468:
    if (ctx->pc == 0x22B468u) {
        ctx->pc = 0x22B468u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B46Cu;
        goto label_22b46c;
    }
    ctx->pc = 0x22B464u;
    {
        const bool branch_taken_0x22b464 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B468u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22b464) {
            ctx->pc = 0x22B9ACu;
            goto label_22b9ac;
        }
    }
    ctx->pc = 0x22B46Cu;
label_22b46c:
    // 0x22b46c: 0x27a60020
    ctx->pc = 0x22b46cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
label_22b470:
    // 0x22b470: 0xc0b0e24
label_22b474:
    if (ctx->pc == 0x22B474u) {
        ctx->pc = 0x22B474u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B478u;
        goto label_22b478;
    }
    ctx->pc = 0x22B470u;
    SET_GPR_U32(ctx, 31, 0x22B478u);
    ctx->pc = 0x22B474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetPos_0x2c3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B478u; }
    }
    if (ctx->pc != 0x22B478u) { return; }
    ctx->pc = 0x22B478u;
label_22b478:
    // 0x22b478: 0x3c030031
    ctx->pc = 0x22b478u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_22b47c:
    // 0x22b47c: 0x8fa20020
    ctx->pc = 0x22b47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22b480:
    // 0x22b480: 0x8c63ffbc
    ctx->pc = 0x22b480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_22b484:
    // 0x22b484: 0x431021
    ctx->pc = 0x22b484u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b488:
    // 0x22b488: 0xafa20020
    ctx->pc = 0x22b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_22b48c:
    // 0x22b48c: 0x28420190
    ctx->pc = 0x22b48cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 400));
label_22b490:
    // 0x22b490: 0x5440002f
label_22b494:
    if (ctx->pc == 0x22B494u) {
        ctx->pc = 0x22B494u;
        SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
        ctx->pc = 0x22B498u;
        goto label_22b498;
    }
    ctx->pc = 0x22B490u;
    {
        const bool branch_taken_0x22b490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22b490) {
            ctx->pc = 0x22B494u;
            SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
            ctx->pc = 0x22B550u;
            goto label_22b550;
        }
    }
    ctx->pc = 0x22B498u;
label_22b498:
    // 0x22b498: 0x2111821
    ctx->pc = 0x22b498u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b49c:
    // 0x22b49c: 0x2402ffff
    ctx->pc = 0x22b49cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_22b4a0:
    // 0x22b4a0: 0x1000002a
label_22b4a4:
    if (ctx->pc == 0x22B4A4u) {
        ctx->pc = 0x22B4A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22B4A8u;
        goto label_22b4a8;
    }
    ctx->pc = 0x22B4A0u;
    {
        const bool branch_taken_0x22b4a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B4A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x22b4a0) {
            ctx->pc = 0x22B54Cu;
            goto label_22b54c;
        }
    }
    ctx->pc = 0x22B4A8u;
label_22b4a8:
    // 0x22b4a8: 0x3c020033
    ctx->pc = 0x22b4a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22b4ac:
    // 0x22b4ac: 0x2446cb70
    ctx->pc = 0x22b4acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b4b0:
    // 0x22b4b0: 0x2402001c
    ctx->pc = 0x22b4b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b4b4:
    // 0x22b4b4: 0x2622818
    ctx->pc = 0x22b4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b4b8:
    // 0x22b4b8: 0x24c40010
    ctx->pc = 0x22b4b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
label_22b4bc:
    // 0x22b4bc: 0xa42021
    ctx->pc = 0x22b4bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22b4c0:
    // 0x22b4c0: 0x3c020031
    ctx->pc = 0x22b4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_22b4c4:
    // 0x22b4c4: 0x8c830000
    ctx->pc = 0x22b4c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b4c8:
    // 0x22b4c8: 0x8c42ffbc
    ctx->pc = 0x22b4c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_22b4cc:
    // 0x22b4cc: 0x621823
    ctx->pc = 0x22b4ccu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b4d0:
    // 0x22b4d0: 0x1c600136
label_22b4d4:
    if (ctx->pc == 0x22B4D4u) {
        ctx->pc = 0x22B4D4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x22B4D8u;
        goto label_22b4d8;
    }
    ctx->pc = 0x22B4D0u;
    {
        const bool branch_taken_0x22b4d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x22B4D4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x22b4d0) {
            ctx->pc = 0x22B9ACu;
            goto label_22b9ac;
        }
    }
    ctx->pc = 0x22B4D8u;
label_22b4d8:
    // 0x22b4d8: 0x10000131
label_22b4dc:
    if (ctx->pc == 0x22B4DCu) {
        ctx->pc = 0x22B4DCu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->pc = 0x22B4E0u;
        goto label_22b4e0;
    }
    ctx->pc = 0x22B4D8u;
    {
        const bool branch_taken_0x22b4d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B4DCu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x22b4d8) {
            ctx->pc = 0x22B9A0u;
            goto label_22b9a0;
        }
    }
    ctx->pc = 0x22B4E0u;
label_22b4e0:
    // 0x22b4e0: 0x3c020033
    ctx->pc = 0x22b4e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22b4e4:
    // 0x22b4e4: 0x2451cb70
    ctx->pc = 0x22b4e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b4e8:
    // 0x22b4e8: 0x2402001c
    ctx->pc = 0x22b4e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b4ec:
    // 0x22b4ec: 0x2628018
    ctx->pc = 0x22b4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b4f0:
    // 0x22b4f0: 0x2301021
    ctx->pc = 0x22b4f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b4f4:
    // 0x22b4f4: 0x8c440014
    ctx->pc = 0x22b4f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_22b4f8:
    // 0x22b4f8: 0x1080012c
label_22b4fc:
    if (ctx->pc == 0x22B4FCu) {
        ctx->pc = 0x22B4FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B500u;
        goto label_22b500;
    }
    ctx->pc = 0x22B4F8u;
    {
        const bool branch_taken_0x22b4f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B4FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22b4f8) {
            ctx->pc = 0x22B9ACu;
            goto label_22b9ac;
        }
    }
    ctx->pc = 0x22B500u;
label_22b500:
    // 0x22b500: 0x27a60020
    ctx->pc = 0x22b500u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
label_22b504:
    // 0x22b504: 0xc0b0e24
label_22b508:
    if (ctx->pc == 0x22B508u) {
        ctx->pc = 0x22B508u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B50Cu;
        goto label_22b50c;
    }
    ctx->pc = 0x22B504u;
    SET_GPR_U32(ctx, 31, 0x22B50Cu);
    ctx->pc = 0x22B508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetPos_0x2c3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B50Cu; }
    }
    if (ctx->pc != 0x22B50Cu) { return; }
    ctx->pc = 0x22B50Cu;
label_22b50c:
    // 0x22b50c: 0x3c030031
    ctx->pc = 0x22b50cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_22b510:
    // 0x22b510: 0x8fa20020
    ctx->pc = 0x22b510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22b514:
    // 0x22b514: 0x8c63ffbc
    ctx->pc = 0x22b514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_22b518:
    // 0x22b518: 0x431023
    ctx->pc = 0x22b518u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b51c:
    // 0x22b51c: 0xafa20020
    ctx->pc = 0x22b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_22b520:
    // 0x22b520: 0x28420131
    ctx->pc = 0x22b520u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 305));
label_22b524:
    // 0x22b524: 0x10400009
label_22b528:
    if (ctx->pc == 0x22B528u) {
        ctx->pc = 0x22B528u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x22B52Cu;
        goto label_22b52c;
    }
    ctx->pc = 0x22B524u;
    {
        const bool branch_taken_0x22b524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B528u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
        if (branch_taken_0x22b524) {
            ctx->pc = 0x22B54Cu;
            goto label_22b54c;
        }
    }
    ctx->pc = 0x22B52Cu;
label_22b52c:
    // 0x22b52c: 0xafa20020
    ctx->pc = 0x22b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_22b530:
    // 0x22b530: 0x2111821
    ctx->pc = 0x22b530u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b534:
    // 0x22b534: 0x8c620000
    ctx->pc = 0x22b534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b538:
    // 0x22b538: 0x24420001
    ctx->pc = 0x22b538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_22b53c:
    // 0x22b53c: 0xac620000
    ctx->pc = 0x22b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22b540:
    // 0x22b540: 0x2301821
    ctx->pc = 0x22b540u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b544:
    // 0x22b544: 0x2402005a
    ctx->pc = 0x22b544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
label_22b548:
    // 0x22b548: 0xac620010
    ctx->pc = 0x22b548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_22b54c:
    // 0x22b54c: 0x3c110033
    ctx->pc = 0x22b54cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
label_22b550:
    // 0x22b550: 0x2631cb70
    ctx->pc = 0x22b550u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294953840));
label_22b554:
    // 0x22b554: 0x2410001c
    ctx->pc = 0x22b554u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 28));
label_22b558:
    // 0x22b558: 0x2708018
    ctx->pc = 0x22b558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b55c:
    // 0x22b55c: 0x2301021
    ctx->pc = 0x22b55cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b560:
    // 0x22b560: 0x8c440014
    ctx->pc = 0x22b560u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_22b564:
    // 0x22b564: 0xc0b0dc6
label_22b568:
    if (ctx->pc == 0x22B568u) {
        ctx->pc = 0x22B568u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x22B56Cu;
        goto label_22b56c;
    }
    ctx->pc = 0x22B564u;
    SET_GPR_U32(ctx, 31, 0x22B56Cu);
    ctx->pc = 0x22B568u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B56Cu; }
    }
    if (ctx->pc != 0x22B56Cu) { return; }
    ctx->pc = 0x22B56Cu;
label_22b56c:
    // 0x22b56c: 0x2308821
    ctx->pc = 0x22b56cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b570:
    // 0x22b570: 0x8fa50020
    ctx->pc = 0x22b570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22b574:
    // 0x22b574: 0x8e240018
    ctx->pc = 0x22b574u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22b578:
    // 0x22b578: 0xc0b0dc6
label_22b57c:
    if (ctx->pc == 0x22B57Cu) {
        ctx->pc = 0x22B57Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x22B580u;
        goto label_22b580;
    }
    ctx->pc = 0x22B578u;
    SET_GPR_U32(ctx, 31, 0x22B580u);
    ctx->pc = 0x22B57Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B580u; }
    }
    if (ctx->pc != 0x22B580u) { return; }
    ctx->pc = 0x22B580u;
label_22b580:
    // 0x22b580: 0x1000010b
label_22b584:
    if (ctx->pc == 0x22B584u) {
        ctx->pc = 0x22B584u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x22B588u;
        goto label_22b588;
    }
    ctx->pc = 0x22B580u;
    {
        const bool branch_taken_0x22b580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B584u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x22b580) {
            ctx->pc = 0x22B9B0u;
            goto label_22b9b0;
        }
    }
    ctx->pc = 0x22B588u;
label_22b588:
    // 0x22b588: 0x3c030032
    ctx->pc = 0x22b588u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_22b58c:
    // 0x22b58c: 0x246315d0
    ctx->pc = 0x22b58cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5584));
label_22b590:
    // 0x22b590: 0x51040
    ctx->pc = 0x22b590u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
label_22b594:
    // 0x22b594: 0x431021
    ctx->pc = 0x22b594u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b598:
    // 0x22b598: 0x94520000
    ctx->pc = 0x22b598u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22b59c:
    // 0x22b59c: 0x3a0202d
    ctx->pc = 0x22b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b5a0:
    // 0x22b5a0: 0x3c05003a
    ctx->pc = 0x22b5a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_22b5a4:
    // 0x22b5a4: 0xc0b6252
label_22b5a8:
    if (ctx->pc == 0x22B5A8u) {
        ctx->pc = 0x22B5A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29200));
        ctx->pc = 0x22B5ACu;
        goto label_22b5ac;
    }
    ctx->pc = 0x22B5A4u;
    SET_GPR_U32(ctx, 31, 0x22B5ACu);
    ctx->pc = 0x22B5A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29200));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5ACu; }
    }
    if (ctx->pc != 0x22B5ACu) { return; }
    ctx->pc = 0x22B5ACu;
label_22b5ac:
    // 0x22b5ac: 0x3c030033
    ctx->pc = 0x22b5acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_22b5b0:
    // 0x22b5b0: 0x2463cb70
    ctx->pc = 0x22b5b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953840));
label_22b5b4:
    // 0x22b5b4: 0x2402001c
    ctx->pc = 0x22b5b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b5b8:
    // 0x22b5b8: 0x2621018
    ctx->pc = 0x22b5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b5bc:
    // 0x22b5bc: 0x621821
    ctx->pc = 0x22b5bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b5c0:
    // 0x22b5c0: 0x8c620008
    ctx->pc = 0x22b5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_22b5c4:
    // 0x22b5c4: 0x2443ffff
    ctx->pc = 0x22b5c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_22b5c8:
    // 0x22b5c8: 0x2c620010
    ctx->pc = 0x22b5c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_22b5cc:
    // 0x22b5cc: 0x104000c4
label_22b5d0:
    if (ctx->pc == 0x22B5D0u) {
        ctx->pc = 0x22B5D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x22B5D4u;
        goto label_22b5d4;
    }
    ctx->pc = 0x22B5CCu;
    {
        const bool branch_taken_0x22b5cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B5D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x22b5cc) {
            ctx->pc = 0x22B8E0u;
            goto label_22b8e0;
        }
    }
    ctx->pc = 0x22B5D4u;
label_22b5d4:
    // 0x22b5d4: 0x244272d0
    ctx->pc = 0x22b5d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29392));
label_22b5d8:
    // 0x22b5d8: 0x31880
    ctx->pc = 0x22b5d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_22b5dc:
    // 0x22b5dc: 0x621821
    ctx->pc = 0x22b5dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b5e0:
    // 0x22b5e0: 0x8c620000
    ctx->pc = 0x22b5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b5e4:
    // 0x22b5e4: 0x400008
label_22b5e8:
    if (ctx->pc == 0x22B5E8u) {
        ctx->pc = 0x22B5ECu;
        goto label_22b5ec;
    }
    ctx->pc = 0x22B5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B398u: goto label_22b398;
            case 0x22B39Cu: goto label_22b39c;
            case 0x22B3A0u: goto label_22b3a0;
            case 0x22B3A4u: goto label_22b3a4;
            case 0x22B3A8u: goto label_22b3a8;
            case 0x22B3ACu: goto label_22b3ac;
            case 0x22B3B0u: goto label_22b3b0;
            case 0x22B3B4u: goto label_22b3b4;
            case 0x22B3B8u: goto label_22b3b8;
            case 0x22B3BCu: goto label_22b3bc;
            case 0x22B3C0u: goto label_22b3c0;
            case 0x22B3C4u: goto label_22b3c4;
            case 0x22B3C8u: goto label_22b3c8;
            case 0x22B3CCu: goto label_22b3cc;
            case 0x22B3D0u: goto label_22b3d0;
            case 0x22B3D4u: goto label_22b3d4;
            case 0x22B3D8u: goto label_22b3d8;
            case 0x22B3DCu: goto label_22b3dc;
            case 0x22B3E0u: goto label_22b3e0;
            case 0x22B3E4u: goto label_22b3e4;
            case 0x22B3E8u: goto label_22b3e8;
            case 0x22B3ECu: goto label_22b3ec;
            case 0x22B3F0u: goto label_22b3f0;
            case 0x22B3F4u: goto label_22b3f4;
            case 0x22B3F8u: goto label_22b3f8;
            case 0x22B3FCu: goto label_22b3fc;
            case 0x22B400u: goto label_22b400;
            case 0x22B404u: goto label_22b404;
            case 0x22B408u: goto label_22b408;
            case 0x22B40Cu: goto label_22b40c;
            case 0x22B410u: goto label_22b410;
            case 0x22B414u: goto label_22b414;
            case 0x22B418u: goto label_22b418;
            case 0x22B41Cu: goto label_22b41c;
            case 0x22B420u: goto label_22b420;
            case 0x22B424u: goto label_22b424;
            case 0x22B428u: goto label_22b428;
            case 0x22B42Cu: goto label_22b42c;
            case 0x22B430u: goto label_22b430;
            case 0x22B434u: goto label_22b434;
            case 0x22B438u: goto label_22b438;
            case 0x22B43Cu: goto label_22b43c;
            case 0x22B440u: goto label_22b440;
            case 0x22B444u: goto label_22b444;
            case 0x22B448u: goto label_22b448;
            case 0x22B44Cu: goto label_22b44c;
            case 0x22B450u: goto label_22b450;
            case 0x22B454u: goto label_22b454;
            case 0x22B458u: goto label_22b458;
            case 0x22B45Cu: goto label_22b45c;
            case 0x22B460u: goto label_22b460;
            case 0x22B464u: goto label_22b464;
            case 0x22B468u: goto label_22b468;
            case 0x22B46Cu: goto label_22b46c;
            case 0x22B470u: goto label_22b470;
            case 0x22B474u: goto label_22b474;
            case 0x22B478u: goto label_22b478;
            case 0x22B47Cu: goto label_22b47c;
            case 0x22B480u: goto label_22b480;
            case 0x22B484u: goto label_22b484;
            case 0x22B488u: goto label_22b488;
            case 0x22B48Cu: goto label_22b48c;
            case 0x22B490u: goto label_22b490;
            case 0x22B494u: goto label_22b494;
            case 0x22B498u: goto label_22b498;
            case 0x22B49Cu: goto label_22b49c;
            case 0x22B4A0u: goto label_22b4a0;
            case 0x22B4A4u: goto label_22b4a4;
            case 0x22B4A8u: goto label_22b4a8;
            case 0x22B4ACu: goto label_22b4ac;
            case 0x22B4B0u: goto label_22b4b0;
            case 0x22B4B4u: goto label_22b4b4;
            case 0x22B4B8u: goto label_22b4b8;
            case 0x22B4BCu: goto label_22b4bc;
            case 0x22B4C0u: goto label_22b4c0;
            case 0x22B4C4u: goto label_22b4c4;
            case 0x22B4C8u: goto label_22b4c8;
            case 0x22B4CCu: goto label_22b4cc;
            case 0x22B4D0u: goto label_22b4d0;
            case 0x22B4D4u: goto label_22b4d4;
            case 0x22B4D8u: goto label_22b4d8;
            case 0x22B4DCu: goto label_22b4dc;
            case 0x22B4E0u: goto label_22b4e0;
            case 0x22B4E4u: goto label_22b4e4;
            case 0x22B4E8u: goto label_22b4e8;
            case 0x22B4ECu: goto label_22b4ec;
            case 0x22B4F0u: goto label_22b4f0;
            case 0x22B4F4u: goto label_22b4f4;
            case 0x22B4F8u: goto label_22b4f8;
            case 0x22B4FCu: goto label_22b4fc;
            case 0x22B500u: goto label_22b500;
            case 0x22B504u: goto label_22b504;
            case 0x22B508u: goto label_22b508;
            case 0x22B50Cu: goto label_22b50c;
            case 0x22B510u: goto label_22b510;
            case 0x22B514u: goto label_22b514;
            case 0x22B518u: goto label_22b518;
            case 0x22B51Cu: goto label_22b51c;
            case 0x22B520u: goto label_22b520;
            case 0x22B524u: goto label_22b524;
            case 0x22B528u: goto label_22b528;
            case 0x22B52Cu: goto label_22b52c;
            case 0x22B530u: goto label_22b530;
            case 0x22B534u: goto label_22b534;
            case 0x22B538u: goto label_22b538;
            case 0x22B53Cu: goto label_22b53c;
            case 0x22B540u: goto label_22b540;
            case 0x22B544u: goto label_22b544;
            case 0x22B548u: goto label_22b548;
            case 0x22B54Cu: goto label_22b54c;
            case 0x22B550u: goto label_22b550;
            case 0x22B554u: goto label_22b554;
            case 0x22B558u: goto label_22b558;
            case 0x22B55Cu: goto label_22b55c;
            case 0x22B560u: goto label_22b560;
            case 0x22B564u: goto label_22b564;
            case 0x22B568u: goto label_22b568;
            case 0x22B56Cu: goto label_22b56c;
            case 0x22B570u: goto label_22b570;
            case 0x22B574u: goto label_22b574;
            case 0x22B578u: goto label_22b578;
            case 0x22B57Cu: goto label_22b57c;
            case 0x22B580u: goto label_22b580;
            case 0x22B584u: goto label_22b584;
            case 0x22B588u: goto label_22b588;
            case 0x22B58Cu: goto label_22b58c;
            case 0x22B590u: goto label_22b590;
            case 0x22B594u: goto label_22b594;
            case 0x22B598u: goto label_22b598;
            case 0x22B59Cu: goto label_22b59c;
            case 0x22B5A0u: goto label_22b5a0;
            case 0x22B5A4u: goto label_22b5a4;
            case 0x22B5A8u: goto label_22b5a8;
            case 0x22B5ACu: goto label_22b5ac;
            case 0x22B5B0u: goto label_22b5b0;
            case 0x22B5B4u: goto label_22b5b4;
            case 0x22B5B8u: goto label_22b5b8;
            case 0x22B5BCu: goto label_22b5bc;
            case 0x22B5C0u: goto label_22b5c0;
            case 0x22B5C4u: goto label_22b5c4;
            case 0x22B5C8u: goto label_22b5c8;
            case 0x22B5CCu: goto label_22b5cc;
            case 0x22B5D0u: goto label_22b5d0;
            case 0x22B5D4u: goto label_22b5d4;
            case 0x22B5D8u: goto label_22b5d8;
            case 0x22B5DCu: goto label_22b5dc;
            case 0x22B5E0u: goto label_22b5e0;
            case 0x22B5E4u: goto label_22b5e4;
            case 0x22B5E8u: goto label_22b5e8;
            case 0x22B5ECu: goto label_22b5ec;
            case 0x22B5F0u: goto label_22b5f0;
            case 0x22B5F4u: goto label_22b5f4;
            case 0x22B5F8u: goto label_22b5f8;
            case 0x22B5FCu: goto label_22b5fc;
            case 0x22B600u: goto label_22b600;
            case 0x22B604u: goto label_22b604;
            case 0x22B608u: goto label_22b608;
            case 0x22B60Cu: goto label_22b60c;
            case 0x22B610u: goto label_22b610;
            case 0x22B614u: goto label_22b614;
            case 0x22B618u: goto label_22b618;
            case 0x22B61Cu: goto label_22b61c;
            case 0x22B620u: goto label_22b620;
            case 0x22B624u: goto label_22b624;
            case 0x22B628u: goto label_22b628;
            case 0x22B62Cu: goto label_22b62c;
            case 0x22B630u: goto label_22b630;
            case 0x22B634u: goto label_22b634;
            case 0x22B638u: goto label_22b638;
            case 0x22B63Cu: goto label_22b63c;
            case 0x22B640u: goto label_22b640;
            case 0x22B644u: goto label_22b644;
            case 0x22B648u: goto label_22b648;
            case 0x22B64Cu: goto label_22b64c;
            case 0x22B650u: goto label_22b650;
            case 0x22B654u: goto label_22b654;
            case 0x22B658u: goto label_22b658;
            case 0x22B65Cu: goto label_22b65c;
            case 0x22B660u: goto label_22b660;
            case 0x22B664u: goto label_22b664;
            case 0x22B668u: goto label_22b668;
            case 0x22B66Cu: goto label_22b66c;
            case 0x22B670u: goto label_22b670;
            case 0x22B674u: goto label_22b674;
            case 0x22B678u: goto label_22b678;
            case 0x22B67Cu: goto label_22b67c;
            case 0x22B680u: goto label_22b680;
            case 0x22B684u: goto label_22b684;
            case 0x22B688u: goto label_22b688;
            case 0x22B68Cu: goto label_22b68c;
            case 0x22B690u: goto label_22b690;
            case 0x22B694u: goto label_22b694;
            case 0x22B698u: goto label_22b698;
            case 0x22B69Cu: goto label_22b69c;
            case 0x22B6A0u: goto label_22b6a0;
            case 0x22B6A4u: goto label_22b6a4;
            case 0x22B6A8u: goto label_22b6a8;
            case 0x22B6ACu: goto label_22b6ac;
            case 0x22B6B0u: goto label_22b6b0;
            case 0x22B6B4u: goto label_22b6b4;
            case 0x22B6B8u: goto label_22b6b8;
            case 0x22B6BCu: goto label_22b6bc;
            case 0x22B6C0u: goto label_22b6c0;
            case 0x22B6C4u: goto label_22b6c4;
            case 0x22B6C8u: goto label_22b6c8;
            case 0x22B6CCu: goto label_22b6cc;
            case 0x22B6D0u: goto label_22b6d0;
            case 0x22B6D4u: goto label_22b6d4;
            case 0x22B6D8u: goto label_22b6d8;
            case 0x22B6DCu: goto label_22b6dc;
            case 0x22B6E0u: goto label_22b6e0;
            case 0x22B6E4u: goto label_22b6e4;
            case 0x22B6E8u: goto label_22b6e8;
            case 0x22B6ECu: goto label_22b6ec;
            case 0x22B6F0u: goto label_22b6f0;
            case 0x22B6F4u: goto label_22b6f4;
            case 0x22B6F8u: goto label_22b6f8;
            case 0x22B6FCu: goto label_22b6fc;
            case 0x22B700u: goto label_22b700;
            case 0x22B704u: goto label_22b704;
            case 0x22B708u: goto label_22b708;
            case 0x22B70Cu: goto label_22b70c;
            case 0x22B710u: goto label_22b710;
            case 0x22B714u: goto label_22b714;
            case 0x22B718u: goto label_22b718;
            case 0x22B71Cu: goto label_22b71c;
            case 0x22B720u: goto label_22b720;
            case 0x22B724u: goto label_22b724;
            case 0x22B728u: goto label_22b728;
            case 0x22B72Cu: goto label_22b72c;
            case 0x22B730u: goto label_22b730;
            case 0x22B734u: goto label_22b734;
            case 0x22B738u: goto label_22b738;
            case 0x22B73Cu: goto label_22b73c;
            case 0x22B740u: goto label_22b740;
            case 0x22B744u: goto label_22b744;
            case 0x22B748u: goto label_22b748;
            case 0x22B74Cu: goto label_22b74c;
            case 0x22B750u: goto label_22b750;
            case 0x22B754u: goto label_22b754;
            case 0x22B758u: goto label_22b758;
            case 0x22B75Cu: goto label_22b75c;
            case 0x22B760u: goto label_22b760;
            case 0x22B764u: goto label_22b764;
            case 0x22B768u: goto label_22b768;
            case 0x22B76Cu: goto label_22b76c;
            case 0x22B770u: goto label_22b770;
            case 0x22B774u: goto label_22b774;
            case 0x22B778u: goto label_22b778;
            case 0x22B77Cu: goto label_22b77c;
            case 0x22B780u: goto label_22b780;
            case 0x22B784u: goto label_22b784;
            case 0x22B788u: goto label_22b788;
            case 0x22B78Cu: goto label_22b78c;
            case 0x22B790u: goto label_22b790;
            case 0x22B794u: goto label_22b794;
            case 0x22B798u: goto label_22b798;
            case 0x22B79Cu: goto label_22b79c;
            case 0x22B7A0u: goto label_22b7a0;
            case 0x22B7A4u: goto label_22b7a4;
            case 0x22B7A8u: goto label_22b7a8;
            case 0x22B7ACu: goto label_22b7ac;
            case 0x22B7B0u: goto label_22b7b0;
            case 0x22B7B4u: goto label_22b7b4;
            case 0x22B7B8u: goto label_22b7b8;
            case 0x22B7BCu: goto label_22b7bc;
            case 0x22B7C0u: goto label_22b7c0;
            case 0x22B7C4u: goto label_22b7c4;
            case 0x22B7C8u: goto label_22b7c8;
            case 0x22B7CCu: goto label_22b7cc;
            case 0x22B7D0u: goto label_22b7d0;
            case 0x22B7D4u: goto label_22b7d4;
            case 0x22B7D8u: goto label_22b7d8;
            case 0x22B7DCu: goto label_22b7dc;
            case 0x22B7E0u: goto label_22b7e0;
            case 0x22B7E4u: goto label_22b7e4;
            case 0x22B7E8u: goto label_22b7e8;
            case 0x22B7ECu: goto label_22b7ec;
            case 0x22B7F0u: goto label_22b7f0;
            case 0x22B7F4u: goto label_22b7f4;
            case 0x22B7F8u: goto label_22b7f8;
            case 0x22B7FCu: goto label_22b7fc;
            case 0x22B800u: goto label_22b800;
            case 0x22B804u: goto label_22b804;
            case 0x22B808u: goto label_22b808;
            case 0x22B80Cu: goto label_22b80c;
            case 0x22B810u: goto label_22b810;
            case 0x22B814u: goto label_22b814;
            case 0x22B818u: goto label_22b818;
            case 0x22B81Cu: goto label_22b81c;
            case 0x22B820u: goto label_22b820;
            case 0x22B824u: goto label_22b824;
            case 0x22B828u: goto label_22b828;
            case 0x22B82Cu: goto label_22b82c;
            case 0x22B830u: goto label_22b830;
            case 0x22B834u: goto label_22b834;
            case 0x22B838u: goto label_22b838;
            case 0x22B83Cu: goto label_22b83c;
            case 0x22B840u: goto label_22b840;
            case 0x22B844u: goto label_22b844;
            case 0x22B848u: goto label_22b848;
            case 0x22B84Cu: goto label_22b84c;
            case 0x22B850u: goto label_22b850;
            case 0x22B854u: goto label_22b854;
            case 0x22B858u: goto label_22b858;
            case 0x22B85Cu: goto label_22b85c;
            case 0x22B860u: goto label_22b860;
            case 0x22B864u: goto label_22b864;
            case 0x22B868u: goto label_22b868;
            case 0x22B86Cu: goto label_22b86c;
            case 0x22B870u: goto label_22b870;
            case 0x22B874u: goto label_22b874;
            case 0x22B878u: goto label_22b878;
            case 0x22B87Cu: goto label_22b87c;
            case 0x22B880u: goto label_22b880;
            case 0x22B884u: goto label_22b884;
            case 0x22B888u: goto label_22b888;
            case 0x22B88Cu: goto label_22b88c;
            case 0x22B890u: goto label_22b890;
            case 0x22B894u: goto label_22b894;
            case 0x22B898u: goto label_22b898;
            case 0x22B89Cu: goto label_22b89c;
            case 0x22B8A0u: goto label_22b8a0;
            case 0x22B8A4u: goto label_22b8a4;
            case 0x22B8A8u: goto label_22b8a8;
            case 0x22B8ACu: goto label_22b8ac;
            case 0x22B8B0u: goto label_22b8b0;
            case 0x22B8B4u: goto label_22b8b4;
            case 0x22B8B8u: goto label_22b8b8;
            case 0x22B8BCu: goto label_22b8bc;
            case 0x22B8C0u: goto label_22b8c0;
            case 0x22B8C4u: goto label_22b8c4;
            case 0x22B8C8u: goto label_22b8c8;
            case 0x22B8CCu: goto label_22b8cc;
            case 0x22B8D0u: goto label_22b8d0;
            case 0x22B8D4u: goto label_22b8d4;
            case 0x22B8D8u: goto label_22b8d8;
            case 0x22B8DCu: goto label_22b8dc;
            case 0x22B8E0u: goto label_22b8e0;
            case 0x22B8E4u: goto label_22b8e4;
            case 0x22B8E8u: goto label_22b8e8;
            case 0x22B8ECu: goto label_22b8ec;
            case 0x22B8F0u: goto label_22b8f0;
            case 0x22B8F4u: goto label_22b8f4;
            case 0x22B8F8u: goto label_22b8f8;
            case 0x22B8FCu: goto label_22b8fc;
            case 0x22B900u: goto label_22b900;
            case 0x22B904u: goto label_22b904;
            case 0x22B908u: goto label_22b908;
            case 0x22B90Cu: goto label_22b90c;
            case 0x22B910u: goto label_22b910;
            case 0x22B914u: goto label_22b914;
            case 0x22B918u: goto label_22b918;
            case 0x22B91Cu: goto label_22b91c;
            case 0x22B920u: goto label_22b920;
            case 0x22B924u: goto label_22b924;
            case 0x22B928u: goto label_22b928;
            case 0x22B92Cu: goto label_22b92c;
            case 0x22B930u: goto label_22b930;
            case 0x22B934u: goto label_22b934;
            case 0x22B938u: goto label_22b938;
            case 0x22B93Cu: goto label_22b93c;
            case 0x22B940u: goto label_22b940;
            case 0x22B944u: goto label_22b944;
            case 0x22B948u: goto label_22b948;
            case 0x22B94Cu: goto label_22b94c;
            case 0x22B950u: goto label_22b950;
            case 0x22B954u: goto label_22b954;
            case 0x22B958u: goto label_22b958;
            case 0x22B95Cu: goto label_22b95c;
            case 0x22B960u: goto label_22b960;
            case 0x22B964u: goto label_22b964;
            case 0x22B968u: goto label_22b968;
            case 0x22B96Cu: goto label_22b96c;
            case 0x22B970u: goto label_22b970;
            case 0x22B974u: goto label_22b974;
            case 0x22B978u: goto label_22b978;
            case 0x22B97Cu: goto label_22b97c;
            case 0x22B980u: goto label_22b980;
            case 0x22B984u: goto label_22b984;
            case 0x22B988u: goto label_22b988;
            case 0x22B98Cu: goto label_22b98c;
            case 0x22B990u: goto label_22b990;
            case 0x22B994u: goto label_22b994;
            case 0x22B998u: goto label_22b998;
            case 0x22B99Cu: goto label_22b99c;
            case 0x22B9A0u: goto label_22b9a0;
            case 0x22B9A4u: goto label_22b9a4;
            case 0x22B9A8u: goto label_22b9a8;
            case 0x22B9ACu: goto label_22b9ac;
            case 0x22B9B0u: goto label_22b9b0;
            case 0x22B9B4u: goto label_22b9b4;
            case 0x22B9B8u: goto label_22b9b8;
            case 0x22B9BCu: goto label_22b9bc;
            case 0x22B9C0u: goto label_22b9c0;
            case 0x22B9C4u: goto label_22b9c4;
            case 0x22B9C8u: goto label_22b9c8;
            case 0x22B9CCu: goto label_22b9cc;
            case 0x22B9D0u: goto label_22b9d0;
            case 0x22B9D4u: goto label_22b9d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B5ECu;
label_22b5ec:
    // 0x22b5ec: 0x3a0202d
    ctx->pc = 0x22b5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b5f0:
    // 0x22b5f0: 0x240282d
    ctx->pc = 0x22b5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b5f4:
    // 0x22b5f4: 0xc0b0c08
label_22b5f8:
    if (ctx->pc == 0x22B5F8u) {
        ctx->pc = 0x22B5F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B5FCu;
        goto label_22b5fc;
    }
    ctx->pc = 0x22B5F4u;
    SET_GPR_U32(ctx, 31, 0x22B5FCu);
    ctx->pc = 0x22B5F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5FCu; }
    }
    if (ctx->pc != 0x22B5FCu) { return; }
    ctx->pc = 0x22B5FCu;
label_22b5fc:
    // 0x22b5fc: 0x3c030033
    ctx->pc = 0x22b5fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_22b600:
    // 0x22b600: 0x2471cb70
    ctx->pc = 0x22b600u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294953840));
label_22b604:
    // 0x22b604: 0x2403001c
    ctx->pc = 0x22b604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_22b608:
    // 0x22b608: 0x2638018
    ctx->pc = 0x22b608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b60c:
    // 0x22b60c: 0x2301821
    ctx->pc = 0x22b60cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b610:
    // 0x22b610: 0xac620014
    ctx->pc = 0x22b610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b614:
    // 0x22b614: 0x60102d
    ctx->pc = 0x22b614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22b618:
    // 0x22b618: 0x8c42000c
    ctx->pc = 0x22b618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22b61c:
    // 0x22b61c: 0x28420002
    ctx->pc = 0x22b61cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_22b620:
    // 0x22b620: 0x54400004
label_22b624:
    if (ctx->pc == 0x22B624u) {
        ctx->pc = 0x22B624u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22B628u;
        goto label_22b628;
    }
    ctx->pc = 0x22B620u;
    {
        const bool branch_taken_0x22b620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22b620) {
            ctx->pc = 0x22B624u;
            SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
            ctx->pc = 0x22B634u;
            goto label_22b634;
        }
    }
    ctx->pc = 0x22B628u;
label_22b628:
    // 0x22b628: 0x3c04003a
    ctx->pc = 0x22b628u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b62c:
    // 0x22b62c: 0x10000055
label_22b630:
    if (ctx->pc == 0x22B630u) {
        ctx->pc = 0x22B630u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29208));
        ctx->pc = 0x22B634u;
        goto label_22b634;
    }
    ctx->pc = 0x22B62Cu;
    {
        const bool branch_taken_0x22b62c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B630u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29208));
        if (branch_taken_0x22b62c) {
            ctx->pc = 0x22B784u;
            goto label_22b784;
        }
    }
    ctx->pc = 0x22B634u;
label_22b634:
    // 0x22b634: 0x1000005a
label_22b638:
    if (ctx->pc == 0x22B638u) {
        ctx->pc = 0x22B638u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29224));
        ctx->pc = 0x22B63Cu;
        goto label_22b63c;
    }
    ctx->pc = 0x22B634u;
    {
        const bool branch_taken_0x22b634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B638u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29224));
        if (branch_taken_0x22b634) {
            ctx->pc = 0x22B7A0u;
            goto label_22b7a0;
        }
    }
    ctx->pc = 0x22B63Cu;
label_22b63c:
    // 0x22b63c: 0x3a0202d
    ctx->pc = 0x22b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b640:
    // 0x22b640: 0x240282d
    ctx->pc = 0x22b640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b644:
    // 0x22b644: 0xc0b0c08
label_22b648:
    if (ctx->pc == 0x22B648u) {
        ctx->pc = 0x22B648u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B64Cu;
        goto label_22b64c;
    }
    ctx->pc = 0x22B644u;
    SET_GPR_U32(ctx, 31, 0x22B64Cu);
    ctx->pc = 0x22B648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B64Cu; }
    }
    if (ctx->pc != 0x22B64Cu) { return; }
    ctx->pc = 0x22B64Cu;
label_22b64c:
    // 0x22b64c: 0x3c030033
    ctx->pc = 0x22b64cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_22b650:
    // 0x22b650: 0x2471cb70
    ctx->pc = 0x22b650u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294953840));
label_22b654:
    // 0x22b654: 0x2403001c
    ctx->pc = 0x22b654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_22b658:
    // 0x22b658: 0x2638018
    ctx->pc = 0x22b658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b65c:
    // 0x22b65c: 0x2301821
    ctx->pc = 0x22b65cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b660:
    // 0x22b660: 0xac620014
    ctx->pc = 0x22b660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b664:
    // 0x22b664: 0x60102d
    ctx->pc = 0x22b664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22b668:
    // 0x22b668: 0x8c42000c
    ctx->pc = 0x22b668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22b66c:
    // 0x22b66c: 0x28420064
    ctx->pc = 0x22b66cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 100));
label_22b670:
    // 0x22b670: 0x14400004
label_22b674:
    if (ctx->pc == 0x22B674u) {
        ctx->pc = 0x22B674u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x22B678u;
        goto label_22b678;
    }
    ctx->pc = 0x22B670u;
    {
        const bool branch_taken_0x22b670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B674u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x22b670) {
            ctx->pc = 0x22B684u;
            goto label_22b684;
        }
    }
    ctx->pc = 0x22B678u;
label_22b678:
    // 0x22b678: 0x3c04003a
    ctx->pc = 0x22b678u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b67c:
    // 0x22b67c: 0x10000041
label_22b680:
    if (ctx->pc == 0x22B680u) {
        ctx->pc = 0x22B680u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29232));
        ctx->pc = 0x22B684u;
        goto label_22b684;
    }
    ctx->pc = 0x22B67Cu;
    {
        const bool branch_taken_0x22b67c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B680u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29232));
        if (branch_taken_0x22b67c) {
            ctx->pc = 0x22B784u;
            goto label_22b784;
        }
    }
    ctx->pc = 0x22B684u;
label_22b684:
    // 0x22b684: 0x2451cb70
    ctx->pc = 0x22b684u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b688:
    // 0x22b688: 0x2402001c
    ctx->pc = 0x22b688u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b68c:
    // 0x22b68c: 0x2628018
    ctx->pc = 0x22b68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b690:
    // 0x22b690: 0x2301021
    ctx->pc = 0x22b690u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b694:
    // 0x22b694: 0x8c42000c
    ctx->pc = 0x22b694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22b698:
    // 0x22b698: 0x2842ff9d
    ctx->pc = 0x22b698u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4294967197));
label_22b69c:
    // 0x22b69c: 0x10400003
label_22b6a0:
    if (ctx->pc == 0x22B6A0u) {
        ctx->pc = 0x22B6A0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22B6A4u;
        goto label_22b6a4;
    }
    ctx->pc = 0x22B69Cu;
    {
        const bool branch_taken_0x22b69c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B6A0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22b69c) {
            ctx->pc = 0x22B6ACu;
            goto label_22b6ac;
        }
    }
    ctx->pc = 0x22B6A4u;
label_22b6a4:
    // 0x22b6a4: 0x10000037
label_22b6a8:
    if (ctx->pc == 0x22B6A8u) {
        ctx->pc = 0x22B6A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29240));
        ctx->pc = 0x22B6ACu;
        goto label_22b6ac;
    }
    ctx->pc = 0x22B6A4u;
    {
        const bool branch_taken_0x22b6a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B6A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29240));
        if (branch_taken_0x22b6a4) {
            ctx->pc = 0x22B784u;
            goto label_22b784;
        }
    }
    ctx->pc = 0x22B6ACu;
label_22b6ac:
    // 0x22b6ac: 0x3c020033
    ctx->pc = 0x22b6acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22b6b0:
    // 0x22b6b0: 0x2451cb70
    ctx->pc = 0x22b6b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b6b4:
    // 0x22b6b4: 0x2402001c
    ctx->pc = 0x22b6b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b6b8:
    // 0x22b6b8: 0x2628018
    ctx->pc = 0x22b6b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b6bc:
    // 0x22b6bc: 0x2301021
    ctx->pc = 0x22b6bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b6c0:
    // 0x22b6c0: 0x8c42000c
    ctx->pc = 0x22b6c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22b6c4:
    // 0x22b6c4: 0x4420004
label_22b6c8:
    if (ctx->pc == 0x22B6C8u) {
        ctx->pc = 0x22B6C8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22B6CCu;
        goto label_22b6cc;
    }
    ctx->pc = 0x22B6C4u;
    {
        const bool branch_taken_0x22b6c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22b6c4) {
            ctx->pc = 0x22B6C8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
            ctx->pc = 0x22B6D8u;
            goto label_22b6d8;
        }
    }
    ctx->pc = 0x22B6CCu;
label_22b6cc:
    // 0x22b6cc: 0x3c04003a
    ctx->pc = 0x22b6ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b6d0:
    // 0x22b6d0: 0x1000002c
label_22b6d4:
    if (ctx->pc == 0x22B6D4u) {
        ctx->pc = 0x22B6D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29248));
        ctx->pc = 0x22B6D8u;
        goto label_22b6d8;
    }
    ctx->pc = 0x22B6D0u;
    {
        const bool branch_taken_0x22b6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B6D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29248));
        if (branch_taken_0x22b6d0) {
            ctx->pc = 0x22B784u;
            goto label_22b784;
        }
    }
    ctx->pc = 0x22B6D8u;
label_22b6d8:
    // 0x22b6d8: 0x10000031
label_22b6dc:
    if (ctx->pc == 0x22B6DCu) {
        ctx->pc = 0x22B6DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29256));
        ctx->pc = 0x22B6E0u;
        goto label_22b6e0;
    }
    ctx->pc = 0x22B6D8u;
    {
        const bool branch_taken_0x22b6d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B6DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29256));
        if (branch_taken_0x22b6d8) {
            ctx->pc = 0x22B7A0u;
            goto label_22b7a0;
        }
    }
    ctx->pc = 0x22B6E0u;
label_22b6e0:
    // 0x22b6e0: 0x3a0202d
    ctx->pc = 0x22b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b6e4:
    // 0x22b6e4: 0x240282d
    ctx->pc = 0x22b6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b6e8:
    // 0x22b6e8: 0xc0b0c08
label_22b6ec:
    if (ctx->pc == 0x22B6ECu) {
        ctx->pc = 0x22B6ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B6F0u;
        goto label_22b6f0;
    }
    ctx->pc = 0x22B6E8u;
    SET_GPR_U32(ctx, 31, 0x22B6F0u);
    ctx->pc = 0x22B6ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6F0u; }
    }
    if (ctx->pc != 0x22B6F0u) { return; }
    ctx->pc = 0x22B6F0u;
label_22b6f0:
    // 0x22b6f0: 0x3c100033
    ctx->pc = 0x22b6f0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_22b6f4:
    // 0x22b6f4: 0x2610cb70
    ctx->pc = 0x22b6f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953840));
label_22b6f8:
    // 0x22b6f8: 0x2411001c
    ctx->pc = 0x22b6f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 28));
label_22b6fc:
    // 0x22b6fc: 0x2718818
    ctx->pc = 0x22b6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b700:
    // 0x22b700: 0x2111821
    ctx->pc = 0x22b700u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b704:
    // 0x22b704: 0xac620014
    ctx->pc = 0x22b704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b708:
    // 0x22b708: 0x3c04003a
    ctx->pc = 0x22b708u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b70c:
    // 0x22b70c: 0x1000006e
label_22b710:
    if (ctx->pc == 0x22B710u) {
        ctx->pc = 0x22B710u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29040));
        ctx->pc = 0x22B714u;
        goto label_22b714;
    }
    ctx->pc = 0x22B70Cu;
    {
        const bool branch_taken_0x22b70c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B710u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29040));
        if (branch_taken_0x22b70c) {
            ctx->pc = 0x22B8C8u;
            goto label_22b8c8;
        }
    }
    ctx->pc = 0x22B714u;
label_22b714:
    // 0x22b714: 0x3a0202d
    ctx->pc = 0x22b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b718:
    // 0x22b718: 0x240282d
    ctx->pc = 0x22b718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b71c:
    // 0x22b71c: 0xc0b0c08
label_22b720:
    if (ctx->pc == 0x22B720u) {
        ctx->pc = 0x22B720u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B724u;
        goto label_22b724;
    }
    ctx->pc = 0x22B71Cu;
    SET_GPR_U32(ctx, 31, 0x22B724u);
    ctx->pc = 0x22B720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B724u; }
    }
    if (ctx->pc != 0x22B724u) { return; }
    ctx->pc = 0x22B724u;
label_22b724:
    // 0x22b724: 0x3c030033
    ctx->pc = 0x22b724u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_22b728:
    // 0x22b728: 0x2471cb70
    ctx->pc = 0x22b728u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294953840));
label_22b72c:
    // 0x22b72c: 0x2403001c
    ctx->pc = 0x22b72cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_22b730:
    // 0x22b730: 0x2638018
    ctx->pc = 0x22b730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b734:
    // 0x22b734: 0x2301821
    ctx->pc = 0x22b734u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b738:
    // 0x22b738: 0xac620014
    ctx->pc = 0x22b738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b73c:
    // 0x22b73c: 0x3c020034
    ctx->pc = 0x22b73cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_22b740:
    // 0x22b740: 0x8c43e7f0
    ctx->pc = 0x22b740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_22b744:
    // 0x22b744: 0x2402000c
    ctx->pc = 0x22b744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_22b748:
    // 0x22b748: 0x14620004
label_22b74c:
    if (ctx->pc == 0x22B74Cu) {
        ctx->pc = 0x22B74Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x22B750u;
        goto label_22b750;
    }
    ctx->pc = 0x22B748u;
    {
        const bool branch_taken_0x22b748 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22B74Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x22b748) {
            ctx->pc = 0x22B75Cu;
            goto label_22b75c;
        }
    }
    ctx->pc = 0x22B750u;
label_22b750:
    // 0x22b750: 0x3c04003a
    ctx->pc = 0x22b750u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b754:
    // 0x22b754: 0x1000000b
label_22b758:
    if (ctx->pc == 0x22B758u) {
        ctx->pc = 0x22B758u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29272));
        ctx->pc = 0x22B75Cu;
        goto label_22b75c;
    }
    ctx->pc = 0x22B754u;
    {
        const bool branch_taken_0x22b754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B758u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29272));
        if (branch_taken_0x22b754) {
            ctx->pc = 0x22B784u;
            goto label_22b784;
        }
    }
    ctx->pc = 0x22B75Cu;
label_22b75c:
    // 0x22b75c: 0x2451cb70
    ctx->pc = 0x22b75cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b760:
    // 0x22b760: 0x2402001c
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b764:
    // 0x22b764: 0x2628018
    ctx->pc = 0x22b764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b768:
    // 0x22b768: 0x2301021
    ctx->pc = 0x22b768u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b76c:
    // 0x22b76c: 0x8c42000c
    ctx->pc = 0x22b76cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22b770:
    // 0x22b770: 0x2842000b
    ctx->pc = 0x22b770u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
label_22b774:
    // 0x22b774: 0x14400009
label_22b778:
    if (ctx->pc == 0x22B778u) {
        ctx->pc = 0x22B778u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x22B77Cu;
        goto label_22b77c;
    }
    ctx->pc = 0x22B774u;
    {
        const bool branch_taken_0x22b774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B778u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x22b774) {
            ctx->pc = 0x22B79Cu;
            goto label_22b79c;
        }
    }
    ctx->pc = 0x22B77Cu;
label_22b77c:
    // 0x22b77c: 0x3c04003a
    ctx->pc = 0x22b77cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b780:
    // 0x22b780: 0x24847260
    ctx->pc = 0x22b780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29280));
label_22b784:
    // 0x22b784: 0x240282d
    ctx->pc = 0x22b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b788:
    // 0x22b788: 0xc0b0c08
label_22b78c:
    if (ctx->pc == 0x22B78Cu) {
        ctx->pc = 0x22B78Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B790u;
        goto label_22b790;
    }
    ctx->pc = 0x22B788u;
    SET_GPR_U32(ctx, 31, 0x22B790u);
    ctx->pc = 0x22B78Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B790u; }
    }
    if (ctx->pc != 0x22B790u) { return; }
    ctx->pc = 0x22B790u;
label_22b790:
    // 0x22b790: 0x2301821
    ctx->pc = 0x22b790u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22b794:
    // 0x22b794: 0x10000059
label_22b798:
    if (ctx->pc == 0x22B798u) {
        ctx->pc = 0x22B798u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x22B79Cu;
        goto label_22b79c;
    }
    ctx->pc = 0x22B794u;
    {
        const bool branch_taken_0x22b794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B798u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x22b794) {
            ctx->pc = 0x22B8FCu;
            goto label_22b8fc;
        }
    }
    ctx->pc = 0x22B79Cu;
label_22b79c:
    // 0x22b79c: 0x24847268
    ctx->pc = 0x22b79cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29288));
label_22b7a0:
    // 0x22b7a0: 0x240282d
    ctx->pc = 0x22b7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b7a4:
    // 0x22b7a4: 0xc0b0c08
label_22b7a8:
    if (ctx->pc == 0x22B7A8u) {
        ctx->pc = 0x22B7A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B7ACu;
        goto label_22b7ac;
    }
    ctx->pc = 0x22B7A4u;
    SET_GPR_U32(ctx, 31, 0x22B7ACu);
    ctx->pc = 0x22B7A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B7ACu; }
    }
    if (ctx->pc != 0x22B7ACu) { return; }
    ctx->pc = 0x22B7ACu;
label_22b7ac:
    // 0x22b7ac: 0x3c040033
    ctx->pc = 0x22b7acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
label_22b7b0:
    // 0x22b7b0: 0x2484cb70
    ctx->pc = 0x22b7b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953840));
label_22b7b4:
    // 0x22b7b4: 0x2403001c
    ctx->pc = 0x22b7b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_22b7b8:
    // 0x22b7b8: 0x2631818
    ctx->pc = 0x22b7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b7bc:
    // 0x22b7bc: 0x832021
    ctx->pc = 0x22b7bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22b7c0:
    // 0x22b7c0: 0x1000004e
label_22b7c4:
    if (ctx->pc == 0x22B7C4u) {
        ctx->pc = 0x22B7C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x22B7C8u;
        goto label_22b7c8;
    }
    ctx->pc = 0x22B7C0u;
    {
        const bool branch_taken_0x22b7c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B7C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x22b7c0) {
            ctx->pc = 0x22B8FCu;
            goto label_22b8fc;
        }
    }
    ctx->pc = 0x22B7C8u;
label_22b7c8:
    // 0x22b7c8: 0x3a0202d
    ctx->pc = 0x22b7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b7cc:
    // 0x22b7cc: 0x240282d
    ctx->pc = 0x22b7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b7d0:
    // 0x22b7d0: 0xc0b0c08
label_22b7d4:
    if (ctx->pc == 0x22B7D4u) {
        ctx->pc = 0x22B7D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B7D8u;
        goto label_22b7d8;
    }
    ctx->pc = 0x22B7D0u;
    SET_GPR_U32(ctx, 31, 0x22B7D8u);
    ctx->pc = 0x22B7D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B7D8u; }
    }
    if (ctx->pc != 0x22B7D8u) { return; }
    ctx->pc = 0x22B7D8u;
label_22b7d8:
    // 0x22b7d8: 0x3c100033
    ctx->pc = 0x22b7d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_22b7dc:
    // 0x22b7dc: 0x2610cb70
    ctx->pc = 0x22b7dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953840));
label_22b7e0:
    // 0x22b7e0: 0x2411001c
    ctx->pc = 0x22b7e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 28));
label_22b7e4:
    // 0x22b7e4: 0x2718818
    ctx->pc = 0x22b7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b7e8:
    // 0x22b7e8: 0x2111821
    ctx->pc = 0x22b7e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b7ec:
    // 0x22b7ec: 0xac620014
    ctx->pc = 0x22b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b7f0:
    // 0x22b7f0: 0x3c04003a
    ctx->pc = 0x22b7f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b7f4:
    // 0x22b7f4: 0x10000034
label_22b7f8:
    if (ctx->pc == 0x22B7F8u) {
        ctx->pc = 0x22B7F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29296));
        ctx->pc = 0x22B7FCu;
        goto label_22b7fc;
    }
    ctx->pc = 0x22B7F4u;
    {
        const bool branch_taken_0x22b7f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B7F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29296));
        if (branch_taken_0x22b7f4) {
            ctx->pc = 0x22B8C8u;
            goto label_22b8c8;
        }
    }
    ctx->pc = 0x22B7FCu;
label_22b7fc:
    // 0x22b7fc: 0x3a0202d
    ctx->pc = 0x22b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b800:
    // 0x22b800: 0x240282d
    ctx->pc = 0x22b800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b804:
    // 0x22b804: 0xc0b0c08
label_22b808:
    if (ctx->pc == 0x22B808u) {
        ctx->pc = 0x22B808u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B80Cu;
        goto label_22b80c;
    }
    ctx->pc = 0x22B804u;
    SET_GPR_U32(ctx, 31, 0x22B80Cu);
    ctx->pc = 0x22B808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B80Cu; }
    }
    if (ctx->pc != 0x22B80Cu) { return; }
    ctx->pc = 0x22B80Cu;
label_22b80c:
    // 0x22b80c: 0x3c100033
    ctx->pc = 0x22b80cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_22b810:
    // 0x22b810: 0x2610cb70
    ctx->pc = 0x22b810u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953840));
label_22b814:
    // 0x22b814: 0x2411001c
    ctx->pc = 0x22b814u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 28));
label_22b818:
    // 0x22b818: 0x2718818
    ctx->pc = 0x22b818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b81c:
    // 0x22b81c: 0x2111821
    ctx->pc = 0x22b81cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b820:
    // 0x22b820: 0xac620014
    ctx->pc = 0x22b820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b824:
    // 0x22b824: 0x3c04003a
    ctx->pc = 0x22b824u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b828:
    // 0x22b828: 0x10000027
label_22b82c:
    if (ctx->pc == 0x22B82Cu) {
        ctx->pc = 0x22B82Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29312));
        ctx->pc = 0x22B830u;
        goto label_22b830;
    }
    ctx->pc = 0x22B828u;
    {
        const bool branch_taken_0x22b828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B82Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29312));
        if (branch_taken_0x22b828) {
            ctx->pc = 0x22B8C8u;
            goto label_22b8c8;
        }
    }
    ctx->pc = 0x22B830u;
label_22b830:
    // 0x22b830: 0x3a0202d
    ctx->pc = 0x22b830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b834:
    // 0x22b834: 0x240282d
    ctx->pc = 0x22b834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b838:
    // 0x22b838: 0xc0b0c08
label_22b83c:
    if (ctx->pc == 0x22B83Cu) {
        ctx->pc = 0x22B83Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B840u;
        goto label_22b840;
    }
    ctx->pc = 0x22B838u;
    SET_GPR_U32(ctx, 31, 0x22B840u);
    ctx->pc = 0x22B83Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B840u; }
    }
    if (ctx->pc != 0x22B840u) { return; }
    ctx->pc = 0x22B840u;
label_22b840:
    // 0x22b840: 0x3c100033
    ctx->pc = 0x22b840u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_22b844:
    // 0x22b844: 0x2610cb70
    ctx->pc = 0x22b844u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953840));
label_22b848:
    // 0x22b848: 0x2411001c
    ctx->pc = 0x22b848u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 28));
label_22b84c:
    // 0x22b84c: 0x2718818
    ctx->pc = 0x22b84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b850:
    // 0x22b850: 0x2111821
    ctx->pc = 0x22b850u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b854:
    // 0x22b854: 0xac620014
    ctx->pc = 0x22b854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b858:
    // 0x22b858: 0x3c04003a
    ctx->pc = 0x22b858u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b85c:
    // 0x22b85c: 0x1000001a
label_22b860:
    if (ctx->pc == 0x22B860u) {
        ctx->pc = 0x22B860u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29328));
        ctx->pc = 0x22B864u;
        goto label_22b864;
    }
    ctx->pc = 0x22B85Cu;
    {
        const bool branch_taken_0x22b85c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B860u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29328));
        if (branch_taken_0x22b85c) {
            ctx->pc = 0x22B8C8u;
            goto label_22b8c8;
        }
    }
    ctx->pc = 0x22B864u;
label_22b864:
    // 0x22b864: 0x3a0202d
    ctx->pc = 0x22b864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b868:
    // 0x22b868: 0x240282d
    ctx->pc = 0x22b868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b86c:
    // 0x22b86c: 0xc0b0c08
label_22b870:
    if (ctx->pc == 0x22B870u) {
        ctx->pc = 0x22B870u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B874u;
        goto label_22b874;
    }
    ctx->pc = 0x22B86Cu;
    SET_GPR_U32(ctx, 31, 0x22B874u);
    ctx->pc = 0x22B870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B874u; }
    }
    if (ctx->pc != 0x22B874u) { return; }
    ctx->pc = 0x22B874u;
label_22b874:
    // 0x22b874: 0x3c100033
    ctx->pc = 0x22b874u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_22b878:
    // 0x22b878: 0x2610cb70
    ctx->pc = 0x22b878u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953840));
label_22b87c:
    // 0x22b87c: 0x2411001c
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 28));
label_22b880:
    // 0x22b880: 0x2718818
    ctx->pc = 0x22b880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b884:
    // 0x22b884: 0x2111821
    ctx->pc = 0x22b884u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b888:
    // 0x22b888: 0xac620014
    ctx->pc = 0x22b888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b88c:
    // 0x22b88c: 0x3c04003a
    ctx->pc = 0x22b88cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b890:
    // 0x22b890: 0x1000000d
label_22b894:
    if (ctx->pc == 0x22B894u) {
        ctx->pc = 0x22B894u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29336));
        ctx->pc = 0x22B898u;
        goto label_22b898;
    }
    ctx->pc = 0x22B890u;
    {
        const bool branch_taken_0x22b890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B894u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29336));
        if (branch_taken_0x22b890) {
            ctx->pc = 0x22B8C8u;
            goto label_22b8c8;
        }
    }
    ctx->pc = 0x22B898u;
label_22b898:
    // 0x22b898: 0x3a0202d
    ctx->pc = 0x22b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b89c:
    // 0x22b89c: 0x240282d
    ctx->pc = 0x22b89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b8a0:
    // 0x22b8a0: 0xc0b0c08
label_22b8a4:
    if (ctx->pc == 0x22B8A4u) {
        ctx->pc = 0x22B8A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B8A8u;
        goto label_22b8a8;
    }
    ctx->pc = 0x22B8A0u;
    SET_GPR_U32(ctx, 31, 0x22B8A8u);
    ctx->pc = 0x22B8A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8A8u; }
    }
    if (ctx->pc != 0x22B8A8u) { return; }
    ctx->pc = 0x22B8A8u;
label_22b8a8:
    // 0x22b8a8: 0x3c100033
    ctx->pc = 0x22b8a8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_22b8ac:
    // 0x22b8ac: 0x2610cb70
    ctx->pc = 0x22b8acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953840));
label_22b8b0:
    // 0x22b8b0: 0x2411001c
    ctx->pc = 0x22b8b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 28));
label_22b8b4:
    // 0x22b8b4: 0x2718818
    ctx->pc = 0x22b8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b8b8:
    // 0x22b8b8: 0x2111821
    ctx->pc = 0x22b8b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b8bc:
    // 0x22b8bc: 0xac620014
    ctx->pc = 0x22b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_22b8c0:
    // 0x22b8c0: 0x3c04003a
    ctx->pc = 0x22b8c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22b8c4:
    // 0x22b8c4: 0x248472a8
    ctx->pc = 0x22b8c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29352));
label_22b8c8:
    // 0x22b8c8: 0x240282d
    ctx->pc = 0x22b8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b8cc:
    // 0x22b8cc: 0xc0b0c08
label_22b8d0:
    if (ctx->pc == 0x22B8D0u) {
        ctx->pc = 0x22B8D0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B8D4u;
        goto label_22b8d4;
    }
    ctx->pc = 0x22B8CCu;
    SET_GPR_U32(ctx, 31, 0x22B8D4u);
    ctx->pc = 0x22B8D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8D4u; }
    }
    if (ctx->pc != 0x22B8D4u) { return; }
    ctx->pc = 0x22B8D4u;
label_22b8d4:
    // 0x22b8d4: 0x2118021
    ctx->pc = 0x22b8d4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22b8d8:
    // 0x22b8d8: 0x10000008
label_22b8dc:
    if (ctx->pc == 0x22B8DCu) {
        ctx->pc = 0x22B8DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x22B8E0u;
        goto label_22b8e0;
    }
    ctx->pc = 0x22B8D8u;
    {
        const bool branch_taken_0x22b8d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B8DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x22b8d8) {
            ctx->pc = 0x22B8FCu;
            goto label_22b8fc;
        }
    }
    ctx->pc = 0x22B8E0u;
label_22b8e0:
    // 0x22b8e0: 0x3c030033
    ctx->pc = 0x22b8e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_22b8e4:
    // 0x22b8e4: 0x2463cb70
    ctx->pc = 0x22b8e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953840));
label_22b8e8:
    // 0x22b8e8: 0x2402001c
    ctx->pc = 0x22b8e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b8ec:
    // 0x22b8ec: 0x2621018
    ctx->pc = 0x22b8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b8f0:
    // 0x22b8f0: 0x431021
    ctx->pc = 0x22b8f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b8f4:
    // 0x22b8f4: 0x10000031
label_22b8f8:
    if (ctx->pc == 0x22B8F8u) {
        ctx->pc = 0x22B8F8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x22B8FCu;
        goto label_22b8fc;
    }
    ctx->pc = 0x22B8F4u;
    {
        const bool branch_taken_0x22b8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B8F8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x22b8f4) {
            ctx->pc = 0x22B9BCu;
            goto label_22b9bc;
        }
    }
    ctx->pc = 0x22B8FCu;
label_22b8fc:
    // 0x22b8fc: 0x3c030033
    ctx->pc = 0x22b8fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_22b900:
    // 0x22b900: 0x2463cb70
    ctx->pc = 0x22b900u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953840));
label_22b904:
    // 0x22b904: 0x2402001c
    ctx->pc = 0x22b904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b908:
    // 0x22b908: 0x2621018
    ctx->pc = 0x22b908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b90c:
    // 0x22b90c: 0x24630014
    ctx->pc = 0x22b90cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
label_22b910:
    // 0x22b910: 0x438021
    ctx->pc = 0x22b910u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b914:
    // 0x22b914: 0x8e040000
    ctx->pc = 0x22b914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b918:
    // 0x22b918: 0x1080000a
label_22b91c:
    if (ctx->pc == 0x22B91Cu) {
        ctx->pc = 0x22B91Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x22B920u;
        goto label_22b920;
    }
    ctx->pc = 0x22B918u;
    {
        const bool branch_taken_0x22b918 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B91Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x22b918) {
            ctx->pc = 0x22B944u;
            goto label_22b944;
        }
    }
    ctx->pc = 0x22B920u;
label_22b920:
    // 0x22b920: 0xc0b0cf6
label_22b924:
    if (ctx->pc == 0x22B924u) {
        ctx->pc = 0x22B924u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B928u;
        goto label_22b928;
    }
    ctx->pc = 0x22B920u;
    SET_GPR_U32(ctx, 31, 0x22B928u);
    ctx->pc = 0x22B924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B928u; }
    }
    if (ctx->pc != 0x22B928u) { return; }
    ctx->pc = 0x22B928u;
label_22b928:
    // 0x22b928: 0x8e040000
    ctx->pc = 0x22b928u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b92c:
    // 0x22b92c: 0x240282d
    ctx->pc = 0x22b92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b930:
    // 0x22b930: 0x3c014779
    ctx->pc = 0x22b930u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
label_22b934:
    // 0x22b934: 0x3421ec00
    ctx->pc = 0x22b934u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 60416));
label_22b938:
    // 0x22b938: 0x44816000
    ctx->pc = 0x22b938u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22b93c:
    // 0x22b93c: 0xc0b0df2
label_22b940:
    if (ctx->pc == 0x22B940u) {
        ctx->pc = 0x22B940u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
        ctx->pc = 0x22B944u;
        goto label_22b944;
    }
    ctx->pc = 0x22B93Cu;
    SET_GPR_U32(ctx, 31, 0x22B944u);
    ctx->pc = 0x22B940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B944u; }
    }
    if (ctx->pc != 0x22B944u) { return; }
    ctx->pc = 0x22B944u;
label_22b944:
    // 0x22b944: 0x3c030033
    ctx->pc = 0x22b944u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_22b948:
    // 0x22b948: 0x2463cb70
    ctx->pc = 0x22b948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953840));
label_22b94c:
    // 0x22b94c: 0x2402001c
    ctx->pc = 0x22b94cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_22b950:
    // 0x22b950: 0x2621018
    ctx->pc = 0x22b950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b954:
    // 0x22b954: 0x24630018
    ctx->pc = 0x22b954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24));
label_22b958:
    // 0x22b958: 0x438021
    ctx->pc = 0x22b958u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b95c:
    // 0x22b95c: 0x8e040000
    ctx->pc = 0x22b95cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b960:
    // 0x22b960: 0x1080000a
label_22b964:
    if (ctx->pc == 0x22B964u) {
        ctx->pc = 0x22B964u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x22B968u;
        goto label_22b968;
    }
    ctx->pc = 0x22B960u;
    {
        const bool branch_taken_0x22b960 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B964u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x22b960) {
            ctx->pc = 0x22B98Cu;
            goto label_22b98c;
        }
    }
    ctx->pc = 0x22B968u;
label_22b968:
    // 0x22b968: 0xc0b0cf6
label_22b96c:
    if (ctx->pc == 0x22B96Cu) {
        ctx->pc = 0x22B96Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B970u;
        goto label_22b970;
    }
    ctx->pc = 0x22B968u;
    SET_GPR_U32(ctx, 31, 0x22B970u);
    ctx->pc = 0x22B96Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B970u; }
    }
    if (ctx->pc != 0x22B970u) { return; }
    ctx->pc = 0x22B970u;
label_22b970:
    // 0x22b970: 0x8e040000
    ctx->pc = 0x22b970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b974:
    // 0x22b974: 0x240282d
    ctx->pc = 0x22b974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b978:
    // 0x22b978: 0x3c014779
    ctx->pc = 0x22b978u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
label_22b97c:
    // 0x22b97c: 0x3421eb00
    ctx->pc = 0x22b97cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 60160));
label_22b980:
    // 0x22b980: 0x44816000
    ctx->pc = 0x22b980u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22b984:
    // 0x22b984: 0xc0b0df2
label_22b988:
    if (ctx->pc == 0x22B988u) {
        ctx->pc = 0x22B988u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x22B98Cu;
        goto label_22b98c;
    }
    ctx->pc = 0x22B984u;
    SET_GPR_U32(ctx, 31, 0x22B98Cu);
    ctx->pc = 0x22B988u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B98Cu; }
    }
    if (ctx->pc != 0x22B98Cu) { return; }
    ctx->pc = 0x22B98Cu;
label_22b98c:
    // 0x22b98c: 0x3c020033
    ctx->pc = 0x22b98cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22b990:
    // 0x22b990: 0x2442cb70
    ctx->pc = 0x22b990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b994:
    // 0x22b994: 0x2403001c
    ctx->pc = 0x22b994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_22b998:
    // 0x22b998: 0x2631818
    ctx->pc = 0x22b998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22b99c:
    // 0x22b99c: 0x621821
    ctx->pc = 0x22b99cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b9a0:
    // 0x22b9a0: 0x8c620000
    ctx->pc = 0x22b9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b9a4:
    // 0x22b9a4: 0x24420001
    ctx->pc = 0x22b9a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_22b9a8:
    // 0x22b9a8: 0xac620000
    ctx->pc = 0x22b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22b9ac:
    // 0x22b9ac: 0x26730001
    ctx->pc = 0x22b9acu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_22b9b0:
    // 0x22b9b0: 0x2a620018
    ctx->pc = 0x22b9b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 24));
label_22b9b4:
    // 0x22b9b4: 0x1440fe80
label_22b9b8:
    if (ctx->pc == 0x22B9B8u) {
        ctx->pc = 0x22B9B8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        ctx->pc = 0x22B9BCu;
        goto label_22b9bc;
    }
    ctx->pc = 0x22B9B4u;
    {
        const bool branch_taken_0x22b9b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B9B8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        if (branch_taken_0x22b9b4) {
            ctx->pc = 0x22B3B8u;
            goto label_22b3b8;
        }
    }
    ctx->pc = 0x22B9BCu;
label_22b9bc:
    // 0x22b9bc: 0xdfbf0070
    ctx->pc = 0x22b9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22b9c0:
    // 0x22b9c0: 0xdfb30060
    ctx->pc = 0x22b9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22b9c4:
    // 0x22b9c4: 0xdfb20050
    ctx->pc = 0x22b9c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22b9c8:
    // 0x22b9c8: 0xdfb10040
    ctx->pc = 0x22b9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22b9cc:
    // 0x22b9cc: 0xdfb00030
    ctx->pc = 0x22b9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22b9d0:
    // 0x22b9d0: 0x3e00008
label_22b9d4:
    if (ctx->pc == 0x22B9D4u) {
        ctx->pc = 0x22B9D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x22B9D8u;
        goto label_fallthrough_0x22b9d0;
    }
    ctx->pc = 0x22B9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B9D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B398u: goto label_22b398;
            case 0x22B39Cu: goto label_22b39c;
            case 0x22B3A0u: goto label_22b3a0;
            case 0x22B3A4u: goto label_22b3a4;
            case 0x22B3A8u: goto label_22b3a8;
            case 0x22B3ACu: goto label_22b3ac;
            case 0x22B3B0u: goto label_22b3b0;
            case 0x22B3B4u: goto label_22b3b4;
            case 0x22B3B8u: goto label_22b3b8;
            case 0x22B3BCu: goto label_22b3bc;
            case 0x22B3C0u: goto label_22b3c0;
            case 0x22B3C4u: goto label_22b3c4;
            case 0x22B3C8u: goto label_22b3c8;
            case 0x22B3CCu: goto label_22b3cc;
            case 0x22B3D0u: goto label_22b3d0;
            case 0x22B3D4u: goto label_22b3d4;
            case 0x22B3D8u: goto label_22b3d8;
            case 0x22B3DCu: goto label_22b3dc;
            case 0x22B3E0u: goto label_22b3e0;
            case 0x22B3E4u: goto label_22b3e4;
            case 0x22B3E8u: goto label_22b3e8;
            case 0x22B3ECu: goto label_22b3ec;
            case 0x22B3F0u: goto label_22b3f0;
            case 0x22B3F4u: goto label_22b3f4;
            case 0x22B3F8u: goto label_22b3f8;
            case 0x22B3FCu: goto label_22b3fc;
            case 0x22B400u: goto label_22b400;
            case 0x22B404u: goto label_22b404;
            case 0x22B408u: goto label_22b408;
            case 0x22B40Cu: goto label_22b40c;
            case 0x22B410u: goto label_22b410;
            case 0x22B414u: goto label_22b414;
            case 0x22B418u: goto label_22b418;
            case 0x22B41Cu: goto label_22b41c;
            case 0x22B420u: goto label_22b420;
            case 0x22B424u: goto label_22b424;
            case 0x22B428u: goto label_22b428;
            case 0x22B42Cu: goto label_22b42c;
            case 0x22B430u: goto label_22b430;
            case 0x22B434u: goto label_22b434;
            case 0x22B438u: goto label_22b438;
            case 0x22B43Cu: goto label_22b43c;
            case 0x22B440u: goto label_22b440;
            case 0x22B444u: goto label_22b444;
            case 0x22B448u: goto label_22b448;
            case 0x22B44Cu: goto label_22b44c;
            case 0x22B450u: goto label_22b450;
            case 0x22B454u: goto label_22b454;
            case 0x22B458u: goto label_22b458;
            case 0x22B45Cu: goto label_22b45c;
            case 0x22B460u: goto label_22b460;
            case 0x22B464u: goto label_22b464;
            case 0x22B468u: goto label_22b468;
            case 0x22B46Cu: goto label_22b46c;
            case 0x22B470u: goto label_22b470;
            case 0x22B474u: goto label_22b474;
            case 0x22B478u: goto label_22b478;
            case 0x22B47Cu: goto label_22b47c;
            case 0x22B480u: goto label_22b480;
            case 0x22B484u: goto label_22b484;
            case 0x22B488u: goto label_22b488;
            case 0x22B48Cu: goto label_22b48c;
            case 0x22B490u: goto label_22b490;
            case 0x22B494u: goto label_22b494;
            case 0x22B498u: goto label_22b498;
            case 0x22B49Cu: goto label_22b49c;
            case 0x22B4A0u: goto label_22b4a0;
            case 0x22B4A4u: goto label_22b4a4;
            case 0x22B4A8u: goto label_22b4a8;
            case 0x22B4ACu: goto label_22b4ac;
            case 0x22B4B0u: goto label_22b4b0;
            case 0x22B4B4u: goto label_22b4b4;
            case 0x22B4B8u: goto label_22b4b8;
            case 0x22B4BCu: goto label_22b4bc;
            case 0x22B4C0u: goto label_22b4c0;
            case 0x22B4C4u: goto label_22b4c4;
            case 0x22B4C8u: goto label_22b4c8;
            case 0x22B4CCu: goto label_22b4cc;
            case 0x22B4D0u: goto label_22b4d0;
            case 0x22B4D4u: goto label_22b4d4;
            case 0x22B4D8u: goto label_22b4d8;
            case 0x22B4DCu: goto label_22b4dc;
            case 0x22B4E0u: goto label_22b4e0;
            case 0x22B4E4u: goto label_22b4e4;
            case 0x22B4E8u: goto label_22b4e8;
            case 0x22B4ECu: goto label_22b4ec;
            case 0x22B4F0u: goto label_22b4f0;
            case 0x22B4F4u: goto label_22b4f4;
            case 0x22B4F8u: goto label_22b4f8;
            case 0x22B4FCu: goto label_22b4fc;
            case 0x22B500u: goto label_22b500;
            case 0x22B504u: goto label_22b504;
            case 0x22B508u: goto label_22b508;
            case 0x22B50Cu: goto label_22b50c;
            case 0x22B510u: goto label_22b510;
            case 0x22B514u: goto label_22b514;
            case 0x22B518u: goto label_22b518;
            case 0x22B51Cu: goto label_22b51c;
            case 0x22B520u: goto label_22b520;
            case 0x22B524u: goto label_22b524;
            case 0x22B528u: goto label_22b528;
            case 0x22B52Cu: goto label_22b52c;
            case 0x22B530u: goto label_22b530;
            case 0x22B534u: goto label_22b534;
            case 0x22B538u: goto label_22b538;
            case 0x22B53Cu: goto label_22b53c;
            case 0x22B540u: goto label_22b540;
            case 0x22B544u: goto label_22b544;
            case 0x22B548u: goto label_22b548;
            case 0x22B54Cu: goto label_22b54c;
            case 0x22B550u: goto label_22b550;
            case 0x22B554u: goto label_22b554;
            case 0x22B558u: goto label_22b558;
            case 0x22B55Cu: goto label_22b55c;
            case 0x22B560u: goto label_22b560;
            case 0x22B564u: goto label_22b564;
            case 0x22B568u: goto label_22b568;
            case 0x22B56Cu: goto label_22b56c;
            case 0x22B570u: goto label_22b570;
            case 0x22B574u: goto label_22b574;
            case 0x22B578u: goto label_22b578;
            case 0x22B57Cu: goto label_22b57c;
            case 0x22B580u: goto label_22b580;
            case 0x22B584u: goto label_22b584;
            case 0x22B588u: goto label_22b588;
            case 0x22B58Cu: goto label_22b58c;
            case 0x22B590u: goto label_22b590;
            case 0x22B594u: goto label_22b594;
            case 0x22B598u: goto label_22b598;
            case 0x22B59Cu: goto label_22b59c;
            case 0x22B5A0u: goto label_22b5a0;
            case 0x22B5A4u: goto label_22b5a4;
            case 0x22B5A8u: goto label_22b5a8;
            case 0x22B5ACu: goto label_22b5ac;
            case 0x22B5B0u: goto label_22b5b0;
            case 0x22B5B4u: goto label_22b5b4;
            case 0x22B5B8u: goto label_22b5b8;
            case 0x22B5BCu: goto label_22b5bc;
            case 0x22B5C0u: goto label_22b5c0;
            case 0x22B5C4u: goto label_22b5c4;
            case 0x22B5C8u: goto label_22b5c8;
            case 0x22B5CCu: goto label_22b5cc;
            case 0x22B5D0u: goto label_22b5d0;
            case 0x22B5D4u: goto label_22b5d4;
            case 0x22B5D8u: goto label_22b5d8;
            case 0x22B5DCu: goto label_22b5dc;
            case 0x22B5E0u: goto label_22b5e0;
            case 0x22B5E4u: goto label_22b5e4;
            case 0x22B5E8u: goto label_22b5e8;
            case 0x22B5ECu: goto label_22b5ec;
            case 0x22B5F0u: goto label_22b5f0;
            case 0x22B5F4u: goto label_22b5f4;
            case 0x22B5F8u: goto label_22b5f8;
            case 0x22B5FCu: goto label_22b5fc;
            case 0x22B600u: goto label_22b600;
            case 0x22B604u: goto label_22b604;
            case 0x22B608u: goto label_22b608;
            case 0x22B60Cu: goto label_22b60c;
            case 0x22B610u: goto label_22b610;
            case 0x22B614u: goto label_22b614;
            case 0x22B618u: goto label_22b618;
            case 0x22B61Cu: goto label_22b61c;
            case 0x22B620u: goto label_22b620;
            case 0x22B624u: goto label_22b624;
            case 0x22B628u: goto label_22b628;
            case 0x22B62Cu: goto label_22b62c;
            case 0x22B630u: goto label_22b630;
            case 0x22B634u: goto label_22b634;
            case 0x22B638u: goto label_22b638;
            case 0x22B63Cu: goto label_22b63c;
            case 0x22B640u: goto label_22b640;
            case 0x22B644u: goto label_22b644;
            case 0x22B648u: goto label_22b648;
            case 0x22B64Cu: goto label_22b64c;
            case 0x22B650u: goto label_22b650;
            case 0x22B654u: goto label_22b654;
            case 0x22B658u: goto label_22b658;
            case 0x22B65Cu: goto label_22b65c;
            case 0x22B660u: goto label_22b660;
            case 0x22B664u: goto label_22b664;
            case 0x22B668u: goto label_22b668;
            case 0x22B66Cu: goto label_22b66c;
            case 0x22B670u: goto label_22b670;
            case 0x22B674u: goto label_22b674;
            case 0x22B678u: goto label_22b678;
            case 0x22B67Cu: goto label_22b67c;
            case 0x22B680u: goto label_22b680;
            case 0x22B684u: goto label_22b684;
            case 0x22B688u: goto label_22b688;
            case 0x22B68Cu: goto label_22b68c;
            case 0x22B690u: goto label_22b690;
            case 0x22B694u: goto label_22b694;
            case 0x22B698u: goto label_22b698;
            case 0x22B69Cu: goto label_22b69c;
            case 0x22B6A0u: goto label_22b6a0;
            case 0x22B6A4u: goto label_22b6a4;
            case 0x22B6A8u: goto label_22b6a8;
            case 0x22B6ACu: goto label_22b6ac;
            case 0x22B6B0u: goto label_22b6b0;
            case 0x22B6B4u: goto label_22b6b4;
            case 0x22B6B8u: goto label_22b6b8;
            case 0x22B6BCu: goto label_22b6bc;
            case 0x22B6C0u: goto label_22b6c0;
            case 0x22B6C4u: goto label_22b6c4;
            case 0x22B6C8u: goto label_22b6c8;
            case 0x22B6CCu: goto label_22b6cc;
            case 0x22B6D0u: goto label_22b6d0;
            case 0x22B6D4u: goto label_22b6d4;
            case 0x22B6D8u: goto label_22b6d8;
            case 0x22B6DCu: goto label_22b6dc;
            case 0x22B6E0u: goto label_22b6e0;
            case 0x22B6E4u: goto label_22b6e4;
            case 0x22B6E8u: goto label_22b6e8;
            case 0x22B6ECu: goto label_22b6ec;
            case 0x22B6F0u: goto label_22b6f0;
            case 0x22B6F4u: goto label_22b6f4;
            case 0x22B6F8u: goto label_22b6f8;
            case 0x22B6FCu: goto label_22b6fc;
            case 0x22B700u: goto label_22b700;
            case 0x22B704u: goto label_22b704;
            case 0x22B708u: goto label_22b708;
            case 0x22B70Cu: goto label_22b70c;
            case 0x22B710u: goto label_22b710;
            case 0x22B714u: goto label_22b714;
            case 0x22B718u: goto label_22b718;
            case 0x22B71Cu: goto label_22b71c;
            case 0x22B720u: goto label_22b720;
            case 0x22B724u: goto label_22b724;
            case 0x22B728u: goto label_22b728;
            case 0x22B72Cu: goto label_22b72c;
            case 0x22B730u: goto label_22b730;
            case 0x22B734u: goto label_22b734;
            case 0x22B738u: goto label_22b738;
            case 0x22B73Cu: goto label_22b73c;
            case 0x22B740u: goto label_22b740;
            case 0x22B744u: goto label_22b744;
            case 0x22B748u: goto label_22b748;
            case 0x22B74Cu: goto label_22b74c;
            case 0x22B750u: goto label_22b750;
            case 0x22B754u: goto label_22b754;
            case 0x22B758u: goto label_22b758;
            case 0x22B75Cu: goto label_22b75c;
            case 0x22B760u: goto label_22b760;
            case 0x22B764u: goto label_22b764;
            case 0x22B768u: goto label_22b768;
            case 0x22B76Cu: goto label_22b76c;
            case 0x22B770u: goto label_22b770;
            case 0x22B774u: goto label_22b774;
            case 0x22B778u: goto label_22b778;
            case 0x22B77Cu: goto label_22b77c;
            case 0x22B780u: goto label_22b780;
            case 0x22B784u: goto label_22b784;
            case 0x22B788u: goto label_22b788;
            case 0x22B78Cu: goto label_22b78c;
            case 0x22B790u: goto label_22b790;
            case 0x22B794u: goto label_22b794;
            case 0x22B798u: goto label_22b798;
            case 0x22B79Cu: goto label_22b79c;
            case 0x22B7A0u: goto label_22b7a0;
            case 0x22B7A4u: goto label_22b7a4;
            case 0x22B7A8u: goto label_22b7a8;
            case 0x22B7ACu: goto label_22b7ac;
            case 0x22B7B0u: goto label_22b7b0;
            case 0x22B7B4u: goto label_22b7b4;
            case 0x22B7B8u: goto label_22b7b8;
            case 0x22B7BCu: goto label_22b7bc;
            case 0x22B7C0u: goto label_22b7c0;
            case 0x22B7C4u: goto label_22b7c4;
            case 0x22B7C8u: goto label_22b7c8;
            case 0x22B7CCu: goto label_22b7cc;
            case 0x22B7D0u: goto label_22b7d0;
            case 0x22B7D4u: goto label_22b7d4;
            case 0x22B7D8u: goto label_22b7d8;
            case 0x22B7DCu: goto label_22b7dc;
            case 0x22B7E0u: goto label_22b7e0;
            case 0x22B7E4u: goto label_22b7e4;
            case 0x22B7E8u: goto label_22b7e8;
            case 0x22B7ECu: goto label_22b7ec;
            case 0x22B7F0u: goto label_22b7f0;
            case 0x22B7F4u: goto label_22b7f4;
            case 0x22B7F8u: goto label_22b7f8;
            case 0x22B7FCu: goto label_22b7fc;
            case 0x22B800u: goto label_22b800;
            case 0x22B804u: goto label_22b804;
            case 0x22B808u: goto label_22b808;
            case 0x22B80Cu: goto label_22b80c;
            case 0x22B810u: goto label_22b810;
            case 0x22B814u: goto label_22b814;
            case 0x22B818u: goto label_22b818;
            case 0x22B81Cu: goto label_22b81c;
            case 0x22B820u: goto label_22b820;
            case 0x22B824u: goto label_22b824;
            case 0x22B828u: goto label_22b828;
            case 0x22B82Cu: goto label_22b82c;
            case 0x22B830u: goto label_22b830;
            case 0x22B834u: goto label_22b834;
            case 0x22B838u: goto label_22b838;
            case 0x22B83Cu: goto label_22b83c;
            case 0x22B840u: goto label_22b840;
            case 0x22B844u: goto label_22b844;
            case 0x22B848u: goto label_22b848;
            case 0x22B84Cu: goto label_22b84c;
            case 0x22B850u: goto label_22b850;
            case 0x22B854u: goto label_22b854;
            case 0x22B858u: goto label_22b858;
            case 0x22B85Cu: goto label_22b85c;
            case 0x22B860u: goto label_22b860;
            case 0x22B864u: goto label_22b864;
            case 0x22B868u: goto label_22b868;
            case 0x22B86Cu: goto label_22b86c;
            case 0x22B870u: goto label_22b870;
            case 0x22B874u: goto label_22b874;
            case 0x22B878u: goto label_22b878;
            case 0x22B87Cu: goto label_22b87c;
            case 0x22B880u: goto label_22b880;
            case 0x22B884u: goto label_22b884;
            case 0x22B888u: goto label_22b888;
            case 0x22B88Cu: goto label_22b88c;
            case 0x22B890u: goto label_22b890;
            case 0x22B894u: goto label_22b894;
            case 0x22B898u: goto label_22b898;
            case 0x22B89Cu: goto label_22b89c;
            case 0x22B8A0u: goto label_22b8a0;
            case 0x22B8A4u: goto label_22b8a4;
            case 0x22B8A8u: goto label_22b8a8;
            case 0x22B8ACu: goto label_22b8ac;
            case 0x22B8B0u: goto label_22b8b0;
            case 0x22B8B4u: goto label_22b8b4;
            case 0x22B8B8u: goto label_22b8b8;
            case 0x22B8BCu: goto label_22b8bc;
            case 0x22B8C0u: goto label_22b8c0;
            case 0x22B8C4u: goto label_22b8c4;
            case 0x22B8C8u: goto label_22b8c8;
            case 0x22B8CCu: goto label_22b8cc;
            case 0x22B8D0u: goto label_22b8d0;
            case 0x22B8D4u: goto label_22b8d4;
            case 0x22B8D8u: goto label_22b8d8;
            case 0x22B8DCu: goto label_22b8dc;
            case 0x22B8E0u: goto label_22b8e0;
            case 0x22B8E4u: goto label_22b8e4;
            case 0x22B8E8u: goto label_22b8e8;
            case 0x22B8ECu: goto label_22b8ec;
            case 0x22B8F0u: goto label_22b8f0;
            case 0x22B8F4u: goto label_22b8f4;
            case 0x22B8F8u: goto label_22b8f8;
            case 0x22B8FCu: goto label_22b8fc;
            case 0x22B900u: goto label_22b900;
            case 0x22B904u: goto label_22b904;
            case 0x22B908u: goto label_22b908;
            case 0x22B90Cu: goto label_22b90c;
            case 0x22B910u: goto label_22b910;
            case 0x22B914u: goto label_22b914;
            case 0x22B918u: goto label_22b918;
            case 0x22B91Cu: goto label_22b91c;
            case 0x22B920u: goto label_22b920;
            case 0x22B924u: goto label_22b924;
            case 0x22B928u: goto label_22b928;
            case 0x22B92Cu: goto label_22b92c;
            case 0x22B930u: goto label_22b930;
            case 0x22B934u: goto label_22b934;
            case 0x22B938u: goto label_22b938;
            case 0x22B93Cu: goto label_22b93c;
            case 0x22B940u: goto label_22b940;
            case 0x22B944u: goto label_22b944;
            case 0x22B948u: goto label_22b948;
            case 0x22B94Cu: goto label_22b94c;
            case 0x22B950u: goto label_22b950;
            case 0x22B954u: goto label_22b954;
            case 0x22B958u: goto label_22b958;
            case 0x22B95Cu: goto label_22b95c;
            case 0x22B960u: goto label_22b960;
            case 0x22B964u: goto label_22b964;
            case 0x22B968u: goto label_22b968;
            case 0x22B96Cu: goto label_22b96c;
            case 0x22B970u: goto label_22b970;
            case 0x22B974u: goto label_22b974;
            case 0x22B978u: goto label_22b978;
            case 0x22B97Cu: goto label_22b97c;
            case 0x22B980u: goto label_22b980;
            case 0x22B984u: goto label_22b984;
            case 0x22B988u: goto label_22b988;
            case 0x22B98Cu: goto label_22b98c;
            case 0x22B990u: goto label_22b990;
            case 0x22B994u: goto label_22b994;
            case 0x22B998u: goto label_22b998;
            case 0x22B99Cu: goto label_22b99c;
            case 0x22B9A0u: goto label_22b9a0;
            case 0x22B9A4u: goto label_22b9a4;
            case 0x22B9A8u: goto label_22b9a8;
            case 0x22B9ACu: goto label_22b9ac;
            case 0x22B9B0u: goto label_22b9b0;
            case 0x22B9B4u: goto label_22b9b4;
            case 0x22B9B8u: goto label_22b9b8;
            case 0x22B9BCu: goto label_22b9bc;
            case 0x22B9C0u: goto label_22b9c0;
            case 0x22B9C4u: goto label_22b9c4;
            case 0x22B9C8u: goto label_22b9c8;
            case 0x22B9CCu: goto label_22b9cc;
            case 0x22B9D0u: goto label_22b9d0;
            case 0x22B9D4u: goto label_22b9d4;
            default: break;
        }
        return;
    }
label_fallthrough_0x22b9d0:
    ctx->pc = 0x22B9D8u;
}
