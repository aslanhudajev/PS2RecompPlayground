#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <iostream>

// Function: inflate_codes
// Address: 0x2da5e8 - 0x2daec4
void inflate_codes_0x2da5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    {
        static int s_codesFirstLine = 0;
        if (s_codesFirstLine++ < 30) {
            std::cerr << "[inflate_codes] ENTRY(first line) #" << s_codesFirstLine << " reg4=0x" << std::hex << GPR_U32(ctx, 4)
                      << " reg5=0x" << GPR_U32(ctx, 5) << " reg16=0x" << GPR_U32(ctx, 16) << std::dec << "\n";
        }
    }
    ctx->pc = 0x2da5e8u;

label_2da5e8:
    // 0x2da5e8: 0x27bdff70
    ctx->pc = 0x2da5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_2da5ec:
    // 0x2da5ec: 0xffbf0080
    ctx->pc = 0x2da5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2da5f0:
    // 0x2da5f0: 0xffb70070
    ctx->pc = 0x2da5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2da5f4:
    // 0x2da5f4: 0xffb60060
    ctx->pc = 0x2da5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2da5f8:
    // 0x2da5f8: 0xffb50050
    ctx->pc = 0x2da5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2da5fc:
    // 0x2da5fc: 0xffb40040
    ctx->pc = 0x2da5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2da600:
    // 0x2da600: 0xffb30030
    ctx->pc = 0x2da600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2da604:
    // 0x2da604: 0xffb20020
    ctx->pc = 0x2da604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2da608:
    // 0x2da608: 0xffb10010
    ctx->pc = 0x2da608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2da60c:
    // 0x2da60c: 0xffb00000
    ctx->pc = 0x2da60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2da610:
    // 0x2da610: 0x80802d
    ctx->pc = 0x2da610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da614:
    // 0x2da614: 0xa0882d
    ctx->pc = 0x2da614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2da618:
    // 0x2da618: 0x8e12000c
    ctx->pc = 0x2da618u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2da61c:
    // 0x2da61c: 0x8e360000
    ctx->pc = 0x2da61cu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da620:
    // 0x2da620: 0x8e370004
    ctx->pc = 0x2da620u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    {
        static int s_codesEntry = 0;
        if (s_codesEntry++ < 30) {
            const uint32_t strm = GPR_U32(ctx, 17);
            std::cerr << "[inflate_codes] ENTRY(after load) #" << s_codesEntry << " reg16=0x" << std::hex << GPR_U32(ctx, 16)
                      << " reg17(stream)=0x" << strm << " reg22(next_in)=0x" << GPR_U32(ctx, 22) << " reg23(avail_in)=0x" << GPR_U32(ctx, 23);
            if (strm) std::cerr << " strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4)) << " strm+8=0x" << READ32(ADD32(strm, 8)) << " strm+12=0x" << READ32(ADD32(strm, 12));
            std::cerr << std::dec << "\n";
        }
    }
label_2da624:
    // 0x2da624: 0x8e140020
    ctx->pc = 0x2da624u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2da628:
    // 0x2da628: 0x8e050030
    ctx->pc = 0x2da628u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2da62c:
    // 0x2da62c: 0x8e03002c
    ctx->pc = 0x2da62cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2da630:
    // 0x2da630: 0xa3102b
    ctx->pc = 0x2da630u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2da634:
    // 0x2da634: 0x10400004
label_2da638:
    if (ctx->pc == 0x2DA638u) {
        ctx->pc = 0x2DA638u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x2DA63Cu;
        goto label_2da63c;
    }
    ctx->pc = 0x2DA634u;
    {
        const bool branch_taken_0x2da634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA638u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x2da634) {
            ctx->pc = 0x2DA648u;
            goto label_2da648;
        }
    }
    ctx->pc = 0x2DA63Cu;
label_2da63c:
    // 0x2da63c: 0x653823
    ctx->pc = 0x2da63cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2da640:
    // 0x2da640: 0x10000003
label_2da644:
    if (ctx->pc == 0x2DA644u) {
        ctx->pc = 0x2DA644u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x2DA648u;
        goto label_2da648;
    }
    ctx->pc = 0x2DA640u;
    {
        const bool branch_taken_0x2da640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA644u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        if (branch_taken_0x2da640) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA648u;
label_2da648:
    // 0x2da648: 0x8e020028
    ctx->pc = 0x2da648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2da64c:
    // 0x2da64c: 0x453823
    ctx->pc = 0x2da64cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2da650:
    // 0x2da650: 0x8e430000
    ctx->pc = 0x2da650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da654:
    // 0x2da654: 0x2c62000a
    ctx->pc = 0x2da654u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_2da658:
    // 0x2da658: 0x10400200
label_2da65c:
    if (ctx->pc == 0x2DA65Cu) {
        ctx->pc = 0x2DA65Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2DA660u;
        goto label_2da660;
    }
    ctx->pc = 0x2DA658u;
    {
        const bool branch_taken_0x2da658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA65Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2da658) {
            ctx->pc = 0x2DAE5Cu;
            goto label_2dae5c;
        }
    }
    ctx->pc = 0x2DA660u;
label_2da660:
    // 0x2da660: 0x24428210
    ctx->pc = 0x2da660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935056));
label_2da664:
    // 0x2da664: 0x31880
    ctx->pc = 0x2da664u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2da668:
    // 0x2da668: 0x621821
    ctx->pc = 0x2da668u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2da66c:
    // 0x2da66c: 0x8c620000
    ctx->pc = 0x2da66cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2da670:
    // 0x2da670: 0x400008
label_2da674:
    if (ctx->pc == 0x2DA674u) {
        ctx->pc = 0x2DA678u;
        goto label_2da678;
    }
    ctx->pc = 0x2DA670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA5E8u: goto label_2da5e8;
            case 0x2DA5ECu: goto label_2da5ec;
            case 0x2DA5F0u: goto label_2da5f0;
            case 0x2DA5F4u: goto label_2da5f4;
            case 0x2DA5F8u: goto label_2da5f8;
            case 0x2DA5FCu: goto label_2da5fc;
            case 0x2DA600u: goto label_2da600;
            case 0x2DA604u: goto label_2da604;
            case 0x2DA608u: goto label_2da608;
            case 0x2DA60Cu: goto label_2da60c;
            case 0x2DA610u: goto label_2da610;
            case 0x2DA614u: goto label_2da614;
            case 0x2DA618u: goto label_2da618;
            case 0x2DA61Cu: goto label_2da61c;
            case 0x2DA620u: goto label_2da620;
            case 0x2DA624u: goto label_2da624;
            case 0x2DA628u: goto label_2da628;
            case 0x2DA62Cu: goto label_2da62c;
            case 0x2DA630u: goto label_2da630;
            case 0x2DA634u: goto label_2da634;
            case 0x2DA638u: goto label_2da638;
            case 0x2DA63Cu: goto label_2da63c;
            case 0x2DA640u: goto label_2da640;
            case 0x2DA644u: goto label_2da644;
            case 0x2DA648u: goto label_2da648;
            case 0x2DA64Cu: goto label_2da64c;
            case 0x2DA650u: goto label_2da650;
            case 0x2DA654u: goto label_2da654;
            case 0x2DA658u: goto label_2da658;
            case 0x2DA65Cu: goto label_2da65c;
            case 0x2DA660u: goto label_2da660;
            case 0x2DA664u: goto label_2da664;
            case 0x2DA668u: goto label_2da668;
            case 0x2DA66Cu: goto label_2da66c;
            case 0x2DA670u: goto label_2da670;
            case 0x2DA674u: goto label_2da674;
            case 0x2DA678u: goto label_2da678;
            case 0x2DA67Cu: goto label_2da67c;
            case 0x2DA680u: goto label_2da680;
            case 0x2DA684u: goto label_2da684;
            case 0x2DA688u: goto label_2da688;
            case 0x2DA68Cu: goto label_2da68c;
            case 0x2DA690u: goto label_2da690;
            case 0x2DA694u: goto label_2da694;
            case 0x2DA698u: goto label_2da698;
            case 0x2DA69Cu: goto label_2da69c;
            case 0x2DA6A0u: goto label_2da6a0;
            case 0x2DA6A4u: goto label_2da6a4;
            case 0x2DA6A8u: goto label_2da6a8;
            case 0x2DA6ACu: goto label_2da6ac;
            case 0x2DA6B0u: goto label_2da6b0;
            case 0x2DA6B4u: goto label_2da6b4;
            case 0x2DA6B8u: goto label_2da6b8;
            case 0x2DA6BCu: goto label_2da6bc;
            case 0x2DA6C0u: goto label_2da6c0;
            case 0x2DA6C4u: goto label_2da6c4;
            case 0x2DA6C8u: goto label_2da6c8;
            case 0x2DA6CCu: goto label_2da6cc;
            case 0x2DA6D0u: goto label_2da6d0;
            case 0x2DA6D4u: goto label_2da6d4;
            case 0x2DA6D8u: goto label_2da6d8;
            case 0x2DA6DCu: goto label_2da6dc;
            case 0x2DA6E0u: goto label_2da6e0;
            case 0x2DA6E4u: goto label_2da6e4;
            case 0x2DA6E8u: goto label_2da6e8;
            case 0x2DA6ECu: goto label_2da6ec;
            case 0x2DA6F0u: goto label_2da6f0;
            case 0x2DA6F4u: goto label_2da6f4;
            case 0x2DA6F8u: goto label_2da6f8;
            case 0x2DA6FCu: goto label_2da6fc;
            case 0x2DA700u: goto label_2da700;
            case 0x2DA704u: goto label_2da704;
            case 0x2DA708u: goto label_2da708;
            case 0x2DA70Cu: goto label_2da70c;
            case 0x2DA710u: goto label_2da710;
            case 0x2DA714u: goto label_2da714;
            case 0x2DA718u: goto label_2da718;
            case 0x2DA71Cu: goto label_2da71c;
            case 0x2DA720u: goto label_2da720;
            case 0x2DA724u: goto label_2da724;
            case 0x2DA728u: goto label_2da728;
            case 0x2DA72Cu: goto label_2da72c;
            case 0x2DA730u: goto label_2da730;
            case 0x2DA734u: goto label_2da734;
            case 0x2DA738u: goto label_2da738;
            case 0x2DA73Cu: goto label_2da73c;
            case 0x2DA740u: goto label_2da740;
            case 0x2DA744u: goto label_2da744;
            case 0x2DA748u: goto label_2da748;
            case 0x2DA74Cu: goto label_2da74c;
            case 0x2DA750u: goto label_2da750;
            case 0x2DA754u: goto label_2da754;
            case 0x2DA758u: goto label_2da758;
            case 0x2DA75Cu: goto label_2da75c;
            case 0x2DA760u: goto label_2da760;
            case 0x2DA764u: goto label_2da764;
            case 0x2DA768u: goto label_2da768;
            case 0x2DA76Cu: goto label_2da76c;
            case 0x2DA770u: goto label_2da770;
            case 0x2DA774u: goto label_2da774;
            case 0x2DA778u: goto label_2da778;
            case 0x2DA77Cu: goto label_2da77c;
            case 0x2DA780u: goto label_2da780;
            case 0x2DA784u: goto label_2da784;
            case 0x2DA788u: goto label_2da788;
            case 0x2DA78Cu: goto label_2da78c;
            case 0x2DA790u: goto label_2da790;
            case 0x2DA794u: goto label_2da794;
            case 0x2DA798u: goto label_2da798;
            case 0x2DA79Cu: goto label_2da79c;
            case 0x2DA7A0u: goto label_2da7a0;
            case 0x2DA7A4u: goto label_2da7a4;
            case 0x2DA7A8u: goto label_2da7a8;
            case 0x2DA7ACu: goto label_2da7ac;
            case 0x2DA7B0u: goto label_2da7b0;
            case 0x2DA7B4u: goto label_2da7b4;
            case 0x2DA7B8u: goto label_2da7b8;
            case 0x2DA7BCu: goto label_2da7bc;
            case 0x2DA7C0u: goto label_2da7c0;
            case 0x2DA7C4u: goto label_2da7c4;
            case 0x2DA7C8u: goto label_2da7c8;
            case 0x2DA7CCu: goto label_2da7cc;
            case 0x2DA7D0u: goto label_2da7d0;
            case 0x2DA7D4u: goto label_2da7d4;
            case 0x2DA7D8u: goto label_2da7d8;
            case 0x2DA7DCu: goto label_2da7dc;
            case 0x2DA7E0u: goto label_2da7e0;
            case 0x2DA7E4u: goto label_2da7e4;
            case 0x2DA7E8u: goto label_2da7e8;
            case 0x2DA7ECu: goto label_2da7ec;
            case 0x2DA7F0u: goto label_2da7f0;
            case 0x2DA7F4u: goto label_2da7f4;
            case 0x2DA7F8u: goto label_2da7f8;
            case 0x2DA7FCu: goto label_2da7fc;
            case 0x2DA800u: goto label_2da800;
            case 0x2DA804u: goto label_2da804;
            case 0x2DA808u: goto label_2da808;
            case 0x2DA80Cu: goto label_2da80c;
            case 0x2DA810u: goto label_2da810;
            case 0x2DA814u: goto label_2da814;
            case 0x2DA818u: goto label_2da818;
            case 0x2DA81Cu: goto label_2da81c;
            case 0x2DA820u: goto label_2da820;
            case 0x2DA824u: goto label_2da824;
            case 0x2DA828u: goto label_2da828;
            case 0x2DA82Cu: goto label_2da82c;
            case 0x2DA830u: goto label_2da830;
            case 0x2DA834u: goto label_2da834;
            case 0x2DA838u: goto label_2da838;
            case 0x2DA83Cu: goto label_2da83c;
            case 0x2DA840u: goto label_2da840;
            case 0x2DA844u: goto label_2da844;
            case 0x2DA848u: goto label_2da848;
            case 0x2DA84Cu: goto label_2da84c;
            case 0x2DA850u: goto label_2da850;
            case 0x2DA854u: goto label_2da854;
            case 0x2DA858u: goto label_2da858;
            case 0x2DA85Cu: goto label_2da85c;
            case 0x2DA860u: goto label_2da860;
            case 0x2DA864u: goto label_2da864;
            case 0x2DA868u: goto label_2da868;
            case 0x2DA86Cu: goto label_2da86c;
            case 0x2DA870u: goto label_2da870;
            case 0x2DA874u: goto label_2da874;
            case 0x2DA878u: goto label_2da878;
            case 0x2DA87Cu: goto label_2da87c;
            case 0x2DA880u: goto label_2da880;
            case 0x2DA884u: goto label_2da884;
            case 0x2DA888u: goto label_2da888;
            case 0x2DA88Cu: goto label_2da88c;
            case 0x2DA890u: goto label_2da890;
            case 0x2DA894u: goto label_2da894;
            case 0x2DA898u: goto label_2da898;
            case 0x2DA89Cu: goto label_2da89c;
            case 0x2DA8A0u: goto label_2da8a0;
            case 0x2DA8A4u: goto label_2da8a4;
            case 0x2DA8A8u: goto label_2da8a8;
            case 0x2DA8ACu: goto label_2da8ac;
            case 0x2DA8B0u: goto label_2da8b0;
            case 0x2DA8B4u: goto label_2da8b4;
            case 0x2DA8B8u: goto label_2da8b8;
            case 0x2DA8BCu: goto label_2da8bc;
            case 0x2DA8C0u: goto label_2da8c0;
            case 0x2DA8C4u: goto label_2da8c4;
            case 0x2DA8C8u: goto label_2da8c8;
            case 0x2DA8CCu: goto label_2da8cc;
            case 0x2DA8D0u: goto label_2da8d0;
            case 0x2DA8D4u: goto label_2da8d4;
            case 0x2DA8D8u: goto label_2da8d8;
            case 0x2DA8DCu: goto label_2da8dc;
            case 0x2DA8E0u: goto label_2da8e0;
            case 0x2DA8E4u: goto label_2da8e4;
            case 0x2DA8E8u: goto label_2da8e8;
            case 0x2DA8ECu: goto label_2da8ec;
            case 0x2DA8F0u: goto label_2da8f0;
            case 0x2DA8F4u: goto label_2da8f4;
            case 0x2DA8F8u: goto label_2da8f8;
            case 0x2DA8FCu: goto label_2da8fc;
            case 0x2DA900u: goto label_2da900;
            case 0x2DA904u: goto label_2da904;
            case 0x2DA908u: goto label_2da908;
            case 0x2DA90Cu: goto label_2da90c;
            case 0x2DA910u: goto label_2da910;
            case 0x2DA914u: goto label_2da914;
            case 0x2DA918u: goto label_2da918;
            case 0x2DA91Cu: goto label_2da91c;
            case 0x2DA920u: goto label_2da920;
            case 0x2DA924u: goto label_2da924;
            case 0x2DA928u: goto label_2da928;
            case 0x2DA92Cu: goto label_2da92c;
            case 0x2DA930u: goto label_2da930;
            case 0x2DA934u: goto label_2da934;
            case 0x2DA938u: goto label_2da938;
            case 0x2DA93Cu: goto label_2da93c;
            case 0x2DA940u: goto label_2da940;
            case 0x2DA944u: goto label_2da944;
            case 0x2DA948u: goto label_2da948;
            case 0x2DA94Cu: goto label_2da94c;
            case 0x2DA950u: goto label_2da950;
            case 0x2DA954u: goto label_2da954;
            case 0x2DA958u: goto label_2da958;
            case 0x2DA95Cu: goto label_2da95c;
            case 0x2DA960u: goto label_2da960;
            case 0x2DA964u: goto label_2da964;
            case 0x2DA968u: goto label_2da968;
            case 0x2DA96Cu: goto label_2da96c;
            case 0x2DA970u: goto label_2da970;
            case 0x2DA974u: goto label_2da974;
            case 0x2DA978u: goto label_2da978;
            case 0x2DA97Cu: goto label_2da97c;
            case 0x2DA980u: goto label_2da980;
            case 0x2DA984u: goto label_2da984;
            case 0x2DA988u: goto label_2da988;
            case 0x2DA98Cu: goto label_2da98c;
            case 0x2DA990u: goto label_2da990;
            case 0x2DA994u: goto label_2da994;
            case 0x2DA998u: goto label_2da998;
            case 0x2DA99Cu: goto label_2da99c;
            case 0x2DA9A0u: goto label_2da9a0;
            case 0x2DA9A4u: goto label_2da9a4;
            case 0x2DA9A8u: goto label_2da9a8;
            case 0x2DA9ACu: goto label_2da9ac;
            case 0x2DA9B0u: goto label_2da9b0;
            case 0x2DA9B4u: goto label_2da9b4;
            case 0x2DA9B8u: goto label_2da9b8;
            case 0x2DA9BCu: goto label_2da9bc;
            case 0x2DA9C0u: goto label_2da9c0;
            case 0x2DA9C4u: goto label_2da9c4;
            case 0x2DA9C8u: goto label_2da9c8;
            case 0x2DA9CCu: goto label_2da9cc;
            case 0x2DA9D0u: goto label_2da9d0;
            case 0x2DA9D4u: goto label_2da9d4;
            case 0x2DA9D8u: goto label_2da9d8;
            case 0x2DA9DCu: goto label_2da9dc;
            case 0x2DA9E0u: goto label_2da9e0;
            case 0x2DA9E4u: goto label_2da9e4;
            case 0x2DA9E8u: goto label_2da9e8;
            case 0x2DA9ECu: goto label_2da9ec;
            case 0x2DA9F0u: goto label_2da9f0;
            case 0x2DA9F4u: goto label_2da9f4;
            case 0x2DA9F8u: goto label_2da9f8;
            case 0x2DA9FCu: goto label_2da9fc;
            case 0x2DAA00u: goto label_2daa00;
            case 0x2DAA04u: goto label_2daa04;
            case 0x2DAA08u: goto label_2daa08;
            case 0x2DAA0Cu: goto label_2daa0c;
            case 0x2DAA10u: goto label_2daa10;
            case 0x2DAA14u: goto label_2daa14;
            case 0x2DAA18u: goto label_2daa18;
            case 0x2DAA1Cu: goto label_2daa1c;
            case 0x2DAA20u: goto label_2daa20;
            case 0x2DAA24u: goto label_2daa24;
            case 0x2DAA28u: goto label_2daa28;
            case 0x2DAA2Cu: goto label_2daa2c;
            case 0x2DAA30u: goto label_2daa30;
            case 0x2DAA34u: goto label_2daa34;
            case 0x2DAA38u: goto label_2daa38;
            case 0x2DAA3Cu: goto label_2daa3c;
            case 0x2DAA40u: goto label_2daa40;
            case 0x2DAA44u: goto label_2daa44;
            case 0x2DAA48u: goto label_2daa48;
            case 0x2DAA4Cu: goto label_2daa4c;
            case 0x2DAA50u: goto label_2daa50;
            case 0x2DAA54u: goto label_2daa54;
            case 0x2DAA58u: goto label_2daa58;
            case 0x2DAA5Cu: goto label_2daa5c;
            case 0x2DAA60u: goto label_2daa60;
            case 0x2DAA64u: goto label_2daa64;
            case 0x2DAA68u: goto label_2daa68;
            case 0x2DAA6Cu: goto label_2daa6c;
            case 0x2DAA70u: goto label_2daa70;
            case 0x2DAA74u: goto label_2daa74;
            case 0x2DAA78u: goto label_2daa78;
            case 0x2DAA7Cu: goto label_2daa7c;
            case 0x2DAA80u: goto label_2daa80;
            case 0x2DAA84u: goto label_2daa84;
            case 0x2DAA88u: goto label_2daa88;
            case 0x2DAA8Cu: goto label_2daa8c;
            case 0x2DAA90u: goto label_2daa90;
            case 0x2DAA94u: goto label_2daa94;
            case 0x2DAA98u: goto label_2daa98;
            case 0x2DAA9Cu: goto label_2daa9c;
            case 0x2DAAA0u: goto label_2daaa0;
            case 0x2DAAA4u: goto label_2daaa4;
            case 0x2DAAA8u: goto label_2daaa8;
            case 0x2DAAACu: goto label_2daaac;
            case 0x2DAAB0u: goto label_2daab0;
            case 0x2DAAB4u: goto label_2daab4;
            case 0x2DAAB8u: goto label_2daab8;
            case 0x2DAABCu: goto label_2daabc;
            case 0x2DAAC0u: goto label_2daac0;
            case 0x2DAAC4u: goto label_2daac4;
            case 0x2DAAC8u: goto label_2daac8;
            case 0x2DAACCu: goto label_2daacc;
            case 0x2DAAD0u: goto label_2daad0;
            case 0x2DAAD4u: goto label_2daad4;
            case 0x2DAAD8u: goto label_2daad8;
            case 0x2DAADCu: goto label_2daadc;
            case 0x2DAAE0u: goto label_2daae0;
            case 0x2DAAE4u: goto label_2daae4;
            case 0x2DAAE8u: goto label_2daae8;
            case 0x2DAAECu: goto label_2daaec;
            case 0x2DAAF0u: goto label_2daaf0;
            case 0x2DAAF4u: goto label_2daaf4;
            case 0x2DAAF8u: goto label_2daaf8;
            case 0x2DAAFCu: goto label_2daafc;
            case 0x2DAB00u: goto label_2dab00;
            case 0x2DAB04u: goto label_2dab04;
            case 0x2DAB08u: goto label_2dab08;
            case 0x2DAB0Cu: goto label_2dab0c;
            case 0x2DAB10u: goto label_2dab10;
            case 0x2DAB14u: goto label_2dab14;
            case 0x2DAB18u: goto label_2dab18;
            case 0x2DAB1Cu: goto label_2dab1c;
            case 0x2DAB20u: goto label_2dab20;
            case 0x2DAB24u: goto label_2dab24;
            case 0x2DAB28u: goto label_2dab28;
            case 0x2DAB2Cu: goto label_2dab2c;
            case 0x2DAB30u: goto label_2dab30;
            case 0x2DAB34u: goto label_2dab34;
            case 0x2DAB38u: goto label_2dab38;
            case 0x2DAB3Cu: goto label_2dab3c;
            case 0x2DAB40u: goto label_2dab40;
            case 0x2DAB44u: goto label_2dab44;
            case 0x2DAB48u: goto label_2dab48;
            case 0x2DAB4Cu: goto label_2dab4c;
            case 0x2DAB50u: goto label_2dab50;
            case 0x2DAB54u: goto label_2dab54;
            case 0x2DAB58u: goto label_2dab58;
            case 0x2DAB5Cu: goto label_2dab5c;
            case 0x2DAB60u: goto label_2dab60;
            case 0x2DAB64u: goto label_2dab64;
            case 0x2DAB68u: goto label_2dab68;
            case 0x2DAB6Cu: goto label_2dab6c;
            case 0x2DAB70u: goto label_2dab70;
            case 0x2DAB74u: goto label_2dab74;
            case 0x2DAB78u: goto label_2dab78;
            case 0x2DAB7Cu: goto label_2dab7c;
            case 0x2DAB80u: goto label_2dab80;
            case 0x2DAB84u: goto label_2dab84;
            case 0x2DAB88u: goto label_2dab88;
            case 0x2DAB8Cu: goto label_2dab8c;
            case 0x2DAB90u: goto label_2dab90;
            case 0x2DAB94u: goto label_2dab94;
            case 0x2DAB98u: goto label_2dab98;
            case 0x2DAB9Cu: goto label_2dab9c;
            case 0x2DABA0u: goto label_2daba0;
            case 0x2DABA4u: goto label_2daba4;
            case 0x2DABA8u: goto label_2daba8;
            case 0x2DABACu: goto label_2dabac;
            case 0x2DABB0u: goto label_2dabb0;
            case 0x2DABB4u: goto label_2dabb4;
            case 0x2DABB8u: goto label_2dabb8;
            case 0x2DABBCu: goto label_2dabbc;
            case 0x2DABC0u: goto label_2dabc0;
            case 0x2DABC4u: goto label_2dabc4;
            case 0x2DABC8u: goto label_2dabc8;
            case 0x2DABCCu: goto label_2dabcc;
            case 0x2DABD0u: goto label_2dabd0;
            case 0x2DABD4u: goto label_2dabd4;
            case 0x2DABD8u: goto label_2dabd8;
            case 0x2DABDCu: goto label_2dabdc;
            case 0x2DABE0u: goto label_2dabe0;
            case 0x2DABE4u: goto label_2dabe4;
            case 0x2DABE8u: goto label_2dabe8;
            case 0x2DABECu: goto label_2dabec;
            case 0x2DABF0u: goto label_2dabf0;
            case 0x2DABF4u: goto label_2dabf4;
            case 0x2DABF8u: goto label_2dabf8;
            case 0x2DABFCu: goto label_2dabfc;
            case 0x2DAC00u: goto label_2dac00;
            case 0x2DAC04u: goto label_2dac04;
            case 0x2DAC08u: goto label_2dac08;
            case 0x2DAC0Cu: goto label_2dac0c;
            case 0x2DAC10u: goto label_2dac10;
            case 0x2DAC14u: goto label_2dac14;
            case 0x2DAC18u: goto label_2dac18;
            case 0x2DAC1Cu: goto label_2dac1c;
            case 0x2DAC20u: goto label_2dac20;
            case 0x2DAC24u: goto label_2dac24;
            case 0x2DAC28u: goto label_2dac28;
            case 0x2DAC2Cu: goto label_2dac2c;
            case 0x2DAC30u: goto label_2dac30;
            case 0x2DAC34u: goto label_2dac34;
            case 0x2DAC38u: goto label_2dac38;
            case 0x2DAC3Cu: goto label_2dac3c;
            case 0x2DAC40u: goto label_2dac40;
            case 0x2DAC44u: goto label_2dac44;
            case 0x2DAC48u: goto label_2dac48;
            case 0x2DAC4Cu: goto label_2dac4c;
            case 0x2DAC50u: goto label_2dac50;
            case 0x2DAC54u: goto label_2dac54;
            case 0x2DAC58u: goto label_2dac58;
            case 0x2DAC5Cu: goto label_2dac5c;
            case 0x2DAC60u: goto label_2dac60;
            case 0x2DAC64u: goto label_2dac64;
            case 0x2DAC68u: goto label_2dac68;
            case 0x2DAC6Cu: goto label_2dac6c;
            case 0x2DAC70u: goto label_2dac70;
            case 0x2DAC74u: goto label_2dac74;
            case 0x2DAC78u: goto label_2dac78;
            case 0x2DAC7Cu: goto label_2dac7c;
            case 0x2DAC80u: goto label_2dac80;
            case 0x2DAC84u: goto label_2dac84;
            case 0x2DAC88u: goto label_2dac88;
            case 0x2DAC8Cu: goto label_2dac8c;
            case 0x2DAC90u: goto label_2dac90;
            case 0x2DAC94u: goto label_2dac94;
            case 0x2DAC98u: goto label_2dac98;
            case 0x2DAC9Cu: goto label_2dac9c;
            case 0x2DACA0u: goto label_2daca0;
            case 0x2DACA4u: goto label_2daca4;
            case 0x2DACA8u: goto label_2daca8;
            case 0x2DACACu: goto label_2dacac;
            case 0x2DACB0u: goto label_2dacb0;
            case 0x2DACB4u: goto label_2dacb4;
            case 0x2DACB8u: goto label_2dacb8;
            case 0x2DACBCu: goto label_2dacbc;
            case 0x2DACC0u: goto label_2dacc0;
            case 0x2DACC4u: goto label_2dacc4;
            case 0x2DACC8u: goto label_2dacc8;
            case 0x2DACCCu: goto label_2daccc;
            case 0x2DACD0u: goto label_2dacd0;
            case 0x2DACD4u: goto label_2dacd4;
            case 0x2DACD8u: goto label_2dacd8;
            case 0x2DACDCu: goto label_2dacdc;
            case 0x2DACE0u: goto label_2dace0;
            case 0x2DACE4u: goto label_2dace4;
            case 0x2DACE8u: goto label_2dace8;
            case 0x2DACECu: goto label_2dacec;
            case 0x2DACF0u: goto label_2dacf0;
            case 0x2DACF4u: goto label_2dacf4;
            case 0x2DACF8u: goto label_2dacf8;
            case 0x2DACFCu: goto label_2dacfc;
            case 0x2DAD00u: goto label_2dad00;
            case 0x2DAD04u: goto label_2dad04;
            case 0x2DAD08u: goto label_2dad08;
            case 0x2DAD0Cu: goto label_2dad0c;
            case 0x2DAD10u: goto label_2dad10;
            case 0x2DAD14u: goto label_2dad14;
            case 0x2DAD18u: goto label_2dad18;
            case 0x2DAD1Cu: goto label_2dad1c;
            case 0x2DAD20u: goto label_2dad20;
            case 0x2DAD24u: goto label_2dad24;
            case 0x2DAD28u: goto label_2dad28;
            case 0x2DAD2Cu: goto label_2dad2c;
            case 0x2DAD30u: goto label_2dad30;
            case 0x2DAD34u: goto label_2dad34;
            case 0x2DAD38u: goto label_2dad38;
            case 0x2DAD3Cu: goto label_2dad3c;
            case 0x2DAD40u: goto label_2dad40;
            case 0x2DAD44u: goto label_2dad44;
            case 0x2DAD48u: goto label_2dad48;
            case 0x2DAD4Cu: goto label_2dad4c;
            case 0x2DAD50u: goto label_2dad50;
            case 0x2DAD54u: goto label_2dad54;
            case 0x2DAD58u: goto label_2dad58;
            case 0x2DAD5Cu: goto label_2dad5c;
            case 0x2DAD60u: goto label_2dad60;
            case 0x2DAD64u: goto label_2dad64;
            case 0x2DAD68u: goto label_2dad68;
            case 0x2DAD6Cu: goto label_2dad6c;
            case 0x2DAD70u: goto label_2dad70;
            case 0x2DAD74u: goto label_2dad74;
            case 0x2DAD78u: goto label_2dad78;
            case 0x2DAD7Cu: goto label_2dad7c;
            case 0x2DAD80u: goto label_2dad80;
            case 0x2DAD84u: goto label_2dad84;
            case 0x2DAD88u: goto label_2dad88;
            case 0x2DAD8Cu: goto label_2dad8c;
            case 0x2DAD90u: goto label_2dad90;
            case 0x2DAD94u: goto label_2dad94;
            case 0x2DAD98u: goto label_2dad98;
            case 0x2DAD9Cu: goto label_2dad9c;
            case 0x2DADA0u: goto label_2dada0;
            case 0x2DADA4u: goto label_2dada4;
            case 0x2DADA8u: goto label_2dada8;
            case 0x2DADACu: goto label_2dadac;
            case 0x2DADB0u: goto label_2dadb0;
            case 0x2DADB4u: goto label_2dadb4;
            case 0x2DADB8u: goto label_2dadb8;
            case 0x2DADBCu: goto label_2dadbc;
            case 0x2DADC0u: goto label_2dadc0;
            case 0x2DADC4u: goto label_2dadc4;
            case 0x2DADC8u: goto label_2dadc8;
            case 0x2DADCCu: goto label_2dadcc;
            case 0x2DADD0u: goto label_2dadd0;
            case 0x2DADD4u: goto label_2dadd4;
            case 0x2DADD8u: goto label_2dadd8;
            case 0x2DADDCu: goto label_2daddc;
            case 0x2DADE0u: goto label_2dade0;
            case 0x2DADE4u: goto label_2dade4;
            case 0x2DADE8u: goto label_2dade8;
            case 0x2DADECu: goto label_2dadec;
            case 0x2DADF0u: goto label_2dadf0;
            case 0x2DADF4u: goto label_2dadf4;
            case 0x2DADF8u: goto label_2dadf8;
            case 0x2DADFCu: goto label_2dadfc;
            case 0x2DAE00u: goto label_2dae00;
            case 0x2DAE04u: goto label_2dae04;
            case 0x2DAE08u: goto label_2dae08;
            case 0x2DAE0Cu: goto label_2dae0c;
            case 0x2DAE10u: goto label_2dae10;
            case 0x2DAE14u: goto label_2dae14;
            case 0x2DAE18u: goto label_2dae18;
            case 0x2DAE1Cu: goto label_2dae1c;
            case 0x2DAE20u: goto label_2dae20;
            case 0x2DAE24u: goto label_2dae24;
            case 0x2DAE28u: goto label_2dae28;
            case 0x2DAE2Cu: goto label_2dae2c;
            case 0x2DAE30u: goto label_2dae30;
            case 0x2DAE34u: goto label_2dae34;
            case 0x2DAE38u: goto label_2dae38;
            case 0x2DAE3Cu: goto label_2dae3c;
            case 0x2DAE40u: goto label_2dae40;
            case 0x2DAE44u: goto label_2dae44;
            case 0x2DAE48u: goto label_2dae48;
            case 0x2DAE4Cu: goto label_2dae4c;
            case 0x2DAE50u: goto label_2dae50;
            case 0x2DAE54u: goto label_2dae54;
            case 0x2DAE58u: goto label_2dae58;
            case 0x2DAE5Cu: goto label_2dae5c;
            case 0x2DAE60u: goto label_2dae60;
            case 0x2DAE64u: goto label_2dae64;
            case 0x2DAE68u: goto label_2dae68;
            case 0x2DAE6Cu: goto label_2dae6c;
            case 0x2DAE70u: goto label_2dae70;
            case 0x2DAE74u: goto label_2dae74;
            case 0x2DAE78u: goto label_2dae78;
            case 0x2DAE7Cu: goto label_2dae7c;
            case 0x2DAE80u: goto label_2dae80;
            case 0x2DAE84u: goto label_2dae84;
            case 0x2DAE88u: goto label_2dae88;
            case 0x2DAE8Cu: goto label_2dae8c;
            case 0x2DAE90u: goto label_2dae90;
            case 0x2DAE94u: goto label_2dae94;
            case 0x2DAE98u: goto label_2dae98;
            case 0x2DAE9Cu: goto label_2dae9c;
            case 0x2DAEA0u: goto label_2daea0;
            case 0x2DAEA4u: goto label_2daea4;
            case 0x2DAEA8u: goto label_2daea8;
            case 0x2DAEACu: goto label_2daeac;
            case 0x2DAEB0u: goto label_2daeb0;
            case 0x2DAEB4u: goto label_2daeb4;
            case 0x2DAEB8u: goto label_2daeb8;
            case 0x2DAEBCu: goto label_2daebc;
            case 0x2DAEC0u: goto label_2daec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DA678u;
label_2da678:
    // 0x2da678: 0x2ce20102
    ctx->pc = 0x2da678u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 258));
label_2da67c:
    // 0x2da67c: 0x5440002b
label_2da680:
    if (ctx->pc == 0x2DA680u) {
        ctx->pc = 0x2DA680u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2DA684u;
        goto label_2da684;
    }
    ctx->pc = 0x2DA67Cu;
    {
        const bool branch_taken_0x2da67c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2da67c) {
            ctx->pc = 0x2DA680u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->pc = 0x2DA72Cu;
            goto label_2da72c;
        }
    }
    ctx->pc = 0x2DA684u;
label_2da684:
    // 0x2da684: 0x2ee2000a
    ctx->pc = 0x2da684u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 23), 10));
label_2da688:
    // 0x2da688: 0x54400028
label_2da68c:
    if (ctx->pc == 0x2DA68Cu) {
        ctx->pc = 0x2DA68Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2DA690u;
        goto label_2da690;
    }
    ctx->pc = 0x2DA688u;
    {
        const bool branch_taken_0x2da688 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2da688) {
            ctx->pc = 0x2DA68Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->pc = 0x2DA72Cu;
            goto label_2da72c;
        }
    }
    ctx->pc = 0x2DA690u;
label_2da690:
    // 0x2da690: 0xae140020
    ctx->pc = 0x2da690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2da694:
    // 0x2da694: 0xae13001c
    ctx->pc = 0x2da694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2da698:
    // 0x2da698: 0xae370004
    ctx->pc = 0x2da698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2da69c:
    // 0x2da69c: 0x8e220000
    ctx->pc = 0x2da69cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da6a0:
    // 0x2da6a0: 0x2c21023
    ctx->pc = 0x2da6a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2da6a4:
    // 0x2da6a4: 0x8e230008
    ctx->pc = 0x2da6a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2da6a8:
    // 0x2da6a8: 0x431021
    ctx->pc = 0x2da6a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da6ac:
    // 0x2da6ac: 0xae220008
    ctx->pc = 0x2da6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2da6b0:
    // 0x2da6b0: 0xae360000
    ctx->pc = 0x2da6b0u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2da6b4:
    // 0x2da6b4: 0xae050030
    ctx->pc = 0x2da6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2da6b8:
    // 0x2da6b8: 0x92440010
    ctx->pc = 0x2da6b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_2da6bc:
    // 0x2da6bc: 0x92450011
    ctx->pc = 0x2da6bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_2da6c0:
    // 0x2da6c0: 0x8e460014
    ctx->pc = 0x2da6c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2da6c4:
    // 0x2da6c4: 0x8e470018
    ctx->pc = 0x2da6c4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2da6c8:
    // 0x2da6c8: 0x200402d
    ctx->pc = 0x2da6c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da6cc:
    // 0x2da6cc: 0xc0b6bbc
label_2da6d0:
    if (ctx->pc == 0x2DA6D0u) {
        ctx->pc = 0x2DA6D0u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6D4u;
        goto label_2da6d4;
    }
    ctx->pc = 0x2DA6CCu;
    SET_GPR_U32(ctx, 31, 0x2DA6D4u);
    ctx->pc = 0x2DA6D0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DAEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_fast_0x2daef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6D4u; }
    }
    if (ctx->pc != 0x2DA6D4u) { return; }
    ctx->pc = 0x2DA6D4u;
label_2da6d4:
    // 0x2da6d4: 0x40302d
    ctx->pc = 0x2da6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da6d8:
    // 0x2da6d8: 0x8e360000
    ctx->pc = 0x2da6d8u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da6dc:
    // 0x2da6dc: 0x8e370004
    ctx->pc = 0x2da6dcu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2da6e0:
    // 0x2da6e0: 0x8e140020
    ctx->pc = 0x2da6e0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2da6e4:
    // 0x2da6e4: 0x8e050030
    ctx->pc = 0x2da6e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2da6e8:
    // 0x2da6e8: 0x8e03002c
    ctx->pc = 0x2da6e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2da6ec:
    // 0x2da6ec: 0xa3102b
    ctx->pc = 0x2da6ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2da6f0:
    // 0x2da6f0: 0x10400004
label_2da6f4:
    if (ctx->pc == 0x2DA6F4u) {
        ctx->pc = 0x2DA6F4u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x2DA6F8u;
        goto label_2da6f8;
    }
    ctx->pc = 0x2DA6F0u;
    {
        const bool branch_taken_0x2da6f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA6F4u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x2da6f0) {
            ctx->pc = 0x2DA704u;
            goto label_2da704;
        }
    }
    ctx->pc = 0x2DA6F8u;
label_2da6f8:
    // 0x2da6f8: 0x651023
    ctx->pc = 0x2da6f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2da6fc:
    // 0x2da6fc: 0x10000003
label_2da700:
    if (ctx->pc == 0x2DA700u) {
        ctx->pc = 0x2DA700u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2DA704u;
        goto label_2da704;
    }
    ctx->pc = 0x2DA6FCu;
    {
        const bool branch_taken_0x2da6fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA700u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2da6fc) {
            ctx->pc = 0x2DA70Cu;
            goto label_2da70c;
        }
    }
    ctx->pc = 0x2DA704u;
label_2da704:
    // 0x2da704: 0x8e020028
    ctx->pc = 0x2da704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2da708:
    // 0x2da708: 0x453823
    ctx->pc = 0x2da708u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2da70c:
    // 0x2da70c: 0x10c00006
label_2da710:
    if (ctx->pc == 0x2DA710u) {
        ctx->pc = 0x2DA710u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2DA714u;
        goto label_2da714;
    }
    ctx->pc = 0x2DA70Cu;
    {
        const bool branch_taken_0x2da70c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA710u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x2da70c) {
            ctx->pc = 0x2DA728u;
            goto label_2da728;
        }
    }
    ctx->pc = 0x2DA714u;
label_2da714:
    // 0x2da714: 0x24040007
    ctx->pc = 0x2da714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_2da718:
    // 0x2da718: 0x38c30001
    ctx->pc = 0x2da718u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 6), 1));
label_2da71c:
    // 0x2da71c: 0x83100a
    ctx->pc = 0x2da71cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2da720:
    // 0x2da720: 0x1000ffcb
label_2da724:
    if (ctx->pc == 0x2DA724u) {
        ctx->pc = 0x2DA724u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DA728u;
        goto label_2da728;
    }
    ctx->pc = 0x2DA720u;
    {
        const bool branch_taken_0x2da720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA724u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        if (branch_taken_0x2da720) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA728u;
label_2da728:
    // 0x2da728: 0x92420010
    ctx->pc = 0x2da728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_2da72c:
    // 0x2da72c: 0xae42000c
    ctx->pc = 0x2da72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2da730:
    // 0x2da730: 0x8e420014
    ctx->pc = 0x2da730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2da734:
    // 0x2da734: 0xae420008
    ctx->pc = 0x2da734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da738:
    // 0x2da738: 0x24020001  (return value 1)
    ctx->pc = 0x2da738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2da73c:
    // 0x2da73c: store updated next_in to stream[0]. Stream is reg 17 (param_2), not reg 18.
    ctx->pc = 0x2da73cu;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2da740:
    // 0x2da740: 0x8e44000c
    ctx->pc = 0x2da740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2da744:
    // 0x2da744: 0x264102b
    ctx->pc = 0x2da744u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da748:
    // 0x2da748: 0x1040000c
label_2da74c:
    if (ctx->pc == 0x2DA74Cu) {
        ctx->pc = 0x2DA74Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        ctx->pc = 0x2DA750u;
        goto label_2da750;
    }
    ctx->pc = 0x2DA748u;
    {
        const bool branch_taken_0x2da748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA74Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2da748) {
            ctx->pc = 0x2DA77Cu;
            goto label_2da77c;
        }
    }
    ctx->pc = 0x2DA750u;
label_2da750:
    // 0x2da750: 0x12e00182
label_2da754:
    if (ctx->pc == 0x2DA754u) {
        ctx->pc = 0x2DA754u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2DA758u;
        goto label_2da758;
    }
    ctx->pc = 0x2DA750u;
    {
        const bool branch_taken_0x2da750 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA754u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2da750) {
            ctx->pc = 0x2DAD5Cu;
            goto label_2dad5c;
        }
    }
    ctx->pc = 0x2DA758u;
label_2da758:
    // 0x2da758: 0x302d
    ctx->pc = 0x2da758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da75c:
    // 0x2da75c: 0x92c20000
    ctx->pc = 0x2da75cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2da760:
    // 0x2da760: 0x2621004
    ctx->pc = 0x2da760u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2da764:
    // 0x2da764: 0x282a025
    ctx->pc = 0x2da764u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2da768:
    // 0x2da768: 0x26730008
    ctx->pc = 0x2da768u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2da76c:
    // 0x2da76c: 0x264102b
    ctx->pc = 0x2da76cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da770:
    // 0x2da770: 0x1440fff7
label_2da774:
    if (ctx->pc == 0x2DA774u) {
        ctx->pc = 0x2DA774u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x2DA778u;
        goto label_2da778;
    }
    ctx->pc = 0x2DA770u;
    {
        const bool branch_taken_0x2da770 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA774u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x2da770) {
            ctx->pc = 0x2DA750u;
            goto label_2da750;
        }
    }
    ctx->pc = 0x2DA778u;
label_2da778:
    // 0x2da778: 0x3c03003a
    ctx->pc = 0x2da778u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2da77c:
    // 0x2da77c: 0x24632720
    ctx->pc = 0x2da77cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10016));
label_2da780:
    // 0x2da780: 0x41080
    ctx->pc = 0x2da780u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2da784:
    // 0x2da784: 0x431021
    ctx->pc = 0x2da784u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da788:
    // 0x2da788: 0x8c420000
    ctx->pc = 0x2da788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da78c:
    // 0x2da78c: 0x2821024
    ctx->pc = 0x2da78cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2da790:
    // 0x2da790: 0x210c0
    ctx->pc = 0x2da790u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_2da794:
    // 0x2da794: 0x8e430008
    ctx->pc = 0x2da794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da798:
    // 0x2da798: 0x432021
    ctx->pc = 0x2da798u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da79c:
    // 0x2da79c: 0x90820001
    ctx->pc = 0x2da79cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2da7a0:
    // 0x2da7a0: 0x54a006
    ctx->pc = 0x2da7a0u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
label_2da7a4:
    // 0x2da7a4: 0x90830000
    ctx->pc = 0x2da7a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2da7a8:
    // 0x2da7a8: 0x14600006
label_2da7ac:
    if (ctx->pc == 0x2DA7ACu) {
        ctx->pc = 0x2DA7ACu;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x2DA7B0u;
        goto label_2da7b0;
    }
    ctx->pc = 0x2DA7A8u;
    {
        const bool branch_taken_0x2da7a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA7ACu;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x2da7a8) {
            ctx->pc = 0x2DA7C4u;
            goto label_2da7c4;
        }
    }
    ctx->pc = 0x2DA7B0u;
label_2da7b0:
    // 0x2da7b0: 0x8c820004
    ctx->pc = 0x2da7b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2da7b4:
    // 0x2da7b4: 0xae420008
    ctx->pc = 0x2da7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da7b8:
    // 0x2da7b8: 0x24020006
    ctx->pc = 0x2da7b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2da7bc:
    // 0x2da7bc: 0x1000ffa4
label_2da7c0:
    if (ctx->pc == 0x2DA7C0u) {
        ctx->pc = 0x2DA7C0u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DA7C4u;
        goto label_2da7c4;
    }
    ctx->pc = 0x2DA7BCu;
    {
        const bool branch_taken_0x2da7bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA7C0u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        if (branch_taken_0x2da7bc) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA7C4u;
label_2da7c4:
    // 0x2da7c4: 0x30620010
    ctx->pc = 0x2da7c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_2da7c8:
    // 0x2da7c8: 0x10400007
label_2da7cc:
    if (ctx->pc == 0x2DA7CCu) {
        ctx->pc = 0x2DA7CCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        ctx->pc = 0x2DA7D0u;
        goto label_2da7d0;
    }
    ctx->pc = 0x2DA7C8u;
    {
        const bool branch_taken_0x2da7c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA7CCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x2da7c8) {
            ctx->pc = 0x2DA7E8u;
            goto label_2da7e8;
        }
    }
    ctx->pc = 0x2DA7D0u;
label_2da7d0:
    // 0x2da7d0: 0xae420008
    ctx->pc = 0x2da7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da7d4:
    // 0x2da7d4: 0x8c820004
    ctx->pc = 0x2da7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2da7d8:
    // 0x2da7d8: 0xae420004
    ctx->pc = 0x2da7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2da7dc:
    // 0x2da7dc: 0x24020002
    ctx->pc = 0x2da7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2da7e0:
    // 0x2da7e0: 0x1000ff9b
label_2da7e4:
    if (ctx->pc == 0x2DA7E4u) {
        ctx->pc = 0x2DA7E4u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DA7E8u;
        goto label_2da7e8;
    }
    ctx->pc = 0x2DA7E0u;
    {
        const bool branch_taken_0x2da7e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA7E4u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        if (branch_taken_0x2da7e0) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA7E8u;
label_2da7e8:
    // 0x2da7e8: 0x30620040
    ctx->pc = 0x2da7e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
label_2da7ec:
    // 0x2da7ec: 0x1040005f
label_2da7f0:
    if (ctx->pc == 0x2DA7F0u) {
        ctx->pc = 0x2DA7F0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x2DA7F4u;
        goto label_2da7f4;
    }
    ctx->pc = 0x2DA7ECu;
    {
        const bool branch_taken_0x2da7ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA7F0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x2da7ec) {
            ctx->pc = 0x2DA96Cu;
            goto label_2da96c;
        }
    }
    ctx->pc = 0x2DA7F4u;
label_2da7f4:
    // 0x2da7f4: 0x10400003
label_2da7f8:
    if (ctx->pc == 0x2DA7F8u) {
        ctx->pc = 0x2DA7F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2DA7FCu;
        goto label_2da7fc;
    }
    ctx->pc = 0x2DA7F4u;
    {
        const bool branch_taken_0x2da7f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA7F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2da7f4) {
            ctx->pc = 0x2DA804u;
            goto label_2da804;
        }
    }
    ctx->pc = 0x2DA7FCu;
label_2da7fc:
    // 0x2da7fc: 0x1000ff94
label_2da800:
    if (ctx->pc == 0x2DA800u) {
        ctx->pc = 0x2DA800u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DA804u;
        goto label_2da804;
    }
    ctx->pc = 0x2DA7FCu;
    {
        const bool branch_taken_0x2da7fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA800u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        if (branch_taken_0x2da7fc) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA804u;
label_2da804:
    // 0x2da804: 0x24020009
    ctx->pc = 0x2da804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2da808:
    // 0x2da808: 0xae420000  (update next_in to stream, not return value)
    ctx->pc = 0x2da808u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2da80c:
    // 0x2da80c: 0x3c02003c
    ctx->pc = 0x2da80cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2da810:
    // 0x2da810: 0x244281d0
    ctx->pc = 0x2da810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934992));
label_2da814:
    // 0x2da814: 0xae220018
    ctx->pc = 0x2da814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2da818:
    // 0x2da818: 0xae140020
    ctx->pc = 0x2da818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2da81c:
    // 0x2da81c: 0xae13001c
    ctx->pc = 0x2da81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2da820:
    // 0x2da820: 0xae370004
    ctx->pc = 0x2da820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2da824:
    // 0x2da824: 0x8e220000
    ctx->pc = 0x2da824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da828:
    // 0x2da828: 0x2c21023
    ctx->pc = 0x2da828u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2da82c:
    // 0x2da82c: 0x8e230008
    ctx->pc = 0x2da82cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2da830:
    // 0x2da830: 0x431021
    ctx->pc = 0x2da830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da834:
    // 0x2da834: 0xae220008
    ctx->pc = 0x2da834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2da838:
    // 0x2da838: 0xae360000
    ctx->pc = 0x2da838u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2da83c:
    // 0x2da83c: 0xae050030
    ctx->pc = 0x2da83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2da840:
    // 0x2da840: 0x200202d
    ctx->pc = 0x2da840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da844:
    // 0x2da844: 0x220282d
    ctx->pc = 0x2da844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da848:
    // 0x2da848: 0x10000191
label_2da84c:
    if (ctx->pc == 0x2DA84Cu) {
        ctx->pc = 0x2DA84Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2DA850u;
        goto label_2da850;
    }
    ctx->pc = 0x2DA848u;
    {
        const bool branch_taken_0x2da848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA84Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2da848) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DA850u;
label_2da850:
    // 0x2da850: 0x8e440008
    ctx->pc = 0x2da850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da854:
    // 0x2da854: 0x264102b
    ctx->pc = 0x2da854u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da858:
    // 0x2da858: 0x1040000c
label_2da85c:
    if (ctx->pc == 0x2DA85Cu) {
        ctx->pc = 0x2DA85Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        ctx->pc = 0x2DA860u;
        goto label_2da860;
    }
    ctx->pc = 0x2DA858u;
    {
        const bool branch_taken_0x2da858 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA85Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2da858) {
            ctx->pc = 0x2DA88Cu;
            goto label_2da88c;
        }
    }
    ctx->pc = 0x2DA860u;
label_2da860:
    // 0x2da860: 0x12e0014b
label_2da864:
    if (ctx->pc == 0x2DA864u) {
        ctx->pc = 0x2DA864u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2DA868u;
        goto label_2da868;
    }
    ctx->pc = 0x2DA860u;
    {
        const bool branch_taken_0x2da860 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA864u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2da860) {
            ctx->pc = 0x2DAD90u;
            goto label_2dad90;
        }
    }
    ctx->pc = 0x2DA868u;
label_2da868:
    // 0x2da868: 0x302d
    ctx->pc = 0x2da868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da86c:
    // 0x2da86c: 0x92c20000
    ctx->pc = 0x2da86cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2da870:
    // 0x2da870: 0x2621004
    ctx->pc = 0x2da870u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2da874:
    // 0x2da874: 0x282a025
    ctx->pc = 0x2da874u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2da878:
    // 0x2da878: 0x26730008
    ctx->pc = 0x2da878u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2da87c:
    // 0x2da87c: 0x264102b
    ctx->pc = 0x2da87cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da880:
    // 0x2da880: 0x1440fff7
label_2da884:
    if (ctx->pc == 0x2DA884u) {
        ctx->pc = 0x2DA884u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x2DA888u;
        goto label_2da888;
    }
    ctx->pc = 0x2DA880u;
    {
        const bool branch_taken_0x2da880 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA884u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x2da880) {
            ctx->pc = 0x2DA860u;
            goto label_2da860;
        }
    }
    ctx->pc = 0x2DA888u;
label_2da888:
    // 0x2da888: 0x3c03003a
    ctx->pc = 0x2da888u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2da88c:
    // 0x2da88c: 0x24632720
    ctx->pc = 0x2da88cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10016));
label_2da890:
    // 0x2da890: 0x41080
    ctx->pc = 0x2da890u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2da894:
    // 0x2da894: 0x431021
    ctx->pc = 0x2da894u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da898:
    // 0x2da898: 0x8c420000
    ctx->pc = 0x2da898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da89c:
    // 0x2da89c: 0x2821024
    ctx->pc = 0x2da89cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2da8a0:
    // 0x2da8a0: 0x8e430004
    ctx->pc = 0x2da8a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2da8a4:
    // 0x2da8a4: 0x431021
    ctx->pc = 0x2da8a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da8a8:
    // 0x2da8a8: 0xae420004
    ctx->pc = 0x2da8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2da8ac:
    // 0x2da8ac: 0x94a006
    ctx->pc = 0x2da8acu;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
label_2da8b0:
    // 0x2da8b0: 0x2649823
    ctx->pc = 0x2da8b0u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da8b4:
    // 0x2da8b4: 0x92420011
    ctx->pc = 0x2da8b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_2da8b8:
    // 0x2da8b8: 0xae42000c
    ctx->pc = 0x2da8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2da8bc:
    // 0x2da8bc: 0x8e420018
    ctx->pc = 0x2da8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2da8c0:
    // 0x2da8c0: 0xae420008
    ctx->pc = 0x2da8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da8c4:
    // 0x2da8c4: 0x24020003
    ctx->pc = 0x2da8c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2da8c8:
    // 0x2da8c8: 0xae420000  (update next_in to stream)
    ctx->pc = 0x2da8c8u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2da8cc:
    // 0x2da8cc: 0x8e44000c
    ctx->pc = 0x2da8ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2da8d0:
    // 0x2da8d0: 0x264102b
    ctx->pc = 0x2da8d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da8d4:
    // 0x2da8d4: 0x1040000d
label_2da8d8:
    if (ctx->pc == 0x2DA8D8u) {
        ctx->pc = 0x2DA8D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        ctx->pc = 0x2DA8DCu;
        goto label_2da8dc;
    }
    ctx->pc = 0x2DA8D4u;
    {
        const bool branch_taken_0x2da8d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA8D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2da8d4) {
            ctx->pc = 0x2DA90Cu;
            goto label_2da90c;
        }
    }
    ctx->pc = 0x2DA8DCu;
label_2da8dc:
    // 0x2da8dc: 0x0
    ctx->pc = 0x2da8dcu;
    // NOP
label_2da8e0:
    // 0x2da8e0: 0x12e00138
label_2da8e4:
    if (ctx->pc == 0x2DA8E4u) {
        ctx->pc = 0x2DA8E4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2DA8E8u;
        goto label_2da8e8;
    }
    ctx->pc = 0x2DA8E0u;
    {
        const bool branch_taken_0x2da8e0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA8E4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2da8e0) {
            ctx->pc = 0x2DADC4u;
            goto label_2dadc4;
        }
    }
    ctx->pc = 0x2DA8E8u;
label_2da8e8:
    // 0x2da8e8: 0x302d
    ctx->pc = 0x2da8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da8ec:
    // 0x2da8ec: 0x92c20000
    ctx->pc = 0x2da8ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2da8f0:
    // 0x2da8f0: 0x2621004
    ctx->pc = 0x2da8f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2da8f4:
    // 0x2da8f4: 0x282a025
    ctx->pc = 0x2da8f4u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2da8f8:
    // 0x2da8f8: 0x26730008
    ctx->pc = 0x2da8f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2da8fc:
    // 0x2da8fc: 0x264102b
    ctx->pc = 0x2da8fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da900:
    // 0x2da900: 0x1440fff7
label_2da904:
    if (ctx->pc == 0x2DA904u) {
        ctx->pc = 0x2DA904u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x2DA908u;
        goto label_2da908;
    }
    ctx->pc = 0x2DA900u;
    {
        const bool branch_taken_0x2da900 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA904u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x2da900) {
            ctx->pc = 0x2DA8E0u;
            goto label_2da8e0;
        }
    }
    ctx->pc = 0x2DA908u;
label_2da908:
    // 0x2da908: 0x3c03003a
    ctx->pc = 0x2da908u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2da90c:
    // 0x2da90c: 0x24632720
    ctx->pc = 0x2da90cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10016));
label_2da910:
    // 0x2da910: 0x41080
    ctx->pc = 0x2da910u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2da914:
    // 0x2da914: 0x431021
    ctx->pc = 0x2da914u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da918:
    // 0x2da918: 0x8c420000
    ctx->pc = 0x2da918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da91c:
    // 0x2da91c: 0x2821024
    ctx->pc = 0x2da91cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2da920:
    // 0x2da920: 0x210c0
    ctx->pc = 0x2da920u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_2da924:
    // 0x2da924: 0x8e430008
    ctx->pc = 0x2da924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da928:
    // 0x2da928: 0x432021
    ctx->pc = 0x2da928u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da92c:
    // 0x2da92c: 0x90820001
    ctx->pc = 0x2da92cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2da930:
    // 0x2da930: 0x54a006
    ctx->pc = 0x2da930u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
label_2da934:
    // 0x2da934: 0x2629823
    ctx->pc = 0x2da934u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2da938:
    // 0x2da938: 0x90830000
    ctx->pc = 0x2da938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2da93c:
    // 0x2da93c: 0x30620010
    ctx->pc = 0x2da93cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_2da940:
    // 0x2da940: 0x10400007
label_2da944:
    if (ctx->pc == 0x2DA944u) {
        ctx->pc = 0x2DA944u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        ctx->pc = 0x2DA948u;
        goto label_2da948;
    }
    ctx->pc = 0x2DA940u;
    {
        const bool branch_taken_0x2da940 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA944u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x2da940) {
            ctx->pc = 0x2DA960u;
            goto label_2da960;
        }
    }
    ctx->pc = 0x2DA948u;
label_2da948:
    // 0x2da948: 0xae420008
    ctx->pc = 0x2da948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da94c:
    // 0x2da94c: 0x8c820004
    ctx->pc = 0x2da94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2da950:
    // 0x2da950: 0xae42000c
    ctx->pc = 0x2da950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2da954:
    // 0x2da954: 0x24020004
    ctx->pc = 0x2da954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2da958:
    // 0x2da958: 0x1000ff3d
label_2da95c:
    if (ctx->pc == 0x2DA95Cu) {
        ctx->pc = 0x2DA95Cu;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DA960u;
        goto label_2da960;
    }
    ctx->pc = 0x2DA958u;
    {
        const bool branch_taken_0x2da958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA95Cu;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        if (branch_taken_0x2da958) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA960u;
label_2da960:
    // 0x2da960: 0x30620040
    ctx->pc = 0x2da960u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
label_2da964:
    // 0x2da964: 0x14400005
label_2da968:
    if (ctx->pc == 0x2DA968u) {
        ctx->pc = 0x2DA968u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2DA96Cu;
        goto label_2da96c;
    }
    ctx->pc = 0x2DA964u;
    {
        const bool branch_taken_0x2da964 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA968u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x2da964) {
            ctx->pc = 0x2DA97Cu;
            goto label_2da97c;
        }
    }
    ctx->pc = 0x2DA96Cu;
label_2da96c:
    // 0x2da96c: 0xae43000c
    ctx->pc = 0x2da96cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2da970:
    // 0x2da970: 0x8c820004
    ctx->pc = 0x2da970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2da974:
    // 0x2da974: 0x1000ff36
label_2da978:
    if (ctx->pc == 0x2DA978u) {
        ctx->pc = 0x2DA978u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2DA97Cu;
        goto label_2da97c;
    }
    ctx->pc = 0x2DA974u;
    {
        const bool branch_taken_0x2da974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA978u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2da974) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DA97Cu;
label_2da97c:
    // 0x2da97c: 0xae420000  (update next_in to stream)
    ctx->pc = 0x2da97cu;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2da980:
    // 0x2da980: 0x3c02003c
    ctx->pc = 0x2da980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2da984:
    // 0x2da984: 0x244281f0
    ctx->pc = 0x2da984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935024));
label_2da988:
    // 0x2da988: 0xae220018
    ctx->pc = 0x2da988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2da98c:
    // 0x2da98c: 0xae140020
    ctx->pc = 0x2da98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2da990:
    // 0x2da990: 0xae13001c
    ctx->pc = 0x2da990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2da994:
    // 0x2da994: 0xae370004
    ctx->pc = 0x2da994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2da998:
    // 0x2da998: 0x8e220000
    ctx->pc = 0x2da998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da99c:
    // 0x2da99c: 0x2c21023
    ctx->pc = 0x2da99cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2da9a0:
    // 0x2da9a0: 0x8e230008
    ctx->pc = 0x2da9a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2da9a4:
    // 0x2da9a4: 0x431021
    ctx->pc = 0x2da9a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da9a8:
    // 0x2da9a8: 0xae220008
    ctx->pc = 0x2da9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2da9ac:
    // 0x2da9ac: 0xae360000
    ctx->pc = 0x2da9acu;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2da9b0:
    // 0x2da9b0: 0xae050030
    ctx->pc = 0x2da9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2da9b4:
    // 0x2da9b4: 0x200202d
    ctx->pc = 0x2da9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da9b8:
    // 0x2da9b8: 0x220282d
    ctx->pc = 0x2da9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da9bc:
    // 0x2da9bc: 0x10000134
label_2da9c0:
    if (ctx->pc == 0x2DA9C0u) {
        ctx->pc = 0x2DA9C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2DA9C4u;
        goto label_2da9c4;
    }
    ctx->pc = 0x2DA9BCu;
    {
        const bool branch_taken_0x2da9bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA9C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2da9bc) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DA9C4u;
label_2da9c4:
    // 0x2da9c4: 0x8e440008
    ctx->pc = 0x2da9c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da9c8:
    // 0x2da9c8: 0x264102b
    ctx->pc = 0x2da9c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da9cc:
    // 0x2da9cc: 0x1040000d
label_2da9d0:
    if (ctx->pc == 0x2DA9D0u) {
        ctx->pc = 0x2DA9D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        ctx->pc = 0x2DA9D4u;
        goto label_2da9d4;
    }
    ctx->pc = 0x2DA9CCu;
    {
        const bool branch_taken_0x2da9cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA9D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2da9cc) {
            ctx->pc = 0x2DAA04u;
            goto label_2daa04;
        }
    }
    ctx->pc = 0x2DA9D4u;
label_2da9d4:
    // 0x2da9d4: 0x0
    ctx->pc = 0x2da9d4u;
    // NOP
label_2da9d8:
    // 0x2da9d8: 0x12e00107
label_2da9dc:
    if (ctx->pc == 0x2DA9DCu) {
        ctx->pc = 0x2DA9DCu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2DA9E0u;
        goto label_2da9e0;
    }
    ctx->pc = 0x2DA9D8u;
    {
        const bool branch_taken_0x2da9d8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA9DCu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2da9d8) {
            ctx->pc = 0x2DADF8u;
            goto label_2dadf8;
        }
    }
    ctx->pc = 0x2DA9E0u;
label_2da9e0:
    // 0x2da9e0: 0x302d
    ctx->pc = 0x2da9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da9e4:
    // 0x2da9e4: 0x92c20000
    ctx->pc = 0x2da9e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2da9e8:
    // 0x2da9e8: 0x2621004
    ctx->pc = 0x2da9e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2da9ec:
    // 0x2da9ec: 0x282a025
    ctx->pc = 0x2da9ecu;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2da9f0:
    // 0x2da9f0: 0x26730008
    ctx->pc = 0x2da9f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2da9f4:
    // 0x2da9f4: 0x264102b
    ctx->pc = 0x2da9f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2da9f8:
    // 0x2da9f8: 0x1440fff7
label_2da9fc:
    if (ctx->pc == 0x2DA9FCu) {
        ctx->pc = 0x2DA9FCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x2DAA00u;
        goto label_2daa00;
    }
    ctx->pc = 0x2DA9F8u;
    {
        const bool branch_taken_0x2da9f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA9FCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x2da9f8) {
            ctx->pc = 0x2DA9D8u;
            goto label_2da9d8;
        }
    }
    ctx->pc = 0x2DAA00u;
label_2daa00:
    // 0x2daa00: 0x3c03003a
    ctx->pc = 0x2daa00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2daa04:
    // 0x2daa04: 0x24632720
    ctx->pc = 0x2daa04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10016));
label_2daa08:
    // 0x2daa08: 0x41080
    ctx->pc = 0x2daa08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2daa0c:
    // 0x2daa0c: 0x431021
    ctx->pc = 0x2daa0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2daa10:
    // 0x2daa10: 0x8c420000
    ctx->pc = 0x2daa10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2daa14:
    // 0x2daa14: 0x2821024
    ctx->pc = 0x2daa14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2daa18:
    // 0x2daa18: 0x8e43000c
    ctx->pc = 0x2daa18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2daa1c:
    // 0x2daa1c: 0x431021
    ctx->pc = 0x2daa1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2daa20:
    // 0x2daa20: 0xae42000c
    ctx->pc = 0x2daa20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2daa24:
    // 0x2daa24: 0x94a006
    ctx->pc = 0x2daa24u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
label_2daa28:
    // 0x2daa28: 0x2649823
    ctx->pc = 0x2daa28u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2daa2c:
    // 0x2daa2c: 0x24020005
    ctx->pc = 0x2daa2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2daa30:
    // 0x2daa30: 0xae420000  (update next_in to stream)
    ctx->pc = 0x2daa30u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2daa34:
    // 0x2daa34: 0x8e020024
    ctx->pc = 0x2daa34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2daa38:
    // 0x2daa38: 0xa22023
    ctx->pc = 0x2daa38u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2daa3c:
    // 0x2daa3c: 0x8e43000c
    ctx->pc = 0x2daa3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2daa40:
    // 0x2daa40: 0x83102b
    ctx->pc = 0x2daa40u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2daa44:
    // 0x2daa44: 0x10400004
label_2daa48:
    if (ctx->pc == 0x2DAA48u) {
        ctx->pc = 0x2DAA48u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x2DAA4Cu;
        goto label_2daa4c;
    }
    ctx->pc = 0x2DAA44u;
    {
        const bool branch_taken_0x2daa44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAA48u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x2daa44) {
            ctx->pc = 0x2DAA58u;
            goto label_2daa58;
        }
    }
    ctx->pc = 0x2DAA4Cu;
label_2daa4c:
    // 0x2daa4c: 0x8e020028
    ctx->pc = 0x2daa4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2daa50:
    // 0x2daa50: 0x10000003
label_2daa54:
    if (ctx->pc == 0x2DAA54u) {
        ctx->pc = 0x2DAA54u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2DAA58u;
        goto label_2daa58;
    }
    ctx->pc = 0x2DAA50u;
    {
        const bool branch_taken_0x2daa50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAA54u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x2daa50) {
            ctx->pc = 0x2DAA60u;
            goto label_2daa60;
        }
    }
    ctx->pc = 0x2DAA58u;
label_2daa58:
    // 0x2daa58: 0x8e42000c
    ctx->pc = 0x2daa58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2daa5c:
    // 0x2daa5c: 0xa2a823
    ctx->pc = 0x2daa5cu;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2daa60:
    // 0x2daa60: 0x8e420004
    ctx->pc = 0x2daa60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2daa64:
    // 0x2daa64: 0x5040fefa
label_2daa68:
    if (ctx->pc == 0x2DAA68u) {
        ctx->pc = 0x2DAA68u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DAA6Cu;
        goto label_2daa6c;
    }
    ctx->pc = 0x2DAA64u;
    {
        const bool branch_taken_0x2daa64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2daa64) {
            ctx->pc = 0x2DAA68u;
            { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DAA6Cu;
label_2daa6c:
    // 0x2daa6c: 0x0
    ctx->pc = 0x2daa6cu;
    // NOP
label_2daa70:
    // 0x2daa70: 0x54e00032
label_2daa74:
    if (ctx->pc == 0x2DAA74u) {
        ctx->pc = 0x2DAA74u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA78u;
        goto label_2daa78;
    }
    ctx->pc = 0x2DAA70u;
    {
        const bool branch_taken_0x2daa70 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x2daa70) {
            ctx->pc = 0x2DAA74u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DAB3Cu;
            goto label_2dab3c;
        }
    }
    ctx->pc = 0x2DAA78u;
label_2daa78:
    // 0x2daa78: 0x8e020028
    ctx->pc = 0x2daa78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2daa7c:
    // 0x2daa7c: 0x14a2000d
label_2daa80:
    if (ctx->pc == 0x2DAA80u) {
        ctx->pc = 0x2DAA84u;
        goto label_2daa84;
    }
    ctx->pc = 0x2DAA7Cu;
    {
        const bool branch_taken_0x2daa7c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2daa7c) {
            ctx->pc = 0x2DAAB4u;
            goto label_2daab4;
        }
    }
    ctx->pc = 0x2DAA84u;
label_2daa84:
    // 0x2daa84: 0x8e03002c
    ctx->pc = 0x2daa84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2daa88:
    // 0x2daa88: 0x8e020024
    ctx->pc = 0x2daa88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2daa8c:
    // 0x2daa8c: 0x10620009
label_2daa90:
    if (ctx->pc == 0x2DAA90u) {
        ctx->pc = 0x2DAA94u;
        goto label_2daa94;
    }
    ctx->pc = 0x2DAA8Cu;
    {
        const bool branch_taken_0x2daa8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2daa8c) {
            ctx->pc = 0x2DAAB4u;
            goto label_2daab4;
        }
    }
    ctx->pc = 0x2DAA94u;
label_2daa94:
    // 0x2daa94: 0x40282d
    ctx->pc = 0x2daa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daa98:
    // 0x2daa98: 0xa3102b
    ctx->pc = 0x2daa98u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2daa9c:
    // 0x2daa9c: 0x10400003
label_2daaa0:
    if (ctx->pc == 0x2DAAA0u) {
        ctx->pc = 0x2DAAA0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2DAAA4u;
        goto label_2daaa4;
    }
    ctx->pc = 0x2DAA9Cu;
    {
        const bool branch_taken_0x2daa9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAAA0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x2daa9c) {
            ctx->pc = 0x2DAAACu;
            goto label_2daaac;
        }
    }
    ctx->pc = 0x2DAAA4u;
label_2daaa4:
    // 0x2daaa4: 0x10000003
label_2daaa8:
    if (ctx->pc == 0x2DAAA8u) {
        ctx->pc = 0x2DAAA8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2DAAACu;
        goto label_2daaac;
    }
    ctx->pc = 0x2DAAA4u;
    {
        const bool branch_taken_0x2daaa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAAA8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2daaa4) {
            ctx->pc = 0x2DAAB4u;
            goto label_2daab4;
        }
    }
    ctx->pc = 0x2DAAACu;
label_2daaac:
    // 0x2daaac: 0x8e020028
    ctx->pc = 0x2daaacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2daab0:
    // 0x2daab0: 0x453823
    ctx->pc = 0x2daab0u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2daab4:
    // 0x2daab4: 0x54e00021
label_2daab8:
    if (ctx->pc == 0x2DAAB8u) {
        ctx->pc = 0x2DAAB8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAABCu;
        goto label_2daabc;
    }
    ctx->pc = 0x2DAAB4u;
    {
        const bool branch_taken_0x2daab4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x2daab4) {
            ctx->pc = 0x2DAAB8u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DAB3Cu;
            goto label_2dab3c;
        }
    }
    ctx->pc = 0x2DAABCu;
label_2daabc:
    // 0x2daabc: 0xae050030
    ctx->pc = 0x2daabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2daac0:
    // 0x2daac0: 0x200202d
    ctx->pc = 0x2daac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2daac4:
    // 0x2daac4: 0xc0b6cac
label_2daac8:
    if (ctx->pc == 0x2DAAC8u) {
        ctx->pc = 0x2DAAC8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAACCu;
        goto label_2daacc;
    }
    ctx->pc = 0x2DAAC4u;
    SET_GPR_U32(ctx, 31, 0x2DAACCu);
    ctx->pc = 0x2DAAC8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x2db2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAACCu; }
    }
    if (ctx->pc != 0x2DAACCu) { return; }
    ctx->pc = 0x2DAACCu;
label_2daacc:
    // 0x2daacc: 0x40302d
    ctx->pc = 0x2daaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daad0:
    // 0x2daad0: 0x8e050030
    ctx->pc = 0x2daad0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2daad4:
    // 0x2daad4: 0x8e03002c
    ctx->pc = 0x2daad4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2daad8:
    // 0x2daad8: 0xa3102b
    ctx->pc = 0x2daad8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2daadc:
    // 0x2daadc: 0x10400003
label_2daae0:
    if (ctx->pc == 0x2DAAE0u) {
        ctx->pc = 0x2DAAE0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2DAAE4u;
        goto label_2daae4;
    }
    ctx->pc = 0x2DAADCu;
    {
        const bool branch_taken_0x2daadc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAAE0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x2daadc) {
            ctx->pc = 0x2DAAECu;
            goto label_2daaec;
        }
    }
    ctx->pc = 0x2DAAE4u;
label_2daae4:
    // 0x2daae4: 0x10000003
label_2daae8:
    if (ctx->pc == 0x2DAAE8u) {
        ctx->pc = 0x2DAAE8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2DAAECu;
        goto label_2daaec;
    }
    ctx->pc = 0x2DAAE4u;
    {
        const bool branch_taken_0x2daae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAAE8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2daae4) {
            ctx->pc = 0x2DAAF4u;
            goto label_2daaf4;
        }
    }
    ctx->pc = 0x2DAAECu;
label_2daaec:
    // 0x2daaec: 0x8e020028
    ctx->pc = 0x2daaecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2daaf0:
    // 0x2daaf0: 0x453823
    ctx->pc = 0x2daaf0u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2daaf4:
    // 0x2daaf4: 0x8e020028
    ctx->pc = 0x2daaf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2daaf8:
    // 0x2daaf8: 0x14a2000d
label_2daafc:
    if (ctx->pc == 0x2DAAFCu) {
        ctx->pc = 0x2DAB00u;
        goto label_2dab00;
    }
    ctx->pc = 0x2DAAF8u;
    {
        const bool branch_taken_0x2daaf8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2daaf8) {
            ctx->pc = 0x2DAB30u;
            goto label_2dab30;
        }
    }
    ctx->pc = 0x2DAB00u;
label_2dab00:
    // 0x2dab00: 0x8e03002c
    ctx->pc = 0x2dab00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2dab04:
    // 0x2dab04: 0x8e020024
    ctx->pc = 0x2dab04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2dab08:
    // 0x2dab08: 0x10620009
label_2dab0c:
    if (ctx->pc == 0x2DAB0Cu) {
        ctx->pc = 0x2DAB10u;
        goto label_2dab10;
    }
    ctx->pc = 0x2DAB08u;
    {
        const bool branch_taken_0x2dab08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2dab08) {
            ctx->pc = 0x2DAB30u;
            goto label_2dab30;
        }
    }
    ctx->pc = 0x2DAB10u;
label_2dab10:
    // 0x2dab10: 0x40282d
    ctx->pc = 0x2dab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dab14:
    // 0x2dab14: 0xa3102b
    ctx->pc = 0x2dab14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2dab18:
    // 0x2dab18: 0x10400003
label_2dab1c:
    if (ctx->pc == 0x2DAB1Cu) {
        ctx->pc = 0x2DAB1Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2DAB20u;
        goto label_2dab20;
    }
    ctx->pc = 0x2DAB18u;
    {
        const bool branch_taken_0x2dab18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAB1Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x2dab18) {
            ctx->pc = 0x2DAB28u;
            goto label_2dab28;
        }
    }
    ctx->pc = 0x2DAB20u;
label_2dab20:
    // 0x2dab20: 0x10000003
label_2dab24:
    if (ctx->pc == 0x2DAB24u) {
        ctx->pc = 0x2DAB24u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2DAB28u;
        goto label_2dab28;
    }
    ctx->pc = 0x2DAB20u;
    {
        const bool branch_taken_0x2dab20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAB24u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2dab20) {
            ctx->pc = 0x2DAB30u;
            goto label_2dab30;
        }
    }
    ctx->pc = 0x2DAB28u;
label_2dab28:
    // 0x2dab28: 0x8e020028
    ctx->pc = 0x2dab28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dab2c:
    // 0x2dab2c: 0x453823
    ctx->pc = 0x2dab2cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2dab30:
    // 0x2dab30: 0x50e000be
label_2dab34:
    if (ctx->pc == 0x2DAB34u) {
        ctx->pc = 0x2DAB34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->pc = 0x2DAB38u;
        goto label_2dab38;
    }
    ctx->pc = 0x2DAB30u;
    {
        const bool branch_taken_0x2dab30 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dab30) {
            ctx->pc = 0x2DAB34u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
            ctx->pc = 0x2DAE2Cu;
            goto label_2dae2c;
        }
    }
    ctx->pc = 0x2DAB38u;
label_2dab38:
    // 0x2dab38: 0x302d
    ctx->pc = 0x2dab38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dab3c:
    // 0x2dab3c: 0x92a20000
    ctx->pc = 0x2dab3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2dab40:
    // 0x2dab40: 0xa0a20000
    ctx->pc = 0x2dab40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2dab44:
    // 0x2dab44: 0x26b50001
    ctx->pc = 0x2dab44u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2dab48:
    // 0x2dab48: 0x24a50001
    ctx->pc = 0x2dab48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2dab4c:
    // 0x2dab4c: 0x8e020028
    ctx->pc = 0x2dab4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dab50:
    // 0x2dab50: 0x16a20002
label_2dab54:
    if (ctx->pc == 0x2DAB54u) {
        ctx->pc = 0x2DAB54u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x2DAB58u;
        goto label_2dab58;
    }
    ctx->pc = 0x2DAB50u;
    {
        const bool branch_taken_0x2dab50 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DAB54u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        if (branch_taken_0x2dab50) {
            ctx->pc = 0x2DAB5Cu;
            goto label_2dab5c;
        }
    }
    ctx->pc = 0x2DAB58u;
label_2dab58:
    // 0x2dab58: 0x8e150024
    ctx->pc = 0x2dab58u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2dab5c:
    // 0x2dab5c: 0x8e420004
    ctx->pc = 0x2dab5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dab60:
    // 0x2dab60: 0x2442ffff
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dab64:
    // 0x2dab64: 0x1440ffc2
label_2dab68:
    if (ctx->pc == 0x2DAB68u) {
        ctx->pc = 0x2DAB68u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2DAB6Cu;
        goto label_2dab6c;
    }
    ctx->pc = 0x2DAB64u;
    {
        const bool branch_taken_0x2dab64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DAB68u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2dab64) {
            ctx->pc = 0x2DAA70u;
            goto label_2daa70;
        }
    }
    ctx->pc = 0x2DAB6Cu;
label_2dab6c:
    // 0x2dab6c: 0x1000feb8
label_2dab70:
    if (ctx->pc == 0x2DAB70u) {
        ctx->pc = 0x2DAB70u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DAB74u;
        goto label_2dab74;
    }
    ctx->pc = 0x2DAB6Cu;
    {
        const bool branch_taken_0x2dab6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAB70u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        if (branch_taken_0x2dab6c) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DAB74u;
label_2dab74:
    // 0x2dab74: 0x54e0003e
label_2dab78:
    if (ctx->pc == 0x2DAB78u) {
        ctx->pc = 0x2DAB78u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB7Cu;
        goto label_2dab7c;
    }
    ctx->pc = 0x2DAB74u;
    {
        const bool branch_taken_0x2dab74 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dab74) {
            ctx->pc = 0x2DAB78u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DAC70u;
            goto label_2dac70;
        }
    }
    ctx->pc = 0x2DAB7Cu;
label_2dab7c:
    // 0x2dab7c: 0x8e020028
    ctx->pc = 0x2dab7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dab80:
    // 0x2dab80: 0x14a2000d
label_2dab84:
    if (ctx->pc == 0x2DAB84u) {
        ctx->pc = 0x2DAB88u;
        goto label_2dab88;
    }
    ctx->pc = 0x2DAB80u;
    {
        const bool branch_taken_0x2dab80 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2dab80) {
            ctx->pc = 0x2DABB8u;
            goto label_2dabb8;
        }
    }
    ctx->pc = 0x2DAB88u;
label_2dab88:
    // 0x2dab88: 0x8e03002c
    ctx->pc = 0x2dab88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2dab8c:
    // 0x2dab8c: 0x8e020024
    ctx->pc = 0x2dab8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2dab90:
    // 0x2dab90: 0x10620009
label_2dab94:
    if (ctx->pc == 0x2DAB94u) {
        ctx->pc = 0x2DAB98u;
        goto label_2dab98;
    }
    ctx->pc = 0x2DAB90u;
    {
        const bool branch_taken_0x2dab90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2dab90) {
            ctx->pc = 0x2DABB8u;
            goto label_2dabb8;
        }
    }
    ctx->pc = 0x2DAB98u;
label_2dab98:
    // 0x2dab98: 0x40282d
    ctx->pc = 0x2dab98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dab9c:
    // 0x2dab9c: 0xa3102b
    ctx->pc = 0x2dab9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2daba0:
    // 0x2daba0: 0x10400003
label_2daba4:
    if (ctx->pc == 0x2DABA4u) {
        ctx->pc = 0x2DABA4u;
        SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2DABA8u;
        goto label_2daba8;
    }
    ctx->pc = 0x2DABA0u;
    {
        const bool branch_taken_0x2daba0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DABA4u;
        SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x2daba0) {
            ctx->pc = 0x2DABB0u;
            goto label_2dabb0;
        }
    }
    ctx->pc = 0x2DABA8u;
label_2daba8:
    // 0x2daba8: 0x10000003
label_2dabac:
    if (ctx->pc == 0x2DABACu) {
        ctx->pc = 0x2DABACu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x2DABB0u;
        goto label_2dabb0;
    }
    ctx->pc = 0x2DABA8u;
    {
        const bool branch_taken_0x2daba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DABACu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        if (branch_taken_0x2daba8) {
            ctx->pc = 0x2DABB8u;
            goto label_2dabb8;
        }
    }
    ctx->pc = 0x2DABB0u;
label_2dabb0:
    // 0x2dabb0: 0x8e020028
    ctx->pc = 0x2dabb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dabb4:
    // 0x2dabb4: 0x453823
    ctx->pc = 0x2dabb4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2dabb8:
    // 0x2dabb8: 0x54e0002d
label_2dabbc:
    if (ctx->pc == 0x2DABBCu) {
        ctx->pc = 0x2DABBCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DABC0u;
        goto label_2dabc0;
    }
    ctx->pc = 0x2DABB8u;
    {
        const bool branch_taken_0x2dabb8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dabb8) {
            ctx->pc = 0x2DABBCu;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DAC70u;
            goto label_2dac70;
        }
    }
    ctx->pc = 0x2DABC0u;
label_2dabc0:
    // 0x2dabc0: 0xae050030
    ctx->pc = 0x2dabc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dabc4:
    // 0x2dabc4: 0x200202d
    ctx->pc = 0x2dabc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dabc8:
    // 0x2dabc8: 0xc0b6cac
label_2dabcc:
    if (ctx->pc == 0x2DABCCu) {
        ctx->pc = 0x2DABCCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DABD0u;
        goto label_2dabd0;
    }
    ctx->pc = 0x2DABC8u;
    SET_GPR_U32(ctx, 31, 0x2DABD0u);
    ctx->pc = 0x2DABCCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x2db2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABD0u; }
    }
    if (ctx->pc != 0x2DABD0u) { return; }
    ctx->pc = 0x2DABD0u;
label_2dabd0:
    // 0x2dabd0: 0x40302d
    ctx->pc = 0x2dabd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dabd4:
    // 0x2dabd4: 0x8e050030
    ctx->pc = 0x2dabd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2dabd8:
    // 0x2dabd8: 0x8e03002c
    ctx->pc = 0x2dabd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2dabdc:
    // 0x2dabdc: 0xa3102b
    ctx->pc = 0x2dabdcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2dabe0:
    // 0x2dabe0: 0x10400003
label_2dabe4:
    if (ctx->pc == 0x2DABE4u) {
        ctx->pc = 0x2DABE4u;
        SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2DABE8u;
        goto label_2dabe8;
    }
    ctx->pc = 0x2DABE0u;
    {
        const bool branch_taken_0x2dabe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DABE4u;
        SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x2dabe0) {
            ctx->pc = 0x2DABF0u;
            goto label_2dabf0;
        }
    }
    ctx->pc = 0x2DABE8u;
label_2dabe8:
    // 0x2dabe8: 0x10000003
label_2dabec:
    if (ctx->pc == 0x2DABECu) {
        ctx->pc = 0x2DABECu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x2DABF0u;
        goto label_2dabf0;
    }
    ctx->pc = 0x2DABE8u;
    {
        const bool branch_taken_0x2dabe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DABECu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        if (branch_taken_0x2dabe8) {
            ctx->pc = 0x2DABF8u;
            goto label_2dabf8;
        }
    }
    ctx->pc = 0x2DABF0u;
label_2dabf0:
    // 0x2dabf0: 0x8e020028
    ctx->pc = 0x2dabf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dabf4:
    // 0x2dabf4: 0x453823
    ctx->pc = 0x2dabf4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2dabf8:
    // 0x2dabf8: 0x8e020028
    ctx->pc = 0x2dabf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dabfc:
    // 0x2dabfc: 0x14a2000d
label_2dac00:
    if (ctx->pc == 0x2DAC00u) {
        ctx->pc = 0x2DAC04u;
        goto label_2dac04;
    }
    ctx->pc = 0x2DABFCu;
    {
        const bool branch_taken_0x2dabfc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2dabfc) {
            ctx->pc = 0x2DAC34u;
            goto label_2dac34;
        }
    }
    ctx->pc = 0x2DAC04u;
label_2dac04:
    // 0x2dac04: 0x8e03002c
    ctx->pc = 0x2dac04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2dac08:
    // 0x2dac08: 0x8e020024
    ctx->pc = 0x2dac08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2dac0c:
    // 0x2dac0c: 0x10620009
label_2dac10:
    if (ctx->pc == 0x2DAC10u) {
        ctx->pc = 0x2DAC14u;
        goto label_2dac14;
    }
    ctx->pc = 0x2DAC0Cu;
    {
        const bool branch_taken_0x2dac0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2dac0c) {
            ctx->pc = 0x2DAC34u;
            goto label_2dac34;
        }
    }
    ctx->pc = 0x2DAC14u;
label_2dac14:
    // 0x2dac14: 0x40282d
    ctx->pc = 0x2dac14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dac18:
    // 0x2dac18: 0xa3102b
    ctx->pc = 0x2dac18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2dac1c:
    // 0x2dac1c: 0x10400003
label_2dac20:
    if (ctx->pc == 0x2DAC20u) {
        ctx->pc = 0x2DAC20u;
        SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2DAC24u;
        goto label_2dac24;
    }
    ctx->pc = 0x2DAC1Cu;
    {
        const bool branch_taken_0x2dac1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAC20u;
        SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x2dac1c) {
            ctx->pc = 0x2DAC2Cu;
            goto label_2dac2c;
        }
    }
    ctx->pc = 0x2DAC24u;
label_2dac24:
    // 0x2dac24: 0x10000003
label_2dac28:
    if (ctx->pc == 0x2DAC28u) {
        ctx->pc = 0x2DAC28u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x2DAC2Cu;
        goto label_2dac2c;
    }
    ctx->pc = 0x2DAC24u;
    {
        const bool branch_taken_0x2dac24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAC28u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        if (branch_taken_0x2dac24) {
            ctx->pc = 0x2DAC34u;
            goto label_2dac34;
        }
    }
    ctx->pc = 0x2DAC2Cu;
label_2dac2c:
    // 0x2dac2c: 0x8e020028
    ctx->pc = 0x2dac2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dac30:
    // 0x2dac30: 0x453823
    ctx->pc = 0x2dac30u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2dac34:
    // 0x2dac34: 0x54e0000e
label_2dac38:
    if (ctx->pc == 0x2DAC38u) {
        ctx->pc = 0x2DAC38u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC3Cu;
        goto label_2dac3c;
    }
    ctx->pc = 0x2DAC34u;
    {
        const bool branch_taken_0x2dac34 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dac34) {
            ctx->pc = 0x2DAC38u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DAC70u;
            goto label_2dac70;
        }
    }
    ctx->pc = 0x2DAC3Cu;
label_2dac3c:
    // 0x2dac3c: 0xae140020
    ctx->pc = 0x2dac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dac40:
    // 0x2dac40: 0xae13001c
    ctx->pc = 0x2dac40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dac44:
    // 0x2dac44: 0xae370004
    ctx->pc = 0x2dac44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2dac48:
    // 0x2dac48: 0x8e220000
    ctx->pc = 0x2dac48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dac4c:
    // 0x2dac4c: 0x2c21023
    ctx->pc = 0x2dac4cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dac50:
    // 0x2dac50: 0x8e230008
    ctx->pc = 0x2dac50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dac54:
    // 0x2dac54: 0x431021
    ctx->pc = 0x2dac54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dac58:
    // 0x2dac58: 0xae220008
    ctx->pc = 0x2dac58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dac5c:
    // 0x2dac5c: 0xae360000
    ctx->pc = 0x2dac5cu;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dac60:
    // 0x2dac60: 0xae050030
    ctx->pc = 0x2dac60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dac64:
    // 0x2dac64: 0x200202d
    ctx->pc = 0x2dac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dac68:
    // 0x2dac68: 0x10000089
label_2dac6c:
    if (ctx->pc == 0x2DAC6Cu) {
        ctx->pc = 0x2DAC6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC70u;
        goto label_2dac70;
    }
    ctx->pc = 0x2DAC68u;
    {
        const bool branch_taken_0x2dac68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAC6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dac68) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAC70u;
label_2dac70:
    // 0x2dac70: 0x92420008
    ctx->pc = 0x2dac70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_2dac74:
    // 0x2dac74: 0xa0a20000
    ctx->pc = 0x2dac74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2dac78:
    // 0x2dac78: 0x24a50001
    ctx->pc = 0x2dac78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2dac7c:
    // 0x2dac7c: 0x24e7ffff
    ctx->pc = 0x2dac7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
label_2dac80:
    // 0x2dac80: 0x1000fe73
label_2dac84:
    if (ctx->pc == 0x2DAC84u) {
        ctx->pc = 0x2DAC84u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        ctx->pc = 0x2DAC88u;
        goto label_2dac88;
    }
    ctx->pc = 0x2DAC80u;
    {
        const bool branch_taken_0x2dac80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAC84u;
        { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
        if (branch_taken_0x2dac80) {
            ctx->pc = 0x2DA650u;
            goto label_2da650;
        }
    }
    ctx->pc = 0x2DAC88u;
label_2dac88:
    // 0x2dac88: 0xae050030
    ctx->pc = 0x2dac88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dac8c:
    // 0x2dac8c: 0x200202d
    ctx->pc = 0x2dac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dac90:
    // 0x2dac90: 0xc0b6cac
label_2dac94:
    if (ctx->pc == 0x2DAC94u) {
        ctx->pc = 0x2DAC94u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC98u;
        goto label_2dac98;
    }
    ctx->pc = 0x2DAC90u;
    SET_GPR_U32(ctx, 31, 0x2DAC98u);
    ctx->pc = 0x2DAC94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x2db2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC98u; }
    }
    if (ctx->pc != 0x2DAC98u) { return; }
    ctx->pc = 0x2DAC98u;
label_2dac98:
    // 0x2dac98: 0x40302d
    ctx->pc = 0x2dac98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dac9c:
    // 0x2dac9c: 0x8e02002c
    ctx->pc = 0x2dac9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2daca0:
    // 0x2daca0: 0x8e03002c
    ctx->pc = 0x2daca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2daca4:
    // 0x2daca4: 0x8e020030
    ctx->pc = 0x2daca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2daca8:
    // 0x2daca8: 0x1062000e
label_2dacac:
    if (ctx->pc == 0x2DACACu) {
        ctx->pc = 0x2DACACu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2DACB0u;
        goto label_2dacb0;
    }
    ctx->pc = 0x2DACA8u;
    {
        const bool branch_taken_0x2daca8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DACACu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        if (branch_taken_0x2daca8) {
            ctx->pc = 0x2DACE4u;
            goto label_2dace4;
        }
    }
    ctx->pc = 0x2DACB0u;
label_2dacb0:
    // 0x2dacb0: 0xae140020
    ctx->pc = 0x2dacb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dacb4:
    // 0x2dacb4: 0xae13001c
    ctx->pc = 0x2dacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dacb8:
    // 0x2dacb8: 0xae370004
    ctx->pc = 0x2dacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2dacbc:
    // 0x2dacbc: 0x8e220000
    ctx->pc = 0x2dacbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dacc0:
    // 0x2dacc0: 0x2c21023
    ctx->pc = 0x2dacc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dacc4:
    // 0x2dacc4: 0x8e230008
    ctx->pc = 0x2dacc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dacc8:
    // 0x2dacc8: 0x431021
    ctx->pc = 0x2dacc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2daccc:
    // 0x2daccc: 0xae220008
    ctx->pc = 0x2dacccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dacd0:
    // 0x2dacd0: 0xae360000
    ctx->pc = 0x2dacd0u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dacd4:
    // 0x2dacd4: 0xae050030
    ctx->pc = 0x2dacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dacd8:
    // 0x2dacd8: 0x200202d
    ctx->pc = 0x2dacd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dacdc:
    // 0x2dacdc: 0x1000006c
label_2dace0:
    if (ctx->pc == 0x2DACE0u) {
        ctx->pc = 0x2DACE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DACE4u;
        goto label_2dace4;
    }
    ctx->pc = 0x2DACDCu;
    {
        const bool branch_taken_0x2dacdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DACE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dacdc) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DACE4u;
label_2dace4:
    // 0x2dace4: 0x24020008
    ctx->pc = 0x2dace4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2dace8:
    // 0x2dace8: 0xae420000  (update next_in to stream)
    ctx->pc = 0x2dace8u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dacec:
    // 0x2dacec: 0xae140020
    ctx->pc = 0x2dacecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dacf0:
    // 0x2dacf0: 0xae13001c
    ctx->pc = 0x2dacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dacf4:
    // 0x2dacf4: 0xae370004
    ctx->pc = 0x2dacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2dacf8:
    // 0x2dacf8: 0x8e220000
    ctx->pc = 0x2dacf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dacfc:
    // 0x2dacfc: 0x2c21023
    ctx->pc = 0x2dacfcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dad00:
    // 0x2dad00: 0x8e230008
    ctx->pc = 0x2dad00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dad04:
    // 0x2dad04: 0x431021
    ctx->pc = 0x2dad04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dad08:
    // 0x2dad08: 0xae220008
    ctx->pc = 0x2dad08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dad0c:
    // 0x2dad0c: 0xae360000
    ctx->pc = 0x2dad0cu;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dad10:
    // 0x2dad10: 0xae050030
    ctx->pc = 0x2dad10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dad14:
    // 0x2dad14: 0x200202d
    ctx->pc = 0x2dad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dad18:
    // 0x2dad18: 0x220282d
    ctx->pc = 0x2dad18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dad1c:
    // 0x2dad1c: 0x1000005c
label_2dad20:
    if (ctx->pc == 0x2DAD20u) {
        ctx->pc = 0x2DAD20u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DAD24u;
        goto label_2dad24;
    }
    ctx->pc = 0x2DAD1Cu;
    {
        const bool branch_taken_0x2dad1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAD20u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2dad1c) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAD24u;
label_2dad24:
    // 0x2dad24: 0xae140020
    ctx->pc = 0x2dad24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dad28:
    // 0x2dad28: 0xae13001c
    ctx->pc = 0x2dad28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dad2c:
    // 0x2dad2c: 0xae370004
    ctx->pc = 0x2dad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2dad30:
    // 0x2dad30: 0x8e220000
    ctx->pc = 0x2dad30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dad34:
    // 0x2dad34: 0x2c21023
    ctx->pc = 0x2dad34u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dad38:
    // 0x2dad38: 0x8e230008
    ctx->pc = 0x2dad38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dad3c:
    // 0x2dad3c: 0x431021
    ctx->pc = 0x2dad3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dad40:
    // 0x2dad40: 0xae220008
    ctx->pc = 0x2dad40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dad44:
    // 0x2dad44: 0xae360000
    ctx->pc = 0x2dad44u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dad48:
    // 0x2dad48: 0xae050030
    ctx->pc = 0x2dad48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dad4c:
    // 0x2dad4c: 0x200202d
    ctx->pc = 0x2dad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dad50:
    // 0x2dad50: 0x220282d
    ctx->pc = 0x2dad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dad54:
    // 0x2dad54: 0x1000004e
label_2dad58:
    if (ctx->pc == 0x2DAD58u) {
        ctx->pc = 0x2DAD58u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2DAD5Cu;
        goto label_2dad5c;
    }
    ctx->pc = 0x2DAD54u;
    {
        const bool branch_taken_0x2dad54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAD58u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2dad54) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAD5Cu;
label_2dad5c:
    // 0x2dad5c: 0xae140020
    ctx->pc = 0x2dad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dad60:
    // 0x2dad60: 0xae13001c
    ctx->pc = 0x2dad60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dad64:
    // 0x2dad64: 0xae200004
    ctx->pc = 0x2dad64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2dad68:
    // 0x2dad68: 0x8e220000
    ctx->pc = 0x2dad68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dad6c:
    // 0x2dad6c: 0x2c21023
    ctx->pc = 0x2dad6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dad70:
    // 0x2dad70: 0x8e230008
    ctx->pc = 0x2dad70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dad74:
    // 0x2dad74: 0x431021
    ctx->pc = 0x2dad74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dad78:
    // 0x2dad78: 0xae220008
    ctx->pc = 0x2dad78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dad7c:
    // 0x2dad7c: 0xae360000
    ctx->pc = 0x2dad7cu;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dad80:
    // 0x2dad80: 0xae050030
    ctx->pc = 0x2dad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dad84:
    // 0x2dad84: 0x200202d
    ctx->pc = 0x2dad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dad88:
    // 0x2dad88: 0x10000041
label_2dad8c:
    if (ctx->pc == 0x2DAD8Cu) {
        ctx->pc = 0x2DAD8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD90u;
        goto label_2dad90;
    }
    ctx->pc = 0x2DAD88u;
    {
        const bool branch_taken_0x2dad88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAD8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dad88) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAD90u;
label_2dad90:
    // 0x2dad90: 0xae140020
    ctx->pc = 0x2dad90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dad94:
    // 0x2dad94: 0xae13001c
    ctx->pc = 0x2dad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dad98:
    // 0x2dad98: 0xae200004
    ctx->pc = 0x2dad98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2dad9c:
    // 0x2dad9c: 0x8e220000
    ctx->pc = 0x2dad9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dada0:
    // 0x2dada0: 0x2c21023
    ctx->pc = 0x2dada0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dada4:
    // 0x2dada4: 0x8e230008
    ctx->pc = 0x2dada4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dada8:
    // 0x2dada8: 0x431021
    ctx->pc = 0x2dada8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dadac:
    // 0x2dadac: 0xae220008
    ctx->pc = 0x2dadacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dadb0:
    // 0x2dadb0: 0xae360000
    ctx->pc = 0x2dadb0u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dadb4:
    // 0x2dadb4: 0xae050030
    ctx->pc = 0x2dadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dadb8:
    // 0x2dadb8: 0x200202d
    ctx->pc = 0x2dadb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dadbc:
    // 0x2dadbc: 0x10000034
label_2dadc0:
    if (ctx->pc == 0x2DADC0u) {
        ctx->pc = 0x2DADC0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DADC4u;
        goto label_2dadc4;
    }
    ctx->pc = 0x2DADBCu;
    {
        const bool branch_taken_0x2dadbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DADC0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dadbc) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DADC4u;
label_2dadc4:
    // 0x2dadc4: 0xae140020
    ctx->pc = 0x2dadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dadc8:
    // 0x2dadc8: 0xae13001c
    ctx->pc = 0x2dadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dadcc:
    // 0x2dadcc: 0xae200004
    ctx->pc = 0x2dadccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2dadd0:
    // 0x2dadd0: 0x8e220000
    ctx->pc = 0x2dadd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dadd4:
    // 0x2dadd4: 0x2c21023
    ctx->pc = 0x2dadd4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dadd8:
    // 0x2dadd8: 0x8e230008
    ctx->pc = 0x2dadd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2daddc:
    // 0x2daddc: 0x431021
    ctx->pc = 0x2daddcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dade0:
    // 0x2dade0: 0xae220008
    ctx->pc = 0x2dade0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dade4:
    // 0x2dade4: 0xae360000
    ctx->pc = 0x2dade4u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dade8:
    // 0x2dade8: 0xae050030
    ctx->pc = 0x2dade8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dadec:
    // 0x2dadec: 0x200202d
    ctx->pc = 0x2dadecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dadf0:
    // 0x2dadf0: 0x10000027
label_2dadf4:
    if (ctx->pc == 0x2DADF4u) {
        ctx->pc = 0x2DADF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DADF8u;
        goto label_2dadf8;
    }
    ctx->pc = 0x2DADF0u;
    {
        const bool branch_taken_0x2dadf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DADF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dadf0) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DADF8u;
label_2dadf8:
    // 0x2dadf8: 0xae140020
    ctx->pc = 0x2dadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dadfc:
    // 0x2dadfc: 0xae13001c
    ctx->pc = 0x2dadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dae00:
    // 0x2dae00: 0xae200004
    ctx->pc = 0x2dae00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2dae04:
    // 0x2dae04: 0x8e220000
    ctx->pc = 0x2dae04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dae08:
    // 0x2dae08: 0x2c21023
    ctx->pc = 0x2dae08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dae0c:
    // 0x2dae0c: 0x8e230008
    ctx->pc = 0x2dae0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dae10:
    // 0x2dae10: 0x431021
    ctx->pc = 0x2dae10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dae14:
    // 0x2dae14: 0xae220008
    ctx->pc = 0x2dae14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dae18:
    // 0x2dae18: 0xae360000
    ctx->pc = 0x2dae18u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dae1c:
    // 0x2dae1c: 0xae050030
    ctx->pc = 0x2dae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dae20:
    // 0x2dae20: 0x200202d
    ctx->pc = 0x2dae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dae24:
    // 0x2dae24: 0x1000001a
label_2dae28:
    if (ctx->pc == 0x2DAE28u) {
        ctx->pc = 0x2DAE28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE2Cu;
        goto label_2dae2c;
    }
    ctx->pc = 0x2DAE24u;
    {
        const bool branch_taken_0x2dae24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAE28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dae24) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAE2Cu;
label_2dae2c:
    // 0x2dae2c: 0xae13001c
    ctx->pc = 0x2dae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dae30:
    // 0x2dae30: 0xae370004
    ctx->pc = 0x2dae30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2dae34:
    // 0x2dae34: 0x8e220000
    ctx->pc = 0x2dae34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dae38:
    // 0x2dae38: 0x2c21023
    ctx->pc = 0x2dae38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dae3c:
    // 0x2dae3c: 0x8e230008
    ctx->pc = 0x2dae3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dae40:
    // 0x2dae40: 0x431021
    ctx->pc = 0x2dae40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dae44:
    // 0x2dae44: 0xae220008
    ctx->pc = 0x2dae44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dae48:
    // 0x2dae48: 0xae360000
    ctx->pc = 0x2dae48u;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dae4c:
    // 0x2dae4c: 0xae050030
    ctx->pc = 0x2dae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dae50:
    // 0x2dae50: 0x200202d
    ctx->pc = 0x2dae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dae54:
    // 0x2dae54: 0x1000000e
label_2dae58:
    if (ctx->pc == 0x2DAE58u) {
        ctx->pc = 0x2DAE58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE5Cu;
        goto label_2dae5c;
    }
    ctx->pc = 0x2DAE54u;
    {
        const bool branch_taken_0x2dae54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAE58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dae54) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAE5Cu;
label_2dae5c:
    // 0x2dae5c: 0xae140020
    ctx->pc = 0x2dae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2dae60:
    // 0x2dae60: 0xae13001c
    ctx->pc = 0x2dae60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_2dae64:
    // 0x2dae64: 0xae370004
    ctx->pc = 0x2dae64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
label_2dae68:
    // 0x2dae68: 0x8e220000
    ctx->pc = 0x2dae68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dae6c:
    // 0x2dae6c: 0x2c21023
    ctx->pc = 0x2dae6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2dae70:
    // 0x2dae70: 0x8e230008
    ctx->pc = 0x2dae70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2dae74:
    // 0x2dae74: 0x431021
    ctx->pc = 0x2dae74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dae78:
    // 0x2dae78: 0xae220008
    ctx->pc = 0x2dae78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2dae7c:
    // 0x2dae7c: 0xae360000
    ctx->pc = 0x2dae7cu;
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
label_2dae80:
    // 0x2dae80: 0xae050030
    ctx->pc = 0x2dae80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_2dae84:
    // 0x2dae84: 0x200202d
    ctx->pc = 0x2dae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dae88:
    // 0x2dae88: 0x220282d
    ctx->pc = 0x2dae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dae8c:
    // 0x2dae8c: 0x2406fffe
    ctx->pc = 0x2dae8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2dae90:
    // 0x2dae90: ensure stream (reg 17) has current next_in/avail_in before any return
    {
        static int epilogue_log = 0;
        if (epilogue_log++ < 30) {
            std::cerr << "[inflate_codes] EPILOGUE #" << epilogue_log << " reg2=0x" << std::hex << GPR_U32(ctx, 2)
                      << " stream=0x" << GPR_U32(ctx, 17) << " reg22(next_in)=0x" << GPR_U32(ctx, 22) << " reg23(avail_in)=0x" << GPR_U32(ctx, 23);
            const uint32_t strm = GPR_U32(ctx, 17);
            if (strm) std::cerr << " [before write] strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4));
            std::cerr << std::dec << "\n";
        }
    }
    { const uint32_t r22 = GPR_U32(ctx, 22); if (r22 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r22); }
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    {
        static int epilogue_after = 0;
        if (epilogue_after++ < 30) {
            const uint32_t strm = GPR_U32(ctx, 17);
            if (strm) {
                std::cerr << "[inflate_codes] EPILOGUE after write: strm+0=0x" << std::hex << READ32(ADD32(strm, 0))
                          << " strm+4=0x" << READ32(ADD32(strm, 4)) << std::dec << "\n";
            }
        }
    }
    // 0x2dae90: 0xc0b6cac
label_2dae94:
    if (ctx->pc == 0x2DAE94u) {
        ctx->pc = 0x2DAE98u;
        goto label_2dae98;
    }
    ctx->pc = 0x2DAE90u;
    SET_GPR_U32(ctx, 31, 0x2DAE98u);
    ctx->pc = 0x2DB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x2db2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE98u; }
    }
    if (ctx->pc != 0x2DAE98u) { return; }
    ctx->pc = 0x2DAE98u;
label_2dae98:
    // 0x2dae98: 0xdfbf0080
    ctx->pc = 0x2dae98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2dae9c:
    // 0x2dae9c: 0xdfb70070
    ctx->pc = 0x2dae9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2daea0:
    // 0x2daea0: 0xdfb60060
    ctx->pc = 0x2daea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2daea4:
    // 0x2daea4: 0xdfb50050
    ctx->pc = 0x2daea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2daea8:
    // 0x2daea8: 0xdfb40040
    ctx->pc = 0x2daea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2daeac:
    // 0x2daeac: 0xdfb30030
    ctx->pc = 0x2daeacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2daeb0:
    // 0x2daeb0: 0xdfb20020
    ctx->pc = 0x2daeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2daeb4:
    // 0x2daeb4: 0xdfb10010
    ctx->pc = 0x2daeb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2daeb8:
    // 0x2daeb8: 0xdfb00000
    ctx->pc = 0x2daeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2daebc:
    // 0x2daebc: 0x3e00008
label_2daec0:
    if (ctx->pc == 0x2DAEC0u) {
        ctx->pc = 0x2DAEC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2DAEC4u;
        goto label_fallthrough_0x2daebc;
    }
    ctx->pc = 0x2DAEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAEC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA5E8u: goto label_2da5e8;
            case 0x2DA5ECu: goto label_2da5ec;
            case 0x2DA5F0u: goto label_2da5f0;
            case 0x2DA5F4u: goto label_2da5f4;
            case 0x2DA5F8u: goto label_2da5f8;
            case 0x2DA5FCu: goto label_2da5fc;
            case 0x2DA600u: goto label_2da600;
            case 0x2DA604u: goto label_2da604;
            case 0x2DA608u: goto label_2da608;
            case 0x2DA60Cu: goto label_2da60c;
            case 0x2DA610u: goto label_2da610;
            case 0x2DA614u: goto label_2da614;
            case 0x2DA618u: goto label_2da618;
            case 0x2DA61Cu: goto label_2da61c;
            case 0x2DA620u: goto label_2da620;
            case 0x2DA624u: goto label_2da624;
            case 0x2DA628u: goto label_2da628;
            case 0x2DA62Cu: goto label_2da62c;
            case 0x2DA630u: goto label_2da630;
            case 0x2DA634u: goto label_2da634;
            case 0x2DA638u: goto label_2da638;
            case 0x2DA63Cu: goto label_2da63c;
            case 0x2DA640u: goto label_2da640;
            case 0x2DA644u: goto label_2da644;
            case 0x2DA648u: goto label_2da648;
            case 0x2DA64Cu: goto label_2da64c;
            case 0x2DA650u: goto label_2da650;
            case 0x2DA654u: goto label_2da654;
            case 0x2DA658u: goto label_2da658;
            case 0x2DA65Cu: goto label_2da65c;
            case 0x2DA660u: goto label_2da660;
            case 0x2DA664u: goto label_2da664;
            case 0x2DA668u: goto label_2da668;
            case 0x2DA66Cu: goto label_2da66c;
            case 0x2DA670u: goto label_2da670;
            case 0x2DA674u: goto label_2da674;
            case 0x2DA678u: goto label_2da678;
            case 0x2DA67Cu: goto label_2da67c;
            case 0x2DA680u: goto label_2da680;
            case 0x2DA684u: goto label_2da684;
            case 0x2DA688u: goto label_2da688;
            case 0x2DA68Cu: goto label_2da68c;
            case 0x2DA690u: goto label_2da690;
            case 0x2DA694u: goto label_2da694;
            case 0x2DA698u: goto label_2da698;
            case 0x2DA69Cu: goto label_2da69c;
            case 0x2DA6A0u: goto label_2da6a0;
            case 0x2DA6A4u: goto label_2da6a4;
            case 0x2DA6A8u: goto label_2da6a8;
            case 0x2DA6ACu: goto label_2da6ac;
            case 0x2DA6B0u: goto label_2da6b0;
            case 0x2DA6B4u: goto label_2da6b4;
            case 0x2DA6B8u: goto label_2da6b8;
            case 0x2DA6BCu: goto label_2da6bc;
            case 0x2DA6C0u: goto label_2da6c0;
            case 0x2DA6C4u: goto label_2da6c4;
            case 0x2DA6C8u: goto label_2da6c8;
            case 0x2DA6CCu: goto label_2da6cc;
            case 0x2DA6D0u: goto label_2da6d0;
            case 0x2DA6D4u: goto label_2da6d4;
            case 0x2DA6D8u: goto label_2da6d8;
            case 0x2DA6DCu: goto label_2da6dc;
            case 0x2DA6E0u: goto label_2da6e0;
            case 0x2DA6E4u: goto label_2da6e4;
            case 0x2DA6E8u: goto label_2da6e8;
            case 0x2DA6ECu: goto label_2da6ec;
            case 0x2DA6F0u: goto label_2da6f0;
            case 0x2DA6F4u: goto label_2da6f4;
            case 0x2DA6F8u: goto label_2da6f8;
            case 0x2DA6FCu: goto label_2da6fc;
            case 0x2DA700u: goto label_2da700;
            case 0x2DA704u: goto label_2da704;
            case 0x2DA708u: goto label_2da708;
            case 0x2DA70Cu: goto label_2da70c;
            case 0x2DA710u: goto label_2da710;
            case 0x2DA714u: goto label_2da714;
            case 0x2DA718u: goto label_2da718;
            case 0x2DA71Cu: goto label_2da71c;
            case 0x2DA720u: goto label_2da720;
            case 0x2DA724u: goto label_2da724;
            case 0x2DA728u: goto label_2da728;
            case 0x2DA72Cu: goto label_2da72c;
            case 0x2DA730u: goto label_2da730;
            case 0x2DA734u: goto label_2da734;
            case 0x2DA738u: goto label_2da738;
            case 0x2DA73Cu: goto label_2da73c;
            case 0x2DA740u: goto label_2da740;
            case 0x2DA744u: goto label_2da744;
            case 0x2DA748u: goto label_2da748;
            case 0x2DA74Cu: goto label_2da74c;
            case 0x2DA750u: goto label_2da750;
            case 0x2DA754u: goto label_2da754;
            case 0x2DA758u: goto label_2da758;
            case 0x2DA75Cu: goto label_2da75c;
            case 0x2DA760u: goto label_2da760;
            case 0x2DA764u: goto label_2da764;
            case 0x2DA768u: goto label_2da768;
            case 0x2DA76Cu: goto label_2da76c;
            case 0x2DA770u: goto label_2da770;
            case 0x2DA774u: goto label_2da774;
            case 0x2DA778u: goto label_2da778;
            case 0x2DA77Cu: goto label_2da77c;
            case 0x2DA780u: goto label_2da780;
            case 0x2DA784u: goto label_2da784;
            case 0x2DA788u: goto label_2da788;
            case 0x2DA78Cu: goto label_2da78c;
            case 0x2DA790u: goto label_2da790;
            case 0x2DA794u: goto label_2da794;
            case 0x2DA798u: goto label_2da798;
            case 0x2DA79Cu: goto label_2da79c;
            case 0x2DA7A0u: goto label_2da7a0;
            case 0x2DA7A4u: goto label_2da7a4;
            case 0x2DA7A8u: goto label_2da7a8;
            case 0x2DA7ACu: goto label_2da7ac;
            case 0x2DA7B0u: goto label_2da7b0;
            case 0x2DA7B4u: goto label_2da7b4;
            case 0x2DA7B8u: goto label_2da7b8;
            case 0x2DA7BCu: goto label_2da7bc;
            case 0x2DA7C0u: goto label_2da7c0;
            case 0x2DA7C4u: goto label_2da7c4;
            case 0x2DA7C8u: goto label_2da7c8;
            case 0x2DA7CCu: goto label_2da7cc;
            case 0x2DA7D0u: goto label_2da7d0;
            case 0x2DA7D4u: goto label_2da7d4;
            case 0x2DA7D8u: goto label_2da7d8;
            case 0x2DA7DCu: goto label_2da7dc;
            case 0x2DA7E0u: goto label_2da7e0;
            case 0x2DA7E4u: goto label_2da7e4;
            case 0x2DA7E8u: goto label_2da7e8;
            case 0x2DA7ECu: goto label_2da7ec;
            case 0x2DA7F0u: goto label_2da7f0;
            case 0x2DA7F4u: goto label_2da7f4;
            case 0x2DA7F8u: goto label_2da7f8;
            case 0x2DA7FCu: goto label_2da7fc;
            case 0x2DA800u: goto label_2da800;
            case 0x2DA804u: goto label_2da804;
            case 0x2DA808u: goto label_2da808;
            case 0x2DA80Cu: goto label_2da80c;
            case 0x2DA810u: goto label_2da810;
            case 0x2DA814u: goto label_2da814;
            case 0x2DA818u: goto label_2da818;
            case 0x2DA81Cu: goto label_2da81c;
            case 0x2DA820u: goto label_2da820;
            case 0x2DA824u: goto label_2da824;
            case 0x2DA828u: goto label_2da828;
            case 0x2DA82Cu: goto label_2da82c;
            case 0x2DA830u: goto label_2da830;
            case 0x2DA834u: goto label_2da834;
            case 0x2DA838u: goto label_2da838;
            case 0x2DA83Cu: goto label_2da83c;
            case 0x2DA840u: goto label_2da840;
            case 0x2DA844u: goto label_2da844;
            case 0x2DA848u: goto label_2da848;
            case 0x2DA84Cu: goto label_2da84c;
            case 0x2DA850u: goto label_2da850;
            case 0x2DA854u: goto label_2da854;
            case 0x2DA858u: goto label_2da858;
            case 0x2DA85Cu: goto label_2da85c;
            case 0x2DA860u: goto label_2da860;
            case 0x2DA864u: goto label_2da864;
            case 0x2DA868u: goto label_2da868;
            case 0x2DA86Cu: goto label_2da86c;
            case 0x2DA870u: goto label_2da870;
            case 0x2DA874u: goto label_2da874;
            case 0x2DA878u: goto label_2da878;
            case 0x2DA87Cu: goto label_2da87c;
            case 0x2DA880u: goto label_2da880;
            case 0x2DA884u: goto label_2da884;
            case 0x2DA888u: goto label_2da888;
            case 0x2DA88Cu: goto label_2da88c;
            case 0x2DA890u: goto label_2da890;
            case 0x2DA894u: goto label_2da894;
            case 0x2DA898u: goto label_2da898;
            case 0x2DA89Cu: goto label_2da89c;
            case 0x2DA8A0u: goto label_2da8a0;
            case 0x2DA8A4u: goto label_2da8a4;
            case 0x2DA8A8u: goto label_2da8a8;
            case 0x2DA8ACu: goto label_2da8ac;
            case 0x2DA8B0u: goto label_2da8b0;
            case 0x2DA8B4u: goto label_2da8b4;
            case 0x2DA8B8u: goto label_2da8b8;
            case 0x2DA8BCu: goto label_2da8bc;
            case 0x2DA8C0u: goto label_2da8c0;
            case 0x2DA8C4u: goto label_2da8c4;
            case 0x2DA8C8u: goto label_2da8c8;
            case 0x2DA8CCu: goto label_2da8cc;
            case 0x2DA8D0u: goto label_2da8d0;
            case 0x2DA8D4u: goto label_2da8d4;
            case 0x2DA8D8u: goto label_2da8d8;
            case 0x2DA8DCu: goto label_2da8dc;
            case 0x2DA8E0u: goto label_2da8e0;
            case 0x2DA8E4u: goto label_2da8e4;
            case 0x2DA8E8u: goto label_2da8e8;
            case 0x2DA8ECu: goto label_2da8ec;
            case 0x2DA8F0u: goto label_2da8f0;
            case 0x2DA8F4u: goto label_2da8f4;
            case 0x2DA8F8u: goto label_2da8f8;
            case 0x2DA8FCu: goto label_2da8fc;
            case 0x2DA900u: goto label_2da900;
            case 0x2DA904u: goto label_2da904;
            case 0x2DA908u: goto label_2da908;
            case 0x2DA90Cu: goto label_2da90c;
            case 0x2DA910u: goto label_2da910;
            case 0x2DA914u: goto label_2da914;
            case 0x2DA918u: goto label_2da918;
            case 0x2DA91Cu: goto label_2da91c;
            case 0x2DA920u: goto label_2da920;
            case 0x2DA924u: goto label_2da924;
            case 0x2DA928u: goto label_2da928;
            case 0x2DA92Cu: goto label_2da92c;
            case 0x2DA930u: goto label_2da930;
            case 0x2DA934u: goto label_2da934;
            case 0x2DA938u: goto label_2da938;
            case 0x2DA93Cu: goto label_2da93c;
            case 0x2DA940u: goto label_2da940;
            case 0x2DA944u: goto label_2da944;
            case 0x2DA948u: goto label_2da948;
            case 0x2DA94Cu: goto label_2da94c;
            case 0x2DA950u: goto label_2da950;
            case 0x2DA954u: goto label_2da954;
            case 0x2DA958u: goto label_2da958;
            case 0x2DA95Cu: goto label_2da95c;
            case 0x2DA960u: goto label_2da960;
            case 0x2DA964u: goto label_2da964;
            case 0x2DA968u: goto label_2da968;
            case 0x2DA96Cu: goto label_2da96c;
            case 0x2DA970u: goto label_2da970;
            case 0x2DA974u: goto label_2da974;
            case 0x2DA978u: goto label_2da978;
            case 0x2DA97Cu: goto label_2da97c;
            case 0x2DA980u: goto label_2da980;
            case 0x2DA984u: goto label_2da984;
            case 0x2DA988u: goto label_2da988;
            case 0x2DA98Cu: goto label_2da98c;
            case 0x2DA990u: goto label_2da990;
            case 0x2DA994u: goto label_2da994;
            case 0x2DA998u: goto label_2da998;
            case 0x2DA99Cu: goto label_2da99c;
            case 0x2DA9A0u: goto label_2da9a0;
            case 0x2DA9A4u: goto label_2da9a4;
            case 0x2DA9A8u: goto label_2da9a8;
            case 0x2DA9ACu: goto label_2da9ac;
            case 0x2DA9B0u: goto label_2da9b0;
            case 0x2DA9B4u: goto label_2da9b4;
            case 0x2DA9B8u: goto label_2da9b8;
            case 0x2DA9BCu: goto label_2da9bc;
            case 0x2DA9C0u: goto label_2da9c0;
            case 0x2DA9C4u: goto label_2da9c4;
            case 0x2DA9C8u: goto label_2da9c8;
            case 0x2DA9CCu: goto label_2da9cc;
            case 0x2DA9D0u: goto label_2da9d0;
            case 0x2DA9D4u: goto label_2da9d4;
            case 0x2DA9D8u: goto label_2da9d8;
            case 0x2DA9DCu: goto label_2da9dc;
            case 0x2DA9E0u: goto label_2da9e0;
            case 0x2DA9E4u: goto label_2da9e4;
            case 0x2DA9E8u: goto label_2da9e8;
            case 0x2DA9ECu: goto label_2da9ec;
            case 0x2DA9F0u: goto label_2da9f0;
            case 0x2DA9F4u: goto label_2da9f4;
            case 0x2DA9F8u: goto label_2da9f8;
            case 0x2DA9FCu: goto label_2da9fc;
            case 0x2DAA00u: goto label_2daa00;
            case 0x2DAA04u: goto label_2daa04;
            case 0x2DAA08u: goto label_2daa08;
            case 0x2DAA0Cu: goto label_2daa0c;
            case 0x2DAA10u: goto label_2daa10;
            case 0x2DAA14u: goto label_2daa14;
            case 0x2DAA18u: goto label_2daa18;
            case 0x2DAA1Cu: goto label_2daa1c;
            case 0x2DAA20u: goto label_2daa20;
            case 0x2DAA24u: goto label_2daa24;
            case 0x2DAA28u: goto label_2daa28;
            case 0x2DAA2Cu: goto label_2daa2c;
            case 0x2DAA30u: goto label_2daa30;
            case 0x2DAA34u: goto label_2daa34;
            case 0x2DAA38u: goto label_2daa38;
            case 0x2DAA3Cu: goto label_2daa3c;
            case 0x2DAA40u: goto label_2daa40;
            case 0x2DAA44u: goto label_2daa44;
            case 0x2DAA48u: goto label_2daa48;
            case 0x2DAA4Cu: goto label_2daa4c;
            case 0x2DAA50u: goto label_2daa50;
            case 0x2DAA54u: goto label_2daa54;
            case 0x2DAA58u: goto label_2daa58;
            case 0x2DAA5Cu: goto label_2daa5c;
            case 0x2DAA60u: goto label_2daa60;
            case 0x2DAA64u: goto label_2daa64;
            case 0x2DAA68u: goto label_2daa68;
            case 0x2DAA6Cu: goto label_2daa6c;
            case 0x2DAA70u: goto label_2daa70;
            case 0x2DAA74u: goto label_2daa74;
            case 0x2DAA78u: goto label_2daa78;
            case 0x2DAA7Cu: goto label_2daa7c;
            case 0x2DAA80u: goto label_2daa80;
            case 0x2DAA84u: goto label_2daa84;
            case 0x2DAA88u: goto label_2daa88;
            case 0x2DAA8Cu: goto label_2daa8c;
            case 0x2DAA90u: goto label_2daa90;
            case 0x2DAA94u: goto label_2daa94;
            case 0x2DAA98u: goto label_2daa98;
            case 0x2DAA9Cu: goto label_2daa9c;
            case 0x2DAAA0u: goto label_2daaa0;
            case 0x2DAAA4u: goto label_2daaa4;
            case 0x2DAAA8u: goto label_2daaa8;
            case 0x2DAAACu: goto label_2daaac;
            case 0x2DAAB0u: goto label_2daab0;
            case 0x2DAAB4u: goto label_2daab4;
            case 0x2DAAB8u: goto label_2daab8;
            case 0x2DAABCu: goto label_2daabc;
            case 0x2DAAC0u: goto label_2daac0;
            case 0x2DAAC4u: goto label_2daac4;
            case 0x2DAAC8u: goto label_2daac8;
            case 0x2DAACCu: goto label_2daacc;
            case 0x2DAAD0u: goto label_2daad0;
            case 0x2DAAD4u: goto label_2daad4;
            case 0x2DAAD8u: goto label_2daad8;
            case 0x2DAADCu: goto label_2daadc;
            case 0x2DAAE0u: goto label_2daae0;
            case 0x2DAAE4u: goto label_2daae4;
            case 0x2DAAE8u: goto label_2daae8;
            case 0x2DAAECu: goto label_2daaec;
            case 0x2DAAF0u: goto label_2daaf0;
            case 0x2DAAF4u: goto label_2daaf4;
            case 0x2DAAF8u: goto label_2daaf8;
            case 0x2DAAFCu: goto label_2daafc;
            case 0x2DAB00u: goto label_2dab00;
            case 0x2DAB04u: goto label_2dab04;
            case 0x2DAB08u: goto label_2dab08;
            case 0x2DAB0Cu: goto label_2dab0c;
            case 0x2DAB10u: goto label_2dab10;
            case 0x2DAB14u: goto label_2dab14;
            case 0x2DAB18u: goto label_2dab18;
            case 0x2DAB1Cu: goto label_2dab1c;
            case 0x2DAB20u: goto label_2dab20;
            case 0x2DAB24u: goto label_2dab24;
            case 0x2DAB28u: goto label_2dab28;
            case 0x2DAB2Cu: goto label_2dab2c;
            case 0x2DAB30u: goto label_2dab30;
            case 0x2DAB34u: goto label_2dab34;
            case 0x2DAB38u: goto label_2dab38;
            case 0x2DAB3Cu: goto label_2dab3c;
            case 0x2DAB40u: goto label_2dab40;
            case 0x2DAB44u: goto label_2dab44;
            case 0x2DAB48u: goto label_2dab48;
            case 0x2DAB4Cu: goto label_2dab4c;
            case 0x2DAB50u: goto label_2dab50;
            case 0x2DAB54u: goto label_2dab54;
            case 0x2DAB58u: goto label_2dab58;
            case 0x2DAB5Cu: goto label_2dab5c;
            case 0x2DAB60u: goto label_2dab60;
            case 0x2DAB64u: goto label_2dab64;
            case 0x2DAB68u: goto label_2dab68;
            case 0x2DAB6Cu: goto label_2dab6c;
            case 0x2DAB70u: goto label_2dab70;
            case 0x2DAB74u: goto label_2dab74;
            case 0x2DAB78u: goto label_2dab78;
            case 0x2DAB7Cu: goto label_2dab7c;
            case 0x2DAB80u: goto label_2dab80;
            case 0x2DAB84u: goto label_2dab84;
            case 0x2DAB88u: goto label_2dab88;
            case 0x2DAB8Cu: goto label_2dab8c;
            case 0x2DAB90u: goto label_2dab90;
            case 0x2DAB94u: goto label_2dab94;
            case 0x2DAB98u: goto label_2dab98;
            case 0x2DAB9Cu: goto label_2dab9c;
            case 0x2DABA0u: goto label_2daba0;
            case 0x2DABA4u: goto label_2daba4;
            case 0x2DABA8u: goto label_2daba8;
            case 0x2DABACu: goto label_2dabac;
            case 0x2DABB0u: goto label_2dabb0;
            case 0x2DABB4u: goto label_2dabb4;
            case 0x2DABB8u: goto label_2dabb8;
            case 0x2DABBCu: goto label_2dabbc;
            case 0x2DABC0u: goto label_2dabc0;
            case 0x2DABC4u: goto label_2dabc4;
            case 0x2DABC8u: goto label_2dabc8;
            case 0x2DABCCu: goto label_2dabcc;
            case 0x2DABD0u: goto label_2dabd0;
            case 0x2DABD4u: goto label_2dabd4;
            case 0x2DABD8u: goto label_2dabd8;
            case 0x2DABDCu: goto label_2dabdc;
            case 0x2DABE0u: goto label_2dabe0;
            case 0x2DABE4u: goto label_2dabe4;
            case 0x2DABE8u: goto label_2dabe8;
            case 0x2DABECu: goto label_2dabec;
            case 0x2DABF0u: goto label_2dabf0;
            case 0x2DABF4u: goto label_2dabf4;
            case 0x2DABF8u: goto label_2dabf8;
            case 0x2DABFCu: goto label_2dabfc;
            case 0x2DAC00u: goto label_2dac00;
            case 0x2DAC04u: goto label_2dac04;
            case 0x2DAC08u: goto label_2dac08;
            case 0x2DAC0Cu: goto label_2dac0c;
            case 0x2DAC10u: goto label_2dac10;
            case 0x2DAC14u: goto label_2dac14;
            case 0x2DAC18u: goto label_2dac18;
            case 0x2DAC1Cu: goto label_2dac1c;
            case 0x2DAC20u: goto label_2dac20;
            case 0x2DAC24u: goto label_2dac24;
            case 0x2DAC28u: goto label_2dac28;
            case 0x2DAC2Cu: goto label_2dac2c;
            case 0x2DAC30u: goto label_2dac30;
            case 0x2DAC34u: goto label_2dac34;
            case 0x2DAC38u: goto label_2dac38;
            case 0x2DAC3Cu: goto label_2dac3c;
            case 0x2DAC40u: goto label_2dac40;
            case 0x2DAC44u: goto label_2dac44;
            case 0x2DAC48u: goto label_2dac48;
            case 0x2DAC4Cu: goto label_2dac4c;
            case 0x2DAC50u: goto label_2dac50;
            case 0x2DAC54u: goto label_2dac54;
            case 0x2DAC58u: goto label_2dac58;
            case 0x2DAC5Cu: goto label_2dac5c;
            case 0x2DAC60u: goto label_2dac60;
            case 0x2DAC64u: goto label_2dac64;
            case 0x2DAC68u: goto label_2dac68;
            case 0x2DAC6Cu: goto label_2dac6c;
            case 0x2DAC70u: goto label_2dac70;
            case 0x2DAC74u: goto label_2dac74;
            case 0x2DAC78u: goto label_2dac78;
            case 0x2DAC7Cu: goto label_2dac7c;
            case 0x2DAC80u: goto label_2dac80;
            case 0x2DAC84u: goto label_2dac84;
            case 0x2DAC88u: goto label_2dac88;
            case 0x2DAC8Cu: goto label_2dac8c;
            case 0x2DAC90u: goto label_2dac90;
            case 0x2DAC94u: goto label_2dac94;
            case 0x2DAC98u: goto label_2dac98;
            case 0x2DAC9Cu: goto label_2dac9c;
            case 0x2DACA0u: goto label_2daca0;
            case 0x2DACA4u: goto label_2daca4;
            case 0x2DACA8u: goto label_2daca8;
            case 0x2DACACu: goto label_2dacac;
            case 0x2DACB0u: goto label_2dacb0;
            case 0x2DACB4u: goto label_2dacb4;
            case 0x2DACB8u: goto label_2dacb8;
            case 0x2DACBCu: goto label_2dacbc;
            case 0x2DACC0u: goto label_2dacc0;
            case 0x2DACC4u: goto label_2dacc4;
            case 0x2DACC8u: goto label_2dacc8;
            case 0x2DACCCu: goto label_2daccc;
            case 0x2DACD0u: goto label_2dacd0;
            case 0x2DACD4u: goto label_2dacd4;
            case 0x2DACD8u: goto label_2dacd8;
            case 0x2DACDCu: goto label_2dacdc;
            case 0x2DACE0u: goto label_2dace0;
            case 0x2DACE4u: goto label_2dace4;
            case 0x2DACE8u: goto label_2dace8;
            case 0x2DACECu: goto label_2dacec;
            case 0x2DACF0u: goto label_2dacf0;
            case 0x2DACF4u: goto label_2dacf4;
            case 0x2DACF8u: goto label_2dacf8;
            case 0x2DACFCu: goto label_2dacfc;
            case 0x2DAD00u: goto label_2dad00;
            case 0x2DAD04u: goto label_2dad04;
            case 0x2DAD08u: goto label_2dad08;
            case 0x2DAD0Cu: goto label_2dad0c;
            case 0x2DAD10u: goto label_2dad10;
            case 0x2DAD14u: goto label_2dad14;
            case 0x2DAD18u: goto label_2dad18;
            case 0x2DAD1Cu: goto label_2dad1c;
            case 0x2DAD20u: goto label_2dad20;
            case 0x2DAD24u: goto label_2dad24;
            case 0x2DAD28u: goto label_2dad28;
            case 0x2DAD2Cu: goto label_2dad2c;
            case 0x2DAD30u: goto label_2dad30;
            case 0x2DAD34u: goto label_2dad34;
            case 0x2DAD38u: goto label_2dad38;
            case 0x2DAD3Cu: goto label_2dad3c;
            case 0x2DAD40u: goto label_2dad40;
            case 0x2DAD44u: goto label_2dad44;
            case 0x2DAD48u: goto label_2dad48;
            case 0x2DAD4Cu: goto label_2dad4c;
            case 0x2DAD50u: goto label_2dad50;
            case 0x2DAD54u: goto label_2dad54;
            case 0x2DAD58u: goto label_2dad58;
            case 0x2DAD5Cu: goto label_2dad5c;
            case 0x2DAD60u: goto label_2dad60;
            case 0x2DAD64u: goto label_2dad64;
            case 0x2DAD68u: goto label_2dad68;
            case 0x2DAD6Cu: goto label_2dad6c;
            case 0x2DAD70u: goto label_2dad70;
            case 0x2DAD74u: goto label_2dad74;
            case 0x2DAD78u: goto label_2dad78;
            case 0x2DAD7Cu: goto label_2dad7c;
            case 0x2DAD80u: goto label_2dad80;
            case 0x2DAD84u: goto label_2dad84;
            case 0x2DAD88u: goto label_2dad88;
            case 0x2DAD8Cu: goto label_2dad8c;
            case 0x2DAD90u: goto label_2dad90;
            case 0x2DAD94u: goto label_2dad94;
            case 0x2DAD98u: goto label_2dad98;
            case 0x2DAD9Cu: goto label_2dad9c;
            case 0x2DADA0u: goto label_2dada0;
            case 0x2DADA4u: goto label_2dada4;
            case 0x2DADA8u: goto label_2dada8;
            case 0x2DADACu: goto label_2dadac;
            case 0x2DADB0u: goto label_2dadb0;
            case 0x2DADB4u: goto label_2dadb4;
            case 0x2DADB8u: goto label_2dadb8;
            case 0x2DADBCu: goto label_2dadbc;
            case 0x2DADC0u: goto label_2dadc0;
            case 0x2DADC4u: goto label_2dadc4;
            case 0x2DADC8u: goto label_2dadc8;
            case 0x2DADCCu: goto label_2dadcc;
            case 0x2DADD0u: goto label_2dadd0;
            case 0x2DADD4u: goto label_2dadd4;
            case 0x2DADD8u: goto label_2dadd8;
            case 0x2DADDCu: goto label_2daddc;
            case 0x2DADE0u: goto label_2dade0;
            case 0x2DADE4u: goto label_2dade4;
            case 0x2DADE8u: goto label_2dade8;
            case 0x2DADECu: goto label_2dadec;
            case 0x2DADF0u: goto label_2dadf0;
            case 0x2DADF4u: goto label_2dadf4;
            case 0x2DADF8u: goto label_2dadf8;
            case 0x2DADFCu: goto label_2dadfc;
            case 0x2DAE00u: goto label_2dae00;
            case 0x2DAE04u: goto label_2dae04;
            case 0x2DAE08u: goto label_2dae08;
            case 0x2DAE0Cu: goto label_2dae0c;
            case 0x2DAE10u: goto label_2dae10;
            case 0x2DAE14u: goto label_2dae14;
            case 0x2DAE18u: goto label_2dae18;
            case 0x2DAE1Cu: goto label_2dae1c;
            case 0x2DAE20u: goto label_2dae20;
            case 0x2DAE24u: goto label_2dae24;
            case 0x2DAE28u: goto label_2dae28;
            case 0x2DAE2Cu: goto label_2dae2c;
            case 0x2DAE30u: goto label_2dae30;
            case 0x2DAE34u: goto label_2dae34;
            case 0x2DAE38u: goto label_2dae38;
            case 0x2DAE3Cu: goto label_2dae3c;
            case 0x2DAE40u: goto label_2dae40;
            case 0x2DAE44u: goto label_2dae44;
            case 0x2DAE48u: goto label_2dae48;
            case 0x2DAE4Cu: goto label_2dae4c;
            case 0x2DAE50u: goto label_2dae50;
            case 0x2DAE54u: goto label_2dae54;
            case 0x2DAE58u: goto label_2dae58;
            case 0x2DAE5Cu: goto label_2dae5c;
            case 0x2DAE60u: goto label_2dae60;
            case 0x2DAE64u: goto label_2dae64;
            case 0x2DAE68u: goto label_2dae68;
            case 0x2DAE6Cu: goto label_2dae6c;
            case 0x2DAE70u: goto label_2dae70;
            case 0x2DAE74u: goto label_2dae74;
            case 0x2DAE78u: goto label_2dae78;
            case 0x2DAE7Cu: goto label_2dae7c;
            case 0x2DAE80u: goto label_2dae80;
            case 0x2DAE84u: goto label_2dae84;
            case 0x2DAE88u: goto label_2dae88;
            case 0x2DAE8Cu: goto label_2dae8c;
            case 0x2DAE90u: goto label_2dae90;
            case 0x2DAE94u: goto label_2dae94;
            case 0x2DAE98u: goto label_2dae98;
            case 0x2DAE9Cu: goto label_2dae9c;
            case 0x2DAEA0u: goto label_2daea0;
            case 0x2DAEA4u: goto label_2daea4;
            case 0x2DAEA8u: goto label_2daea8;
            case 0x2DAEACu: goto label_2daeac;
            case 0x2DAEB0u: goto label_2daeb0;
            case 0x2DAEB4u: goto label_2daeb4;
            case 0x2DAEB8u: goto label_2daeb8;
            case 0x2DAEBCu: goto label_2daebc;
            case 0x2DAEC0u: goto label_2daec0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2daebc:
    ctx->pc = 0x2DAEC4u;
}
