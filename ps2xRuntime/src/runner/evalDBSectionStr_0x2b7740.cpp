#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalDBSectionStr
// Address: 0x2b7740 - 0x2b7998
void evalDBSectionStr_0x2b7740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7740u;

label_2b7740:
    // 0x2b7740: 0x80702d
    ctx->pc = 0x2b7740u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7744:
    // 0x2b7744: 0x81600
    ctx->pc = 0x2b7744u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 24));
label_2b7748:
    // 0x2b7748: 0x26603
    ctx->pc = 0x2b7748u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 24));
label_2b774c:
    // 0x2b774c: 0x3c020037
    ctx->pc = 0x2b774cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b7750:
    // 0x2b7750: 0x40182d
    ctx->pc = 0x2b7750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7754:
    // 0x2b7754: 0x8c4220ac
    ctx->pc = 0x2b7754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b7758:
    // 0x2b7758: 0x8c420000
    ctx->pc = 0x2b7758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b775c:
    // 0x2b775c: 0x80420000
    ctx->pc = 0x2b775cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7760:
    // 0x2b7760: 0x10400084
label_2b7764:
    if (ctx->pc == 0x2B7764u) {
        ctx->pc = 0x2B7764u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7768u;
        goto label_2b7768;
    }
    ctx->pc = 0x2B7760u;
    {
        const bool branch_taken_0x2b7760 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7764u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b7760) {
            ctx->pc = 0x2B7974u;
            goto label_2b7974;
        }
    }
    ctx->pc = 0x2B7768u;
label_2b7768:
    // 0x2b7768: 0x8c6220ac
    ctx->pc = 0x2b7768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
label_2b776c:
    // 0x2b776c: 0x0
    ctx->pc = 0x2b776cu;
    // NOP
label_2b7770:
    // 0x2b7770: 0x8c430000
    ctx->pc = 0x2b7770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7774:
    // 0x2b7774: 0x1a31821
    ctx->pc = 0x2b7774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_2b7778:
    // 0x2b7778: 0x1c31026
    ctx->pc = 0x2b7778u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_2b777c:
    // 0x2b777c: 0x2c4b0001
    ctx->pc = 0x2b777cu;
    SET_GPR_U32(ctx, 11, SLTU32(GPR_U32(ctx, 2), 1));
label_2b7780:
    // 0x2b7780: 0x35640002
    ctx->pc = 0x2b7780u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 11), 2));
label_2b7784:
    // 0x2b7784: 0xc31026
    ctx->pc = 0x2b7784u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2b7788:
    // 0x2b7788: 0x82580a
    ctx->pc = 0x2b7788u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 4));
label_2b778c:
    // 0x2b778c: 0x35640004
    ctx->pc = 0x2b778cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 11), 4));
label_2b7790:
    // 0x2b7790: 0xe31026
    ctx->pc = 0x2b7790u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2b7794:
    // 0x2b7794: 0x82580a
    ctx->pc = 0x2b7794u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 4));
label_2b7798:
    // 0x2b7798: 0x35620008
    ctx->pc = 0x2b7798u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 11), 8));
label_2b779c:
    // 0x2b779c: 0xa31826
    ctx->pc = 0x2b779cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2b77a0:
    // 0x2b77a0: 0x43580a
    ctx->pc = 0x2b77a0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 2));
label_2b77a4:
    // 0x2b77a4: 0x2d620010
    ctx->pc = 0x2b77a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), 16));
label_2b77a8:
    // 0x2b77a8: 0x10400063
label_2b77ac:
    if (ctx->pc == 0x2B77ACu) {
        ctx->pc = 0x2B77ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B77B0u;
        goto label_2b77b0;
    }
    ctx->pc = 0x2B77A8u;
    {
        const bool branch_taken_0x2b77a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B77ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b77a8) {
            ctx->pc = 0x2B7938u;
            goto label_2b7938;
        }
    }
    ctx->pc = 0x2B77B0u;
label_2b77b0:
    // 0x2b77b0: 0x24425170
    ctx->pc = 0x2b77b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20848));
label_2b77b4:
    // 0x2b77b4: 0xb1880
    ctx->pc = 0x2b77b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 2));
label_2b77b8:
    // 0x2b77b8: 0x621821
    ctx->pc = 0x2b77b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b77bc:
    // 0x2b77bc: 0x8c620000
    ctx->pc = 0x2b77bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b77c0:
    // 0x2b77c0: 0x400008
label_2b77c4:
    if (ctx->pc == 0x2B77C4u) {
        ctx->pc = 0x2B77C8u;
        goto label_2b77c8;
    }
    ctx->pc = 0x2B77C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7740u: goto label_2b7740;
            case 0x2B7744u: goto label_2b7744;
            case 0x2B7748u: goto label_2b7748;
            case 0x2B774Cu: goto label_2b774c;
            case 0x2B7750u: goto label_2b7750;
            case 0x2B7754u: goto label_2b7754;
            case 0x2B7758u: goto label_2b7758;
            case 0x2B775Cu: goto label_2b775c;
            case 0x2B7760u: goto label_2b7760;
            case 0x2B7764u: goto label_2b7764;
            case 0x2B7768u: goto label_2b7768;
            case 0x2B776Cu: goto label_2b776c;
            case 0x2B7770u: goto label_2b7770;
            case 0x2B7774u: goto label_2b7774;
            case 0x2B7778u: goto label_2b7778;
            case 0x2B777Cu: goto label_2b777c;
            case 0x2B7780u: goto label_2b7780;
            case 0x2B7784u: goto label_2b7784;
            case 0x2B7788u: goto label_2b7788;
            case 0x2B778Cu: goto label_2b778c;
            case 0x2B7790u: goto label_2b7790;
            case 0x2B7794u: goto label_2b7794;
            case 0x2B7798u: goto label_2b7798;
            case 0x2B779Cu: goto label_2b779c;
            case 0x2B77A0u: goto label_2b77a0;
            case 0x2B77A4u: goto label_2b77a4;
            case 0x2B77A8u: goto label_2b77a8;
            case 0x2B77ACu: goto label_2b77ac;
            case 0x2B77B0u: goto label_2b77b0;
            case 0x2B77B4u: goto label_2b77b4;
            case 0x2B77B8u: goto label_2b77b8;
            case 0x2B77BCu: goto label_2b77bc;
            case 0x2B77C0u: goto label_2b77c0;
            case 0x2B77C4u: goto label_2b77c4;
            case 0x2B77C8u: goto label_2b77c8;
            case 0x2B77CCu: goto label_2b77cc;
            case 0x2B77D0u: goto label_2b77d0;
            case 0x2B77D4u: goto label_2b77d4;
            case 0x2B77D8u: goto label_2b77d8;
            case 0x2B77DCu: goto label_2b77dc;
            case 0x2B77E0u: goto label_2b77e0;
            case 0x2B77E4u: goto label_2b77e4;
            case 0x2B77E8u: goto label_2b77e8;
            case 0x2B77ECu: goto label_2b77ec;
            case 0x2B77F0u: goto label_2b77f0;
            case 0x2B77F4u: goto label_2b77f4;
            case 0x2B77F8u: goto label_2b77f8;
            case 0x2B77FCu: goto label_2b77fc;
            case 0x2B7800u: goto label_2b7800;
            case 0x2B7804u: goto label_2b7804;
            case 0x2B7808u: goto label_2b7808;
            case 0x2B780Cu: goto label_2b780c;
            case 0x2B7810u: goto label_2b7810;
            case 0x2B7814u: goto label_2b7814;
            case 0x2B7818u: goto label_2b7818;
            case 0x2B781Cu: goto label_2b781c;
            case 0x2B7820u: goto label_2b7820;
            case 0x2B7824u: goto label_2b7824;
            case 0x2B7828u: goto label_2b7828;
            case 0x2B782Cu: goto label_2b782c;
            case 0x2B7830u: goto label_2b7830;
            case 0x2B7834u: goto label_2b7834;
            case 0x2B7838u: goto label_2b7838;
            case 0x2B783Cu: goto label_2b783c;
            case 0x2B7840u: goto label_2b7840;
            case 0x2B7844u: goto label_2b7844;
            case 0x2B7848u: goto label_2b7848;
            case 0x2B784Cu: goto label_2b784c;
            case 0x2B7850u: goto label_2b7850;
            case 0x2B7854u: goto label_2b7854;
            case 0x2B7858u: goto label_2b7858;
            case 0x2B785Cu: goto label_2b785c;
            case 0x2B7860u: goto label_2b7860;
            case 0x2B7864u: goto label_2b7864;
            case 0x2B7868u: goto label_2b7868;
            case 0x2B786Cu: goto label_2b786c;
            case 0x2B7870u: goto label_2b7870;
            case 0x2B7874u: goto label_2b7874;
            case 0x2B7878u: goto label_2b7878;
            case 0x2B787Cu: goto label_2b787c;
            case 0x2B7880u: goto label_2b7880;
            case 0x2B7884u: goto label_2b7884;
            case 0x2B7888u: goto label_2b7888;
            case 0x2B788Cu: goto label_2b788c;
            case 0x2B7890u: goto label_2b7890;
            case 0x2B7894u: goto label_2b7894;
            case 0x2B7898u: goto label_2b7898;
            case 0x2B789Cu: goto label_2b789c;
            case 0x2B78A0u: goto label_2b78a0;
            case 0x2B78A4u: goto label_2b78a4;
            case 0x2B78A8u: goto label_2b78a8;
            case 0x2B78ACu: goto label_2b78ac;
            case 0x2B78B0u: goto label_2b78b0;
            case 0x2B78B4u: goto label_2b78b4;
            case 0x2B78B8u: goto label_2b78b8;
            case 0x2B78BCu: goto label_2b78bc;
            case 0x2B78C0u: goto label_2b78c0;
            case 0x2B78C4u: goto label_2b78c4;
            case 0x2B78C8u: goto label_2b78c8;
            case 0x2B78CCu: goto label_2b78cc;
            case 0x2B78D0u: goto label_2b78d0;
            case 0x2B78D4u: goto label_2b78d4;
            case 0x2B78D8u: goto label_2b78d8;
            case 0x2B78DCu: goto label_2b78dc;
            case 0x2B78E0u: goto label_2b78e0;
            case 0x2B78E4u: goto label_2b78e4;
            case 0x2B78E8u: goto label_2b78e8;
            case 0x2B78ECu: goto label_2b78ec;
            case 0x2B78F0u: goto label_2b78f0;
            case 0x2B78F4u: goto label_2b78f4;
            case 0x2B78F8u: goto label_2b78f8;
            case 0x2B78FCu: goto label_2b78fc;
            case 0x2B7900u: goto label_2b7900;
            case 0x2B7904u: goto label_2b7904;
            case 0x2B7908u: goto label_2b7908;
            case 0x2B790Cu: goto label_2b790c;
            case 0x2B7910u: goto label_2b7910;
            case 0x2B7914u: goto label_2b7914;
            case 0x2B7918u: goto label_2b7918;
            case 0x2B791Cu: goto label_2b791c;
            case 0x2B7920u: goto label_2b7920;
            case 0x2B7924u: goto label_2b7924;
            case 0x2B7928u: goto label_2b7928;
            case 0x2B792Cu: goto label_2b792c;
            case 0x2B7930u: goto label_2b7930;
            case 0x2B7934u: goto label_2b7934;
            case 0x2B7938u: goto label_2b7938;
            case 0x2B793Cu: goto label_2b793c;
            case 0x2B7940u: goto label_2b7940;
            case 0x2B7944u: goto label_2b7944;
            case 0x2B7948u: goto label_2b7948;
            case 0x2B794Cu: goto label_2b794c;
            case 0x2B7950u: goto label_2b7950;
            case 0x2B7954u: goto label_2b7954;
            case 0x2B7958u: goto label_2b7958;
            case 0x2B795Cu: goto label_2b795c;
            case 0x2B7960u: goto label_2b7960;
            case 0x2B7964u: goto label_2b7964;
            case 0x2B7968u: goto label_2b7968;
            case 0x2B796Cu: goto label_2b796c;
            case 0x2B7970u: goto label_2b7970;
            case 0x2B7974u: goto label_2b7974;
            case 0x2B7978u: goto label_2b7978;
            case 0x2B797Cu: goto label_2b797c;
            case 0x2B7980u: goto label_2b7980;
            case 0x2B7984u: goto label_2b7984;
            case 0x2B7988u: goto label_2b7988;
            case 0x2B798Cu: goto label_2b798c;
            case 0x2B7990u: goto label_2b7990;
            case 0x2B7994u: goto label_2b7994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B77C8u;
label_2b77c8:
    // 0x2b77c8: 0x3c02003c
    ctx->pc = 0x2b77c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b77cc:
    // 0x2b77cc: 0x24426440
    ctx->pc = 0x2b77ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b77d0:
    // 0x2b77d0: 0x1a21021
    ctx->pc = 0x2b77d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b77d4:
    // 0x2b77d4: 0x10000058
label_2b77d8:
    if (ctx->pc == 0x2B77D8u) {
        ctx->pc = 0x2B77D8u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->pc = 0x2B77DCu;
        goto label_2b77dc;
    }
    ctx->pc = 0x2B77D4u;
    {
        const bool branch_taken_0x2b77d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B77D8u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        if (branch_taken_0x2b77d4) {
            ctx->pc = 0x2B7938u;
            goto label_2b7938;
        }
    }
    ctx->pc = 0x2B77DCu;
label_2b77dc:
    // 0x2b77dc: 0x3c02003c
    ctx->pc = 0x2b77dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b77e0:
    // 0x2b77e0: 0x24426440
    ctx->pc = 0x2b77e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b77e4:
    // 0x2b77e4: 0x1a21021
    ctx->pc = 0x2b77e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b77e8:
    // 0x2b77e8: 0x24030053
    ctx->pc = 0x2b77e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 83));
label_2b77ec:
    // 0x2b77ec: 0xa0430000
    ctx->pc = 0x2b77ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b77f0:
    // 0x2b77f0: 0x10000050
label_2b77f4:
    if (ctx->pc == 0x2B77F4u) {
        ctx->pc = 0x2B77F4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        ctx->pc = 0x2B77F8u;
        goto label_2b77f8;
    }
    ctx->pc = 0x2B77F0u;
    {
        const bool branch_taken_0x2b77f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B77F4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        if (branch_taken_0x2b77f0) {
            ctx->pc = 0x2B7934u;
            goto label_2b7934;
        }
    }
    ctx->pc = 0x2B77F8u;
label_2b77f8:
    // 0x2b77f8: 0x3c02003c
    ctx->pc = 0x2b77f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b77fc:
    // 0x2b77fc: 0x24426440
    ctx->pc = 0x2b77fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7800:
    // 0x2b7800: 0x1a21021
    ctx->pc = 0x2b7800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7804:
    // 0x2b7804: 0x2403004c
    ctx->pc = 0x2b7804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 76));
label_2b7808:
    // 0x2b7808: 0x1000004b
label_2b780c:
    if (ctx->pc == 0x2B780Cu) {
        ctx->pc = 0x2B780Cu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2B7810u;
        goto label_2b7810;
    }
    ctx->pc = 0x2B7808u;
    {
        const bool branch_taken_0x2b7808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B780Cu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2b7808) {
            ctx->pc = 0x2B7938u;
            goto label_2b7938;
        }
    }
    ctx->pc = 0x2B7810u;
label_2b7810:
    // 0x2b7810: 0x3c02003c
    ctx->pc = 0x2b7810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7814:
    // 0x2b7814: 0x24426440
    ctx->pc = 0x2b7814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7818:
    // 0x2b7818: 0x1a21021
    ctx->pc = 0x2b7818u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b781c:
    // 0x2b781c: 0x24030052
    ctx->pc = 0x2b781cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 82));
label_2b7820:
    // 0x2b7820: 0x10000045
label_2b7824:
    if (ctx->pc == 0x2B7824u) {
        ctx->pc = 0x2B7824u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2B7828u;
        goto label_2b7828;
    }
    ctx->pc = 0x2B7820u;
    {
        const bool branch_taken_0x2b7820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7824u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2b7820) {
            ctx->pc = 0x2B7938u;
            goto label_2b7938;
        }
    }
    ctx->pc = 0x2B7828u;
label_2b7828:
    // 0x2b7828: 0x3c02003c
    ctx->pc = 0x2b7828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b782c:
    // 0x2b782c: 0x24426440
    ctx->pc = 0x2b782cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7830:
    // 0x2b7830: 0x1a21021
    ctx->pc = 0x2b7830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7834:
    // 0x2b7834: 0x1000003d
label_2b7838:
    if (ctx->pc == 0x2B7838u) {
        ctx->pc = 0x2B7838u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
        ctx->pc = 0x2B783Cu;
        goto label_2b783c;
    }
    ctx->pc = 0x2B7834u;
    {
        const bool branch_taken_0x2b7834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7838u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
        if (branch_taken_0x2b7834) {
            ctx->pc = 0x2B792Cu;
            goto label_2b792c;
        }
    }
    ctx->pc = 0x2B783Cu;
label_2b783c:
    // 0x2b783c: 0x3c02003c
    ctx->pc = 0x2b783cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7840:
    // 0x2b7840: 0x24426440
    ctx->pc = 0x2b7840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7844:
    // 0x2b7844: 0x1a21021
    ctx->pc = 0x2b7844u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7848:
    // 0x2b7848: 0x2403005b
    ctx->pc = 0x2b7848u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 91));
label_2b784c:
    // 0x2b784c: 0xa0430000
    ctx->pc = 0x2b784cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b7850:
    // 0x2b7850: 0x10000038
label_2b7854:
    if (ctx->pc == 0x2B7854u) {
        ctx->pc = 0x2B7854u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        ctx->pc = 0x2B7858u;
        goto label_2b7858;
    }
    ctx->pc = 0x2B7850u;
    {
        const bool branch_taken_0x2b7850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7854u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        if (branch_taken_0x2b7850) {
            ctx->pc = 0x2B7934u;
            goto label_2b7934;
        }
    }
    ctx->pc = 0x2B7858u;
label_2b7858:
    // 0x2b7858: 0x3c02003c
    ctx->pc = 0x2b7858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b785c:
    // 0x2b785c: 0x24426440
    ctx->pc = 0x2b785cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7860:
    // 0x2b7860: 0x1a21021
    ctx->pc = 0x2b7860u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7864:
    // 0x2b7864: 0x2403007b
    ctx->pc = 0x2b7864u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 123));
label_2b7868:
    // 0x2b7868: 0xa0430000
    ctx->pc = 0x2b7868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b786c:
    // 0x2b786c: 0x10000031
label_2b7870:
    if (ctx->pc == 0x2B7870u) {
        ctx->pc = 0x2B7870u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        ctx->pc = 0x2B7874u;
        goto label_2b7874;
    }
    ctx->pc = 0x2B786Cu;
    {
        const bool branch_taken_0x2b786c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7870u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        if (branch_taken_0x2b786c) {
            ctx->pc = 0x2B7934u;
            goto label_2b7934;
        }
    }
    ctx->pc = 0x2B7874u;
label_2b7874:
    // 0x2b7874: 0x3c02003c
    ctx->pc = 0x2b7874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7878:
    // 0x2b7878: 0x24426440
    ctx->pc = 0x2b7878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b787c:
    // 0x2b787c: 0x1a21021
    ctx->pc = 0x2b787cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7880:
    // 0x2b7880: 0x24030042
    ctx->pc = 0x2b7880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 66));
label_2b7884:
    // 0x2b7884: 0x1000002c
label_2b7888:
    if (ctx->pc == 0x2B7888u) {
        ctx->pc = 0x2B7888u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2B788Cu;
        goto label_2b788c;
    }
    ctx->pc = 0x2B7884u;
    {
        const bool branch_taken_0x2b7884 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7888u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2b7884) {
            ctx->pc = 0x2B7938u;
            goto label_2b7938;
        }
    }
    ctx->pc = 0x2B788Cu;
label_2b788c:
    // 0x2b788c: 0x3c02003c
    ctx->pc = 0x2b788cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7890:
    // 0x2b7890: 0x24426440
    ctx->pc = 0x2b7890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7894:
    // 0x2b7894: 0x1a21021
    ctx->pc = 0x2b7894u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7898:
    // 0x2b7898: 0x10000024
label_2b789c:
    if (ctx->pc == 0x2B789Cu) {
        ctx->pc = 0x2B789Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 94));
        ctx->pc = 0x2B78A0u;
        goto label_2b78a0;
    }
    ctx->pc = 0x2B7898u;
    {
        const bool branch_taken_0x2b7898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B789Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 94));
        if (branch_taken_0x2b7898) {
            ctx->pc = 0x2B792Cu;
            goto label_2b792c;
        }
    }
    ctx->pc = 0x2B78A0u;
label_2b78a0:
    // 0x2b78a0: 0x3c02003c
    ctx->pc = 0x2b78a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b78a4:
    // 0x2b78a4: 0x24426440
    ctx->pc = 0x2b78a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b78a8:
    // 0x2b78a8: 0x1a21021
    ctx->pc = 0x2b78a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b78ac:
    // 0x2b78ac: 0x1000001f
label_2b78b0:
    if (ctx->pc == 0x2B78B0u) {
        ctx->pc = 0x2B78B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 125));
        ctx->pc = 0x2B78B4u;
        goto label_2b78b4;
    }
    ctx->pc = 0x2B78ACu;
    {
        const bool branch_taken_0x2b78ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B78B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 125));
        if (branch_taken_0x2b78ac) {
            ctx->pc = 0x2B792Cu;
            goto label_2b792c;
        }
    }
    ctx->pc = 0x2B78B4u;
label_2b78b4:
    // 0x2b78b4: 0x3c02003c
    ctx->pc = 0x2b78b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b78b8:
    // 0x2b78b8: 0x24426440
    ctx->pc = 0x2b78b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b78bc:
    // 0x2b78bc: 0x1a21021
    ctx->pc = 0x2b78bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b78c0:
    // 0x2b78c0: 0x1000001a
label_2b78c4:
    if (ctx->pc == 0x2B78C4u) {
        ctx->pc = 0x2B78C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 93));
        ctx->pc = 0x2B78C8u;
        goto label_2b78c8;
    }
    ctx->pc = 0x2B78C0u;
    {
        const bool branch_taken_0x2b78c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B78C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x2b78c0) {
            ctx->pc = 0x2B792Cu;
            goto label_2b792c;
        }
    }
    ctx->pc = 0x2B78C8u;
label_2b78c8:
    // 0x2b78c8: 0x3c02003c
    ctx->pc = 0x2b78c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b78cc:
    // 0x2b78cc: 0x24426440
    ctx->pc = 0x2b78ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b78d0:
    // 0x2b78d0: 0x1a21021
    ctx->pc = 0x2b78d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b78d4:
    // 0x2b78d4: 0xa04c0000
    ctx->pc = 0x2b78d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
label_2b78d8:
    // 0x2b78d8: 0x10000016
label_2b78dc:
    if (ctx->pc == 0x2B78DCu) {
        ctx->pc = 0x2B78DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        ctx->pc = 0x2B78E0u;
        goto label_2b78e0;
    }
    ctx->pc = 0x2B78D8u;
    {
        const bool branch_taken_0x2b78d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B78DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 24));
        if (branch_taken_0x2b78d8) {
            ctx->pc = 0x2B7934u;
            goto label_2b7934;
        }
    }
    ctx->pc = 0x2B78E0u;
label_2b78e0:
    // 0x2b78e0: 0x3c02003c
    ctx->pc = 0x2b78e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b78e4:
    // 0x2b78e4: 0x24426440
    ctx->pc = 0x2b78e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b78e8:
    // 0x2b78e8: 0x1a21021
    ctx->pc = 0x2b78e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b78ec:
    // 0x2b78ec: 0x10000010
label_2b78f0:
    if (ctx->pc == 0x2B78F0u) {
        ctx->pc = 0x2B78F0u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->pc = 0x2B78F4u;
        goto label_2b78f4;
    }
    ctx->pc = 0x2B78ECu;
    {
        const bool branch_taken_0x2b78ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B78F0u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        if (branch_taken_0x2b78ec) {
            ctx->pc = 0x2B7930u;
            goto label_2b7930;
        }
    }
    ctx->pc = 0x2B78F4u;
label_2b78f4:
    // 0x2b78f4: 0x3c02003c
    ctx->pc = 0x2b78f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b78f8:
    // 0x2b78f8: 0x24426440
    ctx->pc = 0x2b78f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b78fc:
    // 0x2b78fc: 0x1a21021
    ctx->pc = 0x2b78fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7900:
    // 0x2b7900: 0x1000000b
label_2b7904:
    if (ctx->pc == 0x2B7904u) {
        ctx->pc = 0x2B7904u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->pc = 0x2B7908u;
        goto label_2b7908;
    }
    ctx->pc = 0x2B7900u;
    {
        const bool branch_taken_0x2b7900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7904u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        if (branch_taken_0x2b7900) {
            ctx->pc = 0x2B7930u;
            goto label_2b7930;
        }
    }
    ctx->pc = 0x2B7908u;
label_2b7908:
    // 0x2b7908: 0x3c02003c
    ctx->pc = 0x2b7908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b790c:
    // 0x2b790c: 0x24426440
    ctx->pc = 0x2b790cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7910:
    // 0x2b7910: 0x1a21021
    ctx->pc = 0x2b7910u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7914:
    // 0x2b7914: 0x10000006
label_2b7918:
    if (ctx->pc == 0x2B7918u) {
        ctx->pc = 0x2B7918u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->pc = 0x2B791Cu;
        goto label_2b791c;
    }
    ctx->pc = 0x2B7914u;
    {
        const bool branch_taken_0x2b7914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7918u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
        if (branch_taken_0x2b7914) {
            ctx->pc = 0x2B7930u;
            goto label_2b7930;
        }
    }
    ctx->pc = 0x2B791Cu;
label_2b791c:
    // 0x2b791c: 0x3c02003c
    ctx->pc = 0x2b791cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7920:
    // 0x2b7920: 0x24426440
    ctx->pc = 0x2b7920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7924:
    // 0x2b7924: 0x1a21021
    ctx->pc = 0x2b7924u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7928:
    // 0x2b7928: 0x24030041
    ctx->pc = 0x2b7928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 65));
label_2b792c:
    // 0x2b792c: 0xa0430000
    ctx->pc = 0x2b792cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b7930:
    // 0x2b7930: 0x81600
    ctx->pc = 0x2b7930u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 24));
label_2b7934:
    // 0x2b7934: 0x26603
    ctx->pc = 0x2b7934u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 24));
label_2b7938:
    // 0x2b7938: 0x3c02003c
    ctx->pc = 0x2b7938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b793c:
    // 0x2b793c: 0x24436440
    ctx->pc = 0x2b793cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 25664));
label_2b7940:
    // 0x2b7940: 0x1a31021
    ctx->pc = 0x2b7940u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_2b7944:
    // 0x2b7944: 0x80420000
    ctx->pc = 0x2b7944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7948:
    // 0x2b7948: 0x10480002
label_2b794c:
    if (ctx->pc == 0x2B794Cu) {
        ctx->pc = 0x2B794Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2B7950u;
        goto label_2b7950;
    }
    ctx->pc = 0x2B7948u;
    {
        const bool branch_taken_0x2b7948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        ctx->pc = 0x2B794Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2b7948) {
            ctx->pc = 0x2B7954u;
            goto label_2b7954;
        }
    }
    ctx->pc = 0x2B7950u;
label_2b7950:
    // 0x2b7950: 0x1a27821
    ctx->pc = 0x2b7950u;
    SET_GPR_U32(ctx, 15, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7954:
    // 0x2b7954: 0x25ad0001
    ctx->pc = 0x2b7954u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
label_2b7958:
    // 0x2b7958: 0x3c030037
    ctx->pc = 0x2b7958u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2b795c:
    // 0x2b795c: 0x8c6220ac
    ctx->pc = 0x2b795cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
label_2b7960:
    // 0x2b7960: 0x8c420000
    ctx->pc = 0x2b7960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7964:
    // 0x2b7964: 0x4d1021
    ctx->pc = 0x2b7964u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_2b7968:
    // 0x2b7968: 0x80420000
    ctx->pc = 0x2b7968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b796c:
    // 0x2b796c: 0x1440ff80
label_2b7970:
    if (ctx->pc == 0x2B7970u) {
        ctx->pc = 0x2B7970u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
        ctx->pc = 0x2B7974u;
        goto label_2b7974;
    }
    ctx->pc = 0x2B796Cu;
    {
        const bool branch_taken_0x2b796c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7970u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
        if (branch_taken_0x2b796c) {
            ctx->pc = 0x2B7770u;
            goto label_2b7770;
        }
    }
    ctx->pc = 0x2B7974u;
label_2b7974:
    // 0x2b7974: 0x3c02003c
    ctx->pc = 0x2b7974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7978:
    // 0x2b7978: 0x24426440
    ctx->pc = 0x2b7978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
label_2b797c:
    // 0x2b797c: 0x1a21021
    ctx->pc = 0x2b797cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2b7980:
    // 0x2b7980: 0x15400002
label_2b7984:
    if (ctx->pc == 0x2B7984u) {
        ctx->pc = 0x2B7984u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B7988u;
        goto label_2b7988;
    }
    ctx->pc = 0x2B7980u;
    {
        const bool branch_taken_0x2b7980 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7984u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2b7980) {
            ctx->pc = 0x2B798Cu;
            goto label_2b798c;
        }
    }
    ctx->pc = 0x2B7988u;
label_2b7988:
    // 0x2b7988: 0xa1e00000
    ctx->pc = 0x2b7988u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b798c:
    // 0x2b798c: 0x3c02003c
    ctx->pc = 0x2b798cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b7990:
    // 0x2b7990: 0x3e00008
label_2b7994:
    if (ctx->pc == 0x2B7994u) {
        ctx->pc = 0x2B7994u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
        ctx->pc = 0x2B7998u;
        goto label_fallthrough_0x2b7990;
    }
    ctx->pc = 0x2B7990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7994u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25664));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7740u: goto label_2b7740;
            case 0x2B7744u: goto label_2b7744;
            case 0x2B7748u: goto label_2b7748;
            case 0x2B774Cu: goto label_2b774c;
            case 0x2B7750u: goto label_2b7750;
            case 0x2B7754u: goto label_2b7754;
            case 0x2B7758u: goto label_2b7758;
            case 0x2B775Cu: goto label_2b775c;
            case 0x2B7760u: goto label_2b7760;
            case 0x2B7764u: goto label_2b7764;
            case 0x2B7768u: goto label_2b7768;
            case 0x2B776Cu: goto label_2b776c;
            case 0x2B7770u: goto label_2b7770;
            case 0x2B7774u: goto label_2b7774;
            case 0x2B7778u: goto label_2b7778;
            case 0x2B777Cu: goto label_2b777c;
            case 0x2B7780u: goto label_2b7780;
            case 0x2B7784u: goto label_2b7784;
            case 0x2B7788u: goto label_2b7788;
            case 0x2B778Cu: goto label_2b778c;
            case 0x2B7790u: goto label_2b7790;
            case 0x2B7794u: goto label_2b7794;
            case 0x2B7798u: goto label_2b7798;
            case 0x2B779Cu: goto label_2b779c;
            case 0x2B77A0u: goto label_2b77a0;
            case 0x2B77A4u: goto label_2b77a4;
            case 0x2B77A8u: goto label_2b77a8;
            case 0x2B77ACu: goto label_2b77ac;
            case 0x2B77B0u: goto label_2b77b0;
            case 0x2B77B4u: goto label_2b77b4;
            case 0x2B77B8u: goto label_2b77b8;
            case 0x2B77BCu: goto label_2b77bc;
            case 0x2B77C0u: goto label_2b77c0;
            case 0x2B77C4u: goto label_2b77c4;
            case 0x2B77C8u: goto label_2b77c8;
            case 0x2B77CCu: goto label_2b77cc;
            case 0x2B77D0u: goto label_2b77d0;
            case 0x2B77D4u: goto label_2b77d4;
            case 0x2B77D8u: goto label_2b77d8;
            case 0x2B77DCu: goto label_2b77dc;
            case 0x2B77E0u: goto label_2b77e0;
            case 0x2B77E4u: goto label_2b77e4;
            case 0x2B77E8u: goto label_2b77e8;
            case 0x2B77ECu: goto label_2b77ec;
            case 0x2B77F0u: goto label_2b77f0;
            case 0x2B77F4u: goto label_2b77f4;
            case 0x2B77F8u: goto label_2b77f8;
            case 0x2B77FCu: goto label_2b77fc;
            case 0x2B7800u: goto label_2b7800;
            case 0x2B7804u: goto label_2b7804;
            case 0x2B7808u: goto label_2b7808;
            case 0x2B780Cu: goto label_2b780c;
            case 0x2B7810u: goto label_2b7810;
            case 0x2B7814u: goto label_2b7814;
            case 0x2B7818u: goto label_2b7818;
            case 0x2B781Cu: goto label_2b781c;
            case 0x2B7820u: goto label_2b7820;
            case 0x2B7824u: goto label_2b7824;
            case 0x2B7828u: goto label_2b7828;
            case 0x2B782Cu: goto label_2b782c;
            case 0x2B7830u: goto label_2b7830;
            case 0x2B7834u: goto label_2b7834;
            case 0x2B7838u: goto label_2b7838;
            case 0x2B783Cu: goto label_2b783c;
            case 0x2B7840u: goto label_2b7840;
            case 0x2B7844u: goto label_2b7844;
            case 0x2B7848u: goto label_2b7848;
            case 0x2B784Cu: goto label_2b784c;
            case 0x2B7850u: goto label_2b7850;
            case 0x2B7854u: goto label_2b7854;
            case 0x2B7858u: goto label_2b7858;
            case 0x2B785Cu: goto label_2b785c;
            case 0x2B7860u: goto label_2b7860;
            case 0x2B7864u: goto label_2b7864;
            case 0x2B7868u: goto label_2b7868;
            case 0x2B786Cu: goto label_2b786c;
            case 0x2B7870u: goto label_2b7870;
            case 0x2B7874u: goto label_2b7874;
            case 0x2B7878u: goto label_2b7878;
            case 0x2B787Cu: goto label_2b787c;
            case 0x2B7880u: goto label_2b7880;
            case 0x2B7884u: goto label_2b7884;
            case 0x2B7888u: goto label_2b7888;
            case 0x2B788Cu: goto label_2b788c;
            case 0x2B7890u: goto label_2b7890;
            case 0x2B7894u: goto label_2b7894;
            case 0x2B7898u: goto label_2b7898;
            case 0x2B789Cu: goto label_2b789c;
            case 0x2B78A0u: goto label_2b78a0;
            case 0x2B78A4u: goto label_2b78a4;
            case 0x2B78A8u: goto label_2b78a8;
            case 0x2B78ACu: goto label_2b78ac;
            case 0x2B78B0u: goto label_2b78b0;
            case 0x2B78B4u: goto label_2b78b4;
            case 0x2B78B8u: goto label_2b78b8;
            case 0x2B78BCu: goto label_2b78bc;
            case 0x2B78C0u: goto label_2b78c0;
            case 0x2B78C4u: goto label_2b78c4;
            case 0x2B78C8u: goto label_2b78c8;
            case 0x2B78CCu: goto label_2b78cc;
            case 0x2B78D0u: goto label_2b78d0;
            case 0x2B78D4u: goto label_2b78d4;
            case 0x2B78D8u: goto label_2b78d8;
            case 0x2B78DCu: goto label_2b78dc;
            case 0x2B78E0u: goto label_2b78e0;
            case 0x2B78E4u: goto label_2b78e4;
            case 0x2B78E8u: goto label_2b78e8;
            case 0x2B78ECu: goto label_2b78ec;
            case 0x2B78F0u: goto label_2b78f0;
            case 0x2B78F4u: goto label_2b78f4;
            case 0x2B78F8u: goto label_2b78f8;
            case 0x2B78FCu: goto label_2b78fc;
            case 0x2B7900u: goto label_2b7900;
            case 0x2B7904u: goto label_2b7904;
            case 0x2B7908u: goto label_2b7908;
            case 0x2B790Cu: goto label_2b790c;
            case 0x2B7910u: goto label_2b7910;
            case 0x2B7914u: goto label_2b7914;
            case 0x2B7918u: goto label_2b7918;
            case 0x2B791Cu: goto label_2b791c;
            case 0x2B7920u: goto label_2b7920;
            case 0x2B7924u: goto label_2b7924;
            case 0x2B7928u: goto label_2b7928;
            case 0x2B792Cu: goto label_2b792c;
            case 0x2B7930u: goto label_2b7930;
            case 0x2B7934u: goto label_2b7934;
            case 0x2B7938u: goto label_2b7938;
            case 0x2B793Cu: goto label_2b793c;
            case 0x2B7940u: goto label_2b7940;
            case 0x2B7944u: goto label_2b7944;
            case 0x2B7948u: goto label_2b7948;
            case 0x2B794Cu: goto label_2b794c;
            case 0x2B7950u: goto label_2b7950;
            case 0x2B7954u: goto label_2b7954;
            case 0x2B7958u: goto label_2b7958;
            case 0x2B795Cu: goto label_2b795c;
            case 0x2B7960u: goto label_2b7960;
            case 0x2B7964u: goto label_2b7964;
            case 0x2B7968u: goto label_2b7968;
            case 0x2B796Cu: goto label_2b796c;
            case 0x2B7970u: goto label_2b7970;
            case 0x2B7974u: goto label_2b7974;
            case 0x2B7978u: goto label_2b7978;
            case 0x2B797Cu: goto label_2b797c;
            case 0x2B7980u: goto label_2b7980;
            case 0x2B7984u: goto label_2b7984;
            case 0x2B7988u: goto label_2b7988;
            case 0x2B798Cu: goto label_2b798c;
            case 0x2B7990u: goto label_2b7990;
            case 0x2B7994u: goto label_2b7994;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b7990:
    ctx->pc = 0x2B7998u;
}
